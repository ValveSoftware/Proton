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

m4_pushdef([b4_copyright_years],
           [2002-2015])

# b4_position_define
# ------------------
# Define class position.
m4_define([b4_position_define],
[[  /// Abstract a position.
  class position
  {
  public:]m4_ifdef([b4_location_constructors], [[
    /// Construct a position.
    explicit position (]b4_percent_define_get([[filename_type]])[* f = YY_NULLPTR,
                       unsigned int l = ]b4_location_initial_line[u,
                       unsigned int c = ]b4_location_initial_column[u)
      : filename (f)
      , line (l)
      , column (c)
    {
    }

]])[
    /// Initialization.
    void initialize (]b4_percent_define_get([[filename_type]])[* fn = YY_NULLPTR,
                     unsigned int l = ]b4_location_initial_line[u,
                     unsigned int c = ]b4_location_initial_column[u)
    {
      filename = fn;
      line = l;
      column = c;
    }

    /** \name Line and Column related manipulators
     ** \{ */
    /// (line related) Advance to the COUNT next lines.
    void lines (int count = 1)
    {
      if (count)
        {
          column = ]b4_location_initial_column[u;
          line = add_ (line, count, ]b4_location_initial_line[);
        }
    }

    /// (column related) Advance to the COUNT next columns.
    void columns (int count = 1)
    {
      column = add_ (column, count, ]b4_location_initial_column[);
    }
    /** \} */

    /// File name to which this position refers.
    ]b4_percent_define_get([[filename_type]])[* filename;
    /// Current line number.
    unsigned int line;
    /// Current column number.
    unsigned int column;

  private:
    /// Compute max(min, lhs+rhs) (provided min <= lhs).
    static unsigned int add_ (unsigned int lhs, int rhs, unsigned int min)
    {
      return (0 < rhs || -static_cast<unsigned int>(rhs) < lhs
              ? rhs + lhs
              : min);
    }
  };

  /// Add \a width columns, in place.
  inline position&
  operator+= (position& res, int width)
  {
    res.columns (width);
    return res;
  }

  /// Add \a width columns.
  inline position
  operator+ (position res, int width)
  {
    return res += width;
  }

  /// Subtract \a width columns, in place.
  inline position&
  operator-= (position& res, int width)
  {
    return res += -width;
  }

  /// Subtract \a width columns.
  inline position
  operator- (position res, int width)
  {
    return res -= width;
  }
]b4_percent_define_flag_if([[define_location_comparison]], [[
  /// Compare two position objects.
  inline bool
  operator== (const position& pos1, const position& pos2)
  {
    return (pos1.line == pos2.line
            && pos1.column == pos2.column
            && (pos1.filename == pos2.filename
                || (pos1.filename && pos2.filename
                    && *pos1.filename == *pos2.filename)));
  }

  /// Compare two position objects.
  inline bool
  operator!= (const position& pos1, const position& pos2)
  {
    return !(pos1 == pos2);
  }
]])[
  /** \brief Intercept output stream redirection.
   ** \param ostr the destination output stream
   ** \param pos a reference to the position to redirect
   */
  template <typename YYChar>
  inline std::basic_ostream<YYChar>&
  operator<< (std::basic_ostream<YYChar>& ostr, const position& pos)
  {
    if (pos.filename)
      ostr << *pos.filename << ':';
    return ostr << pos.line << '.' << pos.column;
  }
]])


