/* IELR's inadequacy annotation list.

   Copyright (C) 2009-2015 Free Software Foundation, Inc.

   This file is part of Bison, the GNU Compiler Compiler.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>
#include "system.h"

#include "AnnotationList.h"
#include "lalr.h"
#include "ielr.h"

/**
 * \pre
 *   - <tt>annotations_obstackp != NULL</tt>.
 * \post
 *   - \c result is a new \c AnnotationList with one node whose:
 *     - \c inadequacyNode member is \c NULL.
 *     - \c contributions member is allocated with \c contribution_count
 *       uninitialized elements.
 *   - All memory was allocated on \c annotations_obstackp.
 */
static AnnotationList*
AnnotationList__alloc_on_obstack (ContributionIndex contribution_count,
                                  struct obstack *annotations_obstackp)
{
  AnnotationList *result;
  size_t contributions_size =
    contribution_count * sizeof result->contributions[0];
  result = obstack_alloc (annotations_obstackp,
                          offsetof (AnnotationList, contributions)
                          + contributions_size);
  result->next = NULL;
  result->inadequacyNode = NULL;
  return result;
}

/**
 * \pre
 *   - <tt>self != NULL</tt>.
 *   - <tt>0 <= ci < self->inadequacyNode->contributionCount</tt>.
 * \post
 *   - \c result = true iff contribution \c ci in \c self represents an
 *     "always" contribution.
 */
static bool
AnnotationList__isContributionAlways (AnnotationList const *self,
                                      ContributionIndex ci)
{
  aver (0 <= ci && ci < self->inadequacyNode->contributionCount);
  return self->contributions[ci] == NULL;
}

/**
 * \pre
 *   - \c self is a single node.
 *   - \c self annotates the same state as every other node in \c list, and
 *     that state has \c nitems kernel items.
 * \post
 *   - If the list \c list already contains an identical annotation to \c self,
 *     \c self was discarded, \c result is false, and the caller is responsible
 *     for the memory of \c self.
 *   - Otherwise, \c list now contains the node \c self, \c result is true, and
 *     \c list assumes responsibility for the memory of \c self.
 *   - The sort in \c list is:
 *     - Sort in reverse order on the unique ID of the associated
 *       inadequacy node.  Because these IDs are assigned in ascending
 *       order, this should mean that the insertion position within an
 *       annotation list is usually near the beginning with other
 *       annotations associated with the same inadequacy.
 *     - Next, sort on the first contribution that is different as follows:
 *       - Sort an always-contribution before a never-contribution before a
 *         potential-contribution.
 *       - Two always-contributions are identical.
 *       - Two never-contributions are identical.
 *       - For two potential-contributions, sort on the contributions' kernel
 *         item bitsets interpreted as binary numbers.
 *  - The sorting has a few effects:
 *    - It accelerates elimination of identical annotations during insertion.
 *    - It determines how the output of \c AnnotationList__debug is sorted.
 *    - Other than that, it's probably not important.
 */
static bool
AnnotationList__insertInto (AnnotationList *self, AnnotationList **list,
                            size_t nitems)
{
  AnnotationList **node;
  for (node = list; *node; node = &(*node)->next)
    {
      int cmp = 0;
      ContributionIndex ci;
      if (self->inadequacyNode->id < (*node)->inadequacyNode->id)
        cmp = 1;
      else if ((*node)->inadequacyNode->id < self->inadequacyNode->id)
        cmp = -1;
      else
        for (ci = 0;
             cmp == 0 && ci < self->inadequacyNode->contributionCount;
             ++ci)
          {
            if (AnnotationList__isContributionAlways (self, ci))
              {
                if (!AnnotationList__isContributionAlways (*node, ci))
                  cmp = -1;
              }
            else if (AnnotationList__isContributionAlways (*node, ci))
              cmp = 1;
            else
              {
                size_t item;
                for (item = 0; cmp == 0 && item < nitems; ++item)
                  {
                    if (!Sbitset__test (self->contributions[ci], item))
                      {
                        if (Sbitset__test ((*node)->contributions[ci], item))
                          cmp = -1;
                      }
                    else if (!Sbitset__test ((*node)->contributions[ci], item))
                      cmp = 1;
                  }
              }
          }
      if (cmp < 0)
        {
          self->next = *node;
          *node = self;
          break;
        }
      else if (cmp == 0)
        {
          self = NULL;
          break;
        }
    }
  if (!*node)
    *node = self;
  return self != NULL;
}

