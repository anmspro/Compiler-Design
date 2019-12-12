
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "bison.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    #include "code.c"
    int yyparse();
    int yylex();
    int yyerror();
    int acceptedIf[1000];
    int ptrIf=0;
    int sz=0;
    int sdone=0;
    int svar;


/* Line 189 of yacc.c  */
#line 90 "bison.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUMBER = 259,
     STR = 260,
     GREATEREQUAL = 261,
     LESSEQUAL = 262,
     GREATERTHAN = 263,
     LESSTHAN = 264,
     MINUS = 265,
     PLUS = 266,
     DIVISION = 267,
     MULTIPLICATION = 268,
     INT = 269,
     DOUBLE = 270,
     CHAR = 271,
     VOID = 272,
     WHILE = 273,
     FOR = 274,
     IF = 275,
     ELSE = 276,
     ELIF = 277,
     OPENBRACKET = 278,
     CLOSEBRACKET = 279,
     BRACKETBEGIN = 280,
     BRACKETEND = 281,
     SEMICOLON = 282,
     COMMA = 283,
     ASSIGN = 284,
     COLON = 285,
     EQUAL = 286,
     NOTEQUAL = 287,
     MAIN = 288,
     PRINT = 289,
     PRINTLN = 290,
     FUNCTION = 291,
     FACT = 292,
     HEADER = 293,
     SWITCH = 294,
     DEFAULT = 295,
     POWER = 296,
     IFX = 297,
     ELIFX = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 17 "bison.y"

    char str[1000];
    int val;



