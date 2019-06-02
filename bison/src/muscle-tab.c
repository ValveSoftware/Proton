/* Muscle table manager for Bison.

   Copyright (C) 2001-2015 Free Software Foundation, Inc.

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

#include <hash.h>

#include "complain.h"
#include "files.h"
#include "getargs.h"
#include "muscle-tab.h"
#include "quote.h"

muscle_kind
muscle_kind_new (char const *k)
{
  if (STREQ (k, "code"))
    return muscle_code;
  else if (STREQ (k, "keyword"))
    return muscle_keyword;
  else if (STREQ (k, "string"))
    return muscle_string;
  abort ();
}

char const *
muscle_kind_string (muscle_kind k)
{
  switch (k)
    {
    case muscle_code:    return "code";
    case muscle_keyword: return "keyword";
    case muscle_string:  return "string";
    }
  abort ();
}


/* A key-value pair, along with storage that can be reclaimed when
   this pair is no longer needed.  */
typedef struct
{
  char const *key;
  char const *value;
  char *storage;
  muscle_kind kind;
} muscle_entry;


/* The name of muscle for the %define variable VAR (corresponding to
   FIELD, if defined).  */
static uniqstr
muscle_name (char const *var, char const *field)
{
  if (field)
    return UNIQSTR_CONCAT ("percent_define_", field, "(", var, ")");
  else
    return UNIQSTR_CONCAT ("percent_define(", var, ")");
}

/* An obstack used to create some entries.  */
struct obstack muscle_obstack;

/* Initial capacity of muscles hash table.  */
#define HT_INITIAL_CAPACITY 257

static struct hash_table *muscle_table = NULL;

static bool
hash_compare_muscles (void const *x, void const *y)
{
  muscle_entry const *m1 = x;
  muscle_entry const *m2 = y;
  return STREQ (m1->key, m2->key);
}

static size_t
hash_muscle (const void *x, size_t tablesize)
{
  muscle_entry const *m = x;
  return hash_string (m->key, tablesize);
}

/* Create a fresh muscle name KEY, and insert in the hash table.  */
static void *
muscle_entry_new (char const *key)
{
  muscle_entry *res = xmalloc (sizeof *res);
  res->key = key;
  res->value = NULL;
  res->storage = NULL;
  if (!hash_insert (muscle_table, res))
    xalloc_die ();
  return res;
}

static void
muscle_entry_free (void *entry)
{
  muscle_entry *mentry = entry;
  free (mentry->storage);
  free (mentry);
}

void
muscle_init (void)
{
  /* Initialize the muscle obstack.  */
  obstack_init (&muscle_obstack);

  muscle_table = hash_initialize (HT_INITIAL_CAPACITY, NULL, hash_muscle,
                                  hash_compare_muscles, muscle_entry_free);

  /* Version and input file.  */
  MUSCLE_INSERT_STRING ("version", VERSION);
}


void
muscle_free (void)
{
  hash_free (muscle_table);
  obstack_free (&muscle_obstack, NULL);
}

/* Look for the muscle named KEY.  Return NULL if does not exist.  */
static
muscle_entry *
muscle_lookup (char const *key)
{
  muscle_entry probe;
  probe.key = key;
  return hash_lookup (muscle_table, &probe);
}


void
muscle_insert (char const *key, char const *value)
{
  muscle_entry *entry = muscle_lookup (key);
  if (entry)
    free (entry->storage);
  else
    /* First insertion in the hash. */
    entry = muscle_entry_new (key);
  entry->value = value;
  entry->storage = NULL;
}


/* Append VALUE to the current value of KEY.  If KEY did not already
   exist, create it.  Use MUSCLE_OBSTACK.  De-allocate the previously
   associated value.  Copy VALUE and SEPARATOR.  If VALUE does not end
   with TERMINATOR, append one.  */

static void
muscle_grow (const char *key, const char *val,
             const char *separator, const char *terminator)
{
  muscle_entry *entry = muscle_lookup (key);
  size_t vals = strlen (val);
  size_t terms = strlen (terminator);

  if (entry)
    {
      obstack_sgrow (&muscle_obstack, entry->value);
      obstack_sgrow (&muscle_obstack, separator);
      free (entry->storage);
    }
  else
    entry = muscle_entry_new (key);

  obstack_sgrow (&muscle_obstack, val);

  if (terms <= vals
      && STRNEQ (val + vals - terms, terminator))
    obstack_sgrow (&muscle_obstack, terminator);

  {
    char *new_val = obstack_finish0 (&muscle_obstack);
    entry->value = entry->storage = xstrdup (new_val);
    obstack_free (&muscle_obstack, new_val);
  }
}

