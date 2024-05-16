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
    bool funcScope = false;
    bool PARM = false;
    const char * fileName = "quadruples.txt";
    
    

#line 103 "parser.tab.c"

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
  YYSYMBOL_85_30 = 85,                     /* $@30  */
  YYSYMBOL_ret = 86,                       /* ret  */
  YYSYMBOL_else = 87,                      /* else  */
  YYSYMBOL_88_31 = 88,                     /* $@31  */
  YYSYMBOL_89_32 = 89,                     /* $@32  */
  YYSYMBOL_90_33 = 90,                     /* $@33  */
  YYSYMBOL_91_34 = 91,                     /* $@34  */
  YYSYMBOL_case_stmnt = 92,                /* case_stmnt  */
  YYSYMBOL_93_35 = 93,                     /* $@35  */
  YYSYMBOL_INT_OR_CHAR = 94,               /* INT_OR_CHAR  */
  YYSYMBOL_type = 95,                      /* type  */
  YYSYMBOL_case_def = 96,                  /* case_def  */
  YYSYMBOL_parm_list = 97,                 /* parm_list  */
  YYSYMBOL_x = 98,                         /* x  */
  YYSYMBOL_99_36 = 99,                     /* $@36  */
  YYSYMBOL_call_list = 100,                /* call_list  */
  YYSYMBOL_y = 101,                        /* y  */
  YYSYMBOL_102_37 = 102,                   /* $@37  */
  YYSYMBOL_rval = 103,                     /* rval  */
  YYSYMBOL_expr = 104,                     /* expr  */
  YYSYMBOL_assignment = 105,               /* assignment  */
  YYSYMBOL_ef = 106,                       /* ef  */
  YYSYMBOL_107_38 = 107,                   /* $@38  */
  YYSYMBOL_108_39 = 108,                   /* $@39  */
  YYSYMBOL_109_40 = 109,                   /* $@40  */
  YYSYMBOL_var_type = 110,                 /* var_type  */
  YYSYMBOL_func_type = 111,                /* func_type  */
  YYSYMBOL_declaration = 112,              /* declaration  */
  YYSYMBOL_cond = 113,                     /* cond  */
  YYSYMBOL_114_41 = 114,                   /* $@41  */
  YYSYMBOL_post_loop = 115,                /* post_loop  */
  YYSYMBOL_stmnt_list = 116                /* stmnt_list  */
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
#define YYLAST   712

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

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
       0,   139,   139,   140,   141,   142,   142,   142,   143,   143,
     143,   144,   144,   144,   145,   145,   145,   145,   145,   146,
     147,   148,   148,   148,   148,   148,   149,   149,   149,   149,
     150,   150,   150,   151,   151,   151,   151,   151,   152,   152,
     152,   152,   152,   187,   188,   188,   187,   189,   190,   197,
     198,   199,   201,   202,   202,   202,   201,   202,   205,   205,
     206,   208,   209,   211,   212,   213,   214,   215,   216,   221,
     222,   226,   226,   227,   227,   228,   231,   231,   232,   232,
     237,   244,   245,   246,   247,   248,   249,   250,   251,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   285,   286,   295,
     295,   296,   295,   296,   300,   321,   321,   323,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     337,   338,   341,   342,   346,   346
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
  "$@23", "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "ret",
  "else", "$@31", "$@32", "$@33", "$@34", "case_stmnt", "$@35",
  "INT_OR_CHAR", "type", "case_def", "parm_list", "x", "$@36", "call_list",
  "y", "$@37", "rval", "expr", "assignment", "ef", "$@38", "$@39", "$@40",
  "var_type", "func_type", "declaration", "cond", "$@41", "post_loop",
  "stmnt_list", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-134)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -125,   291,  -125,   -36,  -125,  -125,  -125,  -125,  -125,  -125,
     -20,   -43,   -35,   -29,  -125,  -125,    -8,    35,    11,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,    68,    68,  -125,  -125,
      65,  -125,   241,    32,    10,  -125,  -125,  -125,  -125,   646,
      37,  -125,  -125,  -125,    38,    30,    92,  -125,    78,  -125,
      50,   192,  -125,    49,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,  -125,  -125,    68,    68,    68,  -125,
    -125,   664,  -125,    52,    54,   375,   101,   563,    92,  -125,
      55,  -125,  -125,  -125,   141,  -125,  -125,   133,   473,   473,
     473,   473,   520,   520,   520,   520,    20,    20,    50,    50,
      50,    56,   375,  -125,    60,  -125,  -125,    62,    69,   109,
    -125,    90,    34,   322,    73,    92,    92,    92,    92,    92,
      92,    92,    92,    79,    81,    80,    87,   606,   101,   103,
      97,    68,  -125,   116,    68,   115,   153,   101,   581,   581,
     -22,   -22,   -22,   -22,  -125,  -125,   117,   119,  -125,   101,
    -125,  -125,   121,  -125,   124,   101,    92,  -125,  -125,   136,
    -125,  -125,  -125,   137,   129,   139,  -125,  -125,   141,  -125,
     157,  -125,  -125,  -125,   166,   167,   606,   171,   173,   373,
      92,   424,    59,   174,  -125,  -125,  -125,    68,   204,   326,
     205,   206,    58,  -125,  -125,   239,   426,   219,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,   218,    -2,  -125,   236,   244,
     257,  -125,   261,   264,   475,   266,  -125,  -125,   273,   270,
    -125,  -125,   276,   321,  -125,  -125,  -125,   526,    92,   299,
    -125,   188,   300,   141,  -125,  -125,   303,  -125,   304,  -125,
    -125,   577,  -125,  -125,   628,   305,   306,  -125,  -125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     135,     0,     1,     0,    63,    65,    66,    67,    68,    64,
      88,     0,     0,     0,    21,    26,     0,     0,     0,    84,
      83,    81,    85,    86,    87,    82,     0,     0,    30,   134,
       0,   106,     0,     0,     0,    38,     4,    47,    48,     0,
       0,    14,    19,    20,     0,     0,     0,   116,     0,    88,
     104,     0,   135,   114,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,    98,     0,     0,     0,     3,
       2,     0,   117,     0,    88,   108,    77,     0,     0,   135,
     128,   127,   126,   131,    33,    43,   105,     0,    89,    90,
      95,    94,   100,   102,   101,   103,    96,    97,    91,    92,
      93,    88,   107,    39,     0,     9,    76,    78,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    77,     0,
       0,     0,   114,     0,     0,     0,     0,    77,   124,   123,
     125,   122,   121,   120,   118,   119,     0,     0,    32,    77,
      40,    71,    73,    12,     0,     0,     0,    22,    27,     0,
      34,    44,     6,     0,     0,     0,    10,    79,    16,   135,
       0,   130,   135,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,   135,    74,    13,     0,     0,     0,
       0,     0,     0,    45,     7,     0,     0,     0,    24,    28,
     113,   135,    61,    62,    58,     0,     0,    41,    99,    98,
       0,    25,     0,    36,     0,     0,    46,    50,     0,     0,
     135,    29,     0,    57,   135,    49,    42,     0,     0,     0,
      37,     0,     0,   109,    52,    18,     0,    53,     0,   135,
     110,     0,   135,    55,     0,     0,     0,    56,   112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,   -71,  -125,  -125,   179,  -125,  -124,   211,  -125,   -73,
     -25,   290,  -125,  -125,  -125,  -125,   -69,  -125,  -125,   -68,
    -125,  -125,   -52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    29,   126,   174,    40,   129,   104,   165,    77,   133,
     178,   232,    44,   169,   188,   211,    45,   170,   212,    52,
     125,   123,   172,   190,   223,    73,   127,   163,   219,   124,
     173,   205,   207,   230,   237,   239,   243,   245,   182,   215,
     204,    30,   193,   150,   151,   164,   105,   106,   130,    31,
      32,    33,   213,   236,   242,   246,    34,    35,    36,    84,
     114,   197,     1
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
      46,    98,    99,   100,    47,   217,   102,   138,   139,   140,
     141,   142,   143,   144,   145,   107,   109,    72,   152,    48,
      64,    65,    66,    67,   107,    68,   115,   116,   117,   118,
     119,   120,   121,   122,    53,   191,   107,    49,   192,    70,
      79,   202,   107,   135,   203,    76,    78,    85,   168,    19,
      20,    21,    22,    23,    24,    68,    25,  -115,   131,    26,
     103,    80,   -11,  -129,    -5,   109,    75,   152,   128,   102,
      49,   -80,   189,    81,    82,    83,    27,   179,   132,   134,
     181,   137,    19,    20,    21,    22,    23,    24,   146,    25,
     147,   148,   195,   218,     3,   149,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   214,
     155,    17,   154,    18,    19,    20,    21,    22,    23,    24,
     233,    25,   196,   156,    26,   157,   158,   160,   227,   161,
     -75,   166,   231,   115,   116,   117,   118,   119,   120,   121,
     122,    27,   176,    28,   -31,   171,   175,   241,   177,     3,
     244,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   -59,   180,    17,   -59,    18,    19,
      20,    21,    22,    23,    24,   183,    25,   184,   186,    26,
     187,   194,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    27,    68,    28,   -59,
       3,    86,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   198,   200,    17,   201,    18,
      19,    20,    21,    22,    23,    24,   206,    25,   210,   216,
      26,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,  -133,    68,    27,    69,    28,
     -51,     2,     3,  -132,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   220,   221,    17,
     222,    18,    19,    20,    21,    22,    23,    24,   224,    25,
     225,   226,    26,     3,   228,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   229,    27,
      17,    28,    18,    19,    20,    21,    22,    23,    24,   234,
      25,   235,   238,    26,   240,   185,   247,   248,   115,   116,
     117,   118,   119,   120,   121,   122,   167,   110,     0,     0,
      27,     0,    28,   136,     3,   199,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     0,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,    26,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     0,
      68,    27,     0,    28,   -23,     3,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       0,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,     0,    25,     0,     0,    26,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,   208,   209,    66,    67,
       0,    68,    27,     0,    28,   -35,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,    26,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     0,    68,     0,
       0,     0,     0,    27,     0,    28,   -69,     3,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,     0,    25,     0,     0,    26,    62,    63,
      64,    65,    66,    67,     0,    68,     4,     5,     6,     7,
       8,     9,   108,     0,    27,     0,    28,   -17,     3,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,     0,    25,     0,     0,    26,     4,
       5,     6,     7,     8,     9,   117,   118,   119,   120,   121,
     122,     0,     0,     0,     0,    27,     0,    28,   -54,     3,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    74,    25,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,    19,    20,    21,
      22,    23,    24,   101,    25,     0,    27,    26,    28,  -111,
       0,     0,     0,     0,     0,    19,    20,    21,    22,    23,
      24,     0,    25,     0,    27,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27
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
      48,     9,    48,    48,    48,   176,   131,   176,    48,   134,
       9,    49,   180,    21,    22,    23,    48,   169,     9,    29,
     172,    48,    21,    22,    23,    24,    25,    26,    49,    28,
      49,    51,   184,   206,     1,    48,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   201,
      53,    18,    49,    20,    21,    22,    23,    24,    25,    26,
     228,    28,   187,    47,    31,    50,    13,    50,   220,    50,
      49,    47,   224,    32,    33,    34,    35,    36,    37,    38,
      39,    48,    53,    50,    51,    49,    49,   239,    49,     1,
     242,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    48,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    49,    28,    50,    47,    31,
      47,    47,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    48,    45,    50,    51,
       1,    49,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    51,    51,    18,    52,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    49,    51,
      31,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    49,    45,    48,    47,    50,
      51,     0,     1,    49,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    50,    47,    18,
      46,    20,    21,    22,    23,    24,    25,    26,    52,    28,
      47,    51,    31,     1,    48,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    17,    48,
      18,    50,    20,    21,    22,    23,    24,    25,    26,    50,
      28,    51,    49,    31,    50,   176,    51,    51,    32,    33,
      34,    35,    36,    37,    38,    39,   155,    77,    -1,    -1,
      48,    -1,    50,    51,     1,    49,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    48,    -1,    50,    51,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    -1,    -1,    31,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    48,    -1,    50,    51,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    38,    39,
      40,    41,    42,    43,    -1,    45,     3,     4,     5,     6,
       7,     8,     9,    -1,    48,    -1,    50,    51,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,     3,
       4,     5,     6,     7,     8,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,     9,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,     9,    28,    -1,    48,    31,    50,    51,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    28,    -1,    48,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,   116,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    18,    20,    21,
      22,    23,    24,    25,    26,    28,    31,    48,    50,    55,
      95,   103,   104,   105,   110,   111,   112,    47,    51,    29,
      58,    48,    47,    47,    66,    70,    48,     9,    48,     9,
     104,   104,    73,     9,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    45,    47,
      47,    29,    47,    79,     9,   104,    48,    62,    48,    50,
       9,    21,    22,    23,   113,     9,    49,   116,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,     9,   104,    48,    60,   100,   101,   103,     9,    95,
     105,   110,   113,   116,   114,    32,    33,    34,    35,    36,
      37,    38,    39,    75,    83,    74,    56,    80,    48,    59,
     102,    29,     9,    63,    29,    49,    51,    48,   113,   113,
     113,   113,   113,   113,   113,   113,    49,    49,    51,    48,
      97,    98,   110,   100,    49,    53,    47,    50,    13,   100,
      50,    50,   100,    81,    99,    61,    47,   101,   113,    67,
      71,    49,    76,    84,    57,    49,    53,    49,    64,   116,
      48,   116,    92,    49,    50,    98,    47,    47,    68,   113,
      77,    16,    19,    96,    47,   116,   104,   115,    51,    49,
      51,    52,    23,    26,    94,    85,    27,    86,    40,    41,
      49,    69,    72,   106,   116,    93,    51,    47,   103,    82,
      50,    47,    46,    78,    52,    47,    51,   116,    48,    17,
      87,   116,    65,   113,    50,    51,   107,    88,    49,    89,
      50,   116,   108,    90,   116,    91,   109,    51,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    56,    57,    55,    58,    59,
      55,    60,    61,    55,    62,    63,    64,    65,    55,    55,
      55,    66,    67,    68,    69,    55,    70,    71,    72,    55,
      73,    74,    55,    75,    76,    77,    78,    55,    79,    80,
      81,    82,    55,    83,    84,    85,    55,    55,    55,    86,
      86,    86,    88,    89,    90,    91,    87,    87,    93,    92,
      92,    94,    94,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    99,    98,    98,   100,   100,   102,   101,
     101,   103,   103,   103,   103,   103,   103,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   107,
     108,   109,   106,   106,   110,   111,   111,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     113,   113,   115,   115,   116,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     0,     0,     9,     0,     0,
       7,     0,     0,     9,     0,     0,     0,     0,    15,     2,
       2,     0,     0,     0,     0,    11,     0,     0,     0,    12,
       0,     0,     5,     0,     0,     0,     0,    13,     0,     0,
       0,     0,    12,     0,     0,     0,    11,     2,     2,     3,
       2,     0,     0,     0,     0,     0,     8,     0,     0,     6,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     0,     0,     4,     1,     1,     0,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     2,     3,     1,     3,     3,     0,
       0,     0,    11,     0,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     0,
       5,     1,     2,     2,     2,     0
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
#line 142 "parser.y"
                                  { currFuncName = (yyvsp[0].gval).name; TableOfFunctions->CheckFunctionReturn((yyvsp[-2].gval).name, (yyvsp[-2].gval).type, (yyvsp[0].gval).name, yylineno, &print, curr); }
