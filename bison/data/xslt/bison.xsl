<?xml version="1.0" encoding="UTF-8"?>

<!--
    bison.xsl - common templates for Bison XSLT.

    Copyright (C) 2007-2015 Free Software Foundation, Inc.

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
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
  -->

<xsl:stylesheet version="1.0"
  xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
  xmlns:bison="http://www.gnu.org/software/bison/">

<xsl:key
  name="bison:symbolByName"
  match="/bison-xml-report/grammar/nonterminals/nonterminal"
  use="@name"
/>
<xsl:key
  name="bison:symbolByName"
  match="/bison-xml-report/grammar/terminals/terminal"
  use="@name"
/>
<xsl:key
  name="bison:ruleByNumber"
  match="/bison-xml-report/grammar/rules/rule"
  use="@number"
/>
<xsl:key
  name="bison:ruleByLhs"
  match="/bison-xml-report/grammar/rules/rule[
         @usefulness != 'useless-in-grammar']"
  use="lhs"
/>
<xsl:key
  name="bison:ruleByRhs"
  match="/bison-xml-report/grammar/rules/rule[
         @usefulness != 'useless-in-grammar']"
  use="rhs/symbol"
/>

<!-- For the specified state, output: #sr-conflicts,#rr-conflicts -->
<xsl:template match="state" mode="bison:count-conflicts">
  <xsl:variable name="transitions" select="actions/transitions"/>
  <xsl:variable name="reductions" select="actions/reductions"/>
  <xsl:variable
    name="terminals"
    select="
      $transitions/transition[@type='shift']/@symbol
      | $reductions/reduction/@symbol
    "
  />
  <xsl:variable name="conflict-data">
    <xsl:for-each select="$terminals">
      <xsl:variable name="name" select="."/>
      <xsl:if test="generate-id($terminals[. = $name][1]) = generate-id(.)">
        <xsl:variable
          name="shift-count"
          select="count($transitions/transition[@symbol=$name])"
        />
        <xsl:variable
          name="reduce-count"
          select="count($reductions/reduction[@symbol=$name])"
        />
        <xsl:if test="$shift-count > 0 and $reduce-count > 0">
          <xsl:text>s</xsl:text>
        </xsl:if>
        <xsl:if test="$reduce-count > 1">
          <xsl:text>r</xsl:text>
        </xsl:if>
      </xsl:if>
    </xsl:for-each>
  </xsl:variable>
  <xsl:value-of select="string-length(translate($conflict-data, 'r', ''))"/>
  <xsl:text>,</xsl:text>
  <xsl:value-of select="string-length(translate($conflict-data, 's', ''))"/>
</xsl:template>

<xsl:template name="space">
  <xsl:param name="repeat">0</xsl:param>
  <xsl:param name="fill" select="' '"/>
  <xsl:if test="number($repeat) &gt;= 1">
    <xsl:call-template name="space">
      <xsl:with-param name="repeat" select="$repeat - 1"/>
      <xsl:with-param name="fill" select="$fill"/>
    </xsl:call-template>
    <xsl:value-of select="$fill"/>
  </xsl:if>
</xsl:template>

</xsl:stylesheet>