/* Line 214 of yacc.c  */
#line 176 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 188 "bison.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   613

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    14,    22,    23,    26,
      29,    32,    35,    38,    41,    44,    47,    51,    53,    55,
      57,    61,    63,    66,    72,    77,    79,    81,    85,    89,
      93,    97,   101,   105,   109,   113,   117,   121,   125,   130,
     137,   139,   143,   149,   155,   161,   166,   167,   177,   178,
     179,   189,   195,   207,   215,   219,   227,   228,   231,   240,
     241,   245,   246,   251,   259,   261,   262,   269
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    65,    48,    65,    -1,    -1,    46,
      47,    -1,    38,    -1,    14,    33,    23,    24,    25,    49,
      26,    -1,    -1,    49,    50,    -1,    49,    54,    -1,    49,
      53,    -1,    49,    57,    -1,    49,    58,    -1,    49,    64,
      -1,    49,    62,    -1,    49,    69,    -1,    51,    52,    27,
      -1,    14,    -1,    15,    -1,    16,    -1,    56,    28,    52,
      -1,    56,    -1,    55,    27,    -1,     3,    29,    55,    28,
      54,    -1,     3,    29,    55,    27,    -1,     4,    -1,     3,
      -1,    55,    11,    55,    -1,    55,    10,    55,    -1,    55,
      13,    55,    -1,    55,    12,    55,    -1,    55,     9,    55,
      -1,    55,     8,    55,    -1,    55,     7,    55,    -1,    55,
       6,    55,    -1,    55,    31,    55,    -1,    55,    32,    55,
      -1,    23,    55,    24,    -1,    37,    23,    55,    24,    -1,
      41,    23,    55,    28,    55,    24,    -1,     3,    -1,     3,
      29,    55,    -1,    34,    23,    55,    24,    27,    -1,    34,
      23,     3,    24,    27,    -1,    34,    23,     5,    24,    27,
      -1,    35,    23,    24,    27,    -1,    -1,    20,    23,    55,
      24,    25,    49,    26,    59,    60,    -1,    -1,    -1,    22,
      23,    55,    24,    25,    49,    26,    61,    60,    -1,    60,
      21,    25,    49,    26,    -1,    19,    23,    63,    27,    55,
      27,    63,    24,    25,    49,    26,    -1,     3,    29,    55,
      28,     3,    29,    55,    -1,     3,    29,    55,    -1,    18,
      23,    55,    24,    25,    49,    26,    -1,    -1,    65,    66,
      -1,    51,    36,    23,    67,    24,    25,    49,    26,    -1,
      -1,    51,     3,    68,    -1,    -1,    68,    28,    51,     3,
      -1,    39,    23,    70,    24,    25,    71,    26,    -1,    55,
      -1,    -1,    71,    55,    30,    25,    49,    26,    -1,    71,
      40,    30,    25,    49,    26,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    49,    50,    53,    58,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    71,    73,    73,    73,
      75,    76,    79,    82,    83,   101,   102,   118,   122,   126,
     130,   139,   143,   147,   152,   156,   160,   164,   168,   176,
     186,   196,   211,   215,   228,   232,   238,   238,   248,   250,
     249,   256,   263,   268,   269,   271,   276,   277,   279,   284,
     285,   287,   288,   291,   297,   305,   306,   313
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUMBER", "STR", "GREATEREQUAL",
  "LESSEQUAL", "GREATERTHAN", "LESSTHAN", "MINUS", "PLUS", "DIVISION",
  "MULTIPLICATION", "INT", "DOUBLE", "CHAR", "VOID", "WHILE", "FOR", "IF",
  "ELSE", "ELIF", "OPENBRACKET", "CLOSEBRACKET", "BRACKETBEGIN",
  "BRACKETEND", "SEMICOLON", "COMMA", "ASSIGN", "COLON", "EQUAL",
  "NOTEQUAL", "MAIN", "PRINT", "PRINTLN", "FUNCTION", "FACT", "HEADER",
  "SWITCH", "DEFAULT", "POWER", "IFX", "ELIFX", "$accept", "start",
  "header", "head", "program", "statement", "declaration", "type",
  "variables", "arithmeticexp", "assign", "exp", "variable", "print",
  "ifelse", "$@1", "elif", "$@2", "forstmt", "forassign", "whilestmt",
  "function", "func", "fparams", "fparam", "switchstmt", "condition",
  "cases", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    48,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    50,    51,    51,    51,
      52,    52,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    57,    57,    57,    57,    59,    58,    60,    61,
      60,    60,    62,    63,    63,    64,    65,    65,    66,    67,
      67,    68,    68,    69,    70,    71,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     1,     7,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     1,     1,     1,
       3,     1,     2,     5,     4,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       1,     3,     5,     5,     5,     4,     0,     9,     0,     0,
       9,     5,    11,     7,     3,     7,     0,     2,     8,     0,
       3,     0,     4,     7,     1,     0,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,    56,     1,     5,     4,     0,    17,    18,    19,
      56,     0,    57,     0,     2,     0,     0,    17,    59,     0,
       0,     0,     7,    61,     0,     0,    60,     7,    26,    25,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       8,     0,    10,     9,     0,    11,    12,    14,    13,    15,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,    40,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,    58,     0,
       0,     0,     0,     0,    37,    26,     0,     0,     0,     0,
      64,     0,     0,     0,    16,     0,    34,    33,    32,    31,
      28,    27,    30,    29,    35,    36,    62,    24,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    38,     0,     0,
      41,    20,     0,    23,     7,    54,     0,     7,    43,    44,
      42,    65,     0,     0,     0,     0,     0,     0,    39,    55,
       0,     0,    46,    63,     0,     0,     0,     0,    48,     0,
       0,    53,     7,     0,    47,     7,     7,     0,     0,     0,
       0,     0,    52,     0,     7,    67,    66,     0,     0,     7,
      51,     0,    49,    48,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    10,    25,    40,    41,    64,    42,
      43,    44,    65,    45,    46,   148,   154,   173,    47,    82,
      48,     6,    12,    21,    26,    49,    91,   137
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -33
static const yytype_int16 yypact[] =
{
     -33,     9,   -20,   -33,   -33,   -33,     1,   -14,   -33,   -33,
     -33,    -9,   -33,    -1,    87,    10,    18,   -33,    87,     7,
      44,    24,   -33,   -33,    25,    49,    23,   -33,    27,   -33,
      36,    37,    39,   321,   -33,    43,    47,    48,    53,    58,
     -33,    79,   -33,   -33,   366,   -33,   -33,   -33,   -33,   -33,
      87,   104,   321,   321,    82,   321,   -33,   375,     8,    65,
     321,   321,   321,    63,    66,    68,   321,   321,   321,   321,
     321,   321,   321,   321,   -33,   321,   321,    95,   -33,   339,
     402,    70,    77,   411,   -33,    85,    86,   438,    84,   447,
     581,    88,   474,   321,   -33,    79,    -7,    -7,    -7,    -7,
      42,    42,   -24,   -24,   581,   581,   -33,   -33,   103,    90,
     321,   321,    91,    94,   105,   106,   -33,   -33,    92,   321,
     581,   -33,    27,   -33,   -33,   482,   509,   -33,   -33,   -33,
     -33,   -33,   518,   132,   110,    82,   160,    54,   -33,   -33,
     102,   116,   -33,   -33,   114,   545,   321,   109,   127,   128,
     129,   581,   -33,   133,   136,   -33,   -33,   188,   321,   134,
     216,   244,   -33,   554,   -33,   -33,   -33,   135,   272,   -33,
     -33,   300,   -33,   127,   136
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -33,   -33,   -33,   -33,   -33,   -27,   -33,    -4,    67,   -33,
      57,   -32,   -33,   -33,   -33,   -33,   -12,   -33,   -33,    33,
     -33,   162,   -33,   -33,   -33,   -33,   -33,   -33
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      51,    57,    11,    70,    71,    72,    73,    75,    76,     3,
      11,    85,    29,    86,    20,     7,     8,     9,     4,    13,
      79,    80,    16,    83,    75,    76,    87,    15,    89,    90,
      92,    33,    22,    18,    96,    97,    98,    99,   100,   101,
     102,   103,    19,   104,   105,    37,    77,    23,    24,    39,
      27,    50,    28,    29,    72,    73,    52,    56,    29,    53,
      54,   120,    55,    17,     8,     9,    58,    30,    31,    32,
      59,    60,    33,    75,    76,    34,    61,    33,   125,   126,
     143,    62,    63,    35,    36,    81,    37,   132,    38,    88,
      39,    37,    93,    94,   144,    39,    95,   133,   106,   110,
     136,    17,     8,     9,   111,   145,   122,    28,    29,   113,
     114,   116,   118,   140,   151,   124,   127,   131,    17,     8,
       9,   128,    30,    31,    32,   157,   163,    33,   160,   161,
      78,   146,   129,   130,   152,    28,    29,   168,    35,    36,
     147,    37,   171,    38,   149,    39,    17,     8,     9,   153,
      30,    31,    32,   155,   156,    33,   158,   159,   139,   164,
     169,   174,   121,    28,    29,   123,    35,    36,   141,    37,
       0,    38,    14,    39,    17,     8,     9,     0,    30,    31,
      32,     0,     0,    33,     0,     0,   142,     0,     0,     0,
       0,    28,    29,     0,    35,    36,     0,    37,     0,    38,
       0,    39,    17,     8,     9,     0,    30,    31,    32,     0,
       0,    33,     0,     0,   162,     0,     0,     0,     0,    28,
      29,     0,    35,    36,     0,    37,     0,    38,     0,    39,
      17,     8,     9,     0,    30,    31,    32,     0,     0,    33,
       0,     0,   165,     0,     0,     0,     0,    28,    29,     0,
      35,    36,     0,    37,     0,    38,     0,    39,    17,     8,
       9,     0,    30,    31,    32,     0,     0,    33,     0,     0,
     166,     0,     0,     0,     0,    28,    29,     0,    35,    36,
       0,    37,     0,    38,     0,    39,    17,     8,     9,     0,
      30,    31,    32,     0,     0,    33,     0,     0,   170,     0,
       0,     0,     0,    28,    29,     0,    35,    36,     0,    37,
       0,    38,     0,    39,    17,     8,     9,     0,    30,    31,
      32,     0,     0,    33,    56,    29,   172,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,    37,     0,    38,
       0,    39,     0,     0,    33,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    39,     0,     0,     0,   107,   108,     0,     0,
      75,    76,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    66,    67,    68,    69,    70,    71,    72,    73,     0,
       0,     0,     0,    74,     0,     0,     0,    75,    76,    84,
       0,     0,     0,     0,     0,     0,    75,    76,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    66,    67,    68,
      69,    70,    71,    72,    73,     0,   109,     0,     0,     0,
       0,     0,     0,    75,    76,   112,     0,     0,     0,     0,
       0,     0,    75,    76,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,   115,     0,     0,     0,     0,     0,     0,    75,
      76,   117,     0,     0,     0,     0,     0,     0,    75,    76,
      66,    67,    68,    69,    70,    71,    72,    73,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,     0,     0,
       0,     0,   119,     0,     0,    75,    76,     0,     0,     0,
     134,     0,     0,    75,    76,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     0,   135,     0,     0,     0,
      75,    76,   138,     0,     0,     0,     0,     0,     0,    75,
      76,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      66,    67,    68,    69,    70,    71,    72,    73,     0,     0,
       0,     0,     0,     0,     0,   150,    75,    76,   167,     0,
       0,     0,     0,     0,     0,    75,    76,    66,    67,    68,
      69,    70,    71,    72,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76
};

