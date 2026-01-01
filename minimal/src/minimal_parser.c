/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 21 "src/minimal_parser.y"

#include "minimal_internal.h"

#define YYSTYPE Minimal_SyntaxTree

#include "yy.lex.h"

Minimal_SyntaxTree yy_result;

void yyerror(char* s) {
}

#line 84 "src/minimal_parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "minimal_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_YY_ID = 3,                      /* YY_ID  */
  YYSYMBOL_YY_INTEGER = 4,                 /* YY_INTEGER  */
  YYSYMBOL_YY_STRING = 5,                  /* YY_STRING  */
  YYSYMBOL_YY_TYPESPEC = 6,                /* YY_TYPESPEC  */
  YYSYMBOL_YY_FUNCTION = 7,                /* YY_FUNCTION  */
  YYSYMBOL_YY_OPERATOR = 8,                /* YY_OPERATOR  */
  YYSYMBOL_YY_SEMICOLON = 9,               /* YY_SEMICOLON  */
  YYSYMBOL_YY_COMMA = 10,                  /* YY_COMMA  */
  YYSYMBOL_YY_EQ = 11,                     /* YY_EQ  */
  YYSYMBOL_YY_OPENB = 12,                  /* YY_OPENB  */
  YYSYMBOL_YY_CLOSEB = 13,                 /* YY_CLOSEB  */
  YYSYMBOL_YY_OPENSQB = 14,                /* YY_OPENSQB  */
  YYSYMBOL_YY_CLOSESQB = 15,               /* YY_CLOSESQB  */
  YYSYMBOL_YY_IF = 16,                     /* YY_IF  */
  YYSYMBOL_YY_THEN = 17,                   /* YY_THEN  */
  YYSYMBOL_YY_ELSE = 18,                   /* YY_ELSE  */
  YYSYMBOL_YY_ENDIF = 19,                  /* YY_ENDIF  */
  YYSYMBOL_YY_TESTOP = 20,                 /* YY_TESTOP  */
  YYSYMBOL_YY_LET = 21,                    /* YY_LET  */
  YYSYMBOL_YYACCEPT = 22,                  /* $accept  */
  YYSYMBOL_input = 23,                     /* input  */
  YYSYMBOL_typespec_def = 24,              /* typespec_def  */
  YYSYMBOL_typespec = 25,                  /* typespec  */
  YYSYMBOL_definition = 26,                /* definition  */
  YYSYMBOL_expr = 27,                      /* expr  */
  YYSYMBOL_value = 28,                     /* value  */
  YYSYMBOL_parameter_list = 29,            /* parameter_list  */
  YYSYMBOL_function_call = 30,             /* function_call  */
  YYSYMBOL_argument_list = 31,             /* argument_list  */
  YYSYMBOL_tuple = 32,                     /* tuple  */
  YYSYMBOL_tuple2 = 33,                    /* tuple2  */
  YYSYMBOL_34_1 = 34,                      /* @1  */
  YYSYMBOL_if_expr = 35,                   /* if_expr  */
  YYSYMBOL_test_expr = 36,                 /* test_expr  */
  YYSYMBOL_let_expr = 37                   /* let_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  22
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  40
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  78

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    38,    38,    39,    55,    71,    89,    94,   101,   102,
     105,   136,   174,   177,   189,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   207,   214,   215,   218,   219,
     228,   231,   236,   237,   241,   252,   252,   256,   262,   268,
     271
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "YY_ID", "YY_INTEGER",
  "YY_STRING", "YY_TYPESPEC", "YY_FUNCTION", "YY_OPERATOR", "YY_SEMICOLON",
  "YY_COMMA", "YY_EQ", "YY_OPENB", "YY_CLOSEB", "YY_OPENSQB",
  "YY_CLOSESQB", "YY_IF", "YY_THEN", "YY_ELSE", "YY_ENDIF", "YY_TESTOP",
  "YY_LET", "$accept", "input", "typespec_def", "typespec", "definition",
  "expr", "value", "parameter_list", "function_call", "argument_list",
  "tuple", "tuple2", "@1", "if_expr", "test_expr", "let_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-32)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-29)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -32,     4,   -32,    26,   -32,   -32,    68,     7,    10,     5,
       6,    98,   -32,   -32,   -32,   -32,   -32,   -32,    15,    32,
     -32,   -32,   103,   112,    34,   -32,   -32,     7,   -32,   -32,
      74,     7,     7,    35,    21,    -6,   -32,     7,   -32,     7,
       7,   157,    38,     7,   -32,   164,    31,   123,   157,    14,
     -32,    33,    15,    46,   157,   132,    49,     7,   157,     7,
     -32,   -32,    47,   -32,    -6,    35,    -6,   -32,     7,    88,
     157,   157,   -32,   -32,   137,   -32,   150,   -32
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    25,    26,    27,     0,     0,     0,     0,
       0,     0,    15,    20,    21,    22,    23,    24,     0,     0,
      25,    16,     0,     0,     0,     3,     4,     0,     5,    35,
       0,     0,     0,     7,     0,     6,    29,     0,    17,     0,
       0,    19,    34,     0,    30,    32,     0,     0,    39,     0,
       8,     0,     0,     0,    14,     0,     0,     0,    36,     0,
      31,    18,     0,    12,     9,     7,    10,    11,     0,     0,
      40,    37,    33,    13,     0,    16,     0,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,   -32,   -31,   -32,    -1,     9,   -32,   -32,    16,
     -32,   -32,   -32,   -32,   -32,   -32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     9,    35,    10,    45,    12,    19,    13,    46,
      14,    42,    43,    15,    16,    17
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      11,    52,    53,    51,     2,    22,    23,     3,     4,     5,
      20,     4,     5,    24,    25,    26,     6,    62,    33,     6,
       7,    64,    66,     7,    33,     8,    41,    34,     8,   -28,
      47,    48,    18,    34,    50,    36,    54,   -28,    55,    56,
      52,    53,    58,    37,    60,    40,    63,    49,    57,    65,
       4,     5,    20,     4,     5,    70,    71,    27,    34,    29,
      73,    69,    67,    31,     0,     7,     0,    74,    76,    32,
       8,    20,     4,     5,     0,    72,     0,    20,     4,     5,
       6,    21,     0,     0,     7,     0,     6,    44,     0,     8,
       7,    20,     4,     5,     0,     8,     0,     0,     0,     0,
       6,    75,     0,     0,     7,     0,    27,    28,    29,     8,
      30,    27,    31,    29,     0,    30,    38,    31,    32,     0,
      27,     0,    29,    32,    30,     0,    31,     0,     0,    39,
       0,    27,    32,    29,     0,    30,     0,    31,    61,     0,
      27,     0,    29,    32,    30,    27,    31,    29,     0,    30,
      68,    31,    32,     0,     0,     0,    77,    32,    27,     0,
      59,     0,    30,    38,    31,    27,     0,    29,     0,    30,
      32,    31,    27,     0,    59,     0,    30,    32,    31,     0,
       0,     0,     0,     0,    32
};

static const yytype_int8 yycheck[] =
{
       1,     7,     8,    34,     0,     6,     7,     3,     4,     5,
       3,     4,     5,     3,     9,     9,    12,     3,     3,    12,
      16,    52,    53,    16,     3,    21,    27,    12,    21,     3,
      31,    32,     6,    12,    13,     3,    37,    11,    39,    40,
       7,     8,    43,    11,    13,    11,    13,    12,    10,     3,
       4,     5,     3,     4,     5,    56,    57,     8,    12,    10,
      13,    12,    53,    14,    -1,    16,    -1,    68,    69,    20,
      21,     3,     4,     5,    -1,    59,    -1,     3,     4,     5,
      12,    13,    -1,    -1,    16,    -1,    12,    13,    -1,    21,
      16,     3,     4,     5,    -1,    21,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    -1,     8,     9,    10,    21,
      12,     8,    14,    10,    -1,    12,    13,    14,    20,    -1,
       8,    -1,    10,    20,    12,    -1,    14,    -1,    -1,    17,
      -1,     8,    20,    10,    -1,    12,    -1,    14,    15,    -1,
       8,    -1,    10,    20,    12,     8,    14,    10,    -1,    12,
      18,    14,    20,    -1,    -1,    -1,    19,    20,     8,    -1,
      10,    -1,    12,    13,    14,     8,    -1,    10,    -1,    12,
      20,    14,     8,    -1,    10,    -1,    12,    20,    14,    -1,
      -1,    -1,    -1,    -1,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,     0,     3,     4,     5,    12,    16,    21,    24,
      26,    27,    28,    30,    32,    35,    36,    37,     6,    29,
       3,    13,    27,    27,     3,     9,     9,     8,     9,    10,
      12,    14,    20,     3,    12,    25,     3,    11,    13,    17,
      11,    27,    33,    34,    13,    27,    31,    27,    27,    12,
      13,    25,     7,     8,    27,    27,    27,    10,    27,    10,
      13,    15,     3,    13,    25,     3,    25,    28,    18,    12,
      27,    27,    31,    13,    27,    13,    27,    19
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    22,    23,    23,    23,    23,    24,    25,    25,    25,
      25,    25,    25,    25,    26,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    28,    28,    28,    29,    29,
      30,    30,    31,    31,    32,    34,    33,    33,    35,    36,
      37
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     3,     3,     3,     1,     2,     3,
       3,     3,     3,     4,     4,     1,     2,     3,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       3,     4,     1,     3,     3,     0,     2,     3,     7,     3,
       5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* input: %empty  */