/*------------------------------------------------------------------.
| Using muscle_grow, append a synchronization line for the location |
| LOC to the current value of KEY.                                  |
`------------------------------------------------------------------*/

static void
muscle_syncline_grow (char const *key, location loc)
{
  char *extension = NULL;
  obstack_printf (&muscle_obstack, "]b4_syncline(%d, ", loc.start.line);
  obstack_quote (&muscle_obstack,
                 quotearg_style (c_quoting_style, loc.start.file));
  obstack_sgrow (&muscle_obstack, ")[");
  extension = obstack_finish0 (&muscle_obstack);
  muscle_grow (key, extension, "", "");
  obstack_free (&muscle_obstack, extension);
}

/*------------------------------------------------------------------.
| Append VALUE to the current value of KEY, using muscle_grow.  But |
| in addition, issue a synchronization line for the location LOC    |
| using muscle_syncline_grow.                                       |
`------------------------------------------------------------------*/

void
muscle_code_grow (const char *key, const char *val, location loc)
{
  muscle_syncline_grow (key, loc);
  muscle_grow (key, val, "\n", "\n");
}


void
muscle_pair_list_grow (const char *muscle,
                       const char *a1, const char *a2)
{
  char *pair;
  obstack_sgrow (&muscle_obstack, "[");
  obstack_quote (&muscle_obstack, a1);
  obstack_sgrow (&muscle_obstack, ", ");
  obstack_quote (&muscle_obstack, a2);
  obstack_sgrow (&muscle_obstack, "]");
  pair = obstack_finish0 (&muscle_obstack);
  muscle_grow (muscle, pair, ",\n", "");
  obstack_free (&muscle_obstack, pair);
}


char const *
muscle_find_const (char const *key)
{
  muscle_entry *entry = muscle_lookup (key);
  return entry ? entry->value : NULL;
}


char *
muscle_find (char const *key)
{
  muscle_entry *entry = muscle_lookup (key);
  if (entry)
    {
      aver (entry->value == entry->storage);
      return entry->storage;
    }
  return NULL;
}


/* In the format 'file_name:line.column', append BOUND to MUSCLE.  Use
   digraphs for special characters in the file name.  */

static void
muscle_boundary_grow (char const *key, boundary bound)
{
  char *extension;
  obstack_sgrow  (&muscle_obstack, "[[");
  obstack_escape (&muscle_obstack, bound.file);
  obstack_printf (&muscle_obstack, ":%d.%d]]", bound.line, bound.column);
  extension = obstack_finish0 (&muscle_obstack);
  muscle_grow (key, extension, "", "");
  obstack_free (&muscle_obstack, extension);
}


/* In the format '[[file_name:line.column]], [[file_name:line.column]]',
   append LOC to MUSCLE.  Use digraphs for special characters in each
   file name.  */

static void
muscle_location_grow (char const *key, location loc)
{
  muscle_boundary_grow (key, loc.start);
  muscle_grow (key, "", ", ", "");
  muscle_boundary_grow (key, loc.end);
}

#define COMMON_DECODE(Value)                                    \
  case '$':                                                     \
    ++(Value); aver (*(Value) == '[');                          \
    ++(Value); aver (*(Value) == ']');                          \
    ++(Value); aver (*(Value) == '[');                          \
    obstack_sgrow (&muscle_obstack, "$");                       \
    break;                                                      \
  case '@':                                                     \
    switch (*++(Value))                                         \
      {                                                         \
        case '@': obstack_sgrow (&muscle_obstack, "@" ); break; \
        case '{': obstack_sgrow (&muscle_obstack, "[" ); break; \
        case '}': obstack_sgrow (&muscle_obstack, "]" ); break; \
        default: aver (false); break;                           \
      }                                                         \
    break;                                                      \
  default:                                                      \
    obstack_1grow (&muscle_obstack, *(Value));                  \
    break;

