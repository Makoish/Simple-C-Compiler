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
#line 3 "parser.y"

    #include <stdio.h>
    #include <stdarg.h>
    int yylex(void);
    #include <string.h>
    void yyerror(const char *); 
    char *string_to_upper(const char *str);
    #include "src/SymbolTable.h"
    #include "src/FunctionTable.h"

    #include "src2/QUAD.h"

   
    SymbolTable * table = new SymbolTable("GLOBAL");
    SymbolTable * curr = table;
    FunctionTable * currFunc = NULL;
    FunctionTable * TableOfFunctions = new FunctionTable();
    const char * currFuncName; // currentFunction being called
    int CallOrder = 0;
    extern int yylineno;
    const char * switched_var_type;
    bool print = true;
    int indentation = 0;
    QUAD * quadruples = new QUAD();
    char * currLabel;
    const char * fileName = "quadruples.txt";
    
    

#line 101 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TYPE_INT = 3,                   /* TYPE_INT  */
  YYSYMBOL_TYPE_FLOAT = 4,                 /* TYPE_FLOAT  */
  YYSYMBOL_TYPE_DOUBLE = 5,                /* TYPE_DOUBLE  */
  YYSYMBOL_TYPE_STRING = 6,                /* TYPE_STRING  */
  YYSYMBOL_TYPE_CHAR = 7,                  /* TYPE_CHAR  */
  YYSYMBOL_TYPE_BOOL = 8,                  /* TYPE_BOOL  */
  YYSYMBOL_VARIABLE = 9,                   /* VARIABLE  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_BREAK = 11,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 12,                  /* CONTINUE  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_DO = 14,                        /* DO  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_DEFAULT = 16,                   /* DEFAULT  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_SWITCH = 20,                    /* SWITCH  */
  YYSYMBOL_T_BOOL = 21,                    /* T_BOOL  */
  YYSYMBOL_F_BOOL = 22,                    /* F_BOOL  */
  YYSYMBOL_INTEGER = 23,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 24,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 25,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 26,                      /* CHAR  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_STRING = 28,                    /* STRING  */
  YYSYMBOL_EQUAL = 29,                     /* EQUAL  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_OR = 32,                        /* OR  */
  YYSYMBOL_AND = 33,                       /* AND  */
  YYSYMBOL_GT = 34,                        /* GT  */
  YYSYMBOL_LT = 35,                        /* LT  */
  YYSYMBOL_GTE = 36,                       /* GTE  */
  YYSYMBOL_LTE = 37,                       /* LTE  */
  YYSYMBOL_EQUEQU = 38,                    /* EQUEQU  */
  YYSYMBOL_NOTEQU = 39,                    /* NOTEQU  */
  YYSYMBOL_MINUSMINUS = 40,                /* MINUSMINUS  */
  YYSYMBOL_PLUSPLUS = 41,                  /* PLUSPLUS  */
  YYSYMBOL_MULT = 42,                      /* MULT  */
  YYSYMBOL_DIV = 43,                       /* DIV  */
  YYSYMBOL_NEG = 44,                       /* NEG  */
  YYSYMBOL_POW = 45,                       /* POW  */
  YYSYMBOL_ELSIF = 46,                     /* ELSIF  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* '{'  */
  YYSYMBOL_51_ = 51,                       /* '}'  */
  YYSYMBOL_52_ = 52,                       /* ':'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_stmnt = 55,                     /* stmnt  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_59_4 = 59,                      /* $@4  */
  YYSYMBOL_60_5 = 60,                      /* $@5  */
  YYSYMBOL_61_6 = 61,                      /* $@6  */
  YYSYMBOL_62_7 = 62,                      /* $@7  */
  YYSYMBOL_63_8 = 63,                      /* $@8  */
  YYSYMBOL_64_9 = 64,                      /* $@9  */
  YYSYMBOL_65_10 = 65,                     /* $@10  */
  YYSYMBOL_66_11 = 66,                     /* $@11  */
  YYSYMBOL_67_12 = 67,                     /* $@12  */
  YYSYMBOL_68_13 = 68,                     /* $@13  */
  YYSYMBOL_69_14 = 69,                     /* $@14  */
  YYSYMBOL_70_15 = 70,                     /* $@15  */
  YYSYMBOL_71_16 = 71,                     /* $@16  */
  YYSYMBOL_72_17 = 72,                     /* $@17  */
  YYSYMBOL_73_18 = 73,                     /* $@18  */
  YYSYMBOL_74_19 = 74,                     /* $@19  */
  YYSYMBOL_75_20 = 75,                     /* $@20  */
  YYSYMBOL_76_21 = 76,                     /* $@21  */
  YYSYMBOL_77_22 = 77,                     /* $@22  */
  YYSYMBOL_78_23 = 78,                     /* $@23  */
  YYSYMBOL_79_24 = 79,                     /* $@24  */
  YYSYMBOL_80_25 = 80,                     /* $@25  */
  YYSYMBOL_81_26 = 81,                     /* $@26  */
  YYSYMBOL_82_27 = 82,                     /* $@27  */
  YYSYMBOL_83_28 = 83,                     /* $@28  */
  YYSYMBOL_84_29 = 84,                     /* $@29  */
  YYSYMBOL_ret = 85,                       /* ret  */
  YYSYMBOL_else = 86,                      /* else  */
  YYSYMBOL_87_30 = 87,                     /* $@30  */
  YYSYMBOL_88_31 = 88,                     /* $@31  */
  YYSYMBOL_89_32 = 89,                     /* $@32  */
  YYSYMBOL_90_33 = 90,                     /* $@33  */
  YYSYMBOL_case_stmnt = 91,                /* case_stmnt  */
  YYSYMBOL_92_34 = 92,                     /* $@34  */
  YYSYMBOL_INT_OR_CHAR = 93,               /* INT_OR_CHAR  */
  YYSYMBOL_type = 94,                      /* type  */
  YYSYMBOL_case_def = 95,                  /* case_def  */
  YYSYMBOL_parm_list = 96,                 /* parm_list  */
  YYSYMBOL_x = 97,                         /* x  */
  YYSYMBOL_98_35 = 98,                     /* $@35  */
  YYSYMBOL_call_list = 99,                 /* call_list  */
  YYSYMBOL_y = 100,                        /* y  */
  YYSYMBOL_101_36 = 101,                   /* $@36  */
  YYSYMBOL_rval = 102,                     /* rval  */
  YYSYMBOL_expr = 103,                     /* expr  */
  YYSYMBOL_assignment = 104,               /* assignment  */
  YYSYMBOL_ef = 105,                       /* ef  */
  YYSYMBOL_106_37 = 106,                   /* $@37  */
  YYSYMBOL_107_38 = 107,                   /* $@38  */
  YYSYMBOL_108_39 = 108,                   /* $@39  */
  YYSYMBOL_var_type = 109,                 /* var_type  */
  YYSYMBOL_func_type = 110,                /* func_type  */
  YYSYMBOL_declaration = 111,              /* declaration  */
  YYSYMBOL_cond = 112,                     /* cond  */
  YYSYMBOL_113_40 = 113,                   /* $@40  */
  YYSYMBOL_post_loop = 114,                /* post_loop  */
  YYSYMBOL_stmnt_list = 115                /* stmnt_list  */
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
typedef yytype_uint8 yy_state_t;

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

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif /* 1 */

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
#define YYLAST   729

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      48,    49,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    47,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   137,   137,   138,   139,   140,   140,   140,   141,   141,
     141,   142,   142,   142,   143,   143,   143,   143,   143,   144,
     145,   146,   146,   146,   146,   146,   147,   147,   147,   147,
     148,   148,   148,   149,   149,   149,   149,   149,   150,   150,
     150,   150,   170,   171,   171,   170,   172,   173,   180,   181,
     182,   184,   185,   185,   185,   184,   185,   188,   188,   189,
     191,   192,   194,   195,   196,   197,   198,   199,   204,   205,
     209,   209,   210,   210,   211,   214,   214,   215,   215,   220,
     227,   228,   229,   230,   231,   232,   233,   234,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   268,   269,   278,   278,
     279,   278,   279,   283,   304,   304,   306,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   320,
     321,   324,   325,   329,   329
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "TYPE_INT", "TYPE_FLOAT",
  "TYPE_DOUBLE", "TYPE_STRING", "TYPE_CHAR", "TYPE_BOOL", "VARIABLE",
  "FOR", "BREAK", "CONTINUE", "WHILE", "DO", "IF", "DEFAULT", "ELSE",
  "VOID", "CASE", "SWITCH", "T_BOOL", "F_BOOL", "INTEGER", "FLOAT",
  "DOUBLE", "CHAR", "RETURN", "STRING", "EQUAL", "PLUS", "MINUS", "OR",
  "AND", "GT", "LT", "GTE", "LTE", "EQUEQU", "NOTEQU", "MINUSMINUS",
  "PLUSPLUS", "MULT", "DIV", "NEG", "POW", "ELSIF", "';'", "'('", "')'",
  "'{'", "'}'", "':'", "','", "$accept", "stmnt", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22",
  "$@23", "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "ret", "else",
  "$@30", "$@31", "$@32", "$@33", "case_stmnt", "$@34", "INT_OR_CHAR",
  "type", "case_def", "parm_list", "x", "$@35", "call_list", "y", "$@36",
  "rval", "expr", "assignment", "ef", "$@37", "$@38", "$@39", "var_type",
  "func_type", "declaration", "cond", "$@40", "post_loop", "stmnt_list", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-133)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -125,   290,  -125,   -36,  -125,  -125,  -125,  -125,  -125,  -125,
     -20,   -43,   -35,   -29,  -125,  -125,    -8,    35,    11,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,    68,    68,  -125,  -125,
      65,  -125,   240,    32,    10,  -125,  -125,  -125,  -125,   104,
      37,  -125,  -125,  -125,    38,    30,   133,  -125,    78,  -125,
      50,   191,  -125,    49,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,  -125,  -125,    68,    68,    68,  -125,
    -125,   115,  -125,    52,    53,   374,   155,   605,   133,  -125,
      54,  -125,  -125,  -125,   526,  -125,  -125,   321,   472,   472,
     472,   472,   529,   529,   529,   529,    20,    20,    50,    50,
      50,    55,   374,  -125,    56,  -125,  -125,    61,    69,    99,
    -125,    82,    34,   372,    66,   133,   133,   133,   133,   133,
     133,   133,   133,    70,    72,    64,    83,   612,   155,    84,
      81,    68,  -125,    71,    68,    94,   132,   155,   625,   625,
     -22,   -22,   -22,   -22,  -125,  -125,    97,    98,  -125,   155,
     100,  -125,   102,  -125,   106,   155,   133,  -125,  -125,   108,
    -125,  -125,  -125,   110,   105,   112,  -125,  -125,   526,  -125,
     117,  -125,  -125,  -125,   118,  -125,   612,   119,   121,   423,
     133,   474,    59,   123,   238,  -125,  -125,    68,   120,   325,
     124,   122,    58,  -125,  -125,    -2,  -125,   425,   135,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,   131,  -125,   125,   134,
     138,   165,   154,  -125,   169,   171,   525,   167,  -125,  -125,
    -125,  -125,  -125,   172,   237,  -125,   576,   133,   205,  -125,
     187,   206,   526,  -125,  -125,   218,  -125,   234,  -125,  -125,
     627,  -125,  -125,   678,   217,   241,  -125,  -125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     134,     0,     1,     0,    62,    64,    65,    66,    67,    63,
      87,     0,     0,     0,    21,    26,     0,     0,     0,    83,
      82,    80,    84,    85,    86,    81,     0,     0,    30,   133,
       0,   105,     0,     0,     0,    38,     4,    46,    47,     0,
       0,    14,    19,    20,     0,     0,     0,   115,     0,    87,
     103,     0,   134,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    97,     0,     0,     0,     3,
       2,     0,   116,     0,    87,   107,    76,     0,     0,   134,
     127,   126,   125,   130,    33,    42,   104,     0,    88,    89,
      94,    93,    99,   101,   100,   102,    95,    96,    90,    91,
      92,    87,   106,    39,     0,     9,    75,    77,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    76,     0,
       0,     0,   113,     0,     0,     0,     0,    76,   123,   122,
     124,   121,   120,   119,   117,   118,     0,     0,    32,    76,
       0,    70,    72,    12,     0,     0,     0,    22,    27,     0,
      34,    43,     6,     0,     0,     0,    10,    78,    16,   134,
       0,   129,   134,    59,     0,   134,     0,     0,     0,     0,
       0,     0,    69,     0,     0,    73,    13,     0,     0,     0,
       0,     0,     0,    44,     7,     0,    40,     0,     0,    24,
      28,   112,   134,    60,    61,    57,     0,    49,     0,     0,
      98,    97,     0,    25,     0,    36,     0,     0,    45,    48,
      41,   134,    29,     0,    56,   134,     0,     0,     0,    37,
       0,     0,   108,    51,    18,     0,    52,     0,   134,   109,
       0,   134,    54,     0,     0,     0,    55,   111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
     -71,  -125,  -125,   130,  -125,  -124,   152,  -125,   -73,   -25,
     232,  -125,  -125,  -125,  -125,   -69,  -125,  -125,   -68,  -125,
    -125,   -52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    29,   126,   174,    40,   129,   104,   165,    77,   133,
     178,   231,    44,   169,   188,   213,    45,   170,   214,    52,
     125,   123,   172,   190,   224,    73,   127,   209,   124,   173,
     206,   196,   229,   236,   238,   242,   244,   182,   217,   205,
      30,   193,   150,   151,   164,   105,   106,   130,    31,    32,
      33,   215,   235,   241,   245,    34,    35,    36,    84,   114,
     198,     1
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,    50,    51,   107,   153,    41,   109,    49,   111,    39,
     112,    37,    42,   159,    75,    38,   121,   122,    43,    19,
      20,    21,    22,    23,    24,   162,    25,   113,    -8,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    71,
      46,    98,    99,   100,    47,   207,   102,   138,   139,   140,
     141,   142,   143,   144,   145,   107,   109,    72,   152,    48,
      64,    65,    66,    67,   107,    68,   115,   116,   117,   118,
     119,   120,   121,   122,    53,   191,   107,    49,   192,    70,
      79,   203,   107,   135,   204,    76,    78,    85,   168,    19,
      20,    21,    22,    23,    24,    68,    25,  -114,   131,    26,
     103,   -11,  -128,    -5,   128,   109,    75,   152,   132,   102,
     -79,   134,   189,    74,   137,   148,    27,   179,   156,   146,
     181,   147,   208,   184,   101,    19,    20,    21,    22,    23,
      24,   149,    25,   154,   155,    26,    19,    20,    21,    22,
      23,    24,    80,    25,   157,   158,    26,   160,   161,   163,
     216,   -74,    27,   166,    81,    82,    83,   171,   176,   232,
     175,   177,   197,    27,    49,   180,   186,   183,   187,   226,
     194,   199,   219,   230,   202,   201,    19,    20,    21,    22,
      23,    24,   218,    25,   212,   220,   240,  -132,     3,   243,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   -58,   221,    17,   -58,    18,    19,    20,
      21,    22,    23,    24,  -131,    25,   222,   223,    26,   225,
     227,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    27,    68,    28,   -58,     3,
      86,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   228,   233,    17,   234,    18,    19,
      20,    21,    22,    23,    24,   195,    25,   237,   246,    26,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,   239,    68,    27,    69,    28,   -50,
       2,     3,   247,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   185,   167,    17,   110,
      18,    19,    20,    21,    22,    23,    24,     0,    25,     0,
       0,    26,     3,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,    27,    17,
      28,    18,    19,    20,    21,    22,    23,    24,     0,    25,
       0,     0,    26,     0,     0,     0,     0,   115,   116,   117,
     118,   119,   120,   121,   122,     0,     0,     0,     0,    27,
       0,    28,   -31,     3,   200,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,     0,
      25,     0,     0,    26,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,    68,
      27,     0,    28,   136,     3,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     0,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,    26,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,   210,   211,    66,    67,     0,
      68,    27,     0,    28,   -23,     3,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,     0,    25,     0,     0,    26,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,     0,    68,     0,     0,
       0,     0,    27,     0,    28,   -35,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,    26,     0,   115,   116,
     117,   118,   119,   120,   121,   122,     0,    62,    63,    64,
      65,    66,    67,    27,    68,    28,   -68,     3,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,     0,    25,     0,     0,    26,     4,     5,
       6,     7,     8,     9,   108,     4,     5,     6,     7,     8,
       9,     0,     0,     0,    27,     0,    28,   -17,     3,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,     0,    25,     0,     0,    26,   117,
     118,   119,   120,   121,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,   -53,     3,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,     0,    25,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,  -110
};

