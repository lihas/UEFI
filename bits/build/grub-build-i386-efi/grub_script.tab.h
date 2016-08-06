/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_GRUB_SCRIPT_YY_GRUB_SCRIPT_TAB_H_INCLUDED
# define YY_GRUB_SCRIPT_YY_GRUB_SCRIPT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int grub_script_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    GRUB_PARSER_TOKEN_EOF = 0,
    GRUB_PARSER_TOKEN_BAD = 258,
    GRUB_PARSER_TOKEN_NEWLINE = 259,
    GRUB_PARSER_TOKEN_AND = 260,
    GRUB_PARSER_TOKEN_OR = 261,
    GRUB_PARSER_TOKEN_SEMI2 = 262,
    GRUB_PARSER_TOKEN_PIPE = 263,
    GRUB_PARSER_TOKEN_AMP = 264,
    GRUB_PARSER_TOKEN_SEMI = 265,
    GRUB_PARSER_TOKEN_LBR = 266,
    GRUB_PARSER_TOKEN_RBR = 267,
    GRUB_PARSER_TOKEN_NOT = 268,
    GRUB_PARSER_TOKEN_LSQBR2 = 269,
    GRUB_PARSER_TOKEN_RSQBR2 = 270,
    GRUB_PARSER_TOKEN_LT = 271,
    GRUB_PARSER_TOKEN_GT = 272,
    GRUB_PARSER_TOKEN_CASE = 273,
    GRUB_PARSER_TOKEN_DO = 274,
    GRUB_PARSER_TOKEN_DONE = 275,
    GRUB_PARSER_TOKEN_ELIF = 276,
    GRUB_PARSER_TOKEN_ELSE = 277,
    GRUB_PARSER_TOKEN_ESAC = 278,
    GRUB_PARSER_TOKEN_FI = 279,
    GRUB_PARSER_TOKEN_FOR = 280,
    GRUB_PARSER_TOKEN_IF = 281,
    GRUB_PARSER_TOKEN_IN = 282,
    GRUB_PARSER_TOKEN_SELECT = 283,
    GRUB_PARSER_TOKEN_THEN = 284,
    GRUB_PARSER_TOKEN_UNTIL = 285,
    GRUB_PARSER_TOKEN_WHILE = 286,
    GRUB_PARSER_TOKEN_FUNCTION = 287,
    GRUB_PARSER_TOKEN_NAME = 288,
    GRUB_PARSER_TOKEN_WORD = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 39 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1909  */

  struct grub_script_cmd *cmd;
  struct grub_script_arglist *arglist;
  struct grub_script_arg *arg;
  char *string;
  struct {
    unsigned offset;
    struct grub_script_mem *memory;
    struct grub_script *scripts;
  };

#line 102 "grub_script.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int grub_script_yyparse (struct grub_parser_param *state);

#endif /* !YY_GRUB_SCRIPT_YY_GRUB_SCRIPT_TAB_H_INCLUDED  */
