# C++ skeleton for Bison

# Copyright (C) 2002-2015 Free Software Foundation, Inc.

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.


## --------- ##
## variant.  ##
## --------- ##

# b4_symbol_variant(YYTYPE, YYVAL, ACTION, [ARGS])
# ------------------------------------------------
# Run some ACTION ("build", or "destroy") on YYVAL of symbol type
# YYTYPE.
m4_define([b4_symbol_variant],
[m4_pushdef([b4_dollar_dollar],
            [$2.$3< $][3 > (m4_shift3($@))])dnl
  switch ($1)
    {
b4_type_foreach([b4_type_action_])[]dnl
      default:
        break;
    }
m4_popdef([b4_dollar_dollar])dnl
])


# _b4_char_sizeof_counter
# -----------------------
# A counter used by _b4_char_sizeof_dummy to create fresh symbols.
m4_define([_b4_char_sizeof_counter],
[0])

# _b4_char_sizeof_dummy
# ---------------------
# At each call return a new C++ identifier.
m4_define([_b4_char_sizeof_dummy],
[m4_define([_b4_char_sizeof_counter], m4_incr(_b4_char_sizeof_counter))dnl
dummy[]_b4_char_sizeof_counter])


# b4_char_sizeof(SYMBOL-NUMS)
# ---------------------------
# To be mapped on the list of type names to produce:
#
#    char dummy1[sizeof(type_name_1)];
#    char dummy2[sizeof(type_name_2)];
#
# for defined type names.
m4_define([b4_char_sizeof],
[b4_symbol_if([$1], [has_type],
[
m4_map([      b4_symbol_tag_comment], [$@])dnl
      char _b4_char_sizeof_dummy@{sizeof(b4_symbol([$1], [type]))@};
])])