#line 1770 "parser.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 142 "parser.y"
                                                                                                                                                                      { quadruples->print_call_function(fileName, TableOfFunctions, (yyvsp[-3].gval).name, indentation, (yyvsp[-5].gval).name); }
#line 1776 "parser.tab.c"
    break;

  case 7: /* stmnt: var_type EQUAL VARIABLE $@1 '(' call_list $@2 ')' ';'  */
#line 142 "parser.y"
                                                                                                                                                                                                                                                                              {CallOrder = 0;}
#line 1782 "parser.tab.c"
    break;

  case 8: /* $@3: %empty  */
#line 143 "parser.y"
                   { currFuncName = (yyvsp[0].gval).name; }
#line 1788 "parser.tab.c"
    break;

  case 9: /* $@4: %empty  */
#line 143 "parser.y"
                                                              { quadruples->print_call_function(fileName, TableOfFunctions, (yyvsp[-3].gval).name, indentation, ""); }
#line 1794 "parser.tab.c"
    break;

  case 10: /* stmnt: VARIABLE $@3 '(' call_list $@4 ')' ';'  */
#line 143 "parser.y"
                                                                                                                                                                {CallOrder = 0;}
#line 1800 "parser.tab.c"
    break;

  case 11: /* $@5: %empty  */
#line 144 "parser.y"
                                  {currFuncName = (yyvsp[0].gval).name; char * type = strdup(curr->getTypebyName((yyvsp[-2].gval).name).c_str()); TableOfFunctions->CheckFunctionReturn((yyvsp[-2].gval).name, type, (yyvsp[0].gval).name, yylineno, &print, curr); }