static bitset
AnnotationList__compute_shift_tokens (transitions *trans)
{
  bitset shift_tokens = bitset_create (ntokens, BITSET_FIXED);
  int i;
  FOR_EACH_SHIFT (trans, i)
    bitset_set (shift_tokens, TRANSITION_SYMBOL (trans, i));
  return shift_tokens;
}

static bitset
AnnotationList__compute_conflicted_tokens (bitset shift_tokens,
                                           reductions *reds)
{
  bitset conflicted_tokens = bitset_create (ntokens, BITSET_FIXED);
  bitset conflicted_tokens_rule = bitset_create (ntokens, BITSET_FIXED);
  bitset tokens = bitset_create (ntokens, BITSET_FIXED);
  int i;

  bitset_copy (tokens, shift_tokens);
  for (i = 0; i < reds->num; ++i)
    {
      bitset_and (conflicted_tokens_rule, tokens, reds->lookahead_tokens[i]);
      bitset_or (conflicted_tokens,
                 conflicted_tokens, conflicted_tokens_rule);
      bitset_or (tokens, tokens, reds->lookahead_tokens[i]);
      /* Check that rules are sorted on rule number or the next step in
         AnnotationList__compute_from_inadequacies will misbehave.  */
      aver (i == 0 || reds->rules[i-1] < reds->rules[i]);
    }

  bitset_free (tokens);
  bitset_free (conflicted_tokens_rule);

  return conflicted_tokens;
}

static bool
AnnotationList__compute_lhs_contributions (state *s, rule *the_rule,
                                           symbol_number conflicted_token,
                                           bitsetv follow_kernel_items,
                                           bitsetv always_follows,
                                           state ***predecessors,
                                           bitset **item_lookahead_sets,
                                           Sbitset *items,
                                           struct obstack
                                             *annotations_obstackp)
{
  goto_number lhs_goto = map_goto (s->number, the_rule->lhs->number);
  if (bitset_test (always_follows[lhs_goto], conflicted_token))
    return true;
  *items = Sbitset__new_on_obstack (s->nitems, annotations_obstackp);
  {
    bitset_iterator biter_item;
    bitset_bindex item;
    BITSET_FOR_EACH (biter_item, follow_kernel_items[lhs_goto], item, 0)
      if (ielr_item_has_lookahead (s, 0, item, conflicted_token,
                                   predecessors, item_lookahead_sets))
        Sbitset__set (*items, item);
  }
  return false;
}