/* Reverse of obstack_escape.  */
static char *
string_decode (char const *key)
{
  char const *value = muscle_find_const (key);
  char *value_decoded;
  char *result;

  if (!value)
    return NULL;
  do {
    switch (*value)
      {
        COMMON_DECODE (value)
        case '[':
        case ']':
          aver (false);
          break;
      }
  } while (*value++);
  value_decoded = obstack_finish (&muscle_obstack);
  result = xstrdup (value_decoded);
  obstack_free (&muscle_obstack, value_decoded);
  return result;
}

/* Reverse of muscle_location_grow.  */
static location
location_decode (char const *value)
{
  location loc;
  aver (value);
  aver (*value == '[');
  ++value; aver (*value == '[');
  while (*++value)
    switch (*value)
      {
        COMMON_DECODE (value)
        case '[':
          aver (false);
          break;
        case ']':
          {
            char *boundary_str;
            ++value; aver (*value == ']');
            boundary_str = obstack_finish0 (&muscle_obstack);
            switch (*++value)
              {
                case ',':
                  boundary_set_from_string (&loc.start, boundary_str);
                  obstack_free (&muscle_obstack, boundary_str);
                  ++value; aver (*value == ' ');
                  ++value; aver (*value == '[');
                  ++value; aver (*value == '[');
                  break;
                case '\0':
                  boundary_set_from_string (&loc.end, boundary_str);
                  obstack_free (&muscle_obstack, boundary_str);
                  return loc;
                  break;
                default:
                  aver (false);
                  break;
              }
          }
          break;
      }
  aver (false);
  return loc;
}

void
muscle_user_name_list_grow (char const *key, char const *user_name,
                            location loc)
{
  muscle_grow (key, "[[[[", ",", "");
  muscle_grow (key, user_name, "", "");
  muscle_grow (key, "]], ", "", "");
  muscle_location_grow (key, loc);
  muscle_grow (key, "]]", "", "");
}


/** Return an allocated string that represents the %define directive
    that performs the assignment.

    @param assignment "VAR", or "VAR=VAL".
    @param value      default value if VAL \a assignment has no '='.

    For instance:
    "foo", NULL      => "%define foo"
    "foo", "baz"     => "%define foo baz"
    "foo=bar", NULL  => "%define foo bar"
    "foo=bar", "baz" => "%define foo bar"
    "foo=", NULL     => "%define foo"
    "foo=", "baz"    => "%define foo"
 */

static
char *
define_directive (char const *assignment, char const *value)
{
  char *eq = strchr (assignment, '=');
  char const *fmt = !eq && value && *value ? "%%define %s %s" : "%%define %s";
  char *res = xmalloc (strlen (fmt) + strlen (assignment)
                       + (value ? strlen (value) : 0));
  sprintf (res, fmt, assignment, value);
  eq = strchr (res, '=');
  if (eq)
    *eq = eq[1] ? ' ' : '\0';
  return res;
}

/** If the \a variable name is obsolete, return the name to use,
 * otherwise \a variable.  If the \a value is obsolete, update it too.
 *
 * Allocates the returned value.  */
static
char *
muscle_percent_variable_update (char const *variable, location variable_loc,
                                char const **value)
{
  typedef struct
  {
    const char *obsolete;
    const char *updated;
  } conversion_type;
  const conversion_type conversion[] =
    {
      { "api.push_pull", "api.push-pull", },
      { "api.tokens.prefix", "api.token.prefix", },
      { "lex_symbol", "api.token.constructor", },
      { "location_type", "api.location.type", },
      { "lr.default-reductions", "lr.default-reduction", },
      { "lr.keep-unreachable-states", "lr.keep-unreachable-state", },
      { "lr.keep_unreachable_states", "lr.keep-unreachable-state", },
      { "namespace", "api.namespace", },
      { "stype", "api.value.type", },
      { "variant=",     "api.value.type=variant", },
      { "variant=true", "api.value.type=variant", },
      { NULL, NULL, }
    };
  conversion_type const *c;
  for (c = conversion; c->obsolete; ++c)
    {
      char const *eq = strchr (c->obsolete, '=');
      if (eq
          ? (!strncmp (c->obsolete, variable, eq - c->obsolete)
             && STREQ (eq + 1, *value))
          : STREQ (c->obsolete, variable))
        {
          char *old = define_directive (c->obsolete, *value);
          char *upd = define_directive (c->updated, *value);
          deprecated_directive (&variable_loc, old, upd);
          free (old);
          free (upd);
          char *res = xstrdup (c->updated);
          {
            char *eq2 = strchr (res, '=');
            if (eq2)
              {
                *eq2 = '\0';
                *value = eq2 + 1;
              }
          }
          return res;
        }
    }
  return xstrdup (variable);
}

