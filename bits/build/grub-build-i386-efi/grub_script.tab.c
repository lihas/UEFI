/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         grub_script_yyparse
#define yylex           grub_script_yylex
#define yyerror         grub_script_yyerror
#define yydebug         grub_script_yydebug
#define yynerrs         grub_script_yynerrs


/* Copy the first part of user declarations.  */
#line 20 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:339  */

#include <grub/script_sh.h>
#include <grub/mm.h>
#include <grub/misc.h>
#include <grub/i18n.h>

#define YYFREE          grub_free
#define YYMALLOC        grub_malloc
#define YYLTYPE_IS_TRIVIAL      0
#define YYENABLE_NLS    0

#include "grub_script.tab.h"

#pragma GCC diagnostic ignored "-Wunreachable-code"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wunsafe-loop-optimizations"


#line 91 "grub_script.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grub_script.tab.h".  */
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
#line 39 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:355  */

  struct grub_script_cmd *cmd;
  struct grub_script_arglist *arglist;
  struct grub_script_arg *arg;
  char *string;
  struct {
    unsigned offset;
    struct grub_script_mem *memory;
    struct grub_script *scripts;
  };

#line 179 "grub_script.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int grub_script_yyparse (struct grub_parser_param *state);

#endif /* !YY_GRUB_SCRIPT_YY_GRUB_SCRIPT_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "grub_script.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   219

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  106

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   102,   105,   109,   113,   121,   121,   122,
     124,   125,   127,   127,   128,   129,   132,   133,   136,   137,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   183,   182,   222,   223,
     226,   227,   229,   241,   258,   259,   260,   261,   262,   266,
     270,   277,   276,   303,   302,   312,   316,   320,   327,   326,
     338,   337,   349,   348
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end-of-input\"", "error", "$undefined", "GRUB_PARSER_TOKEN_BAD",
  "\"\\n\"", "\"&&\"", "\"||\"", "\";;\"", "\"|\"", "\"&\"", "\";\"",
  "\"{\"", "\"}\"", "\"!\"", "\"[\"", "\"]\"", "\"<\"", "\">\"",
  "\"case\"", "\"do\"", "\"done\"", "\"elif\"", "\"else\"", "\"esac\"",
  "\"fi\"", "\"for\"", "\"if\"", "\"in\"", "\"select\"", "\"then\"",
  "\"until\"", "\"while\"", "\"function\"", "\"name\"", "\"word\"",
  "$accept", "script_init", "$@1", "script", "newlines0", "newlines1",
  "delimiter", "delimiters0", "delimiters1", "word", "statement",
  "argument", "block", "@2", "block0", "arguments0", "arguments1",
  "grubcmd", "command", "commands1", "function", "@3", "ifcmd", "$@4",
  "ifclause", "forcmd", "$@5", "whilecmd", "$@6", "untilcmd", "$@7", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
# endif

#define YYPACT_NINF -54

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-54)))