static const yytype_int16 yycheck[] =
{
      52,    26,    27,    76,   128,    48,    77,     9,    77,    29,
      78,    47,    47,   137,    39,    51,    38,    39,    47,    21,
      22,    23,    24,    25,    26,   149,    28,    79,    48,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    29,
      48,    66,    67,    68,     9,    47,    71,   115,   116,   117,
     118,   119,   120,   121,   122,   128,   127,    47,   127,    48,
      40,    41,    42,    43,   137,    45,    32,    33,    34,    35,
      36,    37,    38,    39,     9,    16,   149,     9,    19,    47,
      50,    23,   155,    49,    26,    48,    48,     9,   156,    21,
      22,    23,    24,    25,    26,    45,    28,    48,    29,    31,
      48,    48,    48,    48,    48,   176,   131,   176,     9,   134,
      49,    29,   180,     9,    48,    51,    48,   169,    47,    49,
     172,    49,   195,   175,     9,    21,    22,    23,    24,    25,
      26,    48,    28,    49,    53,    31,    21,    22,    23,    24,
      25,    26,     9,    28,    50,    13,    31,    50,    50,    49,
     202,    49,    48,    47,    21,    22,    23,    49,    53,   227,
      50,    49,   187,    48,     9,    48,    47,    49,    47,   221,
      47,    51,    47,   225,    52,    51,    21,    22,    23,    24,
      25,    26,    51,    28,    49,    51,   238,    49,     1,   241,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    50,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    49,    28,    47,    46,    31,    52,
      48,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    48,    45,    50,    51,     1,
      49,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    17,    50,    18,    51,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    49,    51,    31,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    50,    45,    48,    47,    50,    51,
       0,     1,    51,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   176,   155,    18,    77,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    -1,
      -1,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    48,    18,
      50,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,     1,    49,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    -1,    20,    21,    22,    23,    24,    25,    26,    -1,
      28,    -1,    -1,    31,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      48,    -1,    50,    51,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    48,    -1,    50,    51,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    -1,    -1,    31,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    38,    39,    40,
      41,    42,    43,    48,    45,    50,    51,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31,     3,     4,
       5,     6,     7,     8,     9,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    48,    -1,    50,    51,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,   115,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    18,    20,    21,
      22,    23,    24,    25,    26,    28,    31,    48,    50,    55,
      94,   102,   103,   104,   109,   110,   111,    47,    51,    29,
      58,    48,    47,    47,    66,    70,    48,     9,    48,     9,
     103,   103,    73,     9,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    45,    47,
      47,    29,    47,    79,     9,   103,    48,    62,    48,    50,
       9,    21,    22,    23,   112,     9,    49,   115,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,     9,   103,    48,    60,    99,   100,   102,     9,    94,
     104,   109,   112,   115,   113,    32,    33,    34,    35,    36,
      37,    38,    39,    75,    82,    74,    56,    80,    48,    59,
     101,    29,     9,    63,    29,    49,    51,    48,   112,   112,
     112,   112,   112,   112,   112,   112,    49,    49,    51,    48,
      96,    97,   109,    99,    49,    53,    47,    50,    13,    99,
      50,    50,    99,    49,    98,    61,    47,   100,   112,    67,
      71,    49,    76,    83,    57,    50,    53,    49,    64,   115,
      48,   115,    91,    49,   115,    97,    47,    47,    68,   112,
      77,    16,    19,    95,    47,    27,    85,   103,   114,    51,
      49,    51,    52,    23,    26,    93,    84,    47,   102,    81,
      40,    41,    49,    69,    72,   105,   115,    92,    51,    47,
      51,    50,    47,    46,    78,    52,   115,    48,    17,    86,
     115,    65,   112,    50,    51,   106,    87,    49,    88,    50,
     115,   107,    89,   115,    90,   108,    51,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    56,    57,    55,    58,    59,
      55,    60,    61,    55,    62,    63,    64,    65,    55,    55,
      55,    66,    67,    68,    69,    55,    70,    71,    72,    55,
      73,    74,    55,    75,    76,    77,    78,    55,    79,    80,
      81,    55,    82,    83,    84,    55,    55,    55,    85,    85,
      85,    87,    88,    89,    90,    86,    86,    92,    91,    91,
      93,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    98,    97,    97,    99,    99,   101,   100,   100,
     102,   102,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   104,   106,   107,
     108,   105,   105,   109,   110,   110,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   112,
     112,   114,   114,   115,   115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     0,     0,     9,     0,     0,
       7,     0,     0,     9,     0,     0,     0,     0,    15,     2,
       2,     0,     0,     0,     0,    11,     0,     0,     0,    12,
       0,     0,     5,     0,     0,     0,     0,    13,     0,     0,
       0,    11,     0,     0,     0,    11,     2,     2,     3,     2,
       0,     0,     0,     0,     0,     8,     0,     0,     6,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       1,     0,     0,     4,     1,     1,     0,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     2,     3,     1,     3,     3,     0,     0,
       0,    11,     0,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     0,     5,
       1,     2,     2,     2,     0
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
        YY_LAC_DISCARD ("YYBACKUP");                              \
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


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




/* The kind of the lookahead of this context.  */
static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx)
{
  return yyctx->yytoken;
}



