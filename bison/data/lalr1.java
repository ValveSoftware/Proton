# Java skeleton for Bison -*- autoconf -*-

# Copyright (C) 2007-2015 Free Software Foundation, Inc.

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

m4_include(b4_pkgdatadir/[java.m4])

b4_defines_if([b4_fatal([%s: %%defines does not make sense in Java],
              [b4_skeleton])])

# We do not depend on %debug in Java, but pacify warnings about
# non-used flags.
b4_parse_trace_if([0], [0])

m4_define([b4_symbol_no_destructor_assert],
[b4_symbol_if([$1], [has_destructor],
              [b4_fatal([%s: %s: %%destructor does not make sense in Java],
                        [b4_skeleton],
                        [b4_symbol_action_location([$1], [destructor])])])])
b4_symbol_foreach([b4_symbol_no_destructor_assert])

# Setup some macros for api.push-pull.
b4_percent_define_default([[api.push-pull]], [[pull]])
b4_percent_define_check_values([[[[api.push-pull]],
                                 [[pull]], [[push]], [[both]]]])

# Define m4 conditional macros that encode the value
# of the api.push-pull flag.
b4_define_flag_if([pull]) m4_define([b4_pull_flag], [[1]])
b4_define_flag_if([push]) m4_define([b4_push_flag], [[1]])
m4_case(b4_percent_define_get([[api.push-pull]]),
        [pull], [m4_define([b4_push_flag], [[0]])],
        [push], [m4_define([b4_pull_flag], [[0]])])

# Define a macro to be true when api.push-pull has the value "both".
m4_define([b4_both_if],[b4_push_if([b4_pull_if([$1],[$2])],[$2])])

# Handle BISON_USE_PUSH_FOR_PULL for the test suite.  So that push parsing
# tests function as written, do not let BISON_USE_PUSH_FOR_PULL modify the
# behavior of Bison at all when push parsing is already requested.
b4_define_flag_if([use_push_for_pull])
b4_use_push_for_pull_if([
  b4_push_if([m4_define([b4_use_push_for_pull_flag], [[0]])],
             [m4_define([b4_push_flag], [[1]])])])

# Define a macro to encapsulate the parse state variables.
# This allows them to be defined either in parse() when doing
# pull parsing, or as class instance variable when doing push parsing.
m4_define([b4_define_state],[[
    /* Lookahead and lookahead in internal form.  */
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn = 0;
    int yylen = 0;
    int yystate = 0;
    YYStack yystack = new YYStack ();
    int label = YYNEWSTATE;

    /* Error handling.  */
    int yynerrs_ = 0;
    ]b4_locations_if([/* The location where the error started.  */
    b4_location_type yyerrloc = null;

    /* Location. */
    b4_location_type yylloc = new b4_location_type (null, null);])[

    /* Semantic value of the lookahead.  */
    ]b4_yystype[ yylval = null;
]])

b4_output_begin([b4_parser_file_name])
b4_copyright([Skeleton implementation for Bison LALR(1) parsers in Java],
             [2007-2015])