#define YYTABLE_NINF -8

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -54,    10,    57,   -54,   -54,   -17,     3,   -54,   -14,   -54,
     -54,   -54,    -6,   -54,   -54,   185,     8,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   185,    12,   -54,   -54,
     -54,   -54,     1,   158,     8,    11,     8,     8,     8,   -54,
     -54,   -54,   -54,     3,   185,   -54,   -54,    67,   -54,    80,
      90,    20,    30,   -54,     8,   -54,   -54,   -54,   -54,   -54,
     -54,     8,     7,     8,     8,     8,     8,    25,   168,   -54,
      -1,   108,   123,   133,   -54,     8,   -54,   -54,   -54,   -54,
     -54,   148,   -54,     8,   -54,   168
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     6,     3,     4,     8,     0,    53,
      62,    60,     0,    16,    17,    40,     0,    44,    18,    19,
      45,    46,    47,    48,     9,    58,     7,     7,     7,    51,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    40,    38,    41,    11,
      10,     7,     0,     0,     0,     0,     0,     0,    12,    42,
      36,    39,    43,     5,    40,    49,    14,     0,    54,     0,
       0,     0,    13,     7,     0,    15,     7,    50,     7,     7,
       7,    12,     0,     0,     0,     0,     0,     0,    13,     7,
      55,     0,     0,     0,    37,     0,     7,     7,    63,    61,
      52,     0,    57,     0,    59,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -54,   -54,   -54,     4,   -54,    26,   -40,   -18,   -10,
     -54,   -54,   -54,   -54,   -54,   -42,   -54,   -54,    -3,   -27,
     -54,   -54,   -54,   -54,   -53,   -54,   -54,   -54,   -54,   -54,
     -54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,    53,     7,    66,    71,    67,    15,
      16,    46,    61,    73,    62,    47,    48,    17,    77,    54,
      19,    58,    20,    26,    55,    21,    52,    22,    28,    23,
      27
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      56,    57,    18,    75,    59,    45,     6,    24,     8,     9,
       3,    75,    49,    10,    11,    12,    13,    14,    50,    25,
      96,    97,    74,    60,     8,     9,    89,    29,    64,    10,
      11,    80,    13,    14,    75,    68,    45,    94,    69,    70,
      72,    87,    51,   102,     0,     0,    81,     0,     0,    83,
      65,    84,    85,    86,    45,    63,    82,    -7,     4,     0,
       0,    -7,    95,    88,     0,    90,    91,    92,    93,     0,
     103,    75,     0,     0,     0,     0,     0,   101,     0,     0,
       0,     0,    -7,    -7,    75,   105,     0,    -7,    -7,    -7,
      -7,    -7,     8,     9,    75,     0,    76,    10,    11,    78,
      13,    14,     0,     0,     0,     8,     9,     0,     0,    79,
      10,    11,    75,    13,    14,     8,     9,     0,     0,     0,
      10,    11,     0,    13,    14,     0,     0,    75,    98,     0,
       0,     0,     0,     8,     9,     0,     0,    75,    10,    11,
       0,    13,    14,    99,     0,   100,     0,     0,     8,     9,
       0,     0,    75,    10,    11,     0,    13,    14,     8,     9,
       0,     0,    24,    10,    11,     0,    13,    14,   104,     0,
       0,     0,    75,     8,     9,     0,     0,     0,    10,    11,
       0,    13,    14,     8,     9,     0,     0,     0,    10,    11,
       0,    13,    14,     8,     9,     0,     0,     0,    10,    11,
       0,    13,    14,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    13,    14
};

static const yytype_int8 yycheck[] =
{
      27,    28,     5,     4,    46,    15,     2,     4,    25,    26,
       0,     4,     4,    30,    31,    32,    33,    34,    10,    33,
      21,    22,    64,    11,    25,    26,    19,    33,    27,    30,
      31,    11,    33,    34,     4,    24,    46,    12,    56,    57,
      58,    81,    16,    96,    -1,    -1,    73,    -1,    -1,    76,
      53,    78,    79,    80,    64,    51,    74,     0,     1,    -1,
      -1,     4,    89,    81,    -1,    83,    84,    85,    86,    -1,
      97,     4,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    25,    26,     4,   103,    -1,    30,    31,    32,
      33,    34,    25,    26,     4,    -1,    29,    30,    31,    19,
      33,    34,    -1,    -1,    -1,    25,    26,    -1,    -1,    19,
      30,    31,     4,    33,    34,    25,    26,    -1,    -1,    -1,
      30,    31,    -1,    33,    34,    -1,    -1,     4,    20,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,     4,    30,    31,
      -1,    33,    34,    20,    -1,    12,    -1,    -1,    25,    26,
      -1,    -1,     4,    30,    31,    -1,    33,    34,    25,    26,
      -1,    -1,     4,    30,    31,    -1,    33,    34,    20,    -1,
      -1,    -1,     4,    25,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    25,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    25,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    37,     0,     1,    38,    39,    40,    25,    26,
      30,    31,    32,    33,    34,    44,    45,    52,    53,    55,
      57,    60,    62,    64,     4,    33,    58,    65,    63,    33,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    44,    46,    50,    51,     4,
      10,    41,    61,    39,    54,    59,    54,    54,    56,    50,
      11,    47,    49,    39,    27,    53,    41,    43,    24,    43,
      43,    42,    43,    48,    50,     4,    29,    53,    19,    19,
      11,    54,    43,    54,    54,    54,    54,    42,    43,    19,
      43,    43,    43,    43,    12,    54,    21,    22,    20,    20,
      12,    43,    59,    54,    20,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    37,    36,    38,    38,    38,    39,    39,    40,
      41,    41,    42,    42,    43,    43,    44,    44,    45,    45,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    48,    47,    49,    49,
      50,    50,    51,    52,    53,    53,    53,    53,    53,    54,
      54,    56,    55,    58,    57,    59,    59,    59,    61,    60,
      63,    62,    65,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     4,     1,     0,     1,     2,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     0,     1,
       0,     1,     2,     3,     1,     1,     1,     1,     1,     2,
       3,     0,     8,     0,     4,     5,     8,     7,     0,    10,
       0,     8,     0,     8
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (state, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, state); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct grub_parser_param *state)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (state);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct grub_parser_param *state)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, state);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, struct grub_parser_param *state)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , state);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, state); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, struct grub_parser_param *state)
{
  YYUSE (yyvaluep);
  YYUSE (state);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (struct grub_parser_param *state)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, state);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 102 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { state->err = 0; }