# b4_variant_includes
# -------------------
# The needed includes for variants support.
m4_define([b4_variant_includes],
[b4_parse_assert_if([[#include <typeinfo>]])[
#ifndef YYASSERT
# include <cassert>
# define YYASSERT assert
#endif
]])

# b4_variant_define
# -----------------
# Define "variant".
m4_define([b4_variant_define],
[[  /// A char[S] buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current state.
  template <size_t S>
  struct variant
  {
    /// Type of *this.
    typedef variant<S> self_type;

    /// Empty construction.
    variant ()]b4_parse_assert_if([
      : yytypeid_ (YY_NULLPTR)])[
    {}

    /// Construct and fill.
    template <typename T>
    variant (const T& t)]b4_parse_assert_if([
      : yytypeid_ (&typeid (T))])[
    {
      YYASSERT (sizeof (T) <= S);
      new (yyas_<T> ()) T (t);
    }

    /// Destruction, allowed only if empty.
    ~variant ()
    {]b4_parse_assert_if([
      YYASSERT (!yytypeid_);
    ])[}

    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    build ()
    {]b4_parse_assert_if([
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= S);
      yytypeid_ = & typeid (T);])[
      return *new (yyas_<T> ()) T;
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    build (const T& t)
    {]b4_parse_assert_if([
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= S);
      yytypeid_ = & typeid (T);])[
      return *new (yyas_<T> ()) T (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as ()
    {]b4_parse_assert_if([
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= S);])[
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const
    {]b4_parse_assert_if([
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= S);])[
      return *yyas_<T> ();
    }

    /// Swap the content with \a other, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsability.
    /// Swapping between built and (possibly) non-built is done with
    /// variant::move ().
    template <typename T>
    void
    swap (self_type& other)
    {]b4_parse_assert_if([
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == *other.yytypeid_);])[
      std::swap (as<T> (), other.as<T> ());
    }

    /// Move the content of \a other to this.
    ///
    /// Destroys \a other.
    template <typename T>
    void
    move (self_type& other)
    {
      build<T> ();
      swap<T> (other);
      other.destroy<T> ();
    }

    /// Copy the content of \a other to this.
    template <typename T>
    void
    copy (const self_type& other)
    {
      build<T> (other.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();]b4_parse_assert_if([
      yytypeid_ = YY_NULLPTR;])[
    }

  private:
    /// Prohibit blind copies.
    self_type& operator=(const self_type&);
    variant (const self_type&);

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ ()
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[S];
    } yybuffer_;]b4_parse_assert_if([

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;])[
  };
]])


## -------------------------- ##
## Adjustments for variants.  ##
## -------------------------- ##


# b4_value_type_declare
# ---------------------
# Declare semantic_type.
m4_define([b4_value_type_declare],
[[    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {]b4_type_foreach([b4_char_sizeof])[};

    /// Symbol semantic values.
    typedef variant<sizeof(union_type)> semantic_type;][]dnl
])


# How the semantic value is extracted when using variants.

# b4_symbol_value(VAL, [TYPE])
# ----------------------------
m4_define([b4_symbol_value],
[m4_ifval([$2],
          [$1.as< $2 > ()],
          [$1])])

# b4_symbol_value_template(VAL, [TYPE])
# -------------------------------------
# Same as b4_symbol_value, but used in a template method.
m4_define([b4_symbol_value_template],
[m4_ifval([$2],
          [$1.template as< $2 > ()],
          [$1])])



## ------------- ##
## make_SYMBOL.  ##
## ------------- ##


# b4_symbol_constructor_declare_(SYMBOL-NUMBER)
# ---------------------------------------------
# Declare the overloaded version of make_symbol for the (common) type of
# these SYMBOL-NUMBERS.  Use at class-level.
m4_define([b4_symbol_constructor_declare_],
[b4_symbol_if([$1], [is_token], [b4_symbol_if([$1], [has_id],
[    static inline
    symbol_type
    make_[]b4_symbol_([$1], [id]) (dnl
b4_join(b4_symbol_if([$1], [has_type],
                     [const b4_symbol([$1], [type])& v]),
        b4_locations_if([const location_type& l])));

])])])


# b4_symbol_constructor_declare
# -----------------------------
# Declare symbol constructors for all the value types.
# Use at class-level.
m4_define([b4_symbol_constructor_declare],
[    // Symbol constructors declarations.
b4_symbol_foreach([b4_symbol_constructor_declare_])])



# b4_symbol_constructor_define_(SYMBOL-NUMBER)
# --------------------------------------------
# Define symbol constructor for this SYMBOL-NUMBER.
m4_define([b4_symbol_constructor_define_],
[b4_symbol_if([$1], [is_token], [b4_symbol_if([$1], [has_id],
[  b4_parser_class_name::symbol_type
  b4_parser_class_name::make_[]b4_symbol_([$1], [id]) (dnl
b4_join(b4_symbol_if([$1], [has_type],
                     [const b4_symbol([$1], [type])& v]),
        b4_locations_if([const location_type& l])))
  {
    return symbol_type (b4_join([token::b4_symbol([$1], [id])],
                                b4_symbol_if([$1], [has_type], [v]),
                                b4_locations_if([l])));
  }

])])])


# b4_basic_symbol_constructor_declare
# -----------------------------------
# Generate a constructor declaration for basic_symbol from given type.
m4_define([b4_basic_symbol_constructor_declare],
[[
  basic_symbol (]b4_join(
          [typename Base::kind_type t],
          b4_symbol_if([$1], [has_type], const b4_symbol([$1], [type])[ v]),
          b4_locations_if([const location_type& l]))[);
]])

# b4_basic_symbol_constructor_define
# ----------------------------------
# Generate a constructor implementation for basic_symbol from given type.
m4_define([b4_basic_symbol_constructor_define],
[[
  template <typename Base>
  ]b4_parser_class_name[::basic_symbol<Base>::basic_symbol (]b4_join(
          [typename Base::kind_type t],
          b4_symbol_if([$1], [has_type], const b4_symbol([$1], [type])[ v]),
          b4_locations_if([const location_type& l]))[)
    : Base (t)
    , value (]b4_symbol_if([$1], [has_type], [v])[)]b4_locations_if([
    , location (l)])[
  {}
]])

# b4_symbol_constructor_define
# ----------------------------
# Define the overloaded versions of make_symbol for all the value types.
m4_define([b4_symbol_constructor_define],
[  // Implementation of make_symbol for each symbol type.
b4_symbol_foreach([b4_symbol_constructor_define_])])