#line 1806 "parser.tab.c"
    break;

  case 12: /* $@6: %empty  */
#line 144 "parser.y"
                                                                                                                                                                                                                               { quadruples->print_call_function(fileName, TableOfFunctions, (yyvsp[-3].gval).name, indentation, (yyvsp[-5].gval).name); }
#line 1812 "parser.tab.c"
    break;

  case 13: /* stmnt: VARIABLE EQUAL VARIABLE $@5 '(' call_list $@6 ')' ';'  */
#line 144 "parser.y"
                                                                                                                                                                                                                                                                                                                                      {CallOrder = 0;}
#line 1818 "parser.tab.c"
    break;

  case 14: /* $@7: %empty  */
#line 145 "parser.y"
                  { quadruples->addLOOPExit(); curr = curr->newTable(); }
#line 1824 "parser.tab.c"
    break;

  case 15: /* $@8: %empty  */
#line 145 "parser.y"
                                                                                     { quadruples->print_for_label(fileName, indentation); indentation+=5; }
#line 1830 "parser.tab.c"
    break;

  case 16: /* $@9: %empty  */
#line 145 "parser.y"
                                                                                                                                                                       {quadruples->printJMP(fileName, "nz", (yyvsp[0].gval).REGISTER, indentation);}
#line 1836 "parser.tab.c"
    break;

  case 17: /* $@10: %empty  */