static void
AnnotationList__computePredecessorAnnotations (AnnotationList *self, state *s,
                                               bitsetv follow_kernel_items,
                                               bitsetv always_follows,
                                               state ***predecessors,
                                               bitset **item_lookahead_sets,
                                               AnnotationList
                                                 **annotation_lists,
                                               AnnotationIndex
                                                 *annotation_counts,
                                               struct obstack
                                                 *annotations_obstackp)
{
  state **predecessor;
  for (predecessor = predecessors[s->number]; *predecessor; ++predecessor)
    {
      AnnotationList *annotation_node =
        AnnotationList__alloc_on_obstack (
          self->inadequacyNode->contributionCount, annotations_obstackp);
      annotation_node->inadequacyNode = self->inadequacyNode;
      bool potential_contribution = false;
      bitset *lookaheads = NULL;
      {
        ContributionIndex ci;
        for (ci = 0; ci < self->inadequacyNode->contributionCount; ++ci)
          {
            symbol_number contribution_token =
              InadequacyList__getContributionToken (self->inadequacyNode, ci)
                ->number;
            if (AnnotationList__isContributionAlways (self, ci))
              {
                annotation_node->contributions[ci] = NULL;
                continue;
              }
            annotation_node->contributions[ci] =
              Sbitset__new_on_obstack ((*predecessor)->nitems,
                                       annotations_obstackp);
            {
              size_t predecessor_item = 0;
              Sbitset sbiter_item;
              Sbitset__Index self_item;
              SBITSET__FOR_EACH (self->contributions[ci], s->nitems,
                                 sbiter_item, self_item)
                {
                  /* If this kernel item is the beginning of a RHS, it must be
                     the kernel item in the start state, and so it has an empty
                     lookahead set.  Thus, it can't contribute to inadequacies,
                     and so it should never have been identified as a
                     contribution.  If, instead, this kernel item is the
                     successor of the start state's kernel item, the lookahead
                     set is still empty, and so it also should never have been
                     identified as a contribution.  This situation is fortunate
                     because we want to avoid the - 2 below in both cases.  */
                  aver (s->items[self_item] > 1);
                  /* If this kernel item is next to the beginning of the RHS,
                     then check all of the predecessor's goto follows for the
                     LHS.  */
                  if (item_number_is_rule_number (ritem[s->items[self_item]
                                                        - 2]))
                    {
                      Sbitset items;
                      unsigned int rulei;
                      for (rulei = s->items[self_item];
                           !item_number_is_rule_number (ritem[rulei]);
                           ++rulei)
                        ;
                      if (AnnotationList__compute_lhs_contributions (
                            *predecessor,
                            &rules[item_number_as_rule_number (ritem[rulei])],
                            contribution_token,
                            follow_kernel_items, always_follows, predecessors,
                            item_lookahead_sets, &items, annotations_obstackp))
                        {
                          obstack_free (annotations_obstackp,
                                        annotation_node->contributions[ci]);
                          annotation_node->contributions[ci] = NULL;
                          break;
                        }
                      else
                        {
                          Sbitset__or (annotation_node->contributions[ci],
                                       annotation_node->contributions[ci],
                                       items, (*predecessor)->nitems);
                          obstack_free (annotations_obstackp, items);
                        }
                    }
                  /* If this kernel item is later in the RHS, then check the
                     predecessor item's lookahead set.  */
                  else
                    {
                      /* We don't have to start the predecessor item search at
                         the beginning every time because items from both
                         states are sorted by their indices in ritem.  */
                      for (;
                           predecessor_item < (*predecessor)->nitems;
                           ++predecessor_item)
                        if ((*predecessor)->items[predecessor_item]
                            == s->items[self_item] - 1)
                          break;
                      aver (predecessor_item != (*predecessor)->nitems);
                      if (ielr_item_has_lookahead (*predecessor, 0,
                                                   predecessor_item,
                                                   contribution_token,
                                                   predecessors,
                                                   item_lookahead_sets))
                        Sbitset__set (annotation_node->contributions[ci],
                                      predecessor_item);
                    }
                }
            }
            if (annotation_node->contributions[ci])
              {
                Sbitset biter;
                Sbitset__Index i;
                SBITSET__FOR_EACH (annotation_node->contributions[ci],
                                   (*predecessor)->nitems, biter, i)
                  {
                    potential_contribution = true;
                    if (!lookaheads)
                      {
                        size_t j;
                        lookaheads = xnmalloc ((*predecessor)->nitems,
                                               sizeof *lookaheads);
                        for (j = 0; j < (*predecessor)->nitems; ++j)
                          lookaheads[j] = NULL;
                      }
                    if (!lookaheads[i])
                      lookaheads[i] = bitset_create (ntokens, BITSET_FIXED);
                    bitset_set (lookaheads[i], contribution_token);
                  }
              }
          }
      }

      /* If the predecessor has any contributions besides just "always" and
         "never" contributions:
         - If the dominant contribution is split-stable, the annotation could
           not affect merging on this predecessor state or its eventual
           predecessor states.  Moreover, all contributions that affect
           whether the dominant contribution remains dominant must be "always"
           or "never" contributions in order for the dominant contribution to
           be split-stable.  Thus, the dominant contribution computation result
           in eventual successor states will not be affected by lookaheads
           tracked for this predecessor state.  (Also, as in the isocore
           compatibility test, we depend on the fact that isocores with equal
           dominant contributions will have the same dominant contribution when
           merged.  Otherwise, we might have to worry that the presence of a
           potential contribution might somehow be the culprit of that behavior
           and thus need to be tracked regardless of the split stability of the
           dominant contribution.)  Thus, go ahead and discard the annotation
           to save space now plus time during state splitting.
         - Otherwise, record the annotation, and compute any resulting
           annotations needed on predecessor states.  */
      if (potential_contribution)
        {
          if (ContributionIndex__none
              != AnnotationList__computeDominantContribution (
                   annotation_node, (*predecessor)->nitems, lookaheads, true))
            {
              obstack_free (annotations_obstackp, annotation_node);
              annotation_node = NULL;
            }
          {
            size_t i;
            for (i = 0; i < (*predecessor)->nitems; ++i)
              if (lookaheads[i])
                bitset_free (lookaheads[i]);
            free (lookaheads);
          }
          if (annotation_node)
            {
              if (AnnotationList__insertInto (annotation_node,
                                              &annotation_lists[(*predecessor)
                                                                ->number],
                                              (*predecessor)->nitems))
                {
                  ++annotation_counts[(*predecessor)->number];
                  AnnotationList__computePredecessorAnnotations (
                    annotation_node, *predecessor,
                    follow_kernel_items, always_follows, predecessors,
                    item_lookahead_sets, annotation_lists, annotation_counts,
                    annotations_obstackp);
                }
              else
                obstack_free (annotations_obstackp, annotation_node);
            }
        }
      else
        obstack_free (annotations_obstackp, annotation_node);
    }
}