#line 38 "src/minimal_parser.y"
       { yyval = Minimal_SyntaxTree_createBlank(); yy_result = yyval; }
#line 1172 "src/minimal_parser.c"
    break;

  case 3: /* input: input typespec_def YY_SEMICOLON  */
#line 39 "src/minimal_parser.y"
                                       {
                        if(yyvsp[-2]->type == ST_BLANK) {
                            yyval = yyvsp[-1];
                            Minimal_delReference(yyvsp[-2]);
                        } else if(yyvsp[-1]->type == ST_BLANK) {
                            yyval = yyvsp[-2];
                            Minimal_delReference(yyvsp[-1]);
                        } else {
                            if(yyvsp[-2]->type != ST_SEQENTIAL_DEFS) {
                                yyval = Minimal_SyntaxTree_createSequence2(yyvsp[-2], yyvsp[-1]);
                            } else {
                                yyval = Minimal_SyntaxTree_addToSequence(yyvsp[-2], yyvsp[-1]);
                            }
                        }
                        yy_result = yyval;
                        }
#line 1193 "src/minimal_parser.c"
    break;

  case 4: /* input: input definition YY_SEMICOLON  */
#line 55 "src/minimal_parser.y"
                                     {
                        if(yyvsp[-2]->type == ST_BLANK) {
                            Minimal_delReference(yyvsp[-2]);
                            yyval = yyvsp[-1];
                        } else if(yyvsp[-1]->type == ST_BLANK) {
                            Minimal_delReference(yyvsp[-1]);
                            yyval = yyvsp[-2];
                        } else {
                            if(yyvsp[-2]->type != ST_SEQENTIAL_DEFS) {
                                yyval = Minimal_SyntaxTree_createSequence2(yyvsp[-2], yyvsp[-1]);
                            } else {
                                yyval = Minimal_SyntaxTree_addToSequence(yyvsp[-2], yyvsp[-1]);
                            }
                        }
                        yy_result = yyval;
                        }