#line 145 "parser.y"
                                                                                                                                                                                                                                                                           { indentation-= 5; curr = curr->getParent(); quadruples->printExitLOOP(fileName, indentation); }
#line 1842 "parser.tab.c"
    break;

  case 18: /* stmnt: FOR '(' $@7 assignment $@8 ';' cond $@9 ';' post_loop ')' '{' stmnt_list $@10 '}'  */
#line 145 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                 { quadruples->remove_FOR_LABEL(); }
#line 1848 "parser.tab.c"
    break;

  case 19: /* stmnt: BREAK ';'  */
#line 146 "parser.y"
                    { quadruples->printBREAK(fileName, indentation); }
#line 1854 "parser.tab.c"
    break;

  case 20: /* stmnt: CONTINUE ';'  */
#line 147 "parser.y"
                       { quadruples->printContinue(fileName, indentation); }
#line 1860 "parser.tab.c"
    break;

  case 21: /* $@11: %empty  */
#line 148 "parser.y"
                { quadruples->addLOOPExit(); quadruples->print_for_label(fileName, indentation); indentation+=5; curr = curr->newTable(); }
#line 1866 "parser.tab.c"
    break;

  case 22: /* $@12: %empty  */
#line 148 "parser.y"
                                                                                                                                                            { curr = curr->newTable(); }
#line 1872 "parser.tab.c"
    break;

  case 23: /* $@13: %empty  */
#line 148 "parser.y"
                                                                                                                                                                                                    {quadruples->printJMP(fileName, "nz", (yyvsp[-4].gval).REGISTER, indentation);}
#line 1878 "parser.tab.c"
    break;

  case 24: /* $@14: %empty  */
#line 148 "parser.y"
                                                                                                                                                                                                                                                                           { indentation-=5; curr = curr->getParent(); quadruples->printExitLOOP(fileName, indentation); }
#line 1884 "parser.tab.c"
    break;

  case 25: /* stmnt: WHILE $@11 '(' cond ')' '{' $@12 stmnt_list $@13 '}' $@14  */
#line 148 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                           { quadruples->remove_FOR_LABEL(); }
#line 1890 "parser.tab.c"
    break;

  case 26: /* $@15: %empty  */
#line 149 "parser.y"
             { quadruples->addLOOPExit(); curr = curr->newTable(); quadruples->print_for_label(fileName, indentation); indentation+=5; }
#line 1896 "parser.tab.c"
    break;

  case 27: /* $@16: %empty  */
#line 149 "parser.y"
                                                                                                                                                                 {curr = curr->getParent();}
#line 1902 "parser.tab.c"
    break;

  case 28: /* $@17: %empty  */
#line 149 "parser.y"
                                                                                                                                                                                                          { quadruples->printJMP(fileName, "nz", (yyvsp[-1].gval).REGISTER, indentation); }
#line 1908 "parser.tab.c"
    break;

  case 29: /* stmnt: DO $@15 '{' stmnt_list '}' WHILE $@16 '(' cond ')' $@17 ';'  */
#line 149 "parser.y"
                                                                                                                                                                                                                                                                                 { indentation-=5; quadruples->printExitLOOP(fileName, indentation); quadruples->remove_FOR_LABEL(); }
#line 1914 "parser.tab.c"
    break;

  case 30: /* $@18: %empty  */
#line 150 "parser.y"
              {curr = curr->newTable(); }
#line 1920 "parser.tab.c"
    break;

  case 31: /* $@19: %empty  */
#line 150 "parser.y"
                                                     {curr = curr->getParent();}
#line 1926 "parser.tab.c"
    break;

  case 33: /* $@20: %empty  */
#line 151 "parser.y"
                       { quadruples->addIFLabels(fileName, indentation, (yyvsp[0].gval).REGISTER); }
#line 1932 "parser.tab.c"
    break;

  case 34: /* $@21: %empty  */