void
muscle_percent_define_insert (char const *var, location variable_loc,
                              muscle_kind kind,
                              char const *value,
                              muscle_percent_define_how how)
{
  /* Backward compatibility.  */
  char *variable = muscle_percent_variable_update (var, variable_loc, &value);
  uniqstr name = muscle_name (variable, NULL);
  uniqstr loc_name = muscle_name (variable, "loc");
  uniqstr syncline_name = muscle_name (variable, "syncline");
  uniqstr how_name = muscle_name (variable, "how");
  uniqstr kind_name = muscle_name (variable, "kind");

  /* Command-line options are processed before the grammar file.  */
  if (how == MUSCLE_PERCENT_DEFINE_GRAMMAR_FILE
      && muscle_find_const (name))
    {
      muscle_percent_define_how how_old = atoi (muscle_find_const (how_name));
      unsigned i = 0;
      if (how_old == MUSCLE_PERCENT_DEFINE_F)
        goto end;
      complain_indent (&variable_loc, complaint, &i,
                       _("%%define variable %s redefined"),
                       quote (variable));
      i += SUB_INDENT;
      location loc = muscle_percent_define_get_loc (variable);
      complain_indent (&loc, complaint, &i, _("previous definition"));
    }

  MUSCLE_INSERT_STRING (name, value);
  muscle_insert (loc_name, "");
  muscle_location_grow (loc_name, variable_loc);
  muscle_insert (syncline_name, "");
  muscle_syncline_grow (syncline_name, variable_loc);
  muscle_user_name_list_grow ("percent_define_user_variables", variable,
                              variable_loc);
  MUSCLE_INSERT_INT (how_name, how);
  MUSCLE_INSERT_STRING (kind_name, muscle_kind_string (kind));
 end:
  free (variable);
}

/* This is used for backward compatibility, e.g., "%define api.pure"
   supersedes "%pure-parser".  */
void
muscle_percent_define_ensure (char const *variable, location loc,
                              bool value)
{
  uniqstr name = muscle_name (variable, NULL);
  char const *val = value ? "" : "false";

  /* Don't complain is VARIABLE is already defined, but be sure to set
     its value to VAL.  */
  if (!muscle_find_const (name)
      || muscle_percent_define_flag_if (variable) != value)
    muscle_percent_define_insert (variable, loc, muscle_keyword, val,
                                  MUSCLE_PERCENT_DEFINE_GRAMMAR_FILE);
}

/* Mark %define VARIABLE as used.  */
static void
muscle_percent_define_use (char const *variable)
{
  muscle_insert (muscle_name (variable, "bison_variables"), "");
}

/* The value of %define variable VARIABLE (corresponding to FIELD, if
   defined).  Do not register as used, but diagnose unset variables.  */

static
char const *
muscle_percent_define_get_raw (char const *variable, char const *field)
{
  uniqstr name = muscle_name (variable, field);
  char const *res = muscle_find_const (name);
  if (!res)
    complain (NULL, fatal, _("%s: undefined %%define variable %s"),
              "muscle_percent_define_get_raw", quote (variable));
  return res;
}

char *
muscle_percent_define_get (char const *variable)
{
  uniqstr name = muscle_name (variable, NULL);
  char *value = string_decode (name);
  if (!value)
    value = xstrdup ("");
  muscle_percent_define_use (variable);
  return value;
}

/* The kind of VARIABLE.  An error if undefined.  */
static muscle_kind
muscle_percent_define_get_kind (char const *variable)
{
  return muscle_kind_new (muscle_percent_define_get_raw (variable, "kind"));
}

/* Check the kind of VARIABLE.  An error if undefined.  */
static void
muscle_percent_define_check_kind (char const *variable, muscle_kind kind)
{
  if (muscle_percent_define_get_kind (variable) != kind)
    {
      location loc = muscle_percent_define_get_loc (variable);
      switch (kind)
        {
        case muscle_code:
          complain (&loc, Wdeprecated,
                    "%%define variable '%s' requires '{...}' values",
                    variable);
          break;
        case muscle_keyword:
          complain (&loc, Wdeprecated,
                    "%%define variable '%s' requires keyword values",
                    variable);
          break;
        case muscle_string:
          complain (&loc, Wdeprecated,
                    "%%define variable '%s' requires '\"...\"' values",
                    variable);
          break;
        }
    }
}