/* User defined function to report a syntax error.  */
static int
yyreport_syntax_error (const yypcontext_t *yyctx);

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

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");
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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 5: /* $@1: %empty  */
#line 140 "parser.y"
                                  { currFuncName = (yyvsp[0].gval).name; TableOfFunctions->CheckFunctionReturn((yyvsp[-2].gval).type, (yyvsp[0].gval).name, yylineno, &print); }
#line 1768 "parser.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 140 "parser.y"
                                                                                                                                                       { quadruples->print_call_function(fileName, TableOfFunctions, (yyvsp[-3].gval).name, indentation, (yyvsp[-5].gval).name); }
#line 1774 "parser.tab.c"
    break;

  case 7: /* stmnt: var_type EQUAL VARIABLE $@1 '(' call_list $@2 ')' ';'  */
#line 140 "parser.y"
                                                                                                                                                                                                                                                               {CallOrder = 0;}
#line 1780 "parser.tab.c"
    break;

  case 8: /* $@3: %empty  */
#line 141 "parser.y"
                   {currFuncName = (yyvsp[0].gval).name; }
#line 1786 "parser.tab.c"
    break;

  case 9: /* $@4: %empty  */
#line 141 "parser.y"
                                                             { quadruples->print_call_function(fileName, TableOfFunctions, (yyvsp[-3].gval).name, indentation, ""); }