b4_percent_define_ifdef([package], [package b4_percent_define_get([package]);
])[/* First part of user declarations.  */
]b4_user_pre_prologue
b4_user_post_prologue
b4_percent_code_get([[imports]])
[/**
 * A Bison parser, automatically generated from <tt>]m4_bpatsubst(b4_file_name, [^"\(.*\)"$], [\1])[</tt>.
 *
 * @@author LALR (1) parser skeleton written by Paolo Bonzini.
 */
]b4_percent_define_get3([annotations], [], [ ])dnl
b4_public_if([public ])dnl
b4_abstract_if([abstract ])dnl
b4_final_if([final ])dnl
b4_strictfp_if([strictfp ])dnl
[class ]b4_parser_class_name[]dnl
b4_percent_define_get3([extends], [ extends ])dnl
b4_percent_define_get3([implements], [ implements ])[
{
  ]b4_identification[
]b4_error_verbose_if([[
  /**
   * True if verbose error messages are enabled.
   */
  private boolean yyErrorVerbose = true;

  /**
   * Return whether verbose error messages are enabled.
   */
  public final boolean getErrorVerbose() { return yyErrorVerbose; }

  /**
   * Set the verbosity of error messages.
   * @@param verbose True to request verbose error messages.
   */
  public final void setErrorVerbose(boolean verbose)
  { yyErrorVerbose = verbose; }
]])

b4_locations_if([[
  /**
   * A class defining a pair of positions.  Positions, defined by the
   * <code>]b4_position_type[</code> class, denote a point in the input.
   * Locations represent a part of the input through the beginning
   * and ending positions.
   */
  public class ]b4_location_type[ {
    /**
     * The first, inclusive, position in the range.
     */
    public ]b4_position_type[ begin;

    /**
     * The first position beyond the range.
     */
    public ]b4_position_type[ end;

    /**
     * Create a <code>]b4_location_type[</code> denoting an empty range located at
     * a given point.
     * @@param loc The position at which the range is anchored.
     */
    public ]b4_location_type[ (]b4_position_type[ loc) {
      this.begin = this.end = loc;
    }

    /**
     * Create a <code>]b4_location_type[</code> from the endpoints of the range.
     * @@param begin The first position included in the range.
     * @@param end   The first position beyond the range.
     */
    public ]b4_location_type[ (]b4_position_type[ begin, ]b4_position_type[ end) {
      this.begin = begin;
      this.end = end;
    }

    /**
     * Print a representation of the location.  For this to be correct,
     * <code>]b4_position_type[</code> should override the <code>equals</code>
     * method.
     */
    public String toString () {
      if (begin.equals (end))
        return begin.toString ();
      else
        return begin.toString () + "-" + end.toString ();
    }
  }

]])

  b4_locations_if([[
  private ]b4_location_type[ yylloc (YYStack rhs, int n)
  {
    if (n > 0)
      return new ]b4_location_type[ (rhs.locationAt (n-1).begin, rhs.locationAt (0).end);
    else
      return new ]b4_location_type[ (rhs.locationAt (0).end);
  }]])[

  /**
   * Communication interface between the scanner and the Bison-generated
   * parser <tt>]b4_parser_class_name[</tt>.
   */
  public interface Lexer {
    /** Token returned by the scanner to signal the end of its input.  */
    public static final int EOF = 0;

]b4_token_enums[

    ]b4_locations_if([[/**
     * Method to retrieve the beginning position of the last scanned token.
     * @@return the position at which the last scanned token starts.
     */
    ]b4_position_type[ getStartPos ();

    /**
     * Method to retrieve the ending position of the last scanned token.
     * @@return the first position beyond the last scanned token.
     */
    ]b4_position_type[ getEndPos ();]])[

    /**
     * Method to retrieve the semantic value of the last scanned token.
     * @@return the semantic value of the last scanned token.
     */
    ]b4_yystype[ getLVal ();

    /**
     * Entry point for the scanner.  Returns the token identifier corresponding
     * to the next token and prepares to return the semantic value
     * ]b4_locations_if([and beginning/ending positions ])[of the token.
     * @@return the token identifier corresponding to the next token.
     */
    int yylex () ]b4_maybe_throws([b4_lex_throws])[;

    /**
     * Entry point for error reporting.  Emits an error
     * ]b4_locations_if([referring to the given location ])[in a user-defined way.
     *
     * ]b4_locations_if([[@@param loc The location of the element to which the
     *                error message is related]])[
     * @@param msg The string for the error message.
     */
     void yyerror (]b4_locations_if([b4_location_type[ loc, ]])[String msg);]
  }

  b4_lexer_if([[private class YYLexer implements Lexer {
]b4_percent_code_get([[lexer]])[
  }

  ]])[/**
   * The object doing lexical analysis for us.
   */
  private Lexer yylexer;
  ]
  b4_parse_param_vars

b4_lexer_if([[
  /**
   * Instantiates the Bison-generated parser.
   */
  public ]b4_parser_class_name (b4_parse_param_decl([b4_lex_param_decl])[) ]b4_maybe_throws([b4_init_throws])[
  {
    ]b4_percent_code_get([[init]])[
    this.yylexer = new YYLexer(]b4_lex_param_call[);
    ]b4_parse_param_cons[
  }
]])

  /**
   * Instantiates the Bison-generated parser.
   * @@param yylexer The scanner that will supply tokens to the parser.
   */
  b4_lexer_if([[protected]], [[public]]) b4_parser_class_name[ (]b4_parse_param_decl([[Lexer yylexer]])[) ]b4_maybe_throws([b4_init_throws])[
  {
    ]b4_percent_code_get([[init]])[
    this.yylexer = yylexer;
    ]b4_parse_param_cons[
  }

  private java.io.PrintStream yyDebugStream = System.err;

  /**
   * Return the <tt>PrintStream</tt> on which the debugging output is
   * printed.
   */
  public final java.io.PrintStream getDebugStream () { return yyDebugStream; }

  /**
   * Set the <tt>PrintStream</tt> on which the debug output is printed.
   * @@param s The stream that is used for debugging output.
   */
  public final void setDebugStream(java.io.PrintStream s) { yyDebugStream = s; }

  private int yydebug = 0;

  /**
   * Answer the verbosity of the debugging output; 0 means that all kinds of
   * output from the parser are suppressed.
   */
  public final int getDebugLevel() { return yydebug; }

  /**
   * Set the verbosity of the debugging output; 0 means that all kinds of
   * output from the parser are suppressed.
   * @@param level The verbosity level for debugging output.
   */
  public final void setDebugLevel(int level) { yydebug = level; }

  /**
   * Print an error message via the lexer.
   *]b4_locations_if([[ Use a <code>null</code> location.]])[
   * @@param msg The error message.
   */
  public final void yyerror (String msg)
  {
    yylexer.yyerror (]b4_locations_if([[(]b4_location_type[)null, ]])[msg);
  }
]b4_locations_if([[
  /**
   * Print an error message via the lexer.
   * @@param loc The location associated with the message.
   * @@param msg The error message.
   */
  public final void yyerror (]b4_location_type[ loc, String msg)
  {
    yylexer.yyerror (loc, msg);
  }

  /**
   * Print an error message via the lexer.
   * @@param pos The position associated with the message.
   * @@param msg The error message.
   */
  public final void yyerror (]b4_position_type[ pos, String msg)
  {
    yylexer.yyerror (new ]b4_location_type[ (pos), msg);
  }]])

  [protected final void yycdebug (String s) {
    if (yydebug > 0)
      yyDebugStream.println (s);
  }

  private final class YYStack {
    private int[] stateStack = new int[16];
    ]b4_locations_if([[private ]b4_location_type[[] locStack = new ]b4_location_type[[16];]])[
    private ]b4_yystype[[] valueStack = new ]b4_yystype[[16];

    public int size = 16;
    public int height = -1;

    public final void push (int state, ]b4_yystype[ value]dnl
                            b4_locations_if([, ]b4_location_type[ loc])[) {
      height++;
      if (size == height)
        {
          int[] newStateStack = new int[size * 2];
          System.arraycopy (stateStack, 0, newStateStack, 0, height);
          stateStack = newStateStack;
          ]b4_locations_if([[
          ]b4_location_type[[] newLocStack = new ]b4_location_type[[size * 2];
          System.arraycopy (locStack, 0, newLocStack, 0, height);
          locStack = newLocStack;]])

          b4_yystype[[] newValueStack = new ]b4_yystype[[size * 2];
          System.arraycopy (valueStack, 0, newValueStack, 0, height);
          valueStack = newValueStack;

          size *= 2;
        }

      stateStack[height] = state;
      ]b4_locations_if([[locStack[height] = loc;]])[
      valueStack[height] = value;
    }

    public final void pop () {
      pop (1);
    }

    public final void pop (int num) {
      // Avoid memory leaks... garbage collection is a white lie!
      if (num > 0) {
        java.util.Arrays.fill (valueStack, height - num + 1, height + 1, null);
        ]b4_locations_if([[java.util.Arrays.fill (locStack, height - num + 1, height + 1, null);]])[
      }
      height -= num;
    }

    public final int stateAt (int i) {
      return stateStack[height - i];
    }

    ]b4_locations_if([[public final ]b4_location_type[ locationAt (int i) {
      return locStack[height - i];
    }

    ]])[public final ]b4_yystype[ valueAt (int i) {
      return valueStack[height - i];
    }

    // Print the state stack on the debug stream.
    public void print (java.io.PrintStream out)
    {
      out.print ("Stack now");

      for (int i = 0; i <= height; i++)
        {
          out.print (' ');
          out.print (stateStack[i]);
        }
      out.println ();
    }
  }

  /**
   * Returned by a Bison action in order to stop the parsing process and
   * return success (<tt>true</tt>).
   */
  public static final int YYACCEPT = 0;

  /**
   * Returned by a Bison action in order to stop the parsing process and
   * return failure (<tt>false</tt>).
   */
  public static final int YYABORT = 1;

]b4_push_if([
  /**
   * Returned by a Bison action in order to request a new token.
   */
  public static final int YYPUSH_MORE = 4;])[

  /**
   * Returned by a Bison action in order to start error recovery without
   * printing an error message.
   */
  public static final int YYERROR = 2;

  /**
   * Internal return codes that are not supported for user semantic
   * actions.
   */
  private static final int YYERRLAB = 3;
  private static final int YYNEWSTATE = 4;
  private static final int YYDEFAULT = 5;
  private static final int YYREDUCE = 6;
  private static final int YYERRLAB1 = 7;
  private static final int YYRETURN = 8;
]b4_push_if([[  private static final int YYGETTOKEN = 9; /* Signify that a new token is expected when doing push-parsing.  */]])[

  private int yyerrstatus_ = 0;

]b4_push_if([dnl
b4_define_state])[
  /**
   * Return whether error recovery is being done.  In this state, the parser
   * reads token until it reaches a known state, and then restarts normal
   * operation.
   */
  public final boolean recovering ()
  {
    return yyerrstatus_ == 0;
  }

  /** Compute post-reduction state.
   * @@param yystate   the current state
   * @@param yysym     the nonterminal to push on the stack
   */
  private int yy_lr_goto_state_ (int yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  private int yyaction (int yyn, YYStack yystack, int yylen) ]b4_maybe_throws([b4_throws])[
  {
    ]b4_yystype[ yyval;
    ]b4_locations_if([b4_location_type[ yyloc = yylloc (yystack, yylen);]])[

    /* If YYLEN is nonzero, implement the default value of the action:
       '$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen > 0)
      yyval = yystack.valueAt (yylen - 1);
    else
      yyval = yystack.valueAt (0);

    yy_reduce_print (yyn, yystack);

    switch (yyn)
      {
        ]b4_user_actions[
        default: break;
      }

    yy_symbol_print ("-> $$ =", yyr1_[yyn], yyval]b4_locations_if([, yyloc])[);

    yystack.pop (yylen);
    yylen = 0;

    /* Shift the result of the reduction.  */
    int yystate = yy_lr_goto_state_ (yystack.stateAt (0), yyr1_[yyn]);
    yystack.push (yystate, yyval]b4_locations_if([, yyloc])[);
    return YYNEWSTATE;
  }

]b4_error_verbose_if([[
  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  private final String yytnamerr_ (String yystr)
  {
    if (yystr.charAt (0) == '"')
      {
        StringBuffer yyr = new StringBuffer ();
        strip_quotes: for (int i = 1; i < yystr.length (); i++)
          switch (yystr.charAt (i))
            {
            case '\'':
            case ',':
              break strip_quotes;

            case '\\':
              if (yystr.charAt(++i) != '\\')
                break strip_quotes;
              /* Fall through.  */
            default:
              yyr.append (yystr.charAt (i));
              break;

            case '"':
              return yyr.toString ();
            }
      }
    else if (yystr.equals ("$end"))
      return "end of input";

    return yystr;
  }
]])[

  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  private void yy_symbol_print (String s, int yytype,
                                 ]b4_yystype[ yyvaluep]dnl
                                 b4_locations_if([, Object yylocationp])[)
  {
    if (yydebug > 0)
    yycdebug (s + (yytype < yyntokens_ ? " token " : " nterm ")
              + yytname_[yytype] + " ("]b4_locations_if([
              + yylocationp + ": "])[
              + (yyvaluep == null ? "(null)" : yyvaluep.toString ()) + ")");
  }

]b4_push_if([],[[
  /**
   * Parse input from the scanner that was specified at object construction
   * time.  Return whether the end of the input was reached successfully.
   *
   * @@return <tt>true</tt> if the parsing succeeds.  Note that this does not
   *          imply that there were no syntax errors.
   */
   public boolean parse () ]b4_maybe_throws([b4_list2([b4_lex_throws], [b4_throws])])[]])[
]b4_push_if([
  /**
   * Push Parse input from external lexer
   *
   * @@param yylextoken current token
   * @@param yylexval current lval
]b4_locations_if([   * @@param yylexloc current position])[
   *
   * @@return <tt>YYACCEPT, YYABORT, YYPUSH_MORE</tt>
   */
  public int push_parse (int yylextoken, b4_yystype yylexval[]b4_locations_if([, b4_location_type yylexloc]))
      b4_maybe_throws([b4_list2([b4_lex_throws], [b4_throws])])])[
  {
    ]b4_locations_if([/* @@$.  */
    b4_location_type yyloc;])[
]b4_push_if([],[[
]b4_define_state[
    yycdebug ("Starting parse\n");
    yyerrstatus_ = 0;

    /* Initialize the stack.  */
    yystack.push (yystate, yylval ]b4_locations_if([, yylloc])[);
]m4_ifdef([b4_initial_action], [
b4_dollar_pushdef([yylval], [], [yylloc])dnl
    /* User initialization code.  */
    b4_user_initial_action
b4_dollar_popdef[]dnl
])[
]])[
]b4_push_if([[
    if (!this.push_parse_initialized)
      {
        push_parse_initialize ();
]m4_ifdef([b4_initial_action], [
b4_dollar_pushdef([yylval], [], [yylloc])dnl
    /* User initialization code.  */
    b4_user_initial_action
b4_dollar_popdef[]dnl
])[
        yycdebug ("Starting parse\n");
        yyerrstatus_ = 0;
      } else
        label = YYGETTOKEN;

    boolean push_token_consumed = true;
]])[
    for (;;)
      switch (label)
      {
        /* New state.  Unlike in the C/C++ skeletons, the state is already
           pushed when we come here.  */
      case YYNEWSTATE:
        yycdebug ("Entering state " + yystate + "\n");
        if (yydebug > 0)
          yystack.print (yyDebugStream);

        /* Accept?  */
        if (yystate == yyfinal_)
          ]b4_push_if([{label = YYACCEPT; break;}],
                      [return true;])[

        /* Take a decision.  First try without lookahead.  */
        yyn = yypact_[yystate];
        if (yy_pact_value_is_default_ (yyn))
          {
            label = YYDEFAULT;
            break;
          }
]b4_push_if([        /* Fall Through */

      case YYGETTOKEN:])[
        /* Read a lookahead token.  */
        if (yychar == yyempty_)
          {
]b4_push_if([[
            if (!push_token_consumed)
              return YYPUSH_MORE;
            yycdebug ("Reading a token: ");
            yychar = yylextoken;
            yylval = yylexval;]b4_locations_if([
            yylloc = yylexloc;])[
            push_token_consumed = false;]])[
]b4_push_if([],[[
            yycdebug ("Reading a token: ");
            yychar = yylexer.yylex ();
            yylval = yylexer.getLVal ();]b4_locations_if([
            yylloc = new b4_location_type (yylexer.getStartPos (),
                            yylexer.getEndPos ());])[
]])[
          }

        /* Convert token to internal form.  */
        if (yychar <= Lexer.EOF)
          {
            yychar = yytoken = Lexer.EOF;
            yycdebug ("Now at end of input.\n");
          }
        else
          {
            yytoken = yytranslate_ (yychar);
            yy_symbol_print ("Next token is", yytoken,
                             yylval]b4_locations_if([, yylloc])[);
          }

        /* If the proper action on seeing token YYTOKEN is to reduce or to
           detect an error, take that action.  */
        yyn += yytoken;
        if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
          label = YYDEFAULT;

        /* <= 0 means reduce or error.  */
        else if ((yyn = yytable_[yyn]) <= 0)
          {
            if (yy_table_value_is_error_ (yyn))
              label = YYERRLAB;
            else
              {
                yyn = -yyn;
                label = YYREDUCE;
              }
          }

        else
          {
            /* Shift the lookahead token.  */
            yy_symbol_print ("Shifting", yytoken,
                             yylval]b4_locations_if([, yylloc])[);

            /* Discard the token being shifted.  */
            yychar = yyempty_;

            /* Count tokens shifted since error; after three, turn off error
               status.  */
            if (yyerrstatus_ > 0)
              --yyerrstatus_;

            yystate = yyn;
            yystack.push (yystate, yylval]b4_locations_if([, yylloc])[);
            label = YYNEWSTATE;
          }
        break;

      /*-----------------------------------------------------------.
      | yydefault -- do the default action for the current state.  |
      `-----------------------------------------------------------*/
      case YYDEFAULT:
        yyn = yydefact_[yystate];
        if (yyn == 0)
          label = YYERRLAB;
        else
          label = YYREDUCE;
        break;

      /*-----------------------------.
      | yyreduce -- Do a reduction.  |
      `-----------------------------*/
      case YYREDUCE:
        yylen = yyr2_[yyn];
        label = yyaction (yyn, yystack, yylen);
        yystate = yystack.stateAt (0);
        break;

      /*------------------------------------.
      | yyerrlab -- here on detecting error |
      `------------------------------------*/
      case YYERRLAB:
        /* If not already recovering from an error, report this error.  */
        if (yyerrstatus_ == 0)
          {
            ++yynerrs_;
            if (yychar == yyempty_)
              yytoken = yyempty_;
            yyerror (]b4_locations_if([yylloc, ])[yysyntax_error (yystate, yytoken));
          }

        ]b4_locations_if([yyerrloc = yylloc;])[
        if (yyerrstatus_ == 3)
          {
        /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

        if (yychar <= Lexer.EOF)
          {
          /* Return failure if at end of input.  */
          if (yychar == Lexer.EOF)
            ]b4_push_if([{label = YYABORT; break;}],[return false;])[
          }
        else
            yychar = yyempty_;
          }

        /* Else will try to reuse lookahead token after shifting the error
           token.  */
        label = YYERRLAB1;
        break;

      /*-------------------------------------------------.
      | errorlab -- error raised explicitly by YYERROR.  |
      `-------------------------------------------------*/
      case YYERROR:

        ]b4_locations_if([yyerrloc = yystack.locationAt (yylen - 1);])[
        /* Do not reclaim the symbols of the rule which action triggered
           this YYERROR.  */
        yystack.pop (yylen);
        yylen = 0;
        yystate = yystack.stateAt (0);
        label = YYERRLAB1;
        break;

      /*-------------------------------------------------------------.
      | yyerrlab1 -- common code for both syntax error and YYERROR.  |
      `-------------------------------------------------------------*/
      case YYERRLAB1:
        yyerrstatus_ = 3;       /* Each real token shifted decrements this.  */

        for (;;)
          {
            yyn = yypact_[yystate];
            if (!yy_pact_value_is_default_ (yyn))
              {
                yyn += yyterror_;
                if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                  {
                    yyn = yytable_[yyn];
                    if (0 < yyn)
                      break;
                  }
              }

            /* Pop the current state because it cannot handle the
             * error token.  */
            if (yystack.height == 0)
              ]b4_push_if([{label = YYABORT; break;}],[return false;])[

            ]b4_locations_if([yyerrloc = yystack.locationAt (0);])[
            yystack.pop ();
            yystate = yystack.stateAt (0);
            if (yydebug > 0)
              yystack.print (yyDebugStream);
          }

        if (label == YYABORT)
            /* Leave the switch.  */
            break;

]b4_locations_if([
        /* Muck with the stack to setup for yylloc.  */
        yystack.push (0, null, yylloc);
        yystack.push (0, null, yyerrloc);
        yyloc = yylloc (yystack, 2);
        yystack.pop (2);])[

        /* Shift the error token.  */
        yy_symbol_print ("Shifting", yystos_[yyn],
                         yylval]b4_locations_if([, yyloc])[);

        yystate = yyn;
        yystack.push (yyn, yylval]b4_locations_if([, yyloc])[);
        label = YYNEWSTATE;
        break;

        /* Accept.  */
      case YYACCEPT:
        ]b4_push_if([this.push_parse_initialized = false; return YYACCEPT;],
                    [return true;])[

        /* Abort.  */
      case YYABORT:
        ]b4_push_if([this.push_parse_initialized = false; return YYABORT;],
                    [return false;])[
      }
}
]b4_push_if([[
  boolean push_parse_initialized = false;

    /**
     * (Re-)Initialize the state of the push parser.
     */
  public void push_parse_initialize()
  {
    /* Lookahead and lookahead in internal form.  */
    this.yychar = yyempty_;
    this.yytoken = 0;

    /* State.  */
    this.yyn = 0;
    this.yylen = 0;
    this.yystate = 0;
    this.yystack = new YYStack ();
    this.label = YYNEWSTATE;

    /* Error handling.  */
    this.yynerrs_ = 0;
    ]b4_locations_if([/* The location where the error started.  */
    this.yyerrloc = null;
    this.yylloc = new b4_location_type (null, null);])[

    /* Semantic value of the lookahead.  */
    this.yylval = null;

    yystack.push (this.yystate, this.yylval]b4_locations_if([, this.yylloc])[);

    this.push_parse_initialized = true;

  }
]b4_locations_if([
  /**
   * Push parse given input from an external lexer.
   *
   * @@param yylextoken current token
   * @@param yylexval current lval
   * @@param yyylexpos current position
   *
   * @@return <tt>YYACCEPT, YYABORT, YYPUSH_MORE</tt>
   */
  public int push_parse (int yylextoken, b4_yystype yylexval, b4_position_type yylexpos)
      b4_maybe_throws([b4_list2([b4_lex_throws], [b4_throws])])
  {
    return push_parse (yylextoken, yylexval, new b4_location_type (yylexpos));
  }
])[]])

b4_both_if([[
  /**
   * Parse input from the scanner that was specified at object construction
   * time.  Return whether the end of the input was reached successfully.
   * This version of parse () is defined only when api.push-push=both.
   *
   * @@return <tt>true</tt> if the parsing succeeds.  Note that this does not
   *          imply that there were no syntax errors.
   */
   public boolean parse () ]b4_maybe_throws([b4_list2([b4_lex_throws], [b4_throws])])[
   {
      if (yylexer == null)
        throw new NullPointerException("Null Lexer");
      int status;
      do {
        int token = yylexer.yylex();
        ]b4_yystype[ lval = yylexer.getLVal();
]b4_locations_if([dnl
        b4_location_type yyloc = new b4_location_type (yylexer.getStartPos (),
                                              yylexer.getEndPos ());])[
        ]b4_locations_if([status = push_parse(token,lval,yyloc);],[
        status = push_parse(token,lval);])[
      } while (status == YYPUSH_MORE);
      return (status == YYACCEPT);
  }
]])[

  // Generate an error message.
  private String yysyntax_error (int yystate, int tok)
  {]b4_error_verbose_if([[
    if (yyErrorVerbose)
      {
        /* There are many possibilities here to consider:
           - If this state is a consistent state with a default action,
             then the only way this function was invoked is if the
             default action is an error action.  In that case, don't
             check for expected tokens because there are none.
           - The only way there can be no lookahead present (in tok) is
             if this state is a consistent state with a default action.
             Thus, detecting the absence of a lookahead is sufficient to
             determine that there is no unexpected or expected token to
             report.  In that case, just report a simple "syntax error".
           - Don't assume there isn't a lookahead just because this
             state is a consistent state with a default action.  There
             might have been a previous inconsistent state, consistent
             state with a non-default action, or user semantic action
             that manipulated yychar.  (However, yychar is currently out
             of scope during semantic actions.)
           - Of course, the expected token list depends on states to
             have correct lookahead information, and it depends on the
             parser not to perform extra reductions after fetching a
             lookahead from the scanner and before detecting a syntax
             error.  Thus, state merging (from LALR or IELR) and default
             reductions corrupt the expected token list.  However, the
             list is correct for canonical LR with one exception: it
             will still contain any token that will not be accepted due
             to an error action in a later state.
        */
        if (tok != yyempty_)
          {
            /* FIXME: This method of building the message is not compatible
               with internationalization.  */
            StringBuffer res =
              new StringBuffer ("syntax error, unexpected ");
            res.append (yytnamerr_ (yytname_[tok]));
            int yyn = yypact_[yystate];
            if (!yy_pact_value_is_default_ (yyn))
              {
                /* Start YYX at -YYN if negative to avoid negative
                   indexes in YYCHECK.  In other words, skip the first
                   -YYN actions for this state because they are default
                   actions.  */
                int yyxbegin = yyn < 0 ? -yyn : 0;
                /* Stay within bounds of both yycheck and yytname.  */
                int yychecklim = yylast_ - yyn + 1;
                int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
                int count = 0;
                for (int x = yyxbegin; x < yyxend; ++x)
                  if (yycheck_[x + yyn] == x && x != yyterror_
                      && !yy_table_value_is_error_ (yytable_[x + yyn]))
                    ++count;
                if (count < 5)
                  {
                    count = 0;
                    for (int x = yyxbegin; x < yyxend; ++x)
                      if (yycheck_[x + yyn] == x && x != yyterror_
                          && !yy_table_value_is_error_ (yytable_[x + yyn]))
                        {
                          res.append (count++ == 0 ? ", expecting " : " or ");
                          res.append (yytnamerr_ (yytname_[x]));
                        }
                  }
              }
            return res.toString ();
          }
      }
]])[
    return "syntax error";
  }

  /**
   * Whether the given <code>yypact_</code> value indicates a defaulted state.
   * @@param yyvalue   the value to check
   */
  private static boolean yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  /**
   * Whether the given <code>yytable_</code>
   * value indicates a syntax error.
   * @@param yyvalue the value to check
   */
  private static boolean yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  private static final ]b4_int_type_for([b4_pact])[ yypact_ninf_ = ]b4_pact_ninf[;
  private static final ]b4_int_type_for([b4_table])[ yytable_ninf_ = ]b4_table_ninf[;

  ]b4_parser_tables_define[
  ]b4_integral_parser_table_define([token_number], [b4_toknum],
     [[YYTOKEN_NUMBER[YYLEX-NUM] -- Internal symbol number corresponding
   to YYLEX-NUM.]])[

  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  ]b4_typed_parser_table_define([String], [tname], [b4_tname])[

  ]b4_integral_parser_table_define([rline], [b4_rline],
  [[YYRLINE[YYN] -- Source line where rule number YYN was defined.]])[


  // Report on the debug stream that the rule yyrule is going to be reduced.
  private void yy_reduce_print (int yyrule, YYStack yystack)
  {
    if (yydebug == 0)
      return;

    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    yycdebug ("Reducing stack by rule " + (yyrule - 1)
              + " (line " + yylno + "), ");

    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      yy_symbol_print ("   $" + (yyi + 1) + " =",
                       yystos_[yystack.stateAt(yynrhs - (yyi + 1))],
                       ]b4_rhs_value(yynrhs, yyi + 1)b4_locations_if([,
                       b4_rhs_location(yynrhs, yyi + 1)])[);
  }

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  ]b4_integral_parser_table_define([translate_table], [b4_translate])[

  private static final ]b4_int_type_for([b4_translate])[ yytranslate_ (int t)
  {
    if (t >= 0 && t <= yyuser_token_number_max_)
      return yytranslate_table_[t];
    else
      return yyundef_token_;
  }

  private static final int yylast_ = ]b4_last[;
  private static final int yynnts_ = ]b4_nterms_number[;
  private static final int yyempty_ = -2;
  private static final int yyfinal_ = ]b4_final_state_number[;
  private static final int yyterror_ = 1;
  private static final int yyerrcode_ = 256;
  private static final int yyntokens_ = ]b4_tokens_number[;

  private static final int yyuser_token_number_max_ = ]b4_user_token_number_max[;
  private static final int yyundef_token_ = ]b4_undef_token_number[;

]/* User implementation code.  */
b4_percent_code_get[]dnl

}

b4_epilogue[]dnl
b4_output_end()