#line 1214 "src/minimal_parser.c"
    break;

  case 5: /* input: input expr YY_SEMICOLON  */
#line 71 "src/minimal_parser.y"
                               {
                        if(yyvsp[-2]->type == ST_BLANK) {
                            Minimal_delReference(yyvsp[-2]);
                            yyval = yyvsp[-1];
                        } else if(yyvsp[-1]->type == ST_BLANK) {
                            Minimal_delReference(yyvsp[-1]);
                            yyval = yyvsp[-2];
                        } else {
                            if(yyvsp[-2]->type != ST_SEQENTIAL_DEFS) {
                                yyval = Minimal_SyntaxTree_createSequence2(yyvsp[-2], yyvsp[-1]);
                            } else {
                                yyval = Minimal_SyntaxTree_addToSequence(yyvsp[-2], yyvsp[-1]);
                            }
                        }
                        yy_result = yyval;
                        }
#line 1235 "src/minimal_parser.c"
    break;

  case 6: /* typespec_def: YY_ID YY_TYPESPEC typespec  */
#line 89 "src/minimal_parser.y"
                                         {
    yyval = Minimal_SyntaxTree_createTypeSpec(yyvsp[-2], yyvsp[0]);
    }
#line 1243 "src/minimal_parser.c"
    break;

  case 7: /* typespec: YY_ID  */