#line 1792 "parser.tab.c"
    break;

  case 10: /* stmnt: VARIABLE $@3 '(' call_list $@4 ')' ';'  */
#line 141 "parser.y"
                                                                                                                                                               {CallOrder = 0;}
#line 1798 "parser.tab.c"
    break;

  case 11: /* $@5: %empty  */
#line 142 "parser.y"
                                  {currFuncName = (yyvsp[0].gval).name; }
#line 1804 "parser.tab.c"
    break;

  case 12: /* $@6: %empty  */
#line 142 "parser.y"
                                                                            { quadruples->print_call_function(fileName, TableOfFunctions, (yyvsp[-3].gval).name, indentation, (yyvsp[-5].gval).name); }
#line 1810 "parser.tab.c"
    break;

  case 13: /* stmnt: VARIABLE EQUAL VARIABLE $@5 '(' call_list $@6 ')' ';'  */
#line 142 "parser.y"
                                                                                                                                                                                   {CallOrder = 0;}
#line 1816 "parser.tab.c"
    break;

  case 14: /* $@7: %empty  */
#line 143 "parser.y"
                  { quadruples->addLOOPExit(); curr = curr->newTable(); }
#line 1822 "parser.tab.c"
    break;

  case 15: /* $@8: %empty  */
#line 143 "parser.y"
                                                                                     { quadruples->print_for_label(fileName, indentation); indentation+=5; }
#line 1828 "parser.tab.c"
    break;

  case 16: /* $@9: %empty  */
#line 143 "parser.y"
                                                                                                                                                                       {quadruples->printJMP(fileName, "nz", (yyvsp[0].gval).REGISTER, indentation);}
#line 1834 "parser.tab.c"
    break;

  case 17: /* $@10: %empty  */
#line 143 "parser.y"
                                                                                                                                                                                                                                                                           { indentation-= 5; curr = curr->getParent(); quadruples->printExitLOOP(fileName, indentation); }
#line 1840 "parser.tab.c"
    break;

  case 18: /* stmnt: FOR '(' $@7 assignment $@8 ';' cond $@9 ';' post_loop ')' '{' stmnt_list $@10 '}'  */
