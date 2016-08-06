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

#ifndef YY_DTPARSER_OBJ_DTPARSER_Y_H_INCLUDED
# define YY_DTPARSER_OBJ_DTPARSER_Y_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int DtParserdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EXPOP_EOF = 258,
    EXPOP_NEW_LINE = 259,
    EXPOP_NUMBER = 260,
    EXPOP_HEX_NUMBER = 261,
    EXPOP_DECIMAL_NUMBER = 262,
    EXPOP_LABEL = 263,
    EXPOP_PAREN_OPEN = 264,
    EXPOP_PAREN_CLOSE = 265,
    EXPOP_LOGICAL_OR = 266,
    EXPOP_LOGICAL_AND = 267,
    EXPOP_OR = 268,
    EXPOP_XOR = 269,
    EXPOP_AND = 270,
    EXPOP_EQUAL = 271,
    EXPOP_NOT_EQUAL = 272,
    EXPOP_GREATER = 273,
    EXPOP_LESS = 274,
    EXPOP_GREATER_EQUAL = 275,
    EXPOP_LESS_EQUAL = 276,
    EXPOP_SHIFT_RIGHT = 277,
    EXPOP_SHIFT_LEFT = 278,
    EXPOP_ADD = 279,
    EXPOP_SUBTRACT = 280,
    EXPOP_MULTIPLY = 281,
    EXPOP_DIVIDE = 282,
    EXPOP_MODULO = 283,
    EXPOP_ONES_COMPLIMENT = 284,
    EXPOP_LOGICAL_NOT = 285
  };
#endif
/* Tokens.  */
#define EXPOP_EOF 258
#define EXPOP_NEW_LINE 259
#define EXPOP_NUMBER 260
#define EXPOP_HEX_NUMBER 261
#define EXPOP_DECIMAL_NUMBER 262
#define EXPOP_LABEL 263
#define EXPOP_PAREN_OPEN 264
#define EXPOP_PAREN_CLOSE 265
#define EXPOP_LOGICAL_OR 266
#define EXPOP_LOGICAL_AND 267
#define EXPOP_OR 268
#define EXPOP_XOR 269
#define EXPOP_AND 270
#define EXPOP_EQUAL 271
#define EXPOP_NOT_EQUAL 272
#define EXPOP_GREATER 273
#define EXPOP_LESS 274
#define EXPOP_GREATER_EQUAL 275
#define EXPOP_LESS_EQUAL 276
#define EXPOP_SHIFT_RIGHT 277
#define EXPOP_SHIFT_LEFT 278
#define EXPOP_ADD 279
#define EXPOP_SUBTRACT 280
#define EXPOP_MULTIPLY 281
#define EXPOP_DIVIDE 282
#define EXPOP_MODULO 283
#define EXPOP_ONES_COMPLIMENT 284
#define EXPOP_LOGICAL_NOT 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "../../../source/compiler/dtparser.y" /* yacc.c:1909  */

     UINT64                 value;
     UINT32                 op;

#line 119 "obj/dtparser.y.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE DtParserlval;

int DtParserparse (void);

#endif /* !YY_DTPARSER_OBJ_DTPARSER_Y_H_INCLUDED  */