#line 94 "src/minimal_parser.y"
                { if(strcmp(yyvsp[0]->string, "Nil") == 0) {
                    Minimal_delReference(yyvsp[0]);
                    yyval = Minimal_SyntaxTree_createNil();
                  } else {
                    yyval = yyvsp[0];
                  }
                }
#line 1255 "src/minimal_parser.c"
    break;

  case 8: /* typespec: YY_OPENB YY_CLOSEB  */
#line 101 "src/minimal_parser.y"
                             { yyval = Minimal_SyntaxTree_createProductType(); }
#line 1261 "src/minimal_parser.c"
    break;

  case 9: /* typespec: typespec YY_FUNCTION typespec  */
#line 102 "src/minimal_parser.y"
                                        {
                        yyval = Minimal_SyntaxTree_createFunction(yyvsp[-2], yyvsp[0]);
                        }
#line 1269 "src/minimal_parser.c"
    break;

  case 10: /* typespec: typespec YY_OPERATOR typespec  */
#line 105 "src/minimal_parser.y"
                                        {
                        if(strcmp(yyvsp[-1]->string, "*") == 0) {
                            if(yyvsp[-2]->type == ST_PRODUCT_TYPE) {
                                Minimal_SyntaxTree_addToProductType(yyvsp[-2], yyvsp[0]);
                                yyval = yyvsp[-2];
                            } else if(yyvsp[0]->type == ST_PRODUCT_TYPE) {
                                Minimal_SyntaxTree_prependToProductType(yyvsp[0], yyvsp[-2]);
                                yyval = yyvsp[0];
                            } else {
                                yyval = Minimal_SyntaxTree_createProductType();
                                Minimal_SyntaxTree_addToProductType(yyval, yyvsp[-2]);
                                Minimal_SyntaxTree_addToProductType(yyval, yyvsp[0]);
                            }
                        } else if(strcmp(yyvsp[-1]->string, "+") == 0) {
                            if(yyvsp[-2]->type == ST_SUM_TYPE) {
                                Minimal_SyntaxTree_addToSumType(yyvsp[-2], yyvsp[0]);
                                yyval = yyvsp[-2];
                            } else if(yyvsp[-1]->type == ST_SUM_TYPE) {
                                Minimal_SyntaxTree_prependToSumType(yyvsp[0], yyvsp[-2]);
                                yyval = yyvsp[-2];
                            } else {
                                yyval = Minimal_SyntaxTree_createSumType();
                                Minimal_SyntaxTree_addToSumType(yyval, yyvsp[-2]);
                                Minimal_SyntaxTree_addToSumType(yyval, yyvsp[0]);
                            }
                        } else {
                            fprintf(stderr, "Error: Type operator '%s' is not defined.\n", yyvsp[-1]->string);
                            yyval = Minimal_SyntaxTree_createBlank();
                        }
                        Minimal_delReference(yyvsp[-1]);
                        }