#line 143 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                 { quadruples->remove_FOR_LABEL(); }
#line 1846 "parser.tab.c"
    break;

  case 19: /* stmnt: BREAK ';'  */
#line 144 "parser.y"
                    { quadruples->printBREAK(fileName, indentation); }
#line 1852 "parser.tab.c"
    break;

  case 20: /* stmnt: CONTINUE ';'  */
#line 145 "parser.y"
                       { quadruples->printContinue(fileName, indentation); }
#line 1858 "parser.tab.c"
    break;

  case 21: /* $@11: %empty  */
#line 146 "parser.y"
                { quadruples->addLOOPExit(); quadruples->print_for_label(fileName, indentation); indentation+=5; curr = curr->newTable(); }
#line 1864 "parser.tab.c"
    break;

  case 22: /* $@12: %empty  */
#line 146 "parser.y"
                                                                                                                                                            { curr = curr->newTable(); }
#line 1870 "parser.tab.c"
    break;

  case 23: /* $@13: %empty  */
#line 146 "parser.y"
                                                                                                                                                                                                    {quadruples->printJMP(fileName, "nz", (yyvsp[-4].gval).REGISTER, indentation);}
#line 1876 "parser.tab.c"
    break;

  case 24: /* $@14: %empty  */
#line 146 "parser.y"
                                                                                                                                                                                                                                                                           { indentation-=5; curr = curr->getParent(); quadruples->printExitLOOP(fileName, indentation); }
#line 1882 "parser.tab.c"
    break;

  case 25: /* stmnt: WHILE $@11 '(' cond ')' '{' $@12 stmnt_list $@13 '}' $@14  */
#line 146 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                           { quadruples->remove_FOR_LABEL(); }
#line 1888 "parser.tab.c"
    break;

  case 26: /* $@15: %empty  */
#line 147 "parser.y"
             { quadruples->addLOOPExit(); curr = curr->newTable(); quadruples->print_for_label(fileName, indentation); indentation+=5; }
#line 1894 "parser.tab.c"
    break;

  case 27: /* $@16: %empty  */
#line 147 "parser.y"
                                                                                                                                                                 {curr = curr->getParent();}
#line 1900 "parser.tab.c"
    break;

  case 28: /* $@17: %empty  */
#line 147 "parser.y"
                                                                                                                                                                                                          { quadruples->printJMP(fileName, "nz", (yyvsp[-1].gval).REGISTER, indentation); }
#line 1906 "parser.tab.c"
    break;

  case 29: /* stmnt: DO $@15 '{' stmnt_list '}' WHILE $@16 '(' cond ')' $@17 ';'  */
#line 147 "parser.y"
                                                                                                                                                                                                                                                                                 { indentation-=5; quadruples->printExitLOOP(fileName, indentation); quadruples->remove_FOR_LABEL(); }
#line 1912 "parser.tab.c"
    break;

  case 30: /* $@18: %empty  */
#line 148 "parser.y"
              {curr = curr->newTable(); }
#line 1918 "parser.tab.c"
    break;

  case 31: /* $@19: %empty  */
#line 148 "parser.y"
                                                     {curr = curr->getParent();}
#line 1924 "parser.tab.c"
    break;

  case 33: /* $@20: %empty  */
#line 149 "parser.y"
                       { quadruples->addIFLabels(fileName, indentation, (yyvsp[0].gval).REGISTER); }
#line 1930 "parser.tab.c"
    break;

  case 34: /* $@21: %empty  */
#line 149 "parser.y"
                                                                                               { curr = curr->newTable(); indentation+=5; }
#line 1936 "parser.tab.c"
    break;

  case 35: /* $@22: %empty  */
#line 149 "parser.y"
                                                                                                                                                       { curr = curr->getParent(); indentation-=5;  }
#line 1942 "parser.tab.c"
    break;

  case 36: /* $@23: %empty  */
#line 149 "parser.y"
                                                                                                                                                                                                             { quadruples->PRE_ELSE(fileName, indentation); }
#line 1948 "parser.tab.c"
    break;

  case 37: /* stmnt: IF '(' cond $@20 ')' '{' $@21 stmnt_list $@22 '}' ef $@23 else  */
#line 149 "parser.y"
                                                                                                                                                                                                                                                                   { quadruples->POST_ELSE(fileName, indentation); }
#line 1954 "parser.tab.c"
    break;

  case 38: /* $@24: %empty  */
#line 150 "parser.y"
                    { quadruples->print_label(fileName, indentation, (yyvsp[0].gval).name); indentation+=5;  }
#line 1960 "parser.tab.c"
    break;

  case 39: /* $@25: %empty  */
#line 150 "parser.y"
                                                                                                      { currFunc = new FunctionTable(); currFunc = currFunc->newFuncTable((yyvsp[-2].gval).name, curr); curr = currFunc; TableOfFunctions->addFunction(currFunc, (yyvsp[-2].gval).type); }
#line 1966 "parser.tab.c"
    break;

  case 40: /* $@26: %empty  */
#line 150 "parser.y"
                                                                                                                                                                                                                                                                                                {
                                                                                          if (strcmp((yyvsp[0].gval).type, "NONE")){
                                                                                            
                                                                                                if (strcmp((yyvsp[-8].gval).type, (yyvsp[0].gval).type) && print){
                                                                                                    print = false;
                                                                                                    printf("%s" "%d" "%s", "Error at ", yylineno, ": Incompatible return type");
                                                                                                    printf("\n");
                                                                                                  }
                                                                                            }
                                                                                          else{
                                                                                            if (strcmp((yyvsp[-8].gval).type, "VOID")){
                                                                                              printf("%s" "%d" "%s", "Warning at ", yylineno, ": Function has no return");
                                                                                              printf("\n");

                                                                                            }
                                                                                          
                                                                                          }
                                                                                          curr = curr->getParent();   
                                                                                        }
#line 1990 "parser.tab.c"
    break;

  case 41: /* stmnt: func_type $@24 '(' $@25 parm_list ')' '{' stmnt_list ret $@26 '}'  */
#line 169 "parser.y"
              { indentation-=5;  quadruples->print_return(fileName, indentation, (yyvsp[-2].gval).value); }
#line 1996 "parser.tab.c"
    break;

  case 42: /* $@27: %empty  */
#line 170 "parser.y"
                                    { quadruples->printSwitchLabel(fileName, indentation, (yyvsp[0].gval).name); quadruples->addSwitchExit(); curr->checkCaseType((yyvsp[0].gval).name, yylineno, &print); curr->checkTable((yyvsp[0].gval).name, yylineno, &print); curr->checkInit((yyvsp[0].gval).name, &print, yylineno);}