static const yytype_int16 yycheck[] =
{
      27,    33,     6,    10,    11,    12,    13,    31,    32,     0,
      14,     3,     4,     5,    18,    14,    15,    16,    38,    33,
      52,    53,    23,    55,    31,    32,    58,    36,    60,    61,
      62,    23,    25,    23,    66,    67,    68,    69,    70,    71,
      72,    73,    24,    75,    76,    37,    50,     3,    24,    41,
      25,    28,     3,     4,    12,    13,    29,     3,     4,    23,
      23,    93,    23,    14,    15,    16,    23,    18,    19,    20,
      23,    23,    23,    31,    32,    26,    23,    23,   110,   111,
      26,    23,     3,    34,    35,     3,    37,   119,    39,    24,
      41,    37,    29,    27,    40,    41,    28,   124,     3,    29,
     127,    14,    15,    16,    27,   137,     3,     3,     4,    24,
      24,    27,    24,     3,   146,    25,    25,    25,    14,    15,
      16,    27,    18,    19,    20,   152,   158,    23,   155,   156,
      26,    29,    27,    27,    25,     3,     4,   164,    34,    35,
      24,    37,   169,    39,    30,    41,    14,    15,    16,    22,
      18,    19,    20,    25,    25,    23,    23,    21,    26,    25,
      25,   173,    95,     3,     4,   108,    34,    35,   135,    37,
      -1,    39,    10,    41,    14,    15,    16,    -1,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,     3,     4,    -1,    34,    35,    -1,    37,    -1,    39,
      -1,    41,    14,    15,    16,    -1,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,     3,
       4,    -1,    34,    35,    -1,    37,    -1,    39,    -1,    41,
      14,    15,    16,    -1,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,     3,     4,    -1,
      34,    35,    -1,    37,    -1,    39,    -1,    41,    14,    15,
      16,    -1,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,     3,     4,    -1,    34,    35,
      -1,    37,    -1,    39,    -1,    41,    14,    15,    16,    -1,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,     3,     4,    -1,    34,    35,    -1,    37,
      -1,    39,    -1,    41,    14,    15,    16,    -1,    18,    19,
      20,    -1,    -1,    23,     3,     4,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    37,    -1,    39,
      -1,    41,    -1,    -1,    23,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    32,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
       6,     7,     8,     9,    10,    11,    12,    13,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    32,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      31,    32,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    46,     0,    38,    47,    65,    14,    15,    16,
      48,    51,    66,    33,    65,    36,    23,    14,    23,    24,
      51,    67,    25,     3,    24,    49,    68,    25,     3,     4,
      18,    19,    20,    23,    26,    34,    35,    37,    39,    41,
      50,    51,    53,    54,    55,    57,    58,    62,    64,    69,
      28,    49,    29,    23,    23,    23,     3,    55,    23,    23,
      23,    23,    23,     3,    52,    56,     6,     7,     8,     9,
      10,    11,    12,    13,    27,    31,    32,    51,    26,    55,
      55,     3,    63,    55,    24,     3,     5,    55,    24,    55,
      55,    70,    55,    29,    27,    28,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,     3,    27,    28,    24,
      29,    27,    24,    24,    24,    24,    27,    24,    24,    28,
      55,    52,     3,    54,    25,    55,    55,    25,    27,    27,
      27,    25,    55,    49,    28,    27,    49,    71,    24,    26,
       3,    63,    26,    26,    40,    55,    29,    24,    59,    30,
      30,    55,    25,    22,    60,    25,    25,    49,    23,    21,
      49,    49,    26,    55,    25,    26,    26,    24,    49,    25,
      26,    49,    26,    61,    60
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 44 "bison.y"
    { 
                printf("\n Compiled Successfully\n");
            ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 53 "bison.y"
    { 
                printf("  Header Included\n");
            ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 71 "bison.y"
    { ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 73 "bison.y"
    { ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 75 "bison.y"
    { ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 76 "bison.y"
    { ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 79 "bison.y"
    { ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 82 "bison.y"
    { ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 84 "bison.y"
    {
                int idx = isCreated(sz,(yyvsp[(1) - (4)].str));
                if(idx==-1)
                {
                    printf("Compilation Error ->  Varribale %s is not declared\n",(yyvsp[(1) - (4)].str));
                    exit(-1);
                }
                else 
                {
                    int n = log10((yyvsp[(3) - (4)].val)) + 1;
                    char *numberArray = calloc(n, sizeof(char));
                    sprintf(numberArray,"%ld",(yyvsp[(3) - (4)].val));
                    assignVal(sz,(yyvsp[(1) - (4)].str),numberArray);
                }
            ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 101 "bison.y"
    { (yyval.val) = (yyvsp[(1) - (1)].val); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 103 "bison.y"
    {
                    int idx = isCreated(sz,(yyvsp[(1) - (1)].str));
                    if(idx==-1)
                    {
                        printf("Compilation Error ->  Varribale %s is not declared\n",(yyvsp[(1) - (1)].str));
                        exit(-1);
                    }
                    else 
                    {
                        if(id[idx].type==1)
                            (yyval.val) = id[idx].intval;
                        else if(id[idx].type==2)
                            (yyval.val) = id[idx].doubleval;
                    }
                ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 119 "bison.y"
    {
                    (yyval.val) = (yyvsp[(1) - (3)].val)+(yyvsp[(3) - (3)].val);
                ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 123 "bison.y"
    {
                    (yyval.val) = (yyvsp[(1) - (3)].val)-(yyvsp[(3) - (3)].val);
                ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 127 "bison.y"
    {
                    (yyval.val) = (yyvsp[(1) - (3)].val)*(yyvsp[(3) - (3)].val);
                ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 131 "bison.y"
    {
                    if((yyvsp[(3) - (3)].val)==0)
                    {
                        printf("Compilation Error -> DIVISIONide by Zero Occured\n");
                        exit(-1);
                    }
                    (yyval.val) = (yyvsp[(1) - (3)].val)/(yyvsp[(3) - (3)].val);
                ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 140 "bison.y"
    {
                    (yyval.val) = ((yyvsp[(1) - (3)].val)<(yyvsp[(3) - (3)].val));
                ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 144 "bison.y"
    {
                    (yyval.val) = ((yyvsp[(1) - (3)].val)>(yyvsp[(3) - (3)].val));
                ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 148 "bison.y"
    {
                    (yyval.val) = ((yyvsp[(1) - (3)].val)<=(yyvsp[(3) - (3)].val));
                    
                ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 153 "bison.y"
    {
                    (yyval.val) = ((yyvsp[(1) - (3)].val)>=(yyvsp[(3) - (3)].val));
                ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 157 "bison.y"
    {
                    (yyval.val) = ((yyvsp[(1) - (3)].val)==(yyvsp[(3) - (3)].val));
                ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 161 "bison.y"
    {
                    (yyval.val) = ((yyvsp[(1) - (3)].val)!=(yyvsp[(3) - (3)].val));
                ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 165 "bison.y"
    {
                    (yyval.val) = (yyvsp[(2) - (3)].val);
                ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 169 "bison.y"
    {
                    int tmp = 1, k = 2, limit = (int)(yyvsp[(3) - (4)].val);
                    for(;k<=limit;k++){
                        tmp = tmp * k;
                    }
                    (yyval.val) = tmp;
                ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 177 "bison.y"
    {
                    int tmp = 1, k = 1, limit = (int)(yyvsp[(5) - (6)].val);
                    for(;k<=limit;k++){
                        tmp = tmp * (yyvsp[(3) - (6)].val);
                    }
                    (yyval.val) = tmp;
                ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 187 "bison.y"
    {
                    int res = addNewID(sz,(yyvsp[(1) - (1)].str),"");
                    if(!res)
                    {
                        printf("Compilation Error ->  Varribale %s is already declared\n",(yyvsp[(1) - (1)].str));
                        exit(-1);
                    }
                    else sz++;
                ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 197 "bison.y"
    {
                    int n = log10((yyvsp[(3) - (3)].val)) + 1;
                    char *numberArray = calloc(n, sizeof(char));
                    sprintf(numberArray,"%ld",(yyvsp[(3) - (3)].val));
                    int res = addNewID(sz,(yyvsp[(1) - (3)].str),numberArray);
                    if(!res) 
                    {
                        printf("Compilation Error ->  Varribale %s is already declared\n",(yyvsp[(1) - (3)].str));
                        exit(-1);
                    }
                    else sz++;
                ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 212 "bison.y"
    {
                printf("Value of exp : %f\n",(yyvsp[(3) - (5)].val));
            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 216 "bison.y"
    {
                int idx = isCreated(sz,(yyvsp[(3) - (5)].str));
                if(idx==-1)
                {
                    printf("Compilation Error ->  Varribale %s is not declared\n",(yyvsp[(3) - (5)].str));
                    exit(-1);
                }
                else
                {
                    print(id[idx]);
                }
            ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 229 "bison.y"
    {
                printf("Print String -> %s\n",(yyvsp[(3) - (5)].str));
            ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 233 "bison.y"
    {
                printf("\n");
            ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 238 "bison.y"
    {
                    ptrIf++;
                    if((yyvsp[(3) - (7)].val)>0){
                        printf("IF Statement Executed\n");
                        acceptedIf[ptrIf]=1;
                    }
                ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 244 "bison.y"
    {
                    ptrIf--;
                ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 250 "bison.y"
    {
                if(acceptedIf[ptrIf]==0 && (yyvsp[(3) - (7)].val)>0){
                    acceptedIf[ptrIf]=1;
                    printf("ELIF Statement executed\n");
                }
            ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 257 "bison.y"
    {
                if(acceptedIf[ptrIf]==0)
                    printf("ELSE Statement Executed\n");
            ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 263 "bison.y"
    {
                printf("for loop executed\n");
            ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 271 "bison.y"
    {
                printf("while condition executed for %d\n",(yyvsp[(3) - (7)].val));
            ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 280 "bison.y"
    {
                    printf("\nfunction declared\n");
                ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 292 "bison.y"
    {
                    printf("switch statement executed\n");
                ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 298 "bison.y"
    {
                        sdone = 0;
                        svar = (yyvsp[(1) - (1)].val);
                    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 307 "bison.y"
    {
                        if((yyvsp[(2) - (6)].val) == svar){
                            printf("%d Executed\n",(yyvsp[(2) - (6)].val));
                            sdone = 1;
                        }                   
                    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 314 "bison.y"
    {
                        if(sdone == 0){
                            sdone = 1;
                            printf("Default Block executed\n");
                        }
                    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2043 "bison.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
		      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 322 "bison.y"


extern char yytext[];
extern int col;
int yyerror(char *s){
    fflush(stdout);
	printf("\n%*s\n%*s\n", col, "^", col, s);
}