void
AnnotationList__compute_from_inadequacies (
  state *s, bitsetv follow_kernel_items, bitsetv always_follows,
  state ***predecessors, bitset **item_lookahead_sets,
  InadequacyList **inadequacy_lists, AnnotationList **annotation_lists,
  AnnotationIndex *annotation_counts,
  ContributionIndex *max_contributionsp,
  struct obstack *annotations_obstackp,
  InadequacyListNodeCount *inadequacy_list_node_count)
{
  bitsetv all_lookaheads;
  bitset shift_tokens;
  bitset conflicted_tokens;
  bitset_iterator biter_conflict;
  bitset_bindex conflicted_token;

  /* Return an empty list if s->lookahead_tokens = NULL.  */
  if (s->consistent)
    return;

  all_lookaheads = bitsetv_create (s->nitems, ntokens, BITSET_FIXED);
  bitsetv_ones (all_lookaheads);
  shift_tokens = AnnotationList__compute_shift_tokens (s->transitions);
  conflicted_tokens =
    AnnotationList__compute_conflicted_tokens (shift_tokens, s->reductions);

  /* Add an inadequacy annotation for each conflicted_token.  */
  BITSET_FOR_EACH (biter_conflict, conflicted_tokens, conflicted_token, 0)
    {
      AnnotationList *annotation_node;
      /* FIXME: Would a BITSET_FRUGAL or BITEST_SPARSE be more efficient?  Now
         or convert it inside InadequacyList__new_conflict?  */
      bitset actions = bitset_create (s->reductions->num + 1, BITSET_FIXED);
      ContributionIndex contribution_count = 0;
      bool potential_contribution = false;

      /* Allocate the annotation node.  */
      {
        int rule_i;
        for (rule_i = 0; rule_i < s->reductions->num; ++rule_i)
          if (bitset_test (s->reductions->lookahead_tokens[rule_i],
                           conflicted_token))
            ++contribution_count;
        if (bitset_test (shift_tokens, conflicted_token))
          ++contribution_count;
        annotation_node =
          AnnotationList__alloc_on_obstack (contribution_count,
                                            annotations_obstackp);
      }

      /* Add a contribution for each reduction that has conflicted_token as a
         lookahead.  */
      {
        ContributionIndex ci = 0;
        int item_i = 0;
        int rule_i;
        for (rule_i = 0; rule_i < s->reductions->num; ++rule_i)
          {
            rule *the_rule = s->reductions->rules[rule_i];
            if (bitset_test (s->reductions->lookahead_tokens[rule_i],
                             conflicted_token))
              {
                bitset_set (actions, rule_i);
                /* If this reduction is on a kernel item, just add it.  */
                if (!item_number_is_rule_number (the_rule->rhs[0]))
                  {
                    annotation_node->contributions[ci] =
                      Sbitset__new_on_obstack (s->nitems,
                                               annotations_obstackp);
                    /* Catch item_i up to rule_i.  This works because both are
                       sorted on rule number.  */
                    while (!item_number_is_rule_number (
                             ritem[s->items[item_i]])
                           || item_number_as_rule_number (
                                ritem[s->items[item_i]])
                              != the_rule->number)
                      {
                        ++item_i;
                        aver (item_i < s->nitems);
                      }
                    Sbitset__set (annotation_node->contributions[ci], item_i);
                  }
                /* Otherwise, add the kernel items whose lookahead sets
                   contribute the conflicted token to this reduction's
                   lookahead set.  */
                else if (AnnotationList__compute_lhs_contributions (
                           s, the_rule, conflicted_token, follow_kernel_items,
                           always_follows, predecessors, item_lookahead_sets,
                           &annotation_node->contributions[ci],
                           annotations_obstackp))
                  {
                    annotation_node->contributions[ci++] = NULL;
                    continue;
                  }
                /* The lookahead token has to come from somewhere.  */
                aver (!Sbitset__isEmpty (annotation_node->contributions[ci],
                                         s->nitems));
                ++ci;
                potential_contribution = true;
              }
          }
      }

      /* If there are any contributions besides just "always" contributions:
         - If there's also a shift contribution, record it.
         - If the dominant contribution is split-stable, then the annotation
           could not affect merging, so go ahead and discard the annotation and
           the inadequacy to save space now plus time during state splitting.
         - Otherwise, record the annotation and the inadequacy, and compute any
           resulting annotations needed on predecessor states.  */
      if (potential_contribution)
        {
          if (bitset_test (shift_tokens, conflicted_token))
            {
              bitset_set (actions, s->reductions->num);
              annotation_node->contributions[contribution_count - 1] = NULL;
            }
          {
            InadequacyList *conflict_node =
              InadequacyList__new_conflict (
                s, symbols[conflicted_token], actions,
                inadequacy_list_node_count);
            actions = NULL;
            annotation_node->inadequacyNode = conflict_node;
            if (ContributionIndex__none
                != AnnotationList__computeDominantContribution (
                     annotation_node, s->nitems, all_lookaheads, true))
              {
                obstack_free (annotations_obstackp, annotation_node);
                InadequacyList__delete (conflict_node);
              }
            else
              {
                InadequacyList__prependTo (conflict_node,
                                           &inadequacy_lists[s->number]);
                {
                  bool b =
                    AnnotationList__insertInto (annotation_node,
                                                &annotation_lists[s->number],
                                                s->nitems);
                  aver (b); (void) b;
                }
                /* This aver makes sure the
                   AnnotationList__computeDominantContribution check above
                   does discard annotations in the simplest case of a S/R
                   conflict with no token precedence.  */
                aver (!bitset_test (shift_tokens, conflicted_token)
                      || symbols[conflicted_token]->prec);
                ++annotation_counts[s->number];
                if (contribution_count > *max_contributionsp)
                  *max_contributionsp = contribution_count;
                AnnotationList__computePredecessorAnnotations (
                  annotation_node, s,
                  follow_kernel_items, always_follows, predecessors,
                  item_lookahead_sets, annotation_lists, annotation_counts,
                  annotations_obstackp);
              }
          }
        }
      else
        {
          bitset_free (actions);
          obstack_free (annotations_obstackp, annotation_node);
        }
    }

  bitsetv_free (all_lookaheads);
  bitset_free (shift_tokens);
  bitset_free (conflicted_tokens);
}

