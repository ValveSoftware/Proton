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

#ifndef ANNOTATION_LIST_H_
# define ANNOTATION_LIST_H_

# include <bitsetv.h>
# include "Sbitset.h"
# include "InadequacyList.h"
# include "state.h"

typedef unsigned int AnnotationIndex;

/**
 * A node in a list of annotations on a particular LR(0) state.  Each
 * annotation records how isocores of that LR(0) state might contribute to an
 * individual inadequacy, which might manifest in a different state.  Don't
 * break encapsulation by modifying the fields directly.  Use the provided
 * interface functions.
 */
typedef struct AnnotationList
{
  /** The next node in the list or \c NULL if none.  */
  struct AnnotationList *next;
  /** The \c InadequacyList node describing how this inadequacy manifests.  */
  InadequacyList *inadequacyNode;
  /**
   * List of how the "always", "never", and potential contributions of the
   * inadequacy might be made by isocores of the annotated LR(0) state:
   *   - The number of rows is the number of contributions.  That is,
   *     <tt>AnnotationList::inadequacyNode->contributionCount</tt>.
   *   - The token associated with contribution \c i is
   *     <tt>InadequacyList__getContributionToken (AnnotationList::inadequacyNode, i)</tt>.
   *   - Iff <tt>AnnotationList::contributions[i] = NULL</tt>, contribution
   *     \c i is an "always" contribution.  That is, for every isocore of the
   *     annotated LR(0) state, its core or the core of one its eventual
   *     successors will definitely make this contribution to the inadequacy.
   *     It may contribute by either:
   *     - Creating a shift of contribution <tt>i</tt>'s token in the state
   *       that can manifest the inadequacy.
   *     - Propagating that token to the lookahead set of contribution
   *       <tt>i</tt>'s reduction in the state that can manifest the
   *       inadequacy.
   *   - Otherwise:
   *     - The number of columns in <tt>AnnotationList::contributions[i]</tt>
   *       is the number of kernel items in any isocore of the annotated LR(0)
   *       state.
   *     - Iff <tt>AnnotationList::contributions[i]</tt> is empty, contribution
   *       \c i is a "never" contribution.  That is, no isocore of the
   *       annotated LR(0) state can make this contribution to the inadequacy.
   *     - Otherwise, for each bit \c j that is set in
   *       <tt>AnnotationList::contributions[i]</tt>, if the token associated
   *       with contribution \c i is present in the lookahead set of kernel
   *       item \c j of an isocore of the annotated LR(0) state, that isocore
   *       will make contribution \c i to the inadequacy by propagating the
   *       contribution's token to the lookahead set of the contribution's
   *       reduction in the state that can manifest the inadequacy.
   */
  Sbitset contributions[1];
} AnnotationList;

/**
 * \pre
 *   - <tt>s != NULL</tt>.
 *   - \c follow_kernel_items, \c always_follows, and \c predecessors were
 *     computed by \c ielr_compute_auxiliary_tables.
 *   - The size of each of \c annotation_lists and \c annotation_counts is
 *     \c ::nstates.
 *   - If no \c InadequacyList nodes are currently allocated for the
 *     parser tables to which \c s belongs, then it is best if
 *     <tt>*inadequacy_list_node_count</tt> is zero to avoid overflow.
 *     Otherwise, <tt>*inadequacy_list_node_count</tt> has not been
 *     modified by any function except
 *     \c AnnotationList__compute_from_inadequacies since the invocation
 *     of \c AnnotationList__compute_from_inadequacies that constructed
 *     the first of the \c InadequacyList nodes currently allocated for
 *     those parser tables.
 * \post
 *   - <tt>inadequacy_lists[s->number]</tt> now describes all inadequacies that
 *     manifest in \c s.
 *   - For every state <tt>states[i]</tt>, <tt>annotation_lists[i]</tt> now
 *     contains all annotations associated with all inadequacies that manifest
 *     in \c s.
 *   - <tt>annotation_counts[i]</tt> was incremented by the number of new
 *     annotations added to <tt>states[i]</tt>.
 *   - <tt>*max_contributionsp</tt> is the higher of:
 *     - The maximum number of contributions computed per annotation.
 *     - <tt>*max_contributionsp \@pre</tt>.
 *   - All memory for all new annotations was allocated on
 *     \c annotations_obstackp.
 */
void
AnnotationList__compute_from_inadequacies (
  state *s, bitsetv follow_kernel_items, bitsetv always_follows,
  state ***predecessors, bitset **item_lookahead_sets,
  InadequacyList **inadequacy_lists, AnnotationList **annotation_lists,
  AnnotationIndex *annotation_counts,
  ContributionIndex *max_contributionsp,
  struct obstack *annotations_obstackp,
  InadequacyListNodeCount *inadequacy_list_node_count);

/**
 * \pre
 *   - <tt>self != NULL</tt>.
 *   - \c nitems is the number of kernel items in the LR(0) state that every
 *     node in the list \c self annotates.
 * \post
 *   - A textual representation of all nodes in the list \c self was printed to
 *     stderr.  \c spaces spaces were printed before each line of the text.
 */
void AnnotationList__debug (AnnotationList const *self, size_t nitems,
                            int spaces);

/**
 * \pre
 *   - <tt>self != NULL</tt>.
 *   - \c nitems is the number of kernel items in the LR(0) state that \c self
 *     annotates.
 *   - The number of rows in \c lookahead_filter is at least \c nitems, and the
 *     number of columns is \c ::ntokens.
 * \post
 *   - <tt>lookahead_filter[i][j]</tt> is set iff some annotation in the list
 *     \c self lists token \c j in kernel item \c i as a contributor.
 */
void AnnotationList__computeLookaheadFilter (AnnotationList const *self,
                                             size_t nitems,
                                             bitsetv lookahead_filter);

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
 * \post
 *   - If <tt>require_split_stable = false</tt>, \c result = either:
 *     - \c ContributionIndex__none iff the state described by \c lookaheads
 *       makes none of the contributions in \c self.
 *     - The index of the dominating contribution in \c self that is made by
 *       that state.
 *     - \c ContributionIndex__error_action to indicate that the inadequacy
 *       manifests as a conflict and that a syntax error action (because of a
 *       %nonassoc) dominates instead.
 *   - Otherwise, \c result is the same as if <tt>require_split_stable =
 *     false</tt> except that it is also \c ContributionIndex__none if there
 *     are contributions made by the state but the dominating contribution is
 *     not split-stable.  By split-stable, we mean that the dominating
 *     contribution cannot change due to loss of one or more potential
 *     contributions due to loss of lookaheads due to splitting of the state.
 *   - After determining which contributions are actually made by the state,
 *     the algorithm for determining which contribution dominates in the
 *     conflict is intended to choose exactly the same action as conflicts.c
 *     would choose... no matter how crazy conflicts.c's choice is.
 */
ContributionIndex
AnnotationList__computeDominantContribution (AnnotationList const *self,
                                             size_t nitems, bitset *lookaheads,
                                             bool require_split_stable);

#endif /* !ANNOTATION_LIST_H_ */