#line 1305 "src/minimal_parser.c"
    break;

  case 11: /* typespec: typespec YY_OPERATOR value  */
#line 136 "src/minimal_parser.y"
                                     {
                        if(yyvsp[0]->type != ST_INTEGER) {
                            fprintf(stderr, "Error: Type multiplication must involve an integer.\n");
                            yyval = Minimal_SyntaxTree_createBlank();
                            Minimal_delReference(yyvsp[-2]); Minimal_delReference(yyvsp[-1]); Minimal_delReference(yyvsp[0]);
                        } else if(strcmp(yyvsp[-1]->string, "*") == 0) {
                            int i;
                            if(yyvsp[0]->integer == 0) {
                                Minimal_delReference(yyvsp[-2]);
                                yyval = Minimal_SyntaxTree_createProductType();
                            } else {
                                yyval = Minimal_SyntaxTree_createProductType();
                                for(i = 0; i < yyvsp[0]->integer; i++) {
                                    Minimal_addReference(yyvsp[-2]);
                                    Minimal_SyntaxTree_addToProductType(yyval, yyvsp[-2]);
                                }
                            }
                            Minimal_delReference(yyvsp[0]);
                        } else if(strcmp(yyvsp[-1]->string, "+") == 0) {
                            int i;
                            if(yyvsp[0]->integer == 0) {
                                Minimal_delReference(yyvsp[-2]);
                                yyval = Minimal_SyntaxTree_createSumType();
                            } else {
                                yyval = Minimal_SyntaxTree_createSumType();
                                for(i = 0; i < yyvsp[0]->integer; i++) {
                                    Minimal_addReference(yyvsp[-2]);
                                    Minimal_SyntaxTree_addToSumType(yyval, yyvsp[-2]);
                                }
                            }
                            Minimal_delReference(yyvsp[0]);
                        } else {
                            fprintf(stderr, "Error: Type operator '%s' is not for a value as the second operator.\n", yyvsp[-1]->string);
                            yyval = Minimal_SyntaxTree_createBlank();
                            Minimal_delReference(yyvsp[-2]); Minimal_delReference(yyvsp[0]);
                        }
                        Minimal_delReference(yyvsp[-1]);
                        }
#line 1348 "src/minimal_parser.c"
    break;

  case 12: /* typespec: YY_OPENB typespec YY_CLOSEB  */
#line 174 "src/minimal_parser.y"
                                      {
                        yyval = Minimal_SyntaxTree_createBracket(yyvsp[-1]);
                        }
#line 1356 "src/minimal_parser.c"
    break;

  case 13: /* typespec: YY_ID YY_OPENB YY_ID YY_CLOSEB  */
#line 177 "src/minimal_parser.y"
                                         {
                        if(strcmp(yyvsp[-3]->string, "ptr") == 0) {
                            yyval = Minimal_SyntaxTree_createPointer(yyvsp[-1]);
                        } else {
                            fprintf(stderr, "Error: %s is an invalid type function.\n", yyvsp[-3]->string);
                            yyval = Minimal_SyntaxTree_createBlank();
                            Minimal_delReference(yyvsp[-1]);
                        }
                        Minimal_delReference(yyvsp[-3]);
                        }
#line 1371 "src/minimal_parser.c"
    break;

  case 14: /* definition: YY_ID parameter_list YY_EQ expr  */
#line 189 "src/minimal_parser.y"
                                            {
                                              yyval = Minimal_SyntaxTree_createFunctionDef(yyvsp[-3], yyvsp[-2], yyvsp[0]);
                                            }
