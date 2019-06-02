/* Binary relations.

   Copyright (C) 2002, 2004, 2009-2015 Free Software Foundation, Inc.

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


#ifndef RELATION_H_
# define RELATION_H_

/* Performing operations on graphs coded as list of adjacency.

   If GRAPH is a relation, then GRAPH[Node] is a list of adjacent
   nodes, ended with END_NODE.  */

# define END_NODE ((relation_node) -1)

typedef size_t relation_node;
typedef relation_node *relation_nodes;
typedef relation_nodes *relation;


/* Report a relation R that has SIZE vertices.  */
void relation_print (relation r, relation_node size, FILE *out);

/* Compute the transitive closure of the FUNCTION on the relation R
   with SIZE vertices.

   If R (NODE-1, NODE-2) then on exit FUNCTION[NODE - 1] was extended
   (unioned) with FUNCTION[NODE - 2].  */
void relation_digraph (relation r, relation_node size, bitsetv *function);

/* Destructively transpose *R_ARG, of size N.  */
void relation_transpose (relation *R_arg, relation_node n);

#endif /* ! RELATION_H_ */