# b4_location_define
# ------------------
m4_define([b4_location_define],
[[  /// Abstract a location.
  class location
  {
  public:
]m4_ifdef([b4_location_constructors], [
    /// Construct a location from \a b to \a e.
    location (const position& b, const position& e)
      : begin (b)
      , end (e)
    {
    }

    /// Construct a 0-width location in \a p.
    explicit location (const position& p = position ())
      : begin (p)
      , end (p)
    {
    }

    /// Construct a 0-width location in \a f, \a l, \a c.
    explicit location (]b4_percent_define_get([[filename_type]])[* f,
                       unsigned int l = ]b4_location_initial_line[u,
                       unsigned int c = ]b4_location_initial_column[u)
      : begin (f, l, c)
      , end (f, l, c)
    {
    }

])[
    /// Initialization.
    void initialize (]b4_percent_define_get([[filename_type]])[* f = YY_NULLPTR,
                     unsigned int l = ]b4_location_initial_line[u,
                     unsigned int c = ]b4_location_initial_column[u)
    {
      begin.initialize (f, l, c);
      end = begin;
    }

    /** \name Line and Column related manipulators
     ** \{ */
  public:
    /// Reset initial location to final location.
    void step ()
    {
      begin = end;
    }

    /// Extend the current location to the COUNT next columns.
    void columns (int count = 1)
    {
      end += count;
    }

    /// Extend the current location to the COUNT next lines.
    void lines (int count = 1)
    {
      end.lines (count);
    }
    /** \} */


  public:
    /// Beginning of the located region.
    position begin;
    /// End of the located region.
    position end;
  };

  /// Join two locations, in place.
  inline location& operator+= (location& res, const location& end)
  {
    res.end = end.end;
    return res;
  }

  /// Join two locations.
  inline location operator+ (location res, const location& end)
  {
    return res += end;
  }

  /// Add \a width columns to the end position, in place.
  inline location& operator+= (location& res, int width)
  {
    res.columns (width);
    return res;
  }

  /// Add \a width columns to the end position.
  inline location operator+ (location res, int width)
  {
    return res += width;
  }

  /// Subtract \a width columns to the end position, in place.
  inline location& operator-= (location& res, int width)
  {
    return res += -width;
  }

  /// Subtract \a width columns to the end position.
  inline location operator- (location res, int width)
  {
    return res -= width;
  }
]b4_percent_define_flag_if([[define_location_comparison]], [[
  /// Compare two location objects.
  inline bool
  operator== (const location& loc1, const location& loc2)
  {
    return loc1.begin == loc2.begin && loc1.end == loc2.end;
  }

  /// Compare two location objects.
  inline bool
  operator!= (const location& loc1, const location& loc2)
  {
    return !(loc1 == loc2);
  }
]])[
  /** \brief Intercept output stream redirection.
   ** \param ostr the destination output stream
   ** \param loc a reference to the location to redirect
   **
   ** Avoid duplicate information.
   */
  template <typename YYChar>
  inline std::basic_ostream<YYChar>&
  operator<< (std::basic_ostream<YYChar>& ostr, const location& loc)
  {
    unsigned int end_col = 0 < loc.end.column ? loc.end.column - 1 : 0;
    ostr << loc.begin;
    if (loc.end.filename
        && (!loc.begin.filename
            || *loc.begin.filename != *loc.end.filename))
      ostr << '-' << loc.end.filename << ':' << loc.end.line << '.' << end_col;
    else if (loc.begin.line < loc.end.line)
      ostr << '-' << loc.end.line << '.' << end_col;
    else if (loc.begin.column < end_col)
      ostr << '-' << end_col;
    return ostr;
  }
]])


b4_defines_if([
b4_output_begin([b4_dir_prefix[]position.hh])
b4_copyright([Positions for Bison parsers in C++])[

/**
 ** \file ]b4_dir_prefix[position.hh
 ** Define the ]b4_namespace_ref[::position class.
 */

]b4_cpp_guard_open([b4_dir_prefix[]position.hh])[

# include <algorithm> // std::max
# include <iostream>
# include <string>

]b4_null_define[

]b4_namespace_open[
]b4_position_define[
]b4_namespace_close[
]b4_cpp_guard_close([b4_dir_prefix[]position.hh])
b4_output_end()


b4_output_begin([b4_dir_prefix[]location.hh])
b4_copyright([Locations for Bison parsers in C++])[

/**
 ** \file ]b4_dir_prefix[location.hh
 ** Define the ]b4_namespace_ref[::location class.
 */

]b4_cpp_guard_open([b4_dir_prefix[]location.hh])[

# include "position.hh"

]b4_namespace_open[
]b4_location_define[
]b4_namespace_close[
]b4_cpp_guard_close([b4_dir_prefix[]location.hh])
b4_output_end()
])


m4_popdef([b4_copyright_years])