#line 1379 "src/minimal_parser.c"
    break;

  case 15: /* expr: value  */
#line 195 "src/minimal_parser.y"
            { yyval = yyvsp[0]; }
#line 1385 "src/minimal_parser.c"
    break;

  case 16: /* expr: YY_OPENB YY_CLOSEB  */
#line 196 "src/minimal_parser.y"
                         { yyval = Minimal_SyntaxTree_createTuple(0); }
#line 1391 "src/minimal_parser.c"
    break;

  case 17: /* expr: YY_OPENB expr YY_CLOSEB  */
#line 197 "src/minimal_parser.y"
                              { yyval = yyvsp[-1]; }
#line 1397 "src/minimal_parser.c"
    break;

  case 18: /* expr: expr YY_OPENSQB expr YY_CLOSESQB  */
#line 198 "src/minimal_parser.y"
                                       { yyval = Minimal_SyntaxTree_createIndex(yyvsp[-3], yyvsp[-1]); }
#line 1403 "src/minimal_parser.c"
    break;

  case 19: /* expr: expr YY_OPERATOR expr  */
#line 199 "src/minimal_parser.y"
                              { yyval = Minimal_SyntaxTree_createOperator(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1409 "src/minimal_parser.c"
    break;

  case 20: /* expr: function_call  */
#line 200 "src/minimal_parser.y"
                              { yyval = yyvsp[0]; }
#line 1415 "src/minimal_parser.c"
    break;

  case 21: /* expr: tuple  */
#line 201 "src/minimal_parser.y"
                              { yyval = yyvsp[0]; }
#line 1421 "src/minimal_parser.c"
    break;

  case 22: /* expr: if_expr  */
#line 202 "src/minimal_parser.y"
                              { yyval = yyvsp[0]; }
#line 1427 "src/minimal_parser.c"
    break;

  case 23: /* expr: test_expr  */
#line 203 "src/minimal_parser.y"
                              { yyval = yyvsp[0]; }
#line 1433 "src/minimal_parser.c"
    break;

  case 24: /* expr: let_expr  */
#line 204 "src/minimal_parser.y"
                              { yyval = yyvsp[0]; }
#line 1439 "src/minimal_parser.c"
    break;

  case 25: /* value: YY_ID  */
#line 207 "src/minimal_parser.y"
             { if(strcmp(yyvsp[0]->string, "Nil") == 0) {
                    Minimal_delReference(&yyvsp[0]);
                    yyval = Minimal_SyntaxTree_createNil();
                  } else {
                    yyval = yyvsp[0];
                  }
             }
#line 1451 "src/minimal_parser.c"
    break;

  case 26: /* value: YY_INTEGER  */
#line 214 "src/minimal_parser.y"
                  { yyval = yyvsp[0]; }
#line 1457 "src/minimal_parser.c"
    break;

  case 27: /* value: YY_STRING  */
#line 215 "src/minimal_parser.y"
                 { yyval = yyvsp[0]; }
#line 1463 "src/minimal_parser.c"
    break;

  case 28: /* parameter_list: %empty  */
#line 218 "src/minimal_parser.y"
                { yyval = Minimal_SyntaxTree_createBlank(); }
#line 1469 "src/minimal_parser.c"
    break;

  case 29: /* parameter_list: parameter_list YY_ID  */
#line 219 "src/minimal_parser.y"
                                     { if(yyvsp[-1]->type == ST_BLANK) {
                                        yyval = Minimal_SyntaxTree_createParameterList1(yyvsp[0]);
                                        Minimal_delReference(yyvsp[-1]);
                                       } else {
                                        yyval = Minimal_SyntaxTree_createParameterList2(yyvsp[-1], yyvsp[0]);
                                       }
                                     }
#line 1481 "src/minimal_parser.c"
    break;

  case 30: /* function_call: expr YY_OPENB YY_CLOSEB  */
#line 228 "src/minimal_parser.y"
                                       {
        yyval = Minimal_SyntaxTree_createFunctionCall(yyvsp[-2], NULL);
    }
#line 1489 "src/minimal_parser.c"
    break;

  case 31: /* function_call: expr YY_OPENB argument_list YY_CLOSEB  */
#line 231 "src/minimal_parser.y"
                                                     {
        yyval = Minimal_SyntaxTree_createFunctionCall(yyvsp[-3], yyvsp[-1]);
    }
#line 1497 "src/minimal_parser.c"
    break;

  case 32: /* argument_list: expr  */
#line 236 "src/minimal_parser.y"
                    { printf("expr\n"); yyval = Minimal_SyntaxTree_createArgumentList1(yyvsp[0]); }
#line 1503 "src/minimal_parser.c"
    break;

  case 33: /* argument_list: expr YY_COMMA argument_list  */
#line 237 "src/minimal_parser.y"
                                            { printf("arg list\n"); yyval = Minimal_SyntaxTree_createArgumentList2(yyvsp[-2], yyvsp[0]);
                                     }
#line 1510 "src/minimal_parser.c"
    break;

  case 34: /* tuple: expr YY_COMMA tuple2  */
#line 241 "src/minimal_parser.y"
                            { int i;
                              yyval = Minimal_SyntaxTree_createTuple(1);
                              Minimal_SyntaxTree_setTuple(yyval, 0, yyvsp[-2]);
                              for(i=0; i<yyvsp[0]->size; i++) {
                                  Minimal_addReference(yyvsp[0]->tuple[i]);
                                  Minimal_SyntaxTree_addToTuple(yyval, yyvsp[0]->tuple[i]);
                              }
                              Minimal_delReference(yyvsp[0]);
                            }
#line 1524 "src/minimal_parser.c"
    break;

  case 35: /* @1: %empty  */
#line 252 "src/minimal_parser.y"
        { yyval = Minimal_SyntaxTree_createBlank(); }
#line 1530 "src/minimal_parser.c"
    break;

  case 36: /* tuple2: @1 expr  */
#line 253 "src/minimal_parser.y"
             { yyval = Minimal_SyntaxTree_createTuple(1);
               Minimal_SyntaxTree_setTuple(yyval, 0, yyvsp[-1]);
             }
#line 1538 "src/minimal_parser.c"
    break;

  case 37: /* tuple2: tuple2 YY_COMMA expr  */
#line 256 "src/minimal_parser.y"
                             { Minimal_SyntaxTree_addToTuple(yyvsp[-2], yyvsp[0]);
                            yyval = yyvsp[-2];
                            Minimal_delReference(yyvsp[-1]);
                          }
#line 1547 "src/minimal_parser.c"
    break;

  case 38: /* if_expr: YY_IF expr YY_THEN expr YY_ELSE expr YY_ENDIF  */
#line 262 "src/minimal_parser.y"
                                                       {
        yyval = Minimal_SyntaxTree_createIfExpr(yyvsp[-5], yyvsp[-3], yyvsp[-1]);
        Minimal_delReference(yyvsp[-6]); Minimal_delReference(yyvsp[-4]); Minimal_delReference(yyvsp[-2]); Minimal_delReference(yyvsp[0]);
        }
#line 1556 "src/minimal_parser.c"
    break;

  case 39: /* test_expr: expr YY_TESTOP expr  */
#line 268 "src/minimal_parser.y"
                               { yyval = Minimal_SyntaxTree_createOperator(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1562 "src/minimal_parser.c"
    break;

  case 40: /* let_expr: YY_LET YY_ID YY_EQ expr expr  */
#line 271 "src/minimal_parser.y"
                                       { yyval = Minimal_SyntaxTree_createLet(yyvsp[-3], yyvsp[-1], yyvsp[0]); }
#line 1568 "src/minimal_parser.c"
    break;


#line 1572 "src/minimal_parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 275 "src/minimal_parser.y"