#line 1377 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 102 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { state->parsed = (yyvsp[0].cmd); state->err = 0; }
#line 1383 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 106 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
          (yyval.cmd) = 0;
        }
#line 1391 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 110 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
          (yyval.cmd) = grub_script_append_cmd (state, (yyvsp[-3].cmd), (yyvsp[-2].cmd));
        }
#line 1399 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 114 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
          (yyval.cmd) = 0;
          yyerror (state, N_("Incorrect command"));
          yyerrok;
        }
#line 1409 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 132 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1415 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 133 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1421 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 136 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.cmd) = (yyvsp[0].cmd); }
#line 1427 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 137 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.cmd) = 0;  }
#line 1433 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 140 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1439 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 141 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1445 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 142 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1451 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 143 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1457 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 144 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1463 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 145 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1469 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 146 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1475 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 147 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1481 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1487 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1493 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1499 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 151 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1505 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 152 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1511 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 153 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1517 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 154 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = grub_script_add_arglist (state, 0, (yyvsp[0].arg)); }
#line 1523 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 155 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = (yyvsp[0].arglist); }
#line 1529 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 183 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
         grub_script_lexer_ref (state->lexerstate);
         (yyval.offset) = grub_script_lexer_record_start (state);
	 (yyval.memory) = grub_script_mem_record (state);

	 /* save currently known scripts.  */
	 (yyval.scripts) = state->scripts;
	 state->scripts = 0;
       }
#line 1543 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 193 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
         char *p;
	 struct grub_script_mem *memory;
	 struct grub_script *s = (yyvsp[-3].scripts);

	 memory = grub_script_mem_record_stop (state, (yyvsp[-3].memory));
         if ((p = grub_script_lexer_record_stop (state, (yyvsp[-3].offset))))
	   *grub_strrchr (p, '}') = '\0';

	 (yyval.arg) = grub_script_arg_add (state, 0, GRUB_SCRIPT_ARG_TYPE_BLOCK, p);
	 if (! (yyval.arg) || ! ((yyval.arg)->script = grub_script_create ((yyvsp[-2].cmd), memory)))
	   grub_script_mem_free (memory);

	 else {
	   /* attach nested scripts to $$->script as children */
	   (yyval.arg)->script->children = state->scripts;

	   /* restore old scripts; append $$->script to siblings. */
	   state->scripts = (yyvsp[-3].scripts) ?: (yyval.arg)->script;
	   if (s) {
	     while (s->next_siblings)
	       s = s->next_siblings;
	     s->next_siblings = (yyval.arg)->script;
	   }
	 }

         grub_script_lexer_deref (state->lexerstate);
       }
#line 1576 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 222 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arg) = 0; }
#line 1582 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 223 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arg) = (yyvsp[0].arg); }
#line 1588 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 226 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = 0; }
#line 1594 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 227 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.arglist) = (yyvsp[0].arglist); }
#line 1600 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 230 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	      if ((yyvsp[-1].arglist) && (yyvsp[0].arglist))
		{
		  (yyvsp[-1].arglist)->next = (yyvsp[0].arglist);
		  (yyvsp[-1].arglist)->argcount += (yyvsp[0].arglist)->argcount;
		  (yyvsp[0].arglist)->argcount = 0;
		}
	      (yyval.arglist) = (yyvsp[-1].arglist);
            }
