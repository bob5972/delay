/* A Bison parser, made from parsetimey.y
   by GNU bison 1.32.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	INT	257
# define	NOW	258
# define	AM	259
# define	PM	260
# define	NOON	261
# define	MIDNIGHT	262
# define	TEATIME	263
# define	SUN	264
# define	MON	265
# define	TUE	266
# define	WED	267
# define	THU	268
# define	FRI	269
# define	SAT	270
# define	TODAY	271
# define	TOMORROW	272
# define	NEXT	273
# define	MINUTE	274
# define	HOUR	275
# define	DAY	276
# define	WEEK	277
# define	MONTH	278
# define	YEAR	279
# define	JAN	280
# define	FEB	281
# define	MAR	282
# define	APR	283
# define	MAY	284
# define	JUN	285
# define	JUL	286
# define	AUG	287
# define	SEP	288
# define	OCT	289
# define	NOV	290
# define	DEC	291
# define	WORD	292

#line 1 "parsetimey.y"

#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "parsetime.h"

#define YYDEBUG 1

time_t currtime;
struct tm exectm;
static int isgmt;
static int time_only;

int add_date(int number, int period);

#line 18 "parsetimey.y"
#ifndef YYSTYPE
typedef union {
	char *	  	charval;
	int		intval;
} yystype;
# define YYSTYPE yystype
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		100
#define	YYFLAG		-32768
#define	YYNTBASE	47

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 292 ? yytranslate[x] : 67)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
       2,     2,     2,    43,    39,    40,    41,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    46,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     2,     5,     8,    12,    15,    19,    21,    23,
      26,    29,    31,    33,    36,    40,    45,    48,    52,    57,
      63,    65,    67,    69,    72,    77,    79,    81,    83,    89,
      95,    99,   102,   106,   112,   116,   119,   122,   126,   128,
     130,   132,   134,   136,   138,   140,   142,   144,   146,   148,
     150,   152,   154,   156,   158,   160,   162,   164,   166,   168,
     170,   172,   174,   176,   178,   180,   182,   184,   186,   188,
     190,   192,   194,   196,   198,   200,   202,   204
};
static const short yyrhs[] =
{
      50,     0,    50,    51,     0,    50,    52,     0,    50,    51,
      52,     0,    50,    53,     0,    50,    51,    53,     0,    48,
       0,    49,     0,    49,    52,     0,    49,    53,     0,     4,
       0,    55,     0,    55,    56,     0,    57,    66,    58,     0,
      57,    66,    58,    56,     0,    57,    59,     0,    57,    59,
      56,     0,    57,    66,    58,    59,     0,    57,    66,    58,
      59,    56,     0,     7,     0,     8,     0,     9,     0,    60,
      62,     0,    60,    62,    39,    63,     0,    64,     0,    17,
       0,    18,     0,    63,    40,    61,    40,    62,     0,    62,
      41,    61,    41,    63,     0,    62,    41,    61,     0,    62,
      60,     0,    62,    60,    63,     0,    61,    42,    62,    42,
      63,     0,    43,    65,    54,     0,    19,    54,     0,    19,
      64,     0,    40,    65,    54,     0,    20,     0,    21,     0,
      22,     0,    23,     0,    24,     0,    25,     0,     3,     0,
      38,     0,    55,     0,     3,     0,     5,     0,     6,     0,
      26,     0,    27,     0,    28,     0,    29,     0,    30,     0,
      31,     0,    32,     0,    33,     0,    34,     0,    35,     0,
      36,     0,    37,     0,     3,     0,     3,     0,     3,     0,
      10,     0,    11,     0,    12,     0,    13,     0,    14,     0,
      15,     0,    16,     0,     3,     0,    44,     0,    45,     0,
      41,     0,    46,     0,    39,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,    40,    44,    45,    46,    47,    48,    49,    52,    53,
      54,    57,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    73,    79,    86,    87,    88,    92,    93,    97,    98,
      99,   100,   101,   102,   105,   109,   113,   119,   125,   126,
     127,   128,   129,   130,   133,   158,   171,   174,   184,   185,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   212,   226,   239,   262,   263,   264,   265,   266,
     267,   268,   271,   281,   282,   283,   284,   285
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "INT", "NOW", "AM", "PM", "NOON", "MIDNIGHT", 
  "TEATIME", "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT", "TODAY", 
  "TOMORROW", "NEXT", "MINUTE", "HOUR", "DAY", "WEEK", "MONTH", "YEAR", 
  "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", 
  "NOV", "DEC", "WORD", "','", "'-'", "'.'", "'/'", "'+'", "':'", "'\\''", 
  "'h'", "timespec", "nowspec", "now", "time", "date", "increment", 
  "decrement", "inc_period", "hr24clock_hr_min", "timezone_name", 
  "hr24clock_hour", "minute", "am_pm", "month_name", "month_number", 
  "day_number", "year_number", "day_of_week", "inc_number", "time_sep", NULL
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,    47,    47,    47,    47,    47,    47,    47,    48,    48,
      48,    49,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    53,    54,    54,
      54,    54,    54,    54,    55,    56,    57,    58,    59,    59,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    62,    63,    64,    64,    64,    64,    64,
      64,    64,    65,    66,    66,    66,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     1,     2,     2,     3,     2,     3,     1,     1,     2,
       2,     1,     1,     2,     3,     4,     2,     3,     4,     5,
       1,     1,     1,     2,     4,     1,     1,     1,     5,     5,
       3,     2,     3,     5,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       0,    44,    11,    20,    21,    22,     7,     8,     1,    12,
       0,     0,     0,     0,     9,    10,    63,    65,    66,    67,
      68,    69,    70,    71,    26,    27,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     2,     3,
       5,     0,     0,     0,     0,    25,    45,    13,    48,    49,
      77,    75,    73,    74,    76,    16,     0,    38,    39,    40,
      41,    42,    43,    35,    36,    72,     0,     0,     4,     6,
      63,    23,     0,     0,    31,     0,    17,    47,    14,    37,
      34,     0,     0,    62,    30,    64,    32,     0,    15,    18,
      24,     0,     0,     0,    19,    33,    29,    28,     0,     0,
       0
};

static const short yydefgoto[] =
{
      98,     6,     7,     8,    38,    14,    15,    63,     9,    47,
      10,    78,    55,    41,    42,    43,    44,    45,    66,    56
};

static const short yypact[] =
{
       8,-32768,-32768,-32768,-32768,-32768,-32768,   -14,    43,    -4,
       4,    80,     5,     5,-32768,-32768,   -12,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -14,-32768,
  -32768,    10,    -6,    81,    -8,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,     9,    48,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,    -2,    -2,-32768,-32768,
  -32768,    25,    10,    63,    64,    63,-32768,-32768,     1,-32768,
  -32768,    64,    26,-32768,    41,-32768,-32768,    44,-32768,     9,
  -32768,    64,    64,    10,-32768,-32768,-32768,-32768,    85,    87,
  -32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,    -5,     6,   -42,-32768,   -51,
  -32768,-32768,    11,    54,   -10,   -41,     7,    95,   106,-32768
};


#define	YYLAST		122


static const short yytable[] =
{
      71,   -46,   -46,    39,    76,    11,    48,    49,    65,    48,
      49,     1,     2,    70,    40,     3,     4,     5,    57,    58,
      59,    60,    61,    62,    79,    80,    12,    88,   -64,    13,
     -62,    82,    75,    68,    46,   -46,    72,   -46,    94,    46,
     -46,   -46,   -46,    50,    69,    51,    16,    46,    52,    53,
      54,    77,    97,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    11,    84,    81,    87,    83,    85,    91,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    86,    92,    12,    93,    99,    13,   100,    90,    89,
      17,    18,    19,    20,    21,    22,    23,    74,    95,    96,
      57,    58,    59,    60,    61,    62,    64,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    67,
       0,     0,    73
};

static const short yycheck[] =
{
      41,     5,     6,     8,    55,    19,     5,     6,     3,     5,
       6,     3,     4,     3,     8,     7,     8,     9,    20,    21,
      22,    23,    24,    25,    66,    67,    40,    78,    40,    43,
      42,    72,    40,    38,    38,    39,    42,    41,    89,    38,
      44,    45,    46,    39,    38,    41,     3,    38,    44,    45,
      46,     3,    93,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    73,    39,    75,     3,     3,    42,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    74,    41,    40,    40,     0,    43,     0,    81,    78,
      10,    11,    12,    13,    14,    15,    16,    43,    91,    92,
      20,    21,    22,    23,    24,    25,    11,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    13,
      -1,    -1,    41
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#ifdef __cplusplus
# define YYSTD(x) std::x
#else
# define YYSTD(x) x
#endif

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
#  define YYSIZE_T YYSTD (size_t)
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#    define YYSIZE_T YYSTD (size_t)
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  ifdef __cplusplus
#   include <cstdlib> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T std::size_t
#  else
#   ifdef __STDC__
#    include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#    define YYSIZE_T size_t
#   endif
#  endif
#  define YYSTACK_ALLOC YYSTD (malloc)
#  define YYSTACK_FREE YYSTD (free)
# endif

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Relocate the TYPE STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Type, Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	yymemcpy ((char *) yyptr, (char *) (Stack),			\
		  yysize * (YYSIZE_T) sizeof (Type));			\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (Type) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# ifdef __cplusplus
#  include <cstddef> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T std::size_t
# else
#  ifdef __STDC__
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
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
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  ifdef __cplusplus
#   include <cstdio>  /* INFRINGES ON USER NAME SPACE */
#  else
#   include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYFPRINTF YYSTD (fprintf)
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace. [The following comment makes no
   sense to me.  Could someone clarify it?  --akim] Since this is
   uninitialized, it does not stop multiple parsers from coexisting.
   */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#if ! defined (yyoverflow) && ! defined (yymemcpy)