location
muscle_percent_define_get_loc (char const *variable)
{
  return location_decode (muscle_percent_define_get_raw (variable, "loc"));
}

char const *
muscle_percent_define_get_syncline (char const *variable)
{
  return muscle_percent_define_get_raw (variable, "syncline");
}

bool
muscle_percent_define_ifdef (char const *variable)
{
  if (muscle_find_const (muscle_name (variable, NULL)))
    {
      muscle_percent_define_use (variable);
      return true;
    }
  else
    return false;
}

bool
muscle_percent_define_flag_if (char const *variable)
{
  uniqstr invalid_boolean_name = muscle_name (variable, "invalid_boolean");
  bool result = false;

  if (muscle_percent_define_ifdef (variable))
    {
      char *value = muscle_percent_define_get (variable);
      muscle_percent_define_check_kind (variable, muscle_keyword);
      if (value[0] == '\0' || STREQ (value, "true"))
        result = true;
      else if (STREQ (value, "false"))
        result = false;
      else if (!muscle_find_const (invalid_boolean_name))
        {
          muscle_insert (invalid_boolean_name, "");
          location loc = muscle_percent_define_get_loc (variable);
          complain (&loc, complaint,
                    _("invalid value for %%define Boolean variable %s"),
                    quote (variable));
        }
      free (value);
    }
  else
    complain (NULL, fatal, _("%s: undefined %%define variable %s"),
              "muscle_percent_define_flag", quote (variable));

  return result;
}

void
muscle_percent_define_default (char const *variable, char const *value)
{
  uniqstr name = muscle_name (variable, NULL);
  if (!muscle_find_const (name))
    {
      MUSCLE_INSERT_STRING (name, value);
      MUSCLE_INSERT_STRING (muscle_name (variable, "kind"), "keyword");
      {
        uniqstr loc_name = muscle_name (variable, "loc");
        location loc;
        loc.start.file = loc.end.file = "<default value>";
        loc.start.line = loc.end.line = -1;
        loc.start.column = loc.end.column = -1;
        muscle_insert (loc_name, "");
        muscle_location_grow (loc_name, loc);
      }
      muscle_insert (muscle_name (variable, "syncline"), "");
    }
}

void
muscle_percent_define_check_values (char const * const *values)
{
  for (; *values; ++values)
    {
      char const * const *variablep = values;
      uniqstr name = muscle_name (*variablep, NULL);
      char *value = string_decode (name);
      muscle_percent_define_check_kind (*variablep, muscle_keyword);
      if (value)
        {
          for (++values; *values; ++values)
            {
              if (STREQ (value, *values))
                break;
            }
          if (!*values)
            {
              unsigned i = 0;
              location loc = muscle_percent_define_get_loc (*variablep);
              complain_indent (&loc, complaint, &i,
                               _("invalid value for %%define variable %s: %s"),
                               quote (*variablep), quote_n (1, value));
              i += SUB_INDENT;
              for (values = variablep + 1; *values; ++values)
                complain_indent (&loc, complaint | no_caret | silent, &i,
                                 _("accepted value: %s"), quote (*values));
            }
          else
            {
              while (*values)
                ++values;
            }
          free (value);
        }
      else
        complain (NULL, fatal, _("%s: undefined %%define variable %s"),
                  "muscle_percent_define_check_values", quote (*variablep));
    }
}

void
muscle_percent_code_grow (char const *qualifier, location qualifier_loc,
                          char const *code, location code_loc)
{
  char const *name = UNIQSTR_CONCAT ("percent_code(", qualifier, ")");
  muscle_code_grow (name, code, code_loc);
  muscle_user_name_list_grow ("percent_code_user_qualifiers", qualifier,
                               qualifier_loc);
}


/*------------------------------------------------.
| Output the definition of ENTRY as a m4_define.  |
`------------------------------------------------*/

static inline bool
muscle_m4_output (muscle_entry *entry, FILE *out)
{
  fprintf (out,
           "m4_define([b4_%s],\n"
           "[[%s]])\n\n\n", entry->key, entry->value);
  return true;
}

static bool
muscle_m4_output_processor (void *entry, void *out)
{
  return muscle_m4_output (entry, out);
}


void
muscles_m4_output (FILE *out)
{
  hash_do_for_each (muscle_table, muscle_m4_output_processor, out);
}