void
AnnotationList__debug (AnnotationList const *self, size_t nitems, int spaces)
{
  AnnotationList const *a;
  AnnotationIndex ai;
  for (a = self, ai = 0; a; a = a->next, ++ai)
    {
      {
        int j;
        for (j = 0; j < spaces; ++j)
          putc (' ', stderr);
      }
      fprintf (stderr, "Annotation %d (manifesting state %d):\n",
               ai, a->inadequacyNode->manifestingState->number);
      {
        ContributionIndex ci;
        bitset_bindex rulei = 0; /* init suppresses compiler warning */
        rulei = bitset_first (a->inadequacyNode->inadequacy.conflict.actions);
        for (ci = 0; ci < a->inadequacyNode->contributionCount; ++ci)
          {
            symbol_number token =
              InadequacyList__getContributionToken (a->inadequacyNode, ci)
                ->number;
            {
              int j;
              for (j = 0; j < spaces+2; ++j)
                putc (' ', stderr);
            }
            if (ci == InadequacyList__getShiftContributionIndex (
                        a->inadequacyNode))
              fprintf (stderr, "Contributes shift of token %d.\n", token);
            else
              {
                fprintf (stderr, "Contributes token %d", token);
                aver (rulei != BITSET_BINDEX_MAX);
                fprintf (stderr, " as lookahead, rule number %d",
                         a->inadequacyNode->manifestingState
                           ->reductions->rules[rulei]->number);
                rulei =
                  bitset_next (a->inadequacyNode->inadequacy.conflict.actions,
                               rulei+1);
                if (AnnotationList__isContributionAlways (a, ci))
                  fprintf (stderr, " always.");
                else
                  {
                    fprintf (stderr, ", items: ");
                    Sbitset__fprint (a->contributions[ci], nitems, stderr);
                  }
                fprintf (stderr, "\n");
              }
          }
      }
    }
}