#line 2002 "parser.tab.c"
    break;

  case 43: /* $@28: %empty  */
#line 171 "parser.y"
                { curr = curr->newTable(); indentation+=5; }
#line 2008 "parser.tab.c"
    break;

  case 44: /* $@29: %empty  */
#line 171 "parser.y"
                                                                                 { curr = curr->getParent(); indentation-=5; quadruples->printExitLOOP(fileName, indentation); }
#line 2014 "parser.tab.c"
    break;

  case 48: /* ret: RETURN rval ';'  */
#line 180 "parser.y"
                     { (yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).value = (yyvsp[-1].gval).value;  }
#line 2020 "parser.tab.c"
    break;

  case 49: /* ret: RETURN ';'  */
#line 181 "parser.y"
               {(yyval.gval).type = "NONE"; (yyval.gval).value = "";}
#line 2026 "parser.tab.c"
    break;

  case 50: /* ret: %empty  */
#line 182 "parser.y"
    {(yyval.gval).type = "NONE"; (yyval.gval).value = "";}
#line 2032 "parser.tab.c"
    break;

  case 51: /* $@30: %empty  */
#line 184 "parser.y"
                { curr = curr->newTable();  }
#line 2038 "parser.tab.c"
    break;

  case 52: /* $@31: %empty  */
#line 185 "parser.y"
        { indentation+=5; }
#line 2044 "parser.tab.c"
    break;

  case 53: /* $@32: %empty  */
#line 185 "parser.y"
                                        { indentation-=5; }
#line 2050 "parser.tab.c"
    break;

  case 54: /* $@33: %empty  */
#line 185 "parser.y"
                                                           {curr = curr->getParent(); }
#line 2056 "parser.tab.c"
    break;

  case 57: /* $@34: %empty  */
#line 188 "parser.y"
                                         { char * REG = strdup(quadruples->print_CASE_Cond_Operation(fileName, (yyvsp[0].gval).REGISTER, indentation, "EQEQ").c_str()); quadruples->printPRECASE(fileName, REG, indentation); }
#line 2062 "parser.tab.c"
    break;

  case 58: /* case_stmnt: case_stmnt CASE INT_OR_CHAR $@34 ':' stmnt_list  */
#line 188 "parser.y"
                                                                                                                                                                                                                                   { quadruples->printPOSTCASE(fileName, indentation); }
#line 2068 "parser.tab.c"
    break;

  case 60: /* INT_OR_CHAR: INTEGER  */