#line 1614 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 242 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	   struct grub_script_arglist *x = (yyvsp[-1].arglist);

	   if ((yyvsp[0].arg))
	     x = grub_script_add_arglist (state, (yyvsp[-1].arglist), (yyvsp[0].arg));

           if ((yyvsp[-2].arglist) && x) {
             (yyvsp[-2].arglist)->next = x;
             (yyvsp[-2].arglist)->argcount += x->argcount;
             x->argcount = 0;
           }
           (yyval.cmd) = grub_script_create_cmdline (state, (yyvsp[-2].arglist));
         }
#line 1632 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 258 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.cmd) = (yyvsp[0].cmd); }
#line 1638 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 259 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.cmd) = (yyvsp[0].cmd); }
#line 1644 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 260 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.cmd) = (yyvsp[0].cmd); }
#line 1650 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 261 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.cmd) = (yyvsp[0].cmd); }
#line 1656 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 262 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    { (yyval.cmd) = (yyvsp[0].cmd); }
#line 1662 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 267 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
             (yyval.cmd) = grub_script_append_cmd (state, 0, (yyvsp[0].cmd));
           }
#line 1670 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 271 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	     (yyval.cmd) = grub_script_append_cmd (state, (yyvsp[-2].cmd), (yyvsp[0].cmd));
           }
#line 1678 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 277 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
            grub_script_lexer_ref (state->lexerstate);
            state->func_mem = grub_script_mem_record (state);

	    (yyval.scripts) = state->scripts;
	    state->scripts = 0;
          }
#line 1690 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 285 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
            struct grub_script *script;
            state->func_mem = grub_script_mem_record_stop (state,
                                                           state->func_mem);
            script = grub_script_create ((yyvsp[-2].cmd), state->func_mem);
            if (! script)
	      grub_script_mem_free (state->func_mem);
	    else {
	      script->children = state->scripts;
	      grub_script_function_create ((yyvsp[-6].arg), script);
	    }

	    state->scripts = (yyvsp[-5].scripts);
            grub_script_lexer_deref (state->lexerstate);
          }
#line 1710 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 303 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	  grub_script_lexer_ref (state->lexerstate);
	}
#line 1718 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 307 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	  (yyval.cmd) = (yyvsp[-1].cmd);
	  grub_script_lexer_deref (state->lexerstate);
	}
#line 1727 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 313 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	    (yyval.cmd) = grub_script_create_cmdif (state, (yyvsp[-4].cmd), (yyvsp[-1].cmd), 0);
	  }
#line 1735 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 317 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	    (yyval.cmd) = grub_script_create_cmdif (state, (yyvsp[-7].cmd), (yyvsp[-4].cmd), (yyvsp[-1].cmd));
	  }
#line 1743 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 321 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	    (yyval.cmd) = grub_script_create_cmdif (state, (yyvsp[-6].cmd), (yyvsp[-3].cmd), (yyvsp[0].cmd));
	  }
#line 1751 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 327 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	  grub_script_lexer_ref (state->lexerstate);
        }
#line 1759 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 331 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	  (yyval.cmd) = grub_script_create_cmdfor (state, (yyvsp[-8].arg), (yyvsp[-5].arglist), (yyvsp[-2].cmd));
	  grub_script_lexer_deref (state->lexerstate);
	}
#line 1768 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 338 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	    grub_script_lexer_ref (state->lexerstate);
          }
#line 1776 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 342 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	    (yyval.cmd) = grub_script_create_cmdwhile (state, (yyvsp[-5].cmd), (yyvsp[-2].cmd), 0);
	    grub_script_lexer_deref (state->lexerstate);
	  }
#line 1785 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 349 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	    grub_script_lexer_ref (state->lexerstate);
          }
#line 1793 "grub_script.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 353 "/home/neo/development/uefi/bits/build/grub/grub-core/script/parser.y" /* yacc.c:1646  */
    {
	    (yyval.cmd) = grub_script_create_cmdwhile (state, (yyvsp[-5].cmd), (yyvsp[-2].cmd), 1);
	    grub_script_lexer_deref (state->lexerstate);
	  }
#line 1802 "grub_script.tab.c" /* yacc.c:1646  */
    break;


#line 1806 "grub_script.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (state, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (state, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, state);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (state, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, state);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, state);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