void
AnnotationList__computeLookaheadFilter (AnnotationList const *self,
                                        size_t nitems,
                                        bitsetv lookahead_filter)
{
  bitsetv_zero (lookahead_filter);
  for (; self; self = self->next)
    {
      ContributionIndex ci;
      for (ci = 0; ci < self->inadequacyNode->contributionCount; ++ci)
        if (!AnnotationList__isContributionAlways (self, ci))
          {
            Sbitset__Index item;
            Sbitset biter;
            symbol_number token =
              InadequacyList__getContributionToken (self->inadequacyNode, ci)
                ->number;
            SBITSET__FOR_EACH (self->contributions[ci], nitems, biter, item)
              bitset_set (lookahead_filter[item], token);
          }
    }
}

/**
 * \pre
 *   - <tt>self != NULL</tt>.
 *   - \c nitems is the number of kernel items in the LR(0) state that \c self
 *     annotates.
 *   - \c lookaheads describes the lookahead sets on the kernel items of some
 *     isocore of the LR(0) state that \c self annotates.  Either:
 *     - <tt>lookaheads = NULL</tt> only if the lookahead set on every kernel
 *       item is empty.
 *     - For any <tt>0 <= i < nitems</tt>, <tt>lookaheads[i]</tt> is either:
 *       - \c NULL only if the lookahead set on kernel item \c i is empty.
 *       - The (possibly empty) lookahead set on kernel item \c i.
 *   - <tt>0 <= ci < self->inadequacyNode->contributionCount</tt>.
 * \post
 *   - \c result = true iff contribution \c ci in \c self is made by the state
 *     described by \c lookaheads.
 */
static bool
AnnotationList__stateMakesContribution (AnnotationList const *self,
                                        size_t nitems, ContributionIndex ci,
                                        bitset *lookaheads)
{
  if (AnnotationList__isContributionAlways (self, ci))
    return true;
  if (!lookaheads)
    return false;
  {
    symbol_number token =
      InadequacyList__getContributionToken (self->inadequacyNode, ci)->number;
    Sbitset__Index item;
    Sbitset biter;
    SBITSET__FOR_EACH (self->contributions[ci], nitems, biter, item)
      if (lookaheads[item] && bitset_test (lookaheads[item], token))
        return true;
  }
  return false;
}