#line 191 "parser.y"
                      {(yyval.gval).type = "int"; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2074 "parser.tab.c"
    break;

  case 61: /* INT_OR_CHAR: CHAR  */
#line 192 "parser.y"
                   {(yyval.gval).type = "char"; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2080 "parser.tab.c"
    break;

  case 62: /* type: TYPE_INT  */
#line 194 "parser.y"
                {(yyval.gval).type = "int";}
#line 2086 "parser.tab.c"
    break;

  case 63: /* type: TYPE_BOOL  */
#line 195 "parser.y"
                 {(yyval.gval).type = "bool";}
#line 2092 "parser.tab.c"
    break;

  case 64: /* type: TYPE_FLOAT  */
#line 196 "parser.y"
                   {(yyval.gval).type = "float";}
#line 2098 "parser.tab.c"
    break;

  case 65: /* type: TYPE_DOUBLE  */
#line 197 "parser.y"
                    {(yyval.gval).type = "double";}
#line 2104 "parser.tab.c"
    break;

  case 66: /* type: TYPE_STRING  */
#line 198 "parser.y"
                    {(yyval.gval).type = "string";}
#line 2110 "parser.tab.c"
    break;

  case 67: /* type: TYPE_CHAR  */
#line 199 "parser.y"
                  {(yyval.gval).type = "char";}
#line 2116 "parser.tab.c"
    break;

  case 72: /* $@35: %empty  */
#line 210 "parser.y"
            { currFunc->addparm((yyvsp[0].gval).type); }
#line 2122 "parser.tab.c"
    break;

  case 74: /* x: var_type  */
#line 211 "parser.y"
           { currFunc->addparm((yyvsp[0].gval).type); }
#line 2128 "parser.tab.c"
    break;

  case 77: /* $@36: %empty  */
#line 215 "parser.y"
        {
  const char* type = (yyvsp[0].gval).type;
  quadruples->print_call_parm(fileName, (yyvsp[0].gval).name, indentation);
  TableOfFunctions->validateCallParm(currFuncName, type, CallOrder, yylineno, &print);
  CallOrder+=1;
  }
#line 2139 "parser.tab.c"
    break;

  case 79: /* y: rval  */
#line 220 "parser.y"
               {const char* type = (yyvsp[0].gval).type;
  quadruples->print_call_parm(fileName, (yyvsp[0].gval).name, indentation);
  TableOfFunctions->validateCallParm(currFuncName, type, CallOrder, yylineno, &print);
  CallOrder+=1;
  }
#line 2149 "parser.tab.c"
    break;

  case 80: /* rval: INTEGER  */
#line 227 "parser.y"
               {(yyval.gval).type = "int"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = (yyvsp[0].Ival).value;}
#line 2155 "parser.tab.c"
    break;

  case 81: /* rval: STRING  */
#line 228 "parser.y"
               {(yyval.gval).type = "string"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value;  (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2161 "parser.tab.c"
    break;

  case 82: /* rval: F_BOOL  */
#line 229 "parser.y"
               {(yyval.gval).type = "bool"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = "false"; }
#line 2167 "parser.tab.c"
    break;

  case 83: /* rval: T_BOOL  */
#line 230 "parser.y"
              {(yyval.gval).type = "bool"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = "true"; }
#line 2173 "parser.tab.c"
    break;

  case 84: /* rval: FLOAT  */
#line 231 "parser.y"
              {(yyval.gval).type = "float"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2179 "parser.tab.c"
    break;

  case 85: /* rval: DOUBLE  */
#line 232 "parser.y"
               {(yyval.gval).type = "double"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2185 "parser.tab.c"
    break;

  case 86: /* rval: CHAR  */
#line 233 "parser.y"
             {(yyval.gval).type = "char"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2191 "parser.tab.c"
    break;

  case 87: /* rval: VARIABLE  */
#line 234 "parser.y"
                {

        char * type = strdup(curr->checkDef((yyvsp[0].gval).name, yylineno, &print).c_str());
        curr->checkInit((yyvsp[0].gval).name, &print, yylineno);
        (yyval.gval).name = (yyvsp[0].gval).name;
        (yyval.gval).type = type;
        (yyval.gval).value = (yyvsp[0].gval).name;
        (yyval.gval).REGISTER = (yyvsp[0].gval).name;
       
        }
#line 2206 "parser.tab.c"
    break;

  case 88: /* expr: expr PLUS expr  */
#line 245 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Adding"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "+").c_str());}
#line 2212 "parser.tab.c"
    break;

  case 89: /* expr: expr MINUS expr  */
#line 246 "parser.y"
                       {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Minusing"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "-").c_str()); }
#line 2218 "parser.tab.c"
    break;

  case 90: /* expr: expr MULT expr  */
#line 247 "parser.y"
                      {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Multplying"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "*").c_str()); }
#line 2224 "parser.tab.c"
    break;

  case 91: /* expr: expr DIV expr  */
#line 248 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Dividing"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "/").c_str()); }
#line 2230 "parser.tab.c"
    break;

  case 92: /* expr: expr POW expr  */
#line 249 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Powering"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "^").c_str()); }
#line 2236 "parser.tab.c"
    break;

  case 93: /* expr: expr AND expr  */
#line 250 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Anding"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "&&").c_str()); }
#line 2242 "parser.tab.c"
    break;

  case 94: /* expr: expr OR expr  */
#line 251 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Oring"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "||").c_str()); }
#line 2248 "parser.tab.c"
    break;

  case 95: /* expr: expr EQUEQU expr  */
#line 252 "parser.y"
                        {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "EQUATING"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "==").c_str()); }
#line 2254 "parser.tab.c"
    break;

  case 96: /* expr: expr NOTEQU expr  */
#line 253 "parser.y"
                        {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "NOT EQUATING"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "!=").c_str()); }
#line 2260 "parser.tab.c"
    break;

  case 97: /* expr: expr PLUSPLUS  */
#line 254 "parser.y"
                     {curr->checkSingleOperation ((yyvsp[-1].gval).type, yylineno, &print, "PLUS PLUS"); (yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printSingleOperation(fileName, (yyvsp[-1].gval).REGISTER, indentation, "++").c_str()); }
#line 2266 "parser.tab.c"
    break;

  case 98: /* expr: expr MINUSMINUS  */
#line 255 "parser.y"
                       {curr->checkSingleOperation ((yyvsp[-1].gval).type, yylineno, &print, "MINUS MINUS"); (yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printSingleOperation(fileName, (yyvsp[-1].gval).REGISTER, indentation, "--").c_str());}
#line 2272 "parser.tab.c"
    break;

  case 99: /* expr: expr GT expr  */
#line 256 "parser.y"
                    {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "GREATER_THAN"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, ">").c_str()); }
#line 2278 "parser.tab.c"
    break;

  case 100: /* expr: expr GTE expr  */
#line 257 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "GREATER_THAN_EQUAL"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, ">=").c_str()); }
#line 2284 "parser.tab.c"
    break;

  case 101: /* expr: expr LT expr  */
#line 258 "parser.y"
                    {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "LESS_THAN"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "<").c_str()); }
#line 2290 "parser.tab.c"
    break;

  case 102: /* expr: expr LTE expr  */
#line 259 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "LESS_THAN_EQUAL"); (yyval.gval).type = (yyvsp[-2].gval).type; }
#line 2296 "parser.tab.c"
    break;

  case 103: /* expr: MINUS expr  */
#line 260 "parser.y"
                            {curr->checkSingleOperation ((yyvsp[0].gval).type, yylineno, &print, "NEGATIVE"); (yyval.gval).type = (yyvsp[0].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printSingleOperation(fileName, (yyvsp[0].gval).REGISTER, indentation, "NEG").c_str());}
#line 2302 "parser.tab.c"
    break;

  case 104: /* expr: '(' expr ')'  */
#line 261 "parser.y"
                    {(yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).name = (yyvsp[-1].gval).name; (yyval.gval).REGISTER = (yyvsp[-1].gval).REGISTER; }
#line 2308 "parser.tab.c"
    break;

  case 105: /* expr: rval  */
#line 262 "parser.y"
          { (yyval.gval).type = strdup((yyvsp[0].gval).type); (yyval.gval).value = (yyvsp[0].gval).value; (yyval.gval).REGISTER = (yyvsp[0].gval).REGISTER; }
#line 2314 "parser.tab.c"
    break;

  case 106: /* assignment: var_type EQUAL expr  */
#line 268 "parser.y"
                                  { curr->initSymbol((yyvsp[-2].gval).name, (yyvsp[0].gval).type, yylineno, &print); quadruples->print_assign_Quadruples(fileName, (yyvsp[0].gval).REGISTER, (yyvsp[-2].gval).name, indentation, curr);}
#line 2320 "parser.tab.c"
    break;

  case 107: /* assignment: VARIABLE EQUAL expr  */
#line 269 "parser.y"
                                  {
                                  
                                    curr->checkDef((yyvsp[-2].gval).name, yylineno, &print);
                                    curr->initSymbol((yyvsp[-2].gval).name, (yyvsp[0].gval).type, yylineno, &print);
                                    quadruples->print_assign_Quadruples(fileName, (yyvsp[0].gval).REGISTER, (yyvsp[-2].gval).name, indentation, curr);
                                    
                          
                                  }
#line 2333 "parser.tab.c"
    break;

  case 108: /* $@37: %empty  */
#line 278 "parser.y"
                        { quadruples->addElseIFLabels(fileName, indentation, (yyvsp[0].gval).REGISTER); }
#line 2339 "parser.tab.c"
    break;

  case 109: /* $@38: %empty  */
#line 278 "parser.y"
                                                                                                     { curr = curr->newTable(); indentation+=5; }
#line 2345 "parser.tab.c"
    break;

  case 110: /* $@39: %empty  */
#line 279 "parser.y"
                     { curr = curr->getParent(); }
#line 2351 "parser.tab.c"
    break;

  case 111: /* ef: ef ELSIF '(' cond $@37 ')' '{' $@38 stmnt_list $@39 '}'  */
#line 279 "parser.y"
                                                       { indentation-=5; }
#line 2357 "parser.tab.c"
    break;

  case 113: /* var_type: type VARIABLE  */
#line 283 "parser.y"
                        {

sym * s = new sym((yyvsp[-1].gval).type, (yyvsp[0].gval).name, false, "");
bool added = curr->addSymbol(*s);
quadruples->print_var_type(fileName, indentation, (yyvsp[-1].gval).type, (yyvsp[0].gval).name);



if (!added && print){
  print = false;
  printf("%s" "%d" "%s" "%s", "Error at ", yylineno, ": Redeclaration variable: ", (yyvsp[0].gval).name);
  printf("\n");
}

(yyval.gval).type = (yyvsp[-1].gval).type;
(yyval.gval).name = (yyvsp[0].gval).name;



}
#line 2382 "parser.tab.c"
    break;

  case 114: /* func_type: type VARIABLE  */
#line 304 "parser.y"
                         {(yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).name = (yyvsp[0].gval).name;}
#line 2388 "parser.tab.c"
    break;

  case 115: /* func_type: VOID VARIABLE  */
#line 304 "parser.y"
                                                                                {(yyval.gval).type = "NONE"; (yyval.gval).name = (yyvsp[0].gval).name;}
#line 2394 "parser.tab.c"
    break;

  case 117: /* cond: cond EQUEQU cond  */
#line 309 "parser.y"
                         { curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "EQUEQU"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "EQEQ").c_str()); }