#line 151 "parser.y"
                                                                                               { curr = curr->newTable(); indentation+=5; }
#line 1938 "parser.tab.c"
    break;

  case 35: /* $@22: %empty  */
#line 151 "parser.y"
                                                                                                                                                       { curr = curr->getParent(); indentation-=5;  }
#line 1944 "parser.tab.c"
    break;

  case 36: /* $@23: %empty  */
#line 151 "parser.y"
                                                                                                                                                                                                             { quadruples->PRE_ELSE(fileName, indentation); }
#line 1950 "parser.tab.c"
    break;

  case 37: /* stmnt: IF '(' cond $@20 ')' '{' $@21 stmnt_list $@22 '}' ef $@23 else  */
#line 151 "parser.y"
                                                                                                                                                                                                                                                                   { quadruples->POST_ELSE(fileName, indentation); }
#line 1956 "parser.tab.c"
    break;

  case 38: /* $@24: %empty  */
#line 152 "parser.y"
                    { funcScope = true; quadruples->print_label(fileName, indentation, (yyvsp[0].gval).name); indentation+=5;  }
#line 1962 "parser.tab.c"
    break;

  case 39: /* $@25: %empty  */
#line 152 "parser.y"
                                                                                                                        { currFunc = new FunctionTable(); currFunc = currFunc->newFuncTable((yyvsp[-2].gval).name, curr); curr = currFunc; TableOfFunctions->addFunction(currFunc, (yyvsp[-2].gval).type); PARM = true; }
#line 1968 "parser.tab.c"
    break;

  case 40: /* $@26: %empty  */
#line 152 "parser.y"
                                                                                                                                                                                                                                                                                                        { PARM  = false; }
#line 1974 "parser.tab.c"
    break;

  case 41: /* $@27: %empty  */
#line 152 "parser.y"
                                                                                                                                                                                                                                                                                                                                                 {
                                                                                          if (!strcmp((yyvsp[0].gval).type, "VOID")){
                                                                                            
                                                                                                if (strcmp((yyvsp[-9].gval).type, "VOID") && print){
                                                                                                    print = false;
                                                                                                    printf("%s" "%d" "%s", "error at line: ", yylineno, ", return-statement with no value");
                                                                                                    printf("\n");
                                                                                                  }
                                                                                                
                                                                                                }
                                                                                            
                                                                                          else{
                                                                                            if (!strcmp((yyvsp[0].gval).type, "NONE")){ //No return

                                                                                              if (strcmp((yyvsp[-9].gval).type, "VOID")){

                                                                                                printf("%s" "%d" "%s", "Warning at ", yylineno, ": Function has no return");
                                                                                                printf("\n");
                                                                                              }

                                                                                            }
                                                                                          
                                                                                          }
                                                                                          if (strcmp((yyvsp[0].gval).type, "NONE")){
                                                                                            if (strcmp((yyvsp[-9].gval).type, (yyvsp[0].gval).type) && print){
                                                                                                print = false;
                                                                                                printf("%s" "%d" "%s" "%s" "%s" "%s", "Error at line: ", yylineno, ": returning ", (yyvsp[0].gval).type, " to ", (yyvsp[-9].gval).type);
                                                                                                printf("\n");
                                                                                              }
                                                                                          }
                                                                                          curr = curr->getParent();  funcScope = false;
                                                                                          }
#line 2011 "parser.tab.c"
    break;

  case 42: /* stmnt: func_type $@24 '(' $@25 parm_list $@26 ')' '{' stmnt_list ret $@27 '}'  */
#line 186 "parser.y"
              { indentation-=5;  quadruples->print_return(fileName, indentation, (yyvsp[-2].gval).value); }
#line 2017 "parser.tab.c"
    break;

  case 43: /* $@28: %empty  */
#line 187 "parser.y"
                                    { quadruples->printSwitchLabel(fileName, indentation, (yyvsp[0].gval).name); quadruples->addSwitchExit(); curr->checkCaseType((yyvsp[0].gval).name, yylineno, &print); curr->checkTable((yyvsp[0].gval).name, yylineno, &print); curr->checkInit((yyvsp[0].gval).name, &print, yylineno, funcScope);}
#line 2023 "parser.tab.c"
    break;

  case 44: /* $@29: %empty  */
#line 188 "parser.y"
                { curr = curr->newTable(); indentation+=5; }
#line 2029 "parser.tab.c"
    break;

  case 45: /* $@30: %empty  */
#line 188 "parser.y"
                                                                                 { curr = curr->getParent(); indentation-=5; quadruples->printExitLOOP(fileName, indentation); }
#line 2035 "parser.tab.c"
    break;

  case 49: /* ret: RETURN rval ';'  */
#line 197 "parser.y"
                     { (yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).value = (yyvsp[-1].gval).value;  }
#line 2041 "parser.tab.c"
    break;

  case 50: /* ret: RETURN ';'  */
#line 198 "parser.y"
               {(yyval.gval).type = "VOID"; (yyval.gval).value = "";}
#line 2047 "parser.tab.c"
    break;

  case 51: /* ret: %empty  */
#line 199 "parser.y"
    {(yyval.gval).type = "NONE"; (yyval.gval).value = "";}
#line 2053 "parser.tab.c"
    break;

  case 52: /* $@31: %empty  */
#line 201 "parser.y"
                { curr = curr->newTable();  }
#line 2059 "parser.tab.c"
    break;

  case 53: /* $@32: %empty  */
#line 202 "parser.y"
        { indentation+=5; }
#line 2065 "parser.tab.c"
    break;

  case 54: /* $@33: %empty  */
#line 202 "parser.y"
                                        { indentation-=5; }
#line 2071 "parser.tab.c"
    break;

  case 55: /* $@34: %empty  */