ContributionIndex
AnnotationList__computeDominantContribution (AnnotationList const *self,
                                             size_t nitems, bitset *lookaheads,
                                             bool require_split_stable)
{
  symbol *token;
  ContributionIndex const ci_shift =
    InadequacyList__getShiftContributionIndex (self->inadequacyNode);

  token = self->inadequacyNode->inadequacy.conflict.token;

  /* S/R conflict.  */
  if (ci_shift != ContributionIndex__none)
    {
      bool find_stable_domination_over_shift = false;
      bool find_stable_error_action_domination = false;
      {
        ContributionIndex ci;
        int actioni;
        ContributionIndex ci_rr_dominator = ContributionIndex__none;
        int shift_precedence = token->prec;

        /* If the token has no precedence set, shift is always chosen.  */
        if (!shift_precedence)
          return ci_shift;

        /* Figure out which reductions contribute, which of those would
           dominate in a R/R comparison, and whether any reduction dominates
           the shift so that the R/R comparison is actually needed.  */
        for (ci = 0, actioni = bitset_first (self->inadequacyNode->inadequacy
                                             .conflict.actions);
             ci < self->inadequacyNode->contributionCount;
             ++ci, actioni = bitset_next (self->inadequacyNode->inadequacy
                                          .conflict.actions, actioni+1))
          {
            int reduce_precedence = 0;
            if (ci == ci_shift)
              continue;
            {
              rule *r = self->inadequacyNode->manifestingState
                          ->reductions->rules[actioni];
              if (r->prec)
                reduce_precedence = r->prec->prec;
            }
            /* If there's no need to check whether this reduction actually
               contributes because the shift eliminates it from the R/R
               comparison anyway, continue to the next reduction.  */
            if (reduce_precedence
                && (reduce_precedence < shift_precedence
                    || (reduce_precedence == shift_precedence
                        && token->assoc == right_assoc)))
              continue;
            if (!AnnotationList__stateMakesContribution (self, nitems, ci,
                                                         lookaheads))
              continue;
            /* This uneliminated reduction contributes, so see if it can cause
               an error action.  */
            if (reduce_precedence == shift_precedence
                 && token->assoc == non_assoc)
              {
                /* It's not possible to find split-stable domination over
                   shift after a potential %nonassoc.  */
                if (find_stable_domination_over_shift)
                  return ContributionIndex__none;
                if (!require_split_stable
                    || AnnotationList__isContributionAlways (self, ci))
                  return ContributionIndex__error_action;
                find_stable_error_action_domination = true;
              }
            /* Consider this uneliminated contributing reduction in the R/R
               comparison.  */
            if (ci_rr_dominator == ContributionIndex__none)
              ci_rr_dominator = ci;
            /* If precedence is set for this uneliminated contributing
               reduction, it dominates the shift, so try to figure out which
               reduction dominates the R/R comparison.  */
            if (reduce_precedence)
              {
                /* It's not possible to find split-stable error action
                   domination after a potential reduction.  */
                if (find_stable_error_action_domination)
                  return ContributionIndex__none;
                if (!require_split_stable)
                  return ci_rr_dominator;
                if (!AnnotationList__isContributionAlways (self,
                                                           ci_rr_dominator))
                  return ContributionIndex__none;
                if (AnnotationList__isContributionAlways (self, ci))
                  return ci_rr_dominator;
                find_stable_domination_over_shift = true;
              }
          }
      }
      if (find_stable_domination_over_shift
          || find_stable_error_action_domination)
        return ContributionIndex__none;
      /* No reduce or error action domination found, so shift dominates.  */
      return ci_shift;
    }

  /* R/R conflict, so the reduction with the lowest rule number dominates.
     Fortunately, contributions are sorted by rule number.  */
  {
    ContributionIndex ci;
    for (ci = 0; ci < self->inadequacyNode->contributionCount; ++ci)
      if (AnnotationList__stateMakesContribution (self, nitems, ci,
                                                  lookaheads))
        {
          if (require_split_stable
              && !AnnotationList__isContributionAlways (self, ci))
            return ContributionIndex__none;
          return ci;
        }
  }
  return ContributionIndex__none;
}