#line 2400 "parser.tab.c"
    break;

  case 118: /* cond: cond NOTEQU cond  */
#line 310 "parser.y"
                         {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "NOTEQU"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "NOTEQ").c_str()); }
#line 2406 "parser.tab.c"
    break;

  case 119: /* cond: cond LTE cond  */
#line 311 "parser.y"
                      {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "LTE"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "LTE").c_str());}
#line 2412 "parser.tab.c"
    break;

  case 120: /* cond: cond GTE cond  */
#line 312 "parser.y"
                      {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "GTE"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "GTE").c_str());}
#line 2418 "parser.tab.c"
    break;

  case 121: /* cond: cond LT cond  */
#line 313 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "LT"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "LT").c_str());}
#line 2424 "parser.tab.c"
    break;

  case 122: /* cond: cond AND cond  */
#line 314 "parser.y"
                      {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "AND"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "AND").c_str());}
#line 2430 "parser.tab.c"
    break;

  case 123: /* cond: cond OR cond  */
#line 315 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "OR"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "OR").c_str());}
#line 2436 "parser.tab.c"
    break;

  case 124: /* cond: cond GT cond  */
#line 316 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "OR"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "GT").c_str());}
#line 2442 "parser.tab.c"
    break;

  case 125: /* cond: F_BOOL  */
#line 317 "parser.y"
              {(yyval.gval).type = "bool"; (yyval.gval).REGISTER = "false";}
#line 2448 "parser.tab.c"
    break;

  case 126: /* cond: T_BOOL  */
#line 318 "parser.y"
              {(yyval.gval).type = "bool"; (yyval.gval).REGISTER = "true";}
#line 2454 "parser.tab.c"
    break;

  case 127: /* cond: VARIABLE  */
#line 319 "parser.y"
                {curr->checkTable((yyvsp[0].gval).name, yylineno, &print); curr->checkInit((yyvsp[0].gval).name, &print, yylineno); (yyval.gval).type = strdup(curr->getTypebyName((yyvsp[0].gval).name).c_str()); (yyval.gval).REGISTER = (yyvsp[0].gval).name;}
#line 2460 "parser.tab.c"
    break;

  case 128: /* $@40: %empty  */
#line 320 "parser.y"
                {currFuncName = (yyvsp[0].gval).name; }
#line 2466 "parser.tab.c"
    break;

  case 129: /* cond: VARIABLE $@40 '(' call_list ')'  */
#line 320 "parser.y"
                                                             {CallOrder = 0; (yyval.gval).REGISTER = (yyvsp[-4].gval).name;}
#line 2472 "parser.tab.c"
    break;

  case 130: /* cond: INTEGER  */
#line 321 "parser.y"
               { (yyval.gval).type = "int"; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2478 "parser.tab.c"
    break;

  case 131: /* post_loop: expr PLUSPLUS  */
#line 324 "parser.y"
                          {quadruples->printPostLoop(fileName, (yyvsp[-1].gval).REGISTER, "++", indentation);}
#line 2484 "parser.tab.c"
    break;

  case 132: /* post_loop: expr MINUSMINUS  */
#line 325 "parser.y"
                            {quadruples->printPostLoop(fileName, (yyvsp[-1].gval).REGISTER, "--", indentation);}
#line 2490 "parser.tab.c"
    break;


#line 2494 "parser.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        if (yyreport_syntax_error (&yyctx) == 2)
          YYNOMEM;
      }
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);

  return yyresult;
}

#line 341 "parser.y"





static int
yyreport_syntax_error (const yypcontext_t *ctx)
{
  int res = 0;
  fprintf(stderr, "%d", yylineno);
  fprintf (stderr, ": syntax error");
  
  // Report the tokens expected at this point.
  {
    enum { TOKENMAX = 5 };
    yysymbol_kind_t expected[TOKENMAX];
    int n = yypcontext_expected_tokens (ctx, expected, TOKENMAX);
    if (n < 0)
      // Forward errors to yyparse.
      res = n;
    else
      for (int i = 0; i < n; ++i)
        fprintf (stderr, "%s %s",
                 i == 0 ? ": expected" : " or", yysymbol_name (expected[i]));
  }
  // Report the unexpected token.
  {
    yysymbol_kind_t lookahead = yypcontext_token (ctx);
    if (lookahead != YYSYMBOL_YYEMPTY)
      fprintf (stderr, " before %s", yysymbol_name (lookahead));
  }
  fprintf (stderr, "\n");
  return res;
}

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}



char *string_to_upper(const char *str) {
    // Calculate the length of the input string
    size_t len = strlen(str);

    // Allocate memory for a new string to hold the uppercase version
    char *upper_str = (char *)malloc(len + 1); // +1 for null terminator
    if (upper_str == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // Copy the input string to the new string and convert to uppercase
    for (size_t i = 0; i < len; i++) {
        upper_str[i] = toupper(str[i]);
    }
    upper_str[len] = '\0'; // Add null terminator at the end

    return upper_str;
}

int main(void) {
    //yydebug = 1;
    remove("quadruples.txt");
    remove("output.txt");
    yyparse();
    int level = 0;
    curr->printTable(level);
    printf("%d", quadruples->getLevel());
    return 0;
}