#line 202 "parser.y"
                                                           {curr = curr->getParent(); }
#line 2077 "parser.tab.c"
    break;

  case 58: /* $@35: %empty  */
#line 205 "parser.y"
                                         { char * REG = strdup(quadruples->print_CASE_Cond_Operation(fileName, (yyvsp[0].gval).REGISTER, indentation, "EQEQ").c_str()); quadruples->printPRECASE(fileName, REG, indentation); }
#line 2083 "parser.tab.c"
    break;

  case 59: /* case_stmnt: case_stmnt CASE INT_OR_CHAR $@35 ':' stmnt_list  */
#line 205 "parser.y"
                                                                                                                                                                                                                                   { quadruples->printPOSTCASE(fileName, indentation); }
#line 2089 "parser.tab.c"
    break;

  case 61: /* INT_OR_CHAR: INTEGER  */
#line 208 "parser.y"
                      {(yyval.gval).type = "int"; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2095 "parser.tab.c"
    break;

  case 62: /* INT_OR_CHAR: CHAR  */
#line 209 "parser.y"
                   {(yyval.gval).type = "char"; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2101 "parser.tab.c"
    break;

  case 63: /* type: TYPE_INT  */
#line 211 "parser.y"
                {(yyval.gval).type = "int";}
#line 2107 "parser.tab.c"
    break;

  case 64: /* type: TYPE_BOOL  */
#line 212 "parser.y"
                 {(yyval.gval).type = "bool";}
#line 2113 "parser.tab.c"
    break;

  case 65: /* type: TYPE_FLOAT  */
#line 213 "parser.y"
                   {(yyval.gval).type = "float";}
#line 2119 "parser.tab.c"
    break;

  case 66: /* type: TYPE_DOUBLE  */
#line 214 "parser.y"
                    {(yyval.gval).type = "double";}
#line 2125 "parser.tab.c"
    break;

  case 67: /* type: TYPE_STRING  */
#line 215 "parser.y"
                    {(yyval.gval).type = "string";}
#line 2131 "parser.tab.c"
    break;

  case 68: /* type: TYPE_CHAR  */
#line 216 "parser.y"
                  {(yyval.gval).type = "char";}
#line 2137 "parser.tab.c"
    break;

  case 73: /* $@36: %empty  */
#line 227 "parser.y"
            { currFunc->addparm((yyvsp[0].gval).type); }
#line 2143 "parser.tab.c"
    break;

  case 75: /* x: var_type  */
#line 228 "parser.y"
           { currFunc->addparm((yyvsp[0].gval).type); }
#line 2149 "parser.tab.c"
    break;

  case 78: /* $@37: %empty  */
#line 232 "parser.y"
        {
  const char* type = (yyvsp[0].gval).type;
  quadruples->print_call_parm(fileName, (yyvsp[0].gval).name, indentation);
  TableOfFunctions->validateCallParm(currFuncName, type, CallOrder, yylineno, &print);
  CallOrder+=1;
  }
#line 2160 "parser.tab.c"
    break;

  case 80: /* y: rval  */
#line 237 "parser.y"
               {const char* type = (yyvsp[0].gval).type;
  quadruples->print_call_parm(fileName, (yyvsp[0].gval).name, indentation);
  TableOfFunctions->validateCallParm(currFuncName, type, CallOrder, yylineno, &print);
  CallOrder+=1;
  }
#line 2170 "parser.tab.c"
    break;

  case 81: /* rval: INTEGER  */
#line 244 "parser.y"
               {(yyval.gval).type = "int"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = (yyvsp[0].Ival).value;}
#line 2176 "parser.tab.c"
    break;

  case 82: /* rval: STRING  */
#line 245 "parser.y"
               {(yyval.gval).type = "string"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value;  (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2182 "parser.tab.c"
    break;

  case 83: /* rval: F_BOOL  */
#line 246 "parser.y"
               {(yyval.gval).type = "bool"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = "false"; }
#line 2188 "parser.tab.c"
    break;

  case 84: /* rval: T_BOOL  */
#line 247 "parser.y"
              {(yyval.gval).type = "bool"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = "true"; }
#line 2194 "parser.tab.c"
    break;

  case 85: /* rval: FLOAT  */
#line 248 "parser.y"
              {(yyval.gval).type = "float"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2200 "parser.tab.c"
    break;

  case 86: /* rval: DOUBLE  */
#line 249 "parser.y"
               {(yyval.gval).type = "double"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2206 "parser.tab.c"
    break;

  case 87: /* rval: CHAR  */
#line 250 "parser.y"
             {(yyval.gval).type = "char"; (yyval.gval).value = (yyvsp[0].Ival).value; (yyval.gval).name = (yyvsp[0].Ival).value; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2212 "parser.tab.c"
    break;

  case 88: /* rval: VARIABLE  */
#line 251 "parser.y"
                {

        char * type = strdup(curr->checkDef((yyvsp[0].gval).name, yylineno, &print).c_str());
        curr->checkInit((yyvsp[0].gval).name, &print, yylineno, funcScope);
        (yyval.gval).name = (yyvsp[0].gval).name;
        (yyval.gval).type = type;
        (yyval.gval).value = (yyvsp[0].gval).name;
        (yyval.gval).REGISTER = (yyvsp[0].gval).name;
       
        }
#line 2227 "parser.tab.c"
    break;

  case 89: /* expr: expr PLUS expr  */
#line 262 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Adding"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "PLUS").c_str());}
#line 2233 "parser.tab.c"
    break;

  case 90: /* expr: expr MINUS expr  */
#line 263 "parser.y"
                       {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Minusing"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "MINUS").c_str()); }
#line 2239 "parser.tab.c"
    break;

  case 91: /* expr: expr MULT expr  */
#line 264 "parser.y"
                      {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Multplying"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "MULTPLY").c_str()); }
#line 2245 "parser.tab.c"
    break;

  case 92: /* expr: expr DIV expr  */
#line 265 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Dividing"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "DIVIDE").c_str()); }
#line 2251 "parser.tab.c"
    break;

  case 93: /* expr: expr POW expr  */
#line 266 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Powering"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "POWER").c_str()); }
#line 2257 "parser.tab.c"
    break;

  case 94: /* expr: expr AND expr  */
#line 267 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Anding"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "AND").c_str()); }
#line 2263 "parser.tab.c"
    break;

  case 95: /* expr: expr OR expr  */
#line 268 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "Oring"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "OR").c_str()); }
#line 2269 "parser.tab.c"
    break;

  case 96: /* expr: expr EQUEQU expr  */
#line 269 "parser.y"
                        {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "EQUATING"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "EQEQ").c_str()); }
#line 2275 "parser.tab.c"
    break;

  case 97: /* expr: expr NOTEQU expr  */
#line 270 "parser.y"
                        {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "NOT EQUATING"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "NOTEQ").c_str()); }
#line 2281 "parser.tab.c"
    break;

  case 98: /* expr: expr PLUSPLUS  */
#line 271 "parser.y"
                     {curr->checkSingleOperation ((yyvsp[-1].gval).type, yylineno, &print, "PLUS PLUS"); (yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printSingleOperation(fileName, (yyvsp[-1].gval).REGISTER, indentation, "PLUSPLUS").c_str()); }
#line 2287 "parser.tab.c"
    break;

  case 99: /* expr: expr MINUSMINUS  */
#line 272 "parser.y"
                       {curr->checkSingleOperation ((yyvsp[-1].gval).type, yylineno, &print, "MINUS MINUS"); (yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printSingleOperation(fileName, (yyvsp[-1].gval).REGISTER, indentation, "MINUSMINUS").c_str());}
#line 2293 "parser.tab.c"
    break;

  case 100: /* expr: expr GT expr  */
#line 273 "parser.y"
                    {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "GREATER_THAN"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "GT").c_str()); }
#line 2299 "parser.tab.c"
    break;

  case 101: /* expr: expr GTE expr  */
#line 274 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "GREATER_THAN_EQUAL"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "GTE").c_str()); }
#line 2305 "parser.tab.c"
    break;

  case 102: /* expr: expr LT expr  */
#line 275 "parser.y"
                    {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "LESS_THAN"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "LT").c_str()); }
#line 2311 "parser.tab.c"
    break;

  case 103: /* expr: expr LTE expr  */
#line 276 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "LESS_THAN_EQUAL"); (yyval.gval).type = (yyvsp[-2].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printOperation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "LTE").c_str()); }
#line 2317 "parser.tab.c"
    break;

  case 104: /* expr: MINUS expr  */
#line 277 "parser.y"
                            {curr->checkSingleOperation ((yyvsp[0].gval).type, yylineno, &print, "NEGATIVE"); (yyval.gval).type = (yyvsp[0].gval).type; (yyval.gval).REGISTER = strdup(quadruples->printSingleOperation(fileName, (yyvsp[0].gval).REGISTER, indentation, "NEG").c_str());}
#line 2323 "parser.tab.c"
    break;

  case 105: /* expr: '(' expr ')'  */
#line 278 "parser.y"
                    {(yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).name = (yyvsp[-1].gval).name; (yyval.gval).REGISTER = (yyvsp[-1].gval).REGISTER; }
#line 2329 "parser.tab.c"
    break;

  case 106: /* expr: rval  */
#line 279 "parser.y"
          { (yyval.gval).type = strdup((yyvsp[0].gval).type); (yyval.gval).value = (yyvsp[0].gval).value; (yyval.gval).REGISTER = (yyvsp[0].gval).REGISTER; }
#line 2335 "parser.tab.c"
    break;

  case 107: /* assignment: var_type EQUAL expr  */
#line 285 "parser.y"
                                  { curr->initSymbol((yyvsp[-2].gval).name, (yyvsp[0].gval).type, yylineno, &print); quadruples->print_assign_Quadruples(fileName, (yyvsp[0].gval).REGISTER, (yyvsp[-2].gval).name, indentation, curr);}
#line 2341 "parser.tab.c"
    break;

  case 108: /* assignment: VARIABLE EQUAL expr  */
#line 286 "parser.y"
                                  {
                                  
                                    curr->checkDef((yyvsp[-2].gval).name, yylineno, &print);
                                    curr->initSymbol((yyvsp[-2].gval).name, (yyvsp[0].gval).type, yylineno, &print);
                                    quadruples->print_assign_Quadruples(fileName, (yyvsp[0].gval).REGISTER, (yyvsp[-2].gval).name, indentation, curr);
                                    
                          
                                  }
#line 2354 "parser.tab.c"
    break;

  case 109: /* $@38: %empty  */
#line 295 "parser.y"
                        { quadruples->addElseIFLabels(fileName, indentation, (yyvsp[0].gval).REGISTER); }
#line 2360 "parser.tab.c"
    break;

  case 110: /* $@39: %empty  */
#line 295 "parser.y"
                                                                                                     { curr = curr->newTable(); indentation+=5; }
#line 2366 "parser.tab.c"
    break;

  case 111: /* $@40: %empty  */
#line 296 "parser.y"
                     { curr = curr->getParent(); }
#line 2372 "parser.tab.c"
    break;

  case 112: /* ef: ef ELSIF '(' cond $@38 ')' '{' $@39 stmnt_list $@40 '}'  */
#line 296 "parser.y"
                                                       { indentation-=5; }
#line 2378 "parser.tab.c"
    break;

  case 114: /* var_type: type VARIABLE  */
#line 300 "parser.y"
                        {

sym * s = new sym((yyvsp[-1].gval).type, (yyvsp[0].gval).name, false, "");
bool added = curr->addSymbol(*s);
quadruples->print_var_type(fileName, indentation, (yyvsp[-1].gval).type, (yyvsp[0].gval).name, PARM);



if (!added && print){
  print = false;
  printf("%s" "%d" "%s" "%s", "Error at ", yylineno, ": Redeclaration variable: ", (yyvsp[0].gval).name);
  printf("\n");
}

(yyval.gval).type = (yyvsp[-1].gval).type;
(yyval.gval).name = (yyvsp[0].gval).name;



}
#line 2403 "parser.tab.c"
    break;

  case 115: /* func_type: type VARIABLE  */
#line 321 "parser.y"
                         {(yyval.gval).type = (yyvsp[-1].gval).type; (yyval.gval).name = (yyvsp[0].gval).name;}
#line 2409 "parser.tab.c"
    break;

  case 116: /* func_type: VOID VARIABLE  */
#line 321 "parser.y"
                                                                                {(yyval.gval).type = "VOID"; (yyval.gval).name = (yyvsp[0].gval).name;}
#line 2415 "parser.tab.c"
    break;

  case 118: /* cond: cond EQUEQU cond  */
#line 326 "parser.y"
                         { curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "EQUEQU"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "EQEQ").c_str()); }