# if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#  define yymemcpy __builtin_memcpy
# else				/* not GNU C or C++ */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
#  if defined (__STDC__) || defined (__cplusplus)
yymemcpy (char *yyto, const char *yyfrom, YYSIZE_T yycount)
#  else
yymemcpy (yyto, yyfrom, yycount)
     char *yyto;
     const char *yyfrom;
     YYSIZE_T yycount;
#  endif
{
  register const char *yyf = yyfrom;
  register char *yyt = yyto;
  register YYSIZE_T yyi = yycount;

  while (yyi-- != 0)
    *yyt++ = *yyf++;
}
# endif
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 341 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# ifdef __cplusplus
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else /* !__cplusplus */
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif /* !__cplusplus */
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (short, yyss);
	YYSTACK_RELOCATE (YYSTYPE, yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (YYLTYPE, yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 1:
#line 41 "parsetimey.y"
{
			time_only = 1;
		    }
    break;
case 20:
#line 69 "parsetimey.y"
{
			exectm.tm_hour = 12;
			exectm.tm_min = 0;
		    }
    break;
case 21:
#line 74 "parsetimey.y"
{
			exectm.tm_hour = 0;
			exectm.tm_min = 0;
			add_date(1, DAY);
		    }
    break;
case 22:
#line 80 "parsetimey.y"
{
			exectm.tm_hour = 16;
			exectm.tm_min = 0;
		    }
    break;
case 25:
#line 89 "parsetimey.y"
{
		       add_date ((7 + yyvsp[0].intval - exectm.tm_wday) %7, DAY);
		   }
    break;
case 27:
#line 94 "parsetimey.y"
{
			add_date(1, DAY);
		   }
    break;
case 34:
#line 106 "parsetimey.y"
{
		        add_date(yyvsp[-1].intval, yyvsp[0].intval);
		    }
    break;
case 35:
#line 110 "parsetimey.y"
{
			add_date(1, yyvsp[0].intval);
		    }
    break;
case 36:
#line 114 "parsetimey.y"
{
			add_date ((7 + yyvsp[0].intval - exectm.tm_wday) %7, DAY);
		    }
    break;
case 37:
#line 120 "parsetimey.y"
{
			add_date(-yyvsp[-1].intval, yyvsp[0].intval);
		    }
    break;
case 38:
#line 125 "parsetimey.y"
{ yyval.intval = MINUTE ; }
    break;
case 39:
#line 126 "parsetimey.y"
{ yyval.intval = HOUR ; }
    break;
case 40:
#line 127 "parsetimey.y"
{ yyval.intval = DAY ; }
    break;
case 41:
#line 128 "parsetimey.y"
{ yyval.intval = WEEK ; }
    break;
case 42:
#line 129 "parsetimey.y"
{ yyval.intval = MONTH ; }
    break;
case 43:
#line 130 "parsetimey.y"
{ yyval.intval = YEAR ; }
    break;
case 44:
#line 134 "parsetimey.y"
{
			exectm.tm_min = -1;
			exectm.tm_hour = -1;
			if (strlen(yyvsp[0].charval) == 4) {
			    sscanf(yyvsp[0].charval, "%2d %2d", &exectm.tm_hour,
				&exectm.tm_min);
			}
			else {
			    sscanf(yyvsp[0].charval, "%d", &exectm.tm_hour);
			    exectm.tm_min = 0;
			}
			free(yyvsp[0].charval);

			if (exectm.tm_min > 60 || exectm.tm_min < 0) {
			    yyerror("Problem in minutes specification");
			    YYERROR;
			}
			if (exectm.tm_hour > 24 || exectm.tm_hour < 0) {
			    yyerror("Problem in minutes specification");
			    YYERROR;
		        }
		    }
    break;
case 45:
#line 159 "parsetimey.y"
{
			if (strcasecmp(yyvsp[0].charval,"utc") == 0) {
			    isgmt = 1;
			}
			else {
			    yyerror("Only UTC timezone is supported");
			    YYERROR;
			}
			free(yyvsp[0].charval);
		    }
    break;
case 47:
#line 175 "parsetimey.y"
{
			if (sscanf(yyvsp[0].charval, "%d", &exectm.tm_min) != 1) {
			    yyerror("Error in minute");
			    YYERROR;
		        }
			free(yyvsp[0].charval);
		    }
    break;
case 49:
#line 186 "parsetimey.y"
{
			if (exectm.tm_hour > 12) {
			    yyerror("Hour too large for PM");
			    YYERROR;
			}
			else if (exectm.tm_hour < 12) {
			    exectm.tm_hour +=12;
			}
		    }
    break;
case 50:
#line 198 "parsetimey.y"
{ exectm.tm_mon = 0; }
    break;
case 51:
#line 199 "parsetimey.y"
{ exectm.tm_mon = 1; }
    break;
case 52:
#line 200 "parsetimey.y"
{ exectm.tm_mon = 2; }
    break;
case 53:
#line 201 "parsetimey.y"
{ exectm.tm_mon = 3; }
    break;
case 54:
#line 202 "parsetimey.y"
{ exectm.tm_mon = 4; }
    break;
case 55:
#line 203 "parsetimey.y"
{ exectm.tm_mon = 5; }
    break;
case 56:
#line 204 "parsetimey.y"
{ exectm.tm_mon = 6; }
    break;
case 57:
#line 205 "parsetimey.y"
{ exectm.tm_mon = 7; }
    break;
case 58:
#line 206 "parsetimey.y"
{ exectm.tm_mon = 8; }
    break;
case 59:
#line 207 "parsetimey.y"
{ exectm.tm_mon = 9; }
    break;
case 60:
#line 208 "parsetimey.y"
{ exectm.tm_mon =10; }
    break;
case 61:
#line 209 "parsetimey.y"
{ exectm.tm_mon =11; }
    break;
case 62:
#line 213 "parsetimey.y"
{
			{
			    int mnum = -1;
			    sscanf(yyvsp[0].charval, "%d", &mnum);

			    if (mnum < 1 || mnum > 12) {
				yyerror("Error in month number");
				YYERROR;
			    }
			    exectm.tm_mon = mnum -1;
			    free(yyvsp[0].charval);
			}
		    }
    break;
case 63:
#line 227 "parsetimey.y"
{
			exectm.tm_mday = -1;
			sscanf(yyvsp[0].charval, "%d", &exectm.tm_mday);
			if (exectm.tm_mday < 0 || exectm.tm_mday > 31)
			{
			    yyerror("Error in day of month");
			    YYERROR; 
			}
			free(yyvsp[0].charval);
		     }
    break;
case 64:
#line 240 "parsetimey.y"
{ 
			{
			    int ynum;

			    if ( sscanf(yyvsp[0].charval, "%d", &ynum) != 1) {
				yyerror("Error in year");
				YYERROR;
			    }
			    if (ynum < 70) {
				ynum += 100;
			    }
			    else if (ynum > 1900) {
				ynum -= 1900;
			    }

			    exectm.tm_year = ynum ;
			    free(yyvsp[0].charval);
			}
		    }
    break;
case 65:
#line 262 "parsetimey.y"
{ yyval.intval = 0; }
    break;
case 66:
#line 263 "parsetimey.y"
{ yyval.intval = 1; }
    break;
case 67:
#line 264 "parsetimey.y"
{ yyval.intval = 2; }
    break;
case 68:
#line 265 "parsetimey.y"
{ yyval.intval = 3; }
    break;
case 69:
#line 266 "parsetimey.y"
{ yyval.intval = 4; }
    break;
case 70:
#line 267 "parsetimey.y"
{ yyval.intval = 5; }
    break;
case 71:
#line 268 "parsetimey.y"
{ yyval.intval = 6; }
    break;
case 72:
#line 272 "parsetimey.y"
{
			if (sscanf(yyvsp[0].charval, "%d", &yyval.intval) != 1) {
			    yyerror("Unknown increment");
			    YYERROR;
		        }
		        free(yyvsp[0].charval);
		    }
    break;
}

#line 727 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
yyerrhandle:
  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

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

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 288 "parsetimey.y"



time_t parsetime(int, char **);

time_t
parsetime(int argc, char **argv)
{
    time_t exectime;
    int dl;
    int gmtoff;
    
    my_argv = argv;
    currtime = time(NULL);
    exectm = *localtime(&currtime);
    exectm.tm_sec = 0;
    
    dl = exectm.tm_isdst;

    /* Sigh. Bsd does it one way. Solaris does it another. Linux has it
       both ways... what's a poor programmer to do?
    */

#ifdef HAVE_TM_GMTMOFF
    gmtoff = exectm.tm_gmtoff;
#else
#ifdef HAVE_TIMEZONE
    gtmtoff = timezone;
#else
    gmtoff = 0; /* And utc is broken. */
#endif
#endif
    
    exectm.tm_isdst = -1;
    time_only = 0;
    if (yyparse() == 0) {
	exectime = mktime(&exectm);

	/* Note: This code has been rewritten by Tom. */
	if (isgmt) {
	    exectime += gmtoff;
		
	    if (dl) {
		    exectime -= 3600;
	    }
	} /* End Rewrite */

	if (time_only && (currtime > exectime)) {
	    exectime += 24*3600;
	}
        return exectime;
    }
    else {
	return 0;    
    }
}

#ifdef TEST_PARSER
int
main(int argc, char **argv)
{
    time_t res;
    res = parsetime(argc-1, &argv[1]);
    if (res > 0) {
	printf("%s",ctime(&res));
    }
    else {
	printf("Ooops...\n");
    }
    return 0;
}

#endif
int yyerror(char *s)
{
    if (last_token == NULL)
	last_token = "(empty)";
    fprintf(stderr,"%s. Last token seen: %s\n",s, last_token);
    return 0;
}

void
add_seconds(struct tm *tm, long numsec)
{
    time_t timeval;
    timeval = mktime(tm);
    timeval += numsec;
    *tm = *localtime(&timeval);
}

int
add_date(int number, int period)
{
    switch(period) {
    case MINUTE:
	add_seconds(&exectm , 60l*number);
	break;

    case HOUR:
	add_seconds(&exectm, 3600l * number);
	break;

    case DAY:
	add_seconds(&exectm, 24*3600l * number);
	break;

    case WEEK:
	add_seconds(&exectm, 7*24*3600l*number);
	break;

    case MONTH:
	{
	    int newmonth = exectm.tm_mon + number;
	    number = 0;
	    while (newmonth < 0) {
		newmonth += 12;
		number --;
	    }
	    exectm.tm_mon = newmonth % 12;
	    number += newmonth / 12 ;
	}
	if (number == 0) {
	    break;
	}
	/* fall through */

    case YEAR:
	exectm.tm_year += number;
	break;

    default:
	yyerror("Internal parser error");
	fprintf(stderr,"Unexpected case %d\n", period);
	abort();
    }
    return 0;
}