#line 2421 "parser.tab.c"
    break;

  case 119: /* cond: cond NOTEQU cond  */
#line 327 "parser.y"
                         {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "NOTEQU"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "NOTEQ").c_str()); }
#line 2427 "parser.tab.c"
    break;

  case 120: /* cond: cond LTE cond  */
#line 328 "parser.y"
                      {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "LTE"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "LTE").c_str());}
#line 2433 "parser.tab.c"
    break;

  case 121: /* cond: cond GTE cond  */
#line 329 "parser.y"
                      {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "GTE"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "GTE").c_str());}
#line 2439 "parser.tab.c"
    break;

  case 122: /* cond: cond LT cond  */
#line 330 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "LT"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "LT").c_str());}
#line 2445 "parser.tab.c"
    break;

  case 123: /* cond: cond AND cond  */
#line 331 "parser.y"
                      {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "AND"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "AND").c_str());}
#line 2451 "parser.tab.c"
    break;

  case 124: /* cond: cond OR cond  */
#line 332 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "OR"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "OR").c_str());}
#line 2457 "parser.tab.c"
    break;

  case 125: /* cond: cond GT cond  */
#line 333 "parser.y"
                     {curr->checkOperation((yyvsp[-2].gval).type, (yyvsp[0].gval).type, yylineno, &print, "OR"); (yyval.gval).REGISTER = strdup(quadruples->print_Cond_Operation(fileName, (yyvsp[-2].gval).REGISTER, (yyvsp[0].gval).REGISTER, indentation, "GT").c_str());}
#line 2463 "parser.tab.c"
    break;

  case 126: /* cond: F_BOOL  */
#line 334 "parser.y"
               {(yyval.gval).type = "bool"; (yyval.gval).REGISTER = "false";}
#line 2469 "parser.tab.c"
    break;

  case 127: /* cond: T_BOOL  */
#line 335 "parser.y"
               {(yyval.gval).type = "bool"; (yyval.gval).REGISTER = "true";}
#line 2475 "parser.tab.c"
    break;

  case 128: /* cond: VARIABLE  */
#line 336 "parser.y"
                 {curr->checkTable((yyvsp[0].gval).name, yylineno, &print); curr->checkInit((yyvsp[0].gval).name, &print, yylineno, funcScope); (yyval.gval).type = strdup(curr->getTypebyName((yyvsp[0].gval).name).c_str()); (yyval.gval).REGISTER = (yyvsp[0].gval).name;}
#line 2481 "parser.tab.c"
    break;

  case 129: /* $@41: %empty  */
#line 337 "parser.y"
                 {currFuncName = (yyvsp[0].gval).name; }
#line 2487 "parser.tab.c"
    break;

  case 130: /* cond: VARIABLE $@41 '(' call_list ')'  */
#line 337 "parser.y"
                                                              {CallOrder = 0; (yyval.gval).REGISTER = (yyvsp[-4].gval).name;}
#line 2493 "parser.tab.c"
    break;

  case 131: /* cond: INTEGER  */
#line 338 "parser.y"
                { (yyval.gval).type = "int"; (yyval.gval).REGISTER = (yyvsp[0].Ival).value; }
#line 2499 "parser.tab.c"
    break;

  case 132: /* post_loop: expr PLUSPLUS  */
#line 341 "parser.y"
                          {quadruples->printPostLoop(fileName, (yyvsp[-1].gval).REGISTER, "PLUS", indentation);}
#line 2505 "parser.tab.c"
    break;

  case 133: /* post_loop: expr MINUSMINUS  */
#line 342 "parser.y"
                            {quadruples->printPostLoop(fileName, (yyvsp[-1].gval).REGISTER, "MINUS", indentation);}
#line 2511 "parser.tab.c"
    break;


#line 2515 "parser.tab.c"

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

#line 358 "parser.y"





static int
yyreport_syntax_error (const yypcontext_t *ctx)
{
  if(!print)
    return 0;
  print = false;
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
    if(!print)
      remove("quadruples.txt");
    
    int level = 0;
    curr->printTable(level);
    printf("%d", quadruples->getLevel());
    return 0;
}
