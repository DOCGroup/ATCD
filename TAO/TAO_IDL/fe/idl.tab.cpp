/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         tao_yyparse
#define yylex           tao_yylex
#define yyerror         tao_yyerror
#define yydebug         tao_yydebug
#define yynerrs         tao_yynerrs

#define yylval          tao_yylval
#define yychar          tao_yychar

/* Copy the first part of user declarations.  */
#line 72 "fe/idl.ypp" /* yacc.c:339  */

#include "utl_identifier.h"
#include "utl_err.h"
#include "utl_string.h"
#include "utl_strlist.h"
#include "utl_namelist.h"
#include "utl_exprlist.h"
#include "utl_labellist.h"
#include "utl_decllist.h"

#include "global_extern.h"
#include "nr_extern.h"

#include "ast_argument.h"
#include "ast_array.h"
#include "ast_attribute.h"
#include "ast_field.h"
#include "ast_fixed.h"
#include "ast_expression.h"
#include "ast_operation.h"
#include "ast_generator.h"
#include "ast_template_module.h"
#include "ast_template_module_inst.h"
#include "ast_template_module_ref.h"
#include "ast_typedef.h"
#include "ast_valuebox.h"
#include "ast_valuetype.h"
#include "ast_valuetype_fwd.h"
#include "ast_eventtype.h"
#include "ast_eventtype_fwd.h"
#include "ast_component.h"
#include "ast_component_fwd.h"
#include "ast_home.h"
#include "ast_porttype.h"
#include "ast_connector.h"
#include "ast_uses.h"
#include "ast_constant.h"
#include "ast_union.h"
#include "ast_union_fwd.h"
#include "ast_structure_fwd.h"
#include "ast_extern.h"
#include "ast_enum.h"
#include "ast_root.h"
#include "ast_sequence.h"
#include "ast_string.h"
#include "ast_factory.h"
#include "ast_finder.h"
#include "ast_exception.h"
#include "ast_param_holder.h"
#include "ast_visitor_tmpl_module_inst.h"
#include "ast_visitor_tmpl_module_ref.h"
#include "ast_visitor_context.h"
#include "ast_annotation_appl.h"
#include "ast_union_branch.h"
#include "ast_enum_val.h"
#include "ast_annotation_member.h"

#include "fe_declarator.h"
#include "fe_interface_header.h"
#include "fe_obv_header.h"
#include "fe_component_header.h"
#include "fe_home_header.h"
#include "fe_utils.h"

#if (defined(apollo) || defined(hpux)) && defined(__cplusplus)
extern  "C" int tao_yywrap();
#endif  // (defined(apollo) || defined(hpux)) && defined(__cplusplus)


void tao_yyerror (const char *);
int tao_yylex (void);
extern "C" int tao_yywrap (void);
extern char tao_yytext[];
extern int tao_yyleng;
AST_Enum *tao_enum_constant_decl = 0;
AST_String *tao_string_decl = 0;
AST_Expression::ExprType t_param_const_type = AST_Expression::EV_none;
#define TAO_YYDEBUG_LEXER_TEXT (tao_yytext[tao_yyleng] = '\0', tao_yytext)
// Compile Optional Tracing Output for Parser, can be enabled with --bison-trace
#define YYDEBUG 1

#line 156 "fe/idl.tab.cpp" /* yacc.c:339  */

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
   by #include "idl.tab.hpp".  */
#ifndef YY_TAO_YY_FE_IDL_TAB_HPP_INCLUDED
# define YY_TAO_YY_FE_IDL_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int tao_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    IDL_CONST = 259,
    IDL_MODULE = 260,
    IDL_INTERFACE = 261,
    IDL_TYPEDEF = 262,
    IDL_LONG = 263,
    IDL_SHORT = 264,
    IDL_UNSIGNED = 265,
    IDL_DOUBLE = 266,
    IDL_FLOAT = 267,
    IDL_CHAR = 268,
    IDL_WCHAR = 269,
    IDL_OCTET = 270,
    IDL_BOOLEAN = 271,
    IDL_FIXED = 272,
    IDL_ANY = 273,
    IDL_OBJECT = 274,
    IDL_STRUCT = 275,
    IDL_UNION = 276,
    IDL_SWITCH = 277,
    IDL_ENUM = 278,
    IDL_SEQUENCE = 279,
    IDL_STRING = 280,
    IDL_WSTRING = 281,
    IDL_EXCEPTION = 282,
    IDL_CASE = 283,
    IDL_DEFAULT = 284,
    IDL_READONLY = 285,
    IDL_ATTRIBUTE = 286,
    IDL_ONEWAY = 287,
    IDL_IDEMPOTENT = 288,
    IDL_VOID = 289,
    IDL_IN = 290,
    IDL_OUT = 291,
    IDL_INOUT = 292,
    IDL_RAISES = 293,
    IDL_CONTEXT = 294,
    IDL_NATIVE = 295,
    IDL_LOCAL = 296,
    IDL_ABSTRACT = 297,
    IDL_CUSTOM = 298,
    IDL_FACTORY = 299,
    IDL_PRIVATE = 300,
    IDL_PUBLIC = 301,
    IDL_SUPPORTS = 302,
    IDL_TRUNCATABLE = 303,
    IDL_VALUETYPE = 304,
    IDL_COMPONENT = 305,
    IDL_CONSUMES = 306,
    IDL_EMITS = 307,
    IDL_EVENTTYPE = 308,
    IDL_FINDER = 309,
    IDL_GETRAISES = 310,
    IDL_HOME = 311,
    IDL_IMPORT = 312,
    IDL_MULTIPLE = 313,
    IDL_PRIMARYKEY = 314,
    IDL_PROVIDES = 315,
    IDL_PUBLISHES = 316,
    IDL_SETRAISES = 317,
    IDL_TYPEID = 318,
    IDL_TYPEPREFIX = 319,
    IDL_USES = 320,
    IDL_MANAGES = 321,
    IDL_TYPENAME = 322,
    IDL_PORT = 323,
    IDL_MIRRORPORT = 324,
    IDL_PORTTYPE = 325,
    IDL_CONNECTOR = 326,
    IDL_ALIAS = 327,
    IDL_INTEGER_LITERAL = 328,
    IDL_UINTEGER_LITERAL = 329,
    IDL_STRING_LITERAL = 330,
    IDL_CHARACTER_LITERAL = 331,
    IDL_FLOATING_PT_LITERAL = 332,
    IDL_FIXED_PT_LITERAL = 333,
    IDL_TRUETOK = 334,
    IDL_FALSETOK = 335,
    IDL_SCOPE_DELIMITOR = 336,
    IDL_LEFT_SHIFT = 337,
    IDL_RIGHT_SHIFT = 338,
    IDL_WCHAR_LITERAL = 339,
    IDL_WSTRING_LITERAL = 340,
    IDL_ANNOTATION_DECL = 341,
    IDL_ANNOTATION_SYMBOL = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 158 "fe/idl.ypp" /* yacc.c:355  */

  AST_Decl                      *dcval;         /* Decl value           */
  UTL_StrList                   *slval;         /* String list          */
  UTL_NameList                  *nlval;         /* Name list            */
  UTL_ExprList                  *elval;         /* Expression list      */
  UTL_LabelList                 *llval;         /* Label list           */
  UTL_DeclList                  *dlval;         /* Declaration list     */
  FE_InterfaceHeader            *ihval;         /* Interface header     */
  FE_OBVHeader                  *vhval;         /* Valuetype header     */
  FE_ComponentHeader            *chval;         /* Component header     */
  FE_HomeHeader                 *hhval;         /* Home header          */
  AST_Expression                *exval;         /* Expression value     */
  AST_UnionLabel                *ulval;         /* Union label          */
  AST_Field                     *ffval;         /* Field value          */
  AST_Field::Visibility         vival;          /* N/A, pub or priv     */
  AST_Expression::ExprType      etval;          /* Expression type      */
  AST_Argument::Direction       dival;          /* Argument direction   */
  AST_Operation::Flags          ofval;          /* Operation flags      */
  FE_Declarator                 *deval;         /* Declarator value     */
  ACE_CDR::Boolean              bval;           /* Boolean value        */
  ACE_CDR::LongLong             ival;           /* Long Long value      */
  ACE_CDR::ULongLong            uival;          /* Unsigned long long   */
  ACE_CDR::Double               dval;           /* Double value         */
  ACE_CDR::Float                fval;           /* Float value          */
  ACE_CDR::Char                 cval;           /* Char value           */
  ACE_CDR::WChar                wcval;          /* WChar value          */
  ACE_CDR::Fixed                fixval;         /* Fixed point value    */
  UTL_String                    *sval;          /* String value         */
  char                          *wsval;         /* WString value        */
  char                          *strval;        /* char * value         */
  Identifier                    *idval;         /* Identifier           */
  UTL_IdList                    *idlist;        /* Identifier list      */
  AST_Decl::NodeType            ntval;          /* Node type value      */
  FE_Utils::T_Param_Info        *pival;         /* Template interface param */
  FE_Utils::T_PARAMLIST_INFO    *plval;         /* List of template params */
  FE_Utils::T_ARGLIST           *alval;         /* List of template args */
  AST_Annotation_Appl *annotation_val;
  AST_Annotation_Appls *annotations_val;
  AST_Annotation_Appl::Param *annotation_param_val;
  AST_Annotation_Appl::Params *annotation_params_val;
  AST_Annotation_Decl *annotation_decl_val;
  AST_Decls *decls_val;
  Decl_Annotations_Pair *decl_annotations_pair_val;

#line 329 "fe/idl.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE tao_yylval;

int tao_yyparse (void);

#endif /* !YY_TAO_YY_FE_IDL_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 346 "fe/idl.tab.cpp" /* yacc.c:358  */

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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1566

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  400
/* YYNRULES -- Number of rules.  */
#define YYNRULES  597
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  879

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   103,    98,     2,
     105,   106,   101,    99,    94,   100,     2,   102,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    88,
      91,    95,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   107,     2,   108,    97,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    96,    90,   104,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   386,   386,   389,   390,   398,   411,   417,   421,   425,
     433,   432,   442,   441,   451,   450,   460,   459,   469,   468,
     478,   477,   487,   486,   496,   495,   505,   504,   514,   513,
     523,   522,   532,   531,   541,   540,   550,   549,   559,   558,
     572,   571,   583,   622,   626,   582,   642,   650,   664,   674,
     704,   708,   649,   731,   735,   736,   740,   741,   746,   751,
     745,   837,   842,   836,   911,   912,   917,   955,   959,   916,
     975,   974,   986,  1023,  1053,  1086,  1085,  1094,  1101,  1102,
    1103,  1104,  1108,  1112,  1117,  1160,  1164,  1116,  1191,  1234,
    1238,  1189,  1255,  1253,  1293,  1292,  1304,  1308,  1315,  1320,
    1328,  1353,  1379,  1443,  1444,  1448,  1449,  1450,  1456,  1455,
    1464,  1463,  1474,  1475,  1480,  1479,  1488,  1487,  1496,  1495,
    1504,  1503,  1512,  1511,  1520,  1519,  1528,  1527,  1536,  1535,
    1547,  1559,  1557,  1582,  1589,  1599,  1598,  1624,  1622,  1647,
    1657,  1668,  1712,  1739,  1769,  1773,  1777,  1781,  1768,  1843,
    1844,  1845,  1846,  1847,  1848,  1849,  1853,  1857,  1925,  1927,
    1929,  1930,  1942,  1943,  1955,  1956,  1968,  1969,  1978,  1990,
    1991,  2000,  2012,  2013,  2022,  2031,  2043,  2044,  2053,  2062,
    2074,  2132,  2133,  2140,  2144,  2149,  2156,  2160,  2164,  2169,
    2173,  2177,  2181,  2188,  2257,  2256,  2283,  2284,  2288,  2289,
    2290,  2292,  2291,  2300,  2301,  2305,  2356,  2360,  2367,  2380,
    2390,  2398,  2397,  2470,  2474,  2481,  2490,  2497,  2505,  2511,
    2518,  2529,  2528,  2537,  2541,  2545,  2549,  2575,  2583,  2582,
    2654,  2655,  2659,  2666,  2667,  2693,  2694,  2695,  2696,  2697,
    2698,  2699,  2700,  2704,  2705,  2706,  2707,  2711,  2712,  2713,
    2717,  2718,  2722,  2734,  2732,  2757,  2764,  2765,  2769,  2781,
    2779,  2804,  2811,  2827,  2845,  2846,  2850,  2854,  2858,  2865,
    2869,  2873,  2880,  2884,  2888,  2895,  2902,  2906,  2913,  2920,
    2927,  2934,  2942,  2941,  2955,  2986,  2990,  2954,  3007,  3010,
    3011,  3015,  3015,  3034,  3038,  3033,  3102,  3101,  3114,  3113,
    3126,  3130,  3163,  3167,  3223,  3227,  3125,  3249,  3256,  3269,
    3278,  3285,  3286,  3395,  3398,  3399,  3404,  3408,  3403,  3441,
    3440,  3452,  3462,  3480,  3488,  3487,  3501,  3505,  3500,  3521,
    3520,  3571,  3596,  3620,  3624,  3655,  3659,  3619,  3683,  3688,
    3686,  3692,  3696,  3733,  3737,  3731,  3824,  3894,  3903,  3893,
    3917,  3927,  3931,  3925,  3976,  4002,  4011,  4015,  4009,  4051,
    4077,  4085,  4084,  4129,  4139,  4157,  4165,  4169,  4164,  4229,
    4230,  4235,  4239,  4243,  4247,  4234,  4314,  4318,  4322,  4326,
    4313,  4402,  4406,  4435,  4439,  4401,  4455,  4459,  4523,  4527,
    4453,  4562,  4567,  4572,  4579,  4580,  4591,  4596,  4637,  4590,
    4657,  4656,  4665,  4664,  4675,  4680,  4678,  4684,  4689,  4693,
    4688,  4732,  4731,  4740,  4739,  4750,  4755,  4753,  4759,  4764,
    4768,  4763,  4813,  4820,  4821,  4822,  4929,  4933,  4937,  4945,
    4949,  4944,  4958,  4966,  4970,  4965,  4979,  4987,  4991,  4986,
    5000,  5008,  5012,  5007,  5021,  5028,  5040,  5038,  5061,  5068,
    5096,  5133,  5134,  5138,  5167,  5206,  5210,  5166,  5227,  5231,
    5225,  5272,  5271,  5279,  5286,  5287,  5292,  5291,  5300,  5299,
    5308,  5307,  5316,  5315,  5324,  5323,  5332,  5331,  5340,  5339,
    5349,  5439,  5445,  5470,  5576,  5585,  5589,  5595,  5667,  5739,
    5813,  5812,  5860,  5864,  5868,  5872,  5876,  5880,  5859,  5933,
    5932,  5940,  5947,  5952,  5960,  5964,  5959,  5974,  5975,  5979,
    5981,  5980,  5989,  5988,  6001,  6024,  5999,  6050,  6077,  6048,
    6101,  6102,  6103,  6107,  6108,  6112,  6139,  6169,  6213,  6217,
    6167,  6232,  6241,  6259,  6270,  6269,  6307,  6356,  6360,  6305,
    6375,  6379,  6386,  6390,  6394,  6398,  6402,  6406,  6410,  6414,
    6418,  6422,  6430,  6461,  6474,  6481,  6506,  6524,  6531,  6546,
    6553,  6563,  6567,  6585,  6589,  6562,  6602,  6608,  6611,  6618,
    6617,  6624,  6623,  6630,  6629,  6639,  6708,  6758,  6773,  6785,
    6792,  6851,  6856,  6860,  6855,  6919,  6923,  6918,  6936,  6937,
    6942,  6941,  6950,  6949,  6958,  6957,  6966,  6965
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "IDL_CONST", "IDL_MODULE",
  "IDL_INTERFACE", "IDL_TYPEDEF", "IDL_LONG", "IDL_SHORT", "IDL_UNSIGNED",
  "IDL_DOUBLE", "IDL_FLOAT", "IDL_CHAR", "IDL_WCHAR", "IDL_OCTET",
  "IDL_BOOLEAN", "IDL_FIXED", "IDL_ANY", "IDL_OBJECT", "IDL_STRUCT",
  "IDL_UNION", "IDL_SWITCH", "IDL_ENUM", "IDL_SEQUENCE", "IDL_STRING",
  "IDL_WSTRING", "IDL_EXCEPTION", "IDL_CASE", "IDL_DEFAULT",
  "IDL_READONLY", "IDL_ATTRIBUTE", "IDL_ONEWAY", "IDL_IDEMPOTENT",
  "IDL_VOID", "IDL_IN", "IDL_OUT", "IDL_INOUT", "IDL_RAISES",
  "IDL_CONTEXT", "IDL_NATIVE", "IDL_LOCAL", "IDL_ABSTRACT", "IDL_CUSTOM",
  "IDL_FACTORY", "IDL_PRIVATE", "IDL_PUBLIC", "IDL_SUPPORTS",
  "IDL_TRUNCATABLE", "IDL_VALUETYPE", "IDL_COMPONENT", "IDL_CONSUMES",
  "IDL_EMITS", "IDL_EVENTTYPE", "IDL_FINDER", "IDL_GETRAISES", "IDL_HOME",
  "IDL_IMPORT", "IDL_MULTIPLE", "IDL_PRIMARYKEY", "IDL_PROVIDES",
  "IDL_PUBLISHES", "IDL_SETRAISES", "IDL_TYPEID", "IDL_TYPEPREFIX",
  "IDL_USES", "IDL_MANAGES", "IDL_TYPENAME", "IDL_PORT", "IDL_MIRRORPORT",
  "IDL_PORTTYPE", "IDL_CONNECTOR", "IDL_ALIAS", "IDL_INTEGER_LITERAL",
  "IDL_UINTEGER_LITERAL", "IDL_STRING_LITERAL", "IDL_CHARACTER_LITERAL",
  "IDL_FLOATING_PT_LITERAL", "IDL_FIXED_PT_LITERAL", "IDL_TRUETOK",
  "IDL_FALSETOK", "IDL_SCOPE_DELIMITOR", "IDL_LEFT_SHIFT",
  "IDL_RIGHT_SHIFT", "IDL_WCHAR_LITERAL", "IDL_WSTRING_LITERAL",
  "IDL_ANNOTATION_DECL", "IDL_ANNOTATION_SYMBOL", "';'", "'{'", "'}'",
  "'<'", "'>'", "':'", "','", "'='", "'|'", "'^'", "'&'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'~'", "'('", "')'", "'['", "']'", "$accept",
  "start", "definitions", "at_least_one_definition", "definition",
  "fixed_definition", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7",
  "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "module_header", "$@16", "module", "@17", "$@18", "$@19",
  "template_module_header", "template_module", "$@20", "$@21", "$@22",
  "$@23", "$@24", "at_least_one_tpl_definition", "tpl_definitions",
  "tpl_definition", "template_module_ref", "$@25", "$@26",
  "template_module_inst", "$@27", "$@28", "interface_def", "interface",
  "$@29", "$@30", "$@31", "interface_decl", "$@32", "interface_header",
  "inheritance_spec", "$@33", "value_def", "valuetype",
  "value_concrete_decl", "$@34", "$@35", "$@36", "value_abs_decl", "$@37",
  "$@38", "$@39", "value_header", "$@40", "value_decl", "$@41",
  "opt_truncatable", "supports_spec", "value_forward_decl",
  "value_box_decl", "value_elements", "value_element", "state_member",
  "@42", "@43", "exports", "export", "$@44", "$@45", "$@46", "$@47",
  "$@48", "$@49", "$@50", "$@51", "at_least_one_scoped_name",
  "scoped_names", "$@52", "scoped_name", "$@53", "$@54", "id",
  "defining_id", "interface_forward", "const_dcl", "$@55", "$@56", "$@57",
  "$@58", "const_type", "expression", "const_expr", "or_expr", "xor_expr",
  "and_expr", "shift_expr", "add_expr", "mult_expr", "unary_expr",
  "primary_expr", "literal", "positive_int_expr", "annotation_dcl", "$@59",
  "annotation_body", "annotation_statement", "$@60",
  "annotation_member_type", "annotation_member",
  "annotation_member_default", "at_least_one_annotation",
  "annotations_maybe", "annotation_appl", "@61",
  "annotation_appl_params_maybe", "annotation_appl_params",
  "named_annotation_appl_params", "more_named_annotation_appl_params",
  "named_annotation_appl_param", "type_dcl", "$@62", "type_declarator",
  "$@63", "type_spec", "simple_type_spec", "base_type_spec",
  "template_type_spec", "constructed_type_spec",
  "constructed_forward_type_spec", "at_least_one_declarator",
  "declarators", "$@64", "declarator", "at_least_one_simple_declarator",
  "simple_declarators", "$@65", "simple_declarator", "complex_declarator",
  "integer_type", "signed_int", "unsigned_int", "floating_pt_type",
  "fixed_type", "char_type", "octet_type", "boolean_type", "any_type",
  "object_type", "struct_decl", "$@66", "struct_type", "$@67", "$@68",
  "$@69", "at_least_one_member", "members", "member", "@70", "member_i",
  "$@71", "$@72", "$@73", "union_decl", "$@74", "union_type", "$@75",
  "$@76", "$@77", "$@78", "$@79", "$@80", "switch_type_spec",
  "at_least_one_case_branch", "case_branches", "case_branch", "$@81",
  "$@82", "$@83", "at_least_one_case_label", "case_labels", "case_label",
  "$@84", "$@85", "$@86", "element_spec", "$@87", "struct_forward_type",
  "union_forward_type", "enum_type", "$@88", "$@89", "$@90", "$@91",
  "at_least_one_enumerator", "enumerators", "$@92", "enumerator",
  "sequence_type_spec", "$@93", "$@94", "seq_head", "$@95", "$@96",
  "fixed_type_spec", "string_type_spec", "$@97", "$@98", "string_head",
  "wstring_type_spec", "$@99", "$@100", "wstring_head", "array_declarator",
  "$@101", "at_least_one_array_dim", "array_dims", "array_dim", "$@102",
  "$@103", "attribute", "attribute_readonly", "$@104", "$@105", "$@106",
  "$@107", "attribute_readwrite", "$@108", "$@109", "$@110", "$@111",
  "exception", "$@112", "$@113", "$@114", "$@115", "operation", "$@116",
  "$@117", "$@118", "$@119", "opt_op_attribute", "op_type_spec",
  "init_decl", "$@120", "$@121", "$@122", "init_parameter_list", "$@123",
  "$@124", "at_least_one_in_parameter", "in_parameters", "$@125",
  "in_parameter", "$@126", "$@127", "parameter_list", "$@128", "$@129",
  "at_least_one_parameter", "parameters", "$@130", "parameter", "$@131",
  "$@132", "param_type_spec", "direction", "opt_raises", "$@133", "$@134",
  "opt_getraises", "$@135", "$@136", "opt_setraises", "$@137", "$@138",
  "opt_context", "$@139", "$@140", "at_least_one_string_literal",
  "string_literals", "$@141", "typeid_dcl", "typeprefix_dcl", "component",
  "component_forward_decl", "component_decl", "$@142", "$@143", "$@144",
  "component_header", "$@145", "$@146", "component_inheritance_spec",
  "$@147", "component_exports", "component_export", "$@148", "$@149",
  "$@150", "$@151", "$@152", "$@153", "$@154", "provides_decl",
  "interface_type", "uses_decl", "uses_opt_multiple", "opt_multiple",
  "emits_decl", "publishes_decl", "consumes_decl", "home_decl", "$@155",
  "home_header", "$@156", "$@157", "$@158", "$@159", "$@160", "$@161",
  "home_inheritance_spec", "$@162", "primary_key_spec", "home_body",
  "$@163", "$@164", "home_exports", "home_export", "$@165", "$@166",
  "factory_decl", "$@167", "$@168", "finder_decl", "$@169", "$@170",
  "event", "event_forward_decl", "event_concrete_forward_decl",
  "event_abs_forward_decl", "event_abs_decl", "$@171", "$@172", "$@173",
  "event_abs_header", "event_custom_header", "event_plain_header",
  "event_rest_of_header", "$@174", "event_decl", "$@175", "$@176", "$@177",
  "event_header", "formal_parameter_type", "at_least_one_formal_parameter",
  "formal_parameters", "formal_parameter",
  "at_least_one_formal_parameter_name", "formal_parameter_names",
  "formal_parameter_name", "porttype_decl", "$@178", "$@179", "$@180",
  "$@181", "at_least_one_port_export", "port_exports", "port_export",
  "$@182", "$@183", "$@184", "extended_port_decl",
  "at_least_one_actual_parameter", "actual_parameters", "actual_parameter",
  "connector_decl", "connector_header", "$@185", "$@186", "connector_body",
  "$@187", "$@188", "connector_exports", "connector_export", "$@189",
  "$@190", "$@191", "$@192", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    59,   123,
     125,    60,    62,    58,    44,    61,   124,    94,    38,    43,
      45,    42,    47,    37,   126,    40,    41,    91,    93
};
# endif

#define YYPACT_NINF -631

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-631)))

#define YYTABLE_NINF -539

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -631,    53,   704,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,    96,    66,    98,   140,  -631,    96,
      96,  -631,    44,    44,  -631,  -631,    96,  -631,  -631,     0,
    -631,   239,    23,    54,  -631,  -631,    97,  -631,  -631,  -631,
    -631,  -631,  -631,   347,  -631,  -631,  -631,  -631,  -631,  1376,
      67,  -631,  -631,    91,  -631,   169,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,   125,  -631,  -631,  -631,   125,  -631,
    -631,   147,   165,  1173,    44,    96,  1485,    96,    96,    96,
      96,  -631,  -631,  -631,    99,    96,   145,  -631,   151,    96,
    -631,   125,    96,   199,   203,    96,  -631,  -631,    15,  -631,
      28,  -631,  -631,   153,  -631,   204,   214,   403,  -631,  -631,
    -631,   215,   257,  -631,   218,   220,   222,   170,  -631,   154,
    -631,  -631,  -631,  -631,  -631,  -631,   225,  -631,  -631,  -631,
    -631,  -631,  -631,   240,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,   169,  -631,  -631,  -631,   188,  -631,  -631,   229,  -631,
     231,   236,   242,  -631,    44,   241,   243,   244,  -631,   246,
     247,   248,   250,   256,   251,   258,   261,  -631,  -631,  -631,
     264,   266,  -631,  -631,  -631,  -631,   240,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,   240,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,   281,  -631,   285,  -631,  -631,
     253,  -631,   329,  -631,  -631,  -631,    41,    70,  -631,  -631,
    -631,  1173,  -631,  -631,  -631,  -631,   288,  -631,  -631,  -631,
    -631,   334,  -631,  -631,    39,   290,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,   372,  -631,   150,   293,   339,  -631,
    -631,  -631,  -631,  -631,  -631,   240,  -631,  -631,   291,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   339,   301,
     304,  -631,  -631,  -631,    96,    96,   308,   310,  -631,  -631,
    -631,   311,  -631,   329,  -631,  -631,  -631,  -631,  -631,  -631,
     400,  -631,   313,   312,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,    56,    56,    56,   150,   240,  -631,
    -631,   315,   317,   314,    88,   111,   166,  -631,  -631,  -631,
    -631,  -631,    44,  -631,  -631,  -631,  -631,   322,  -631,    44,
    -631,   150,   150,   150,   303,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,   221,  -631,    -6,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,    44,   339,  -631,  -631,  -631,   331,   253,
     633,  1245,   332,   333,  -631,   403,  -631,  -631,  -631,   323,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     327,    96,  -631,   240,  1081,   829,   150,  -631,  -631,  -631,
    -631,  -631,   150,  -631,  -631,  -631,  -631,  -631,   152,   997,
    -631,  -631,  -631,  -631,    83,   373,    44,    44,  -631,  -631,
    -631,  -631,  -631,    83,  -631,   342,  -631,   338,  -631,   343,
    -631,  -631,  1116,   240,  -631,    44,   339,  -631,  -631,  -631,
    -631,   348,  -631,  -631,    96,  -631,  -631,   350,   349,   438,
     357,  -631,  -631,   317,   314,    88,   111,   111,   166,   166,
    -631,  -631,  -631,  -631,  -631,   354,  -631,  -631,  -631,   359,
    -631,  -631,  -631,  -631,  -631,  -631,   869,  -631,  -631,  -631,
    -631,  -631,   360,  -631,  -631,  -631,   363,   361,   770,   368,
     370,   371,   369,  -631,   362,  -631,   378,   365,   375,  1325,
     192,    44,    44,    44,  -631,   383,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,    96,    96,  -631,   384,  -631,  -631,  -631,
    1200,   913,   444,   953,  -631,   240,   329,  -631,  -631,    65,
      68,   388,   394,   395,   329,   396,  -631,  -631,     1,  -631,
      71,  -631,  -631,   397,   398,   240,  -631,   210,  1485,  -631,
     457,  -631,  -631,  -631,  -631,    39,  -631,   401,  -631,   402,
     404,   405,   406,   407,  -631,   240,  -631,  -631,  -631,  -631,
    -631,   408,   409,  -631,  1466,  1466,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,   150,  -631,   329,  -631,  -631,  -631,  -631,
    -631,  -631,   483,   240,  -631,  -631,  -631,  -631,  -631,  -631,
      79,    79,    79,   412,  -631,   414,   417,   418,   423,   429,
     431,  -631,  -631,  -631,   433,   434,   435,   437,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   150,  -631,
    -631,  -631,    96,  -631,   442,   430,   448,  -631,   473,  -631,
    -631,  -631,  -631,  -631,   452,   150,   453,  1351,  -631,    44,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,    80,
    -631,  -631,  -631,   369,   378,   466,    96,   449,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   451,   451,
    -631,  -631,  -631,  -631,   953,    96,  -631,   150,   416,  -631,
    -631,  -631,  -631,  -631,   471,   472,   474,   475,   210,  -631,
    -631,  -631,    44,  -631,  -631,  -631,  -631,   478,   240,    81,
    -631,  -631,  -631,  -631,  -631,   528,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,    44,  -631,  -631,  -631,  -631,  -631,
     240,   477,   508,  -631,  -631,   451,   481,   484,   464,   539,
     537,   537,    96,   521,   487,   469,  -631,   240,   491,  -631,
    -631,   479,  -631,  -631,  -631,  -631,  -631,   480,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,   524,   582,   482,
    -631,   537,    93,   953,  -631,   495,   485,   537,   486,   530,
      96,    44,  -631,  -631,   501,  -631,   489,   211,   537,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,   240,  -631,   502,  -631,  -631,
    -631,  -631,   493,  -631,  -631,  -631,   509,   150,   507,   511,
      69,  -631,   228,    96,   539,    44,    44,   497,    96,   582,
    -631,   510,   953,   564,  -631,  -631,  -631,  -631,  -631,  1440,
    -631,  -631,  -631,   499,   500,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,   514,  -631,  -631,  -631,  -631,    44,   211,    96,
     504,  -631,    96,   522,   505,  -631,  -631,  -631,  -631,  -631,
    -631,   538,  -631,   506,   520,  -631,  -631,   540,  -631
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     0,     3,     1,    38,   144,    40,    70,   221,
     282,   298,   333,   381,     0,     0,     0,     0,    94,     0,
       0,   492,     0,     0,   561,   582,     0,     6,     7,    42,
      24,    61,     0,     0,    22,    64,    77,    66,    26,    78,
      83,    79,    84,    77,    80,    81,    65,    18,    10,     0,
       0,    12,   227,   284,   223,   332,   224,   250,   251,   225,
      20,    14,    16,    28,   452,   451,   454,    30,   490,    32,
     522,   524,   523,   521,    77,   540,   541,   520,    77,    34,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   262,   226,    77,     0,    77,    88,    77,     0,
      82,    77,     0,   458,   533,     0,   139,   135,     0,   134,
       0,   210,   210,     0,    46,     0,     0,     0,   210,     8,
       9,     0,    97,    72,     0,     0,     0,   266,   268,     0,
     272,   273,   276,   277,   278,   279,   275,   280,   281,   347,
     355,   360,    92,   234,   102,   230,   232,   233,   231,   235,
     264,   265,   236,   240,   237,   239,   238,   241,   242,   284,
     247,     0,   248,   249,   243,     0,   246,   244,   354,   245,
     359,     0,     0,     5,     0,   208,     0,     0,   300,     0,
       0,     0,     0,     0,     0,     0,     0,   534,   527,   536,
       0,     0,   585,   581,    39,   275,   157,   145,   149,   153,
     154,   150,   151,   152,   155,   156,    41,    71,   222,   228,
     283,   299,   334,   382,    73,   531,    74,     0,   532,    95,
     463,   493,     0,   449,   137,   450,     0,     0,   194,    43,
      25,     0,   547,   543,   544,   549,   546,   550,   548,   545,
     542,     0,    48,   554,     0,     0,    23,    96,    75,    67,
      27,    85,   267,   274,   269,   271,     0,     0,    99,   346,
     343,   351,   356,    19,    11,   211,    13,   285,     0,    21,
      15,    17,    29,   455,    31,   504,   491,    33,    99,     0,
       0,    35,    37,   589,     0,     0,     0,     0,    89,   461,
     459,   501,   136,     0,   562,   209,   583,   197,     4,   551,
       0,   555,     0,   552,   183,   184,   185,   187,   190,   189,
     191,   192,   188,   186,     0,     0,     0,     0,   180,   580,
     158,   159,   160,   162,   164,   166,   169,   172,   176,   181,
     579,    62,     0,   113,   104,   270,   193,     0,   348,     0,
      93,     0,     0,     0,   214,   291,   301,   465,   508,   535,
     528,   537,   586,   146,   262,   229,   255,   256,   257,   263,
     335,   383,   113,     0,    99,   499,   494,   138,     0,   463,
       0,     0,     3,     0,    49,     0,   177,   178,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     577,     0,    76,   133,     0,     0,     0,   210,    98,   344,
     352,   357,     0,   212,   286,   290,   210,   210,   456,     0,
     113,   104,   371,   376,     0,   486,     0,     0,   594,   369,
     370,   590,   592,     0,   596,     0,   588,     0,   210,   252,
     210,   290,     0,   462,   460,     0,    99,   563,   584,   201,
     195,     0,   203,   196,     0,   198,   204,     0,     0,     0,
       0,   553,   182,   161,   163,   165,   167,   168,   170,   171,
     173,   174,   175,   210,    63,   130,   128,   391,   392,     0,
     112,   120,   114,   124,   122,   126,     0,   116,   118,   396,
     110,   108,     0,   103,   105,   106,     0,     0,     0,     0,
       0,     0,   134,   215,     0,   216,   219,     0,   291,     0,
       0,     0,     0,     0,   476,     0,   464,   466,   468,   470,
     472,   474,   478,     0,     0,   509,     0,   507,   510,   512,
       0,     0,     0,     0,   482,   481,     0,   485,   484,     0,
       0,     0,     0,     0,     0,     0,   587,   147,     0,   253,
       0,   336,   341,   291,     0,   500,   495,     0,     0,   199,
     207,   200,    45,   556,    50,     0,   131,     0,    69,     0,
       0,     0,     0,     0,   395,   425,   422,   423,   424,   386,
     394,     0,     0,   210,     0,     0,    87,   107,   350,   349,
     345,   353,   358,     0,   213,     0,   217,   287,   289,   296,
     293,   292,   266,   312,   307,   308,   309,   310,   302,   311,
       0,     0,     0,     0,   457,     0,     0,     0,     0,     0,
       0,   514,   517,   506,     0,     0,     0,     0,   372,   377,
     480,   575,   576,   595,   591,   593,   483,   597,     0,   366,
     362,   365,     0,   342,     0,   338,     0,    91,     0,   573,
     569,   571,   564,   568,     0,     0,     0,     0,   578,     0,
     129,   121,   115,   125,   123,   127,   210,   117,   119,     0,
     111,   109,   220,     0,   219,     0,     0,     0,   489,   487,
     488,   477,   467,   469,   471,   473,   475,   479,     0,     0,
     511,   513,   530,   539,     0,     0,   148,     0,   363,   254,
     337,   339,   385,   496,     0,     0,     0,     0,   566,   202,
     206,   205,     0,    56,    42,    51,    55,     0,   132,     0,
     397,   218,   297,   294,   303,   400,   515,   518,   373,   378,
     261,   367,   364,   210,     0,   574,   570,   572,   565,   567,
      58,     0,     0,    57,   387,     0,     0,     0,     0,     0,
     432,   432,     0,   436,   258,     0,   340,   497,     0,    52,
      54,     0,   398,   295,   304,   401,   408,     0,   407,   429,
     516,   519,   374,   433,   379,   259,   368,   503,     0,   413,
     388,   432,     0,     0,   403,   404,     0,   432,     0,   440,
       0,     0,   498,   560,     0,   559,     0,     0,   432,   399,
     319,   326,   324,   305,   315,   316,   323,   409,   405,   430,
     375,   434,   437,   380,   260,   502,    59,   557,   412,   426,
     427,   428,     0,   418,   419,   389,     0,     0,     0,     0,
       0,   210,   321,     0,     0,     0,     0,     0,     0,     0,
     414,   415,     0,   444,   320,   327,   325,   306,   314,     0,
     322,   410,   406,     0,     0,   438,    60,   558,   416,   420,
     441,   390,     0,   329,   317,   431,   435,     0,     0,     0,
       0,   328,     0,     0,     0,   417,   421,   442,   330,   318,
     439,     0,   448,     0,   445,   443,   446,     0,   447
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -631,  -631,   318,   319,   570,  -587,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -584,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -112,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   249,  -631,
    -631,   120,  -631,  -631,  -631,   604,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,   606,  -631,   255,  -631,  -631,  -237,  -631,
    -631,   212,  -631,  -631,  -631,  -631,  -310,  -352,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -327,  -631,  -631,   -22,
    -631,  -631,  -183,   -10,  -631,     6,  -631,  -631,  -631,  -631,
    -193,    -4,  -230,  -631,   245,   252,   270,  -100,   -87,  -111,
     -19,  -631,  -309,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,   -88,   576,  -631,  -631,  -631,  -631,   -36,    45,
      16,  -631,    84,  -631,   -40,   141,  -447,  -631,  -631,  -631,
     -35,  -631,  -631,  -601,  -108,  -631,  -631,    -8,  -631,   -58,
    -631,  -631,   -47,   -43,   -57,   -56,   -55,   268,  -631,   -38,
    -631,   -32,  -631,  -631,  -631,  -631,   208,   309,  -631,  -274,
    -631,  -631,  -631,   -30,  -631,   -28,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -165,  -631,  -631,  -631,  -631,
    -631,  -162,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   -41,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,   -62,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,   -76,  -631,  -631,  -631,   -66,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,   -31,  -631,  -631,
    -315,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,    17,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -630,  -631,  -631,
    -631,  -631,  -631,  -158,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -190,  -631,  -631,  -488,  -631,  -591,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,    18,    20,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,   300,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -302,   259,  -301,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   592,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   296,  -631,
    -631,  -157,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   -25,
    -631,  -631,  -631,   271,  -631,  -631,   119,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    27,    28,   172,   176,   180,   181,
     171,   179,   121,   116,   125,   182,   184,   186,   190,   191,
      82,    29,    84,    30,   115,   298,   448,    31,    32,   117,
     302,   450,   647,   731,   705,   732,   706,   707,   748,   828,
      33,   118,   391,    34,    35,   124,   333,   469,    36,    85,
      37,   142,   332,    38,    39,    40,   126,   334,   482,    41,
     217,   362,   544,    42,   258,    43,   102,   248,   340,    44,
      45,   395,   483,   484,   575,   574,   394,   470,   560,   571,
     572,   559,   562,   561,   563,   557,   392,   465,   649,   318,
     222,   293,   109,   354,    46,   471,    83,   284,   427,   628,
     197,   319,   336,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   337,    48,   297,   370,   443,   548,   444,   445,
     646,    49,    50,   295,   344,   403,   494,   495,   586,   496,
     472,    86,   208,   285,   590,   145,   146,   147,   148,    52,
     355,   429,   632,   356,   719,   744,   780,   357,   358,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    53,
      87,    54,   177,   345,   497,   404,   498,   588,   406,   591,
     666,   736,   665,    55,    88,    56,   268,   407,   667,   737,
     772,   819,   598,   793,   820,   794,   821,   863,   816,   795,
     822,   796,   818,   817,   852,   854,   862,    57,    58,    59,
      89,   286,   430,   634,   541,   635,   723,   542,   164,   341,
     489,   165,   257,   397,   166,   167,   342,   490,   168,   169,
     343,   491,   170,   359,   428,   630,   688,   631,   687,   745,
     473,   419,   522,   684,   742,   777,   420,   523,   685,   743,
     779,   474,    90,   287,   431,   636,   475,   656,   751,   788,
     833,   476,   569,   486,   573,   735,   771,   716,   738,   739,
     757,   775,   824,   758,   773,   823,   770,   786,   787,   812,
     831,   858,   813,   832,   859,   570,   814,   760,   776,   825,
     764,   778,   826,   803,   827,   857,   851,   860,   871,   873,
     874,   877,   477,   478,    63,    64,    65,   183,   347,   505,
      66,   220,   364,   290,   363,   408,   506,   605,   606,   607,
     608,   609,   603,   610,   640,   526,   641,   423,   528,   509,
     510,   511,    67,   185,    68,   105,   291,   436,   638,   724,
     767,   366,   435,   782,   276,   348,   516,   409,   517,   614,
     615,   518,   678,   740,   519,   679,   741,    69,    70,    71,
      72,    73,   279,   410,   616,    74,    75,    76,   188,   278,
      77,   280,   411,   617,    78,   241,   242,   303,   243,   784,
     807,   785,    79,   111,   368,   547,   697,   642,   698,   643,
     695,   696,   694,   424,   245,   390,   330,    80,    81,   112,
     369,   193,   283,   425,   352,   426,   532,   533,   531,   535
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     108,   110,   163,   144,    92,   159,    93,   204,    47,   103,
     104,   160,   398,   161,   320,   162,   113,   205,    51,    60,
      61,   143,    62,   226,   227,   198,   201,   202,   203,   566,
     244,   689,   399,   400,   401,   619,   199,   418,   299,   292,
     200,   349,   106,   485,   294,   163,   209,   106,   159,   717,
     421,   422,   432,     4,   160,    47,   161,   515,   162,   106,
     703,   196,   206,   704,   143,    51,    60,    61,   621,    62,
     790,   622,     8,   296,   633,   207,   566,   210,   211,   212,
     213,  -361,   106,   710,   734,   215,   106,   379,   174,   218,
     223,   114,   219,   504,   790,   221,   224,   791,   792,    91,
     520,  -361,   524,   225,     8,   752,   507,   508,   629,   224,
     367,   119,   304,   305,   306,   307,   308,   309,   310,   311,
     107,   791,   792,   312,   313,   107,   174,   434,   174,   304,
     305,   306,   307,   308,   309,   310,   311,   107,   314,   315,
     312,   313,   120,   316,   317,   703,   224,    18,   704,   224,
     761,    95,   265,   106,   174,   204,   123,   174,   174,  -313,
     224,   317,   254,   255,   107,   205,   487,   174,   174,   485,
     383,   384,   493,   198,   201,   202,   203,   442,   252,  -331,
     789,   253,   412,   413,   199,  -141,   800,  -142,   200,    18,
     122,   178,   122,    99,   187,   106,   718,   815,   187,   546,
     592,   128,   129,   501,   502,   132,   133,   134,   135,   196,
     385,   386,   414,   503,   214,    12,   216,   415,   122,   492,
     416,   417,   841,   304,   305,   306,   307,   308,   309,   310,
     311,   107,   639,  -143,   312,   313,   192,   566,   122,  -100,
     412,   413,   228,   -47,   122,   -47,   809,   810,   811,   314,
     315,   412,   413,   194,   316,   317,   791,   792,   866,   -47,
     -47,   868,   -47,   -47,    94,    96,   -47,   387,   388,   389,
     414,    98,   101,   107,   353,   415,   460,   461,   462,   174,
     259,   414,   260,   456,   457,   797,   415,  -453,   -47,   416,
     417,  -525,   -47,   229,   204,   376,   377,   378,   458,   459,
     660,   661,   230,   246,   205,   247,   -47,   249,   250,   488,
     393,   251,   198,   201,   202,   203,   256,   393,   499,   500,
     261,   224,   262,   199,   263,   320,   566,   200,  -209,   447,
     264,   266,   106,   267,   269,   270,   271,   301,   272,   274,
     538,   433,   540,   620,   849,   273,   289,   275,   196,   277,
     106,   626,   281,   662,   282,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    10,    11,  -526,
      12,   139,   140,   141,   288,   555,   441,    47,   721,   300,
     335,   464,   331,   639,   338,   566,   339,    51,    60,    61,
     350,    62,   525,   351,   529,   530,   346,   360,   320,   361,
     567,   525,   663,   373,   365,   374,   375,   231,   402,   232,
     568,   380,   382,   545,   381,   700,   396,   668,   669,   670,
     437,   463,   -44,   233,   234,   449,   235,   236,   107,   452,
     237,   527,   536,   537,   550,  -101,   549,   539,   551,   552,
     122,   553,   594,   595,   596,   597,   554,   567,   556,   558,
     576,   577,   238,   578,   565,   587,   239,   568,   163,   599,
     580,   159,   581,   582,   583,  -288,   143,   160,   584,   161,
     240,   162,   585,   604,   613,   618,   623,   143,   593,   600,
     601,   602,   624,   625,   627,   659,   645,  -384,   637,   650,
     651,   252,   652,   653,   654,   655,   657,   658,   843,   844,
     671,   565,   672,   611,   612,   673,   674,   163,   209,     5,
     159,   675,     6,     7,     8,     9,   160,   676,   161,   677,
     162,   680,   681,   629,   691,   682,   143,   683,    10,    11,
     864,    12,   690,   163,   163,    13,   159,   159,   692,   693,
     699,   701,   160,   160,   161,   161,   162,   162,    14,    15,
      16,    17,   143,   143,   712,   714,   715,    18,    19,   725,
     726,    20,   727,  -402,    21,   728,   733,   749,   709,   753,
     755,    22,    23,   754,   756,   759,   763,   766,    24,    25,
     702,   765,   768,   781,   769,   783,   774,   835,  -411,   798,
     799,   801,   802,   806,    26,   808,   829,   834,   -53,   830,
     836,   837,   845,   850,   848,   855,   856,   861,   567,   867,
     869,   870,   875,   872,   876,   878,   371,   372,   568,   173,
     750,   100,    97,   521,   686,   453,   175,   708,   711,   579,
     664,   713,   644,   454,   762,   540,   106,     6,   446,   543,
     439,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     195,   137,   455,    47,   405,   838,    12,   722,   140,   141,
     840,   746,   565,    51,    60,    61,   842,    62,   865,   438,
     189,   451,   847,   729,   648,    92,     0,   720,     0,   512,
     730,     0,   534,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   567,     0,     0,
       0,     0,   747,     0,    -2,     5,     0,   568,     6,     7,
       8,     9,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,   440,    10,    11,     0,    12,     0,     0,
       0,    13,    92,   839,   720,     0,     0,     0,    47,     0,
       0,     0,     0,     0,    14,    15,    16,    17,    51,    60,
      61,   565,    62,    18,    19,     0,   567,    20,     0,   805,
      21,     0,     0,     0,     0,     0,   568,    22,    23,     0,
      92,     0,   804,   106,    24,    25,     0,     0,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      26,  -210,     0,     0,   139,   140,   141,     0,   163,   853,
       0,   159,     0,   393,   393,     0,     0,   160,     0,   161,
     565,   162,     0,     0,     0,     0,     0,   143,   846,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     466,     0,  -393,     6,     0,   393,     9,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,    10,
      11,   107,    12,     0,  -393,  -393,    13,   174,     0,   412,
     413,   467,   468,  -393,     0,     0,     0,     0,     0,    14,
       0,     0,   106,   479,   480,   481,     0,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   195,   137,   138,     0,
       0,     0,    22,    23,   140,   141,     0,     0,     0,     0,
       0,     0,     0,   564,     0,     0,     0,     0,     0,     0,
    -393,     0,     0,     0,   466,     0,  -393,     6,     0,   -86,
       9,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,    10,    11,     0,    12,     0,  -393,  -393,
      13,     0,     0,   412,   413,   467,   468,  -393,     0,     0,
     107,     0,     0,    14,     0,     0,   106,   479,   480,   481,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     195,   137,   138,     0,     0,     0,    22,    23,   140,   141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -393,     0,     0,     0,   466,     0,
    -393,     6,     0,  -538,     9,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,    10,    11,     0,
      12,     0,  -393,  -393,    13,     0,     0,   412,   413,   467,
     468,  -393,     0,     0,   107,     0,     0,    14,     0,     0,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   514,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -393,     0,
       0,     0,   466,     0,  -393,     6,     0,  -505,     9,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,    10,    11,     0,    12,     0,  -393,  -393,    13,     0,
       0,   412,   413,   467,   468,  -393,     0,   466,     0,  -393,
       6,    14,     0,     9,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,    10,    11,     0,    12,
       0,  -393,  -393,    13,    22,    23,   412,   413,   467,   468,
    -393,     0,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,  -393,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,     0,   106,     0,     0,    22,
      23,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     195,     0,     0,     0,     0,     0,     0,  -393,   140,   141,
       0,   466,     0,  -393,     6,     0,   -90,     9,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
      10,    11,     0,    12,     0,  -393,  -393,    13,     0,     0,
     412,   413,   467,   468,  -393,     0,     0,     0,     0,     0,
      14,     0,     0,     0,     0,     0,     5,     0,     0,     6,
       7,     8,     9,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    10,    11,     0,    12,     0,
       0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,  -393,     0,     0,     0,    14,    15,    16,    17,     0,
    -529,     0,     0,     0,    18,    19,     0,     0,    20,     0,
       0,    21,     0,     0,     0,     0,     0,     0,    22,    23,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   589,     0,   106,     0,
       0,    26,  -210,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    10,    11,     0,    12,   139,
     140,   141,     5,     0,     0,     6,     7,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,    12,     0,     0,     5,    13,     0,
       6,     7,     8,     9,     0,     0,     0,     0,     0,     0,
       0,    14,    15,    16,    17,     0,    10,    11,     0,    12,
      18,    19,     0,    13,    20,     0,   107,    21,     0,     0,
       0,     0,   174,     0,    22,    23,    14,    15,    16,    17,
       0,    24,    25,   702,     0,    18,    19,     0,     0,    20,
       0,     0,    21,     0,     0,     0,     0,    26,     0,    22,
      23,     0,     0,   106,     0,     0,    24,    25,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      10,    11,    26,    12,   139,   140,   141,   589,     0,   106,
       0,     0,     0,     0,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    10,    11,   106,    12,
     139,   140,   141,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    10,    11,     0,    12,   139,
     140,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,     0,   174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107
};

static const yytype_int16 yycheck[] =
{
      22,    23,    43,    43,    14,    43,    14,    83,     2,    19,
      20,    43,   339,    43,   244,    43,    26,    83,     2,     2,
       2,    43,     2,   111,   112,    83,    83,    83,    83,   476,
     118,   632,   341,   342,   343,   523,    83,   352,   231,   222,
      83,   278,     3,   395,     3,    86,    86,     3,    86,   679,
     352,   352,   362,     0,    86,    49,    86,   409,    86,     3,
     647,    83,    84,   647,    86,    49,    49,    49,     3,    49,
       1,     3,     6,     3,     3,    85,   523,    87,    88,    89,
      90,    87,     3,     3,     3,    95,     3,   317,    87,    99,
      75,    91,   102,   408,     1,   105,    81,    28,    29,     3,
     410,   107,    19,    75,     6,   735,   408,   408,   107,    81,
     293,    88,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    28,    29,    84,    85,    81,    87,   364,    87,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    99,   100,
      84,    85,    88,   104,   105,   732,    81,    49,   732,    81,
     741,    53,   174,     3,    87,   231,    36,    87,    87,    90,
      81,   105,     8,     9,    81,   231,   396,    87,    87,   521,
      82,    83,   402,   231,   231,   231,   231,   370,     8,    88,
     771,    11,    30,    31,   231,    88,   777,    88,   231,    49,
      93,    22,    93,    53,    74,     3,   684,   788,    78,   436,
       8,     9,    10,    51,    52,    13,    14,    15,    16,   231,
      99,   100,    60,    61,    94,    23,    96,    65,    93,   402,
      68,    69,   823,    73,    74,    75,    76,    77,    78,    79,
      80,    81,   547,    88,    84,    85,    89,   684,    93,    88,
      30,    31,    89,     4,    93,     6,    35,    36,    37,    99,
     100,    30,    31,    88,   104,   105,    28,    29,   859,    20,
      21,   862,    23,    24,    15,    16,    27,   101,   102,   103,
      60,    16,    17,    81,   284,    65,   387,   388,   389,    87,
      92,    60,    94,   383,   384,   773,    65,    88,    49,    68,
      69,    88,    53,    89,   370,   314,   315,   316,   385,   386,
     574,   575,    88,    88,   370,    48,    67,    89,    88,   397,
     332,    89,   370,   370,   370,   370,    91,   339,   406,   407,
      91,    81,    91,   370,    88,   555,   773,   370,    87,   370,
      88,    88,     3,    89,    88,    88,    88,     3,    88,    88,
     428,   363,   430,   526,   832,    89,    93,    89,   370,    88,
       3,   534,    88,   583,    88,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    88,
      23,    24,    25,    26,    89,   463,   370,   371,   687,    91,
       8,   391,    92,   698,    91,   832,    47,   371,   371,   371,
      89,   371,   414,    89,   416,   417,   105,    89,   628,    89,
     476,   423,   585,     3,    93,    92,    94,     4,   105,     6,
     476,    96,    98,   435,    97,   645,    94,   600,   601,   602,
      89,    94,    90,    20,    21,    92,    23,    24,    81,   106,
      27,    58,    90,    95,   444,    88,    88,    94,    88,    90,
      93,     3,   500,   500,   500,   500,    89,   523,    94,    90,
      90,    88,    49,    92,   476,    90,    53,   523,   499,   500,
      92,   499,    92,    92,    95,    90,   488,   499,   106,   499,
      67,   499,    94,    90,    90,    31,    88,   499,   500,   501,
     502,   503,    88,    88,    88,   573,    29,    90,    90,    88,
      88,     8,    88,    88,    88,    88,    88,    88,   825,   826,
      88,   523,    88,   513,   514,    88,    88,   548,   548,     1,
     548,    88,     4,     5,     6,     7,   548,    88,   548,    88,
     548,    88,    88,   107,    94,    90,   548,    90,    20,    21,
     857,    23,    90,   574,   575,    27,   574,   575,    90,    66,
      88,    88,   574,   575,   574,   575,   574,   575,    40,    41,
      42,    43,   574,   575,    88,   106,   105,    49,    50,    88,
      88,    53,    88,    35,    56,    90,    88,    90,   656,    88,
     106,    63,    64,    89,    35,    38,    55,   108,    70,    71,
      72,    94,    91,    59,   105,     3,   106,   817,   106,    94,
     105,   105,    62,    92,    86,   106,    94,    88,    90,   106,
      93,    90,   105,    39,    94,   106,   106,    93,   684,   105,
      88,   106,   106,    75,    94,    75,   298,   298,   684,    49,
     732,    17,    16,   411,   628,   380,    50,   649,   664,   488,
     585,   666,   548,   381,   742,   723,     3,     4,   370,   431,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   382,   647,   345,   820,    23,   688,    25,    26,
     822,   723,   684,   647,   647,   647,   824,   647,   858,   369,
      78,   375,   829,   698,   555,   685,    -1,   685,    -1,   408,
     702,    -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,    -1,
      -1,    -1,   724,    -1,     0,     1,    -1,   773,     4,     5,
       6,     7,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    20,    21,    -1,    23,    -1,    -1,
      -1,    27,   742,   821,   742,    -1,    -1,    -1,   732,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,   732,   732,
     732,   773,   732,    49,    50,    -1,   832,    53,    -1,   781,
      56,    -1,    -1,    -1,    -1,    -1,   832,    63,    64,    -1,
     780,    -1,   780,     3,    70,    71,    -1,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      86,    87,    -1,    -1,    24,    25,    26,    -1,   839,   839,
      -1,   839,    -1,   825,   826,    -1,    -1,   839,    -1,   839,
     832,   839,    -1,    -1,    -1,    -1,    -1,   839,   828,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,   857,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    81,    23,    -1,    25,    26,    27,    87,    -1,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,     3,    44,    45,    46,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    63,    64,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,    90,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      81,    -1,    -1,    40,    -1,    -1,     3,    44,    45,    46,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    63,    64,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,    90,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    -1,    30,    31,    32,
      33,    34,    -1,    -1,    81,    -1,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,    90,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,    -1,     1,    -1,     3,
       4,    40,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      -1,    25,    26,    27,    63,    64,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,     3,    -1,    -1,    63,
      64,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    81,    25,    26,
      -1,     1,    -1,     3,     4,    -1,    90,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,
       5,     6,     7,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    40,    41,    42,    43,    -1,
      90,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
      -1,    86,    87,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,     1,    -1,    -1,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    -1,     1,    27,    -1,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    -1,    20,    21,    -1,    23,
      49,    50,    -1,    27,    53,    -1,    81,    56,    -1,    -1,
      -1,    -1,    87,    -1,    63,    64,    40,    41,    42,    43,
      -1,    70,    71,    72,    -1,    49,    50,    -1,    -1,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    86,    -1,    63,
      64,    -1,    -1,     3,    -1,    -1,    70,    71,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    86,    23,    24,    25,    26,     1,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     3,    23,
      24,    25,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   110,   111,   112,     0,     1,     4,     5,     6,     7,
      20,    21,    23,    27,    40,    41,    42,    43,    49,    50,
      53,    56,    63,    64,    70,    71,    86,   113,   114,   130,
     132,   136,   137,   149,   152,   153,   157,   159,   162,   163,
     164,   168,   172,   174,   178,   179,   203,   204,   222,   230,
     231,   239,   248,   268,   270,   282,   284,   306,   307,   308,
     350,   401,   402,   403,   404,   405,   409,   431,   433,   456,
     457,   458,   459,   460,   464,   465,   466,   469,   473,   481,
     496,   497,   129,   205,   131,   158,   240,   269,   283,   309,
     351,     3,   202,   256,   157,    53,   157,   172,   174,    53,
     164,   174,   175,   202,   202,   434,     3,    81,   198,   201,
     198,   482,   498,   202,    91,   133,   122,   138,   150,    88,
      88,   121,    93,   160,   154,   123,   165,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    24,
      25,    26,   160,   198,   243,   244,   245,   246,   247,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     270,   282,   284,   308,   317,   320,   323,   324,   327,   328,
     331,   119,   115,   113,    87,   232,   116,   271,    22,   120,
     117,   118,   124,   406,   125,   432,   126,   160,   467,   467,
     127,   128,    89,   500,    88,    17,   198,   209,   258,   261,
     262,   263,   264,   265,   324,   328,   198,   202,   241,   243,
     202,   202,   202,   202,   160,   202,   160,   169,   202,   202,
     410,   202,   199,    75,    81,    75,   231,   231,    89,    89,
      88,     4,     6,    20,    21,    23,    24,    27,    49,    53,
      67,   474,   475,   477,   231,   493,    88,    48,   176,    89,
      88,    89,     8,    11,     8,     9,    91,   321,   173,    92,
      94,    91,    91,    88,    88,   198,    88,    89,   285,    88,
      88,    88,    88,    89,    88,    89,   443,    88,   468,   461,
     470,    88,    88,   501,   206,   242,   310,   352,    89,    93,
     412,   435,   201,   200,     3,   232,     3,   223,   134,   209,
      91,     3,   139,   476,    73,    74,    75,    76,    77,    78,
      79,    80,    84,    85,    99,   100,   104,   105,   198,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     495,    92,   161,   155,   166,     8,   211,   221,    91,    47,
     177,   318,   325,   329,   233,   272,   105,   407,   444,   177,
      89,    89,   503,   202,   202,   249,   252,   256,   257,   332,
      89,    89,   170,   413,   411,    93,   440,   201,   483,   499,
     224,   111,   112,     3,    92,    94,   219,   219,   219,   211,
      96,    97,    98,    82,    83,    99,   100,   101,   102,   103,
     494,   151,   195,   198,   185,   180,    94,   322,   195,   221,
     221,   221,   105,   234,   274,   276,   277,   286,   414,   446,
     462,   471,    30,    31,    60,    65,    68,    69,   339,   340,
     345,   423,   425,   426,   492,   502,   504,   207,   333,   250,
     311,   353,   185,   198,   177,   441,   436,    89,   412,     7,
      90,   204,   209,   225,   227,   228,   266,   308,   135,    92,
     140,   477,   106,   213,   214,   215,   216,   216,   217,   217,
     218,   218,   218,    94,   202,   196,     1,    32,    33,   156,
     186,   204,   239,   339,   350,   355,   360,   401,   402,    44,
      45,    46,   167,   181,   182,   186,   362,   211,   231,   319,
     326,   330,   201,   211,   235,   236,   238,   273,   275,   231,
     231,    51,    52,    61,   339,   408,   415,   423,   425,   428,
     429,   430,   492,    44,    54,   186,   445,   447,   450,   453,
     185,   180,   341,   346,    19,   198,   424,    58,   427,   198,
     198,   507,   505,   506,   424,   508,    90,    95,   231,    94,
     231,   313,   316,   275,   171,   198,   177,   484,   226,    88,
     202,    88,    90,     3,    89,   231,    94,   194,    90,   190,
     187,   192,   191,   193,    34,   198,   245,   324,   328,   361,
     384,   188,   189,   363,   184,   183,    90,    88,    92,   244,
      92,    92,    92,    95,   106,    94,   237,    90,   276,     1,
     243,   278,     8,   198,   258,   263,   264,   265,   291,   308,
     198,   198,   198,   421,    90,   416,   417,   418,   419,   420,
     422,   202,   202,    90,   448,   449,   463,   472,    31,   384,
     201,     3,     3,    88,    88,    88,   201,    88,   208,   107,
     334,   336,   251,     3,   312,   314,   354,    90,   437,   339,
     423,   425,   486,   488,   241,    29,   229,   141,   495,   197,
      88,    88,    88,    88,    88,    88,   356,    88,    88,   231,
     278,   278,   211,   201,   238,   281,   279,   287,   201,   201,
     201,    88,    88,    88,    88,    88,    88,    88,   451,   454,
      88,    88,    90,    90,   342,   347,   210,   337,   335,   252,
      90,    94,    90,    66,   491,   489,   490,   485,   487,    88,
     211,    88,    72,   114,   130,   143,   145,   146,   198,   231,
       3,   237,    88,   249,   106,   105,   366,   366,   384,   253,
     256,   221,   336,   315,   438,    88,    88,    88,    90,   488,
     198,   142,   144,    88,     3,   364,   280,   288,   367,   368,
     452,   455,   343,   348,   254,   338,   316,   198,   147,    90,
     145,   357,   366,    88,    89,   106,    35,   369,   372,    38,
     386,   386,   253,    55,   389,    94,   108,   439,    91,   105,
     375,   365,   289,   373,   106,   370,   387,   344,   390,   349,
     255,    59,   442,     3,   478,   480,   376,   377,   358,   386,
       1,    28,    29,   292,   294,   298,   300,   384,    94,   105,
     386,   105,    62,   392,   256,   198,    92,   479,   106,    35,
      36,    37,   378,   381,   385,   386,   297,   302,   301,   290,
     293,   295,   299,   374,   371,   388,   391,   393,   148,    94,
     106,   379,   382,   359,    88,   211,    93,    90,   294,   231,
     300,   252,   372,   195,   195,   105,   202,   480,    94,   384,
      39,   395,   303,   243,   304,   106,   106,   394,   380,   383,
     396,    93,   305,   296,   195,   381,   252,   105,   252,    88,
     106,   397,    75,   398,   399,   106,    94,   400,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   109,   110,   111,   111,   112,   112,   113,   113,   113,
     115,   114,   116,   114,   117,   114,   118,   114,   119,   114,
     120,   114,   121,   114,   122,   114,   123,   114,   124,   114,
     125,   114,   126,   114,   127,   114,   128,   114,   129,   114,
     131,   130,   133,   134,   135,   132,   136,   138,   139,   140,
     141,   142,   137,   143,   144,   144,   145,   145,   147,   148,
     146,   150,   151,   149,   152,   152,   154,   155,   156,   153,
     158,   157,   159,   159,   159,   161,   160,   160,   162,   162,
     162,   162,   163,   163,   165,   166,   167,   164,   169,   170,
     171,   168,   173,   172,   175,   174,   176,   176,   177,   177,
     178,   178,   179,   180,   180,   181,   181,   181,   183,   182,
     184,   182,   185,   185,   187,   186,   188,   186,   189,   186,
     190,   186,   191,   186,   192,   186,   193,   186,   194,   186,
     195,   197,   196,   196,   198,   199,   198,   200,   198,   201,
     202,   203,   203,   203,   205,   206,   207,   208,   204,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   210,   211,
     212,   212,   213,   213,   214,   214,   215,   215,   215,   216,
     216,   216,   217,   217,   217,   217,   218,   218,   218,   218,
     219,   219,   219,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   221,   223,   222,   224,   224,   225,   225,
     225,   226,   225,   227,   227,   228,   229,   229,   230,   231,
     231,   233,   232,   234,   234,   235,   235,   236,   237,   237,
     238,   240,   239,   239,   239,   239,   239,   239,   242,   241,
     243,   243,   244,   244,   244,   245,   245,   245,   245,   245,
     245,   245,   245,   246,   246,   246,   246,   247,   247,   247,
     248,   248,   249,   251,   250,   250,   252,   252,   253,   255,
     254,   254,   256,   257,   258,   258,   259,   259,   259,   260,
     260,   260,   261,   261,   261,   262,   263,   263,   264,   265,
     266,   267,   269,   268,   271,   272,   273,   270,   274,   275,
     275,   277,   276,   279,   280,   278,   281,   278,   283,   282,
     285,   286,   287,   288,   289,   290,   284,   291,   291,   291,
     291,   291,   291,   292,   293,   293,   295,   296,   294,   297,
     294,   298,   299,   299,   301,   300,   302,   303,   300,   305,
     304,   306,   307,   309,   310,   311,   312,   308,   313,   315,
     314,   314,   316,   318,   319,   317,   317,   321,   322,   320,
     323,   325,   326,   324,   324,   327,   329,   330,   328,   328,
     331,   333,   332,   334,   335,   335,   337,   338,   336,   339,
     339,   341,   342,   343,   344,   340,   346,   347,   348,   349,
     345,   351,   352,   353,   354,   350,   356,   357,   358,   359,
     355,   360,   360,   360,   361,   361,   363,   364,   365,   362,
     367,   366,   368,   366,   369,   371,   370,   370,   373,   374,
     372,   376,   375,   377,   375,   378,   380,   379,   379,   382,
     383,   381,   384,   384,   384,   384,   385,   385,   385,   387,
     388,   386,   386,   390,   391,   389,   389,   393,   394,   392,
     392,   396,   397,   395,   395,   398,   400,   399,   399,   401,
     402,   403,   403,   404,   406,   407,   408,   405,   410,   411,
     409,   413,   412,   412,   414,   414,   416,   415,   417,   415,
     418,   415,   419,   415,   420,   415,   421,   415,   422,   415,
     423,   424,   424,   425,   426,   427,   427,   428,   429,   430,
     432,   431,   434,   435,   436,   437,   438,   439,   433,   441,
     440,   440,   442,   442,   444,   445,   443,   446,   446,   447,
     448,   447,   449,   447,   451,   452,   450,   454,   455,   453,
     456,   456,   456,   457,   457,   458,   459,   461,   462,   463,
     460,   464,   465,   466,   468,   467,   470,   471,   472,   469,
     473,   473,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   475,   476,   476,   477,   477,   478,   479,   479,
     480,   482,   483,   484,   485,   481,   486,   487,   487,   489,
     488,   490,   488,   491,   488,   492,   492,   493,   494,   494,
     495,   496,   498,   499,   497,   501,   502,   500,   503,   503,
     505,   504,   506,   504,   507,   504,   508,   504
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     3,     2,     1,     2,     2,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     0,     0,     7,     2,     0,     0,     0,
       0,     0,    11,     2,     2,     0,     1,     2,     0,     0,
       8,     0,     0,     6,     1,     1,     0,     0,     0,     7,
       0,     3,     2,     3,     3,     0,     4,     0,     1,     1,
       1,     1,     2,     1,     0,     0,     0,     7,     0,     0,
       0,     8,     0,     4,     0,     3,     1,     0,     2,     0,
       2,     1,     2,     2,     0,     1,     1,     2,     0,     3,
       0,     3,     2,     0,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       2,     0,     4,     0,     1,     0,     3,     0,     4,     1,
       1,     1,     2,     2,     0,     0,     0,     0,     9,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     2,     0,     1,     2,
       2,     0,     4,     1,     1,     4,     2,     0,     2,     2,
       0,     0,     4,     3,     0,     1,     1,     2,     3,     0,
       3,     0,     3,     1,     1,     1,     2,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     4,     0,     1,     1,     2,     0,
       4,     0,     1,     1,     1,     1,     1,     2,     1,     2,
       3,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     0,     0,     7,     2,     2,
       0,     0,     3,     0,     0,     5,     0,     3,     0,     3,
       0,     0,     0,     0,     0,     0,    15,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     0,     0,     6,     0,
       3,     2,     2,     0,     0,     3,     0,     0,     5,     0,
       3,     1,     1,     0,     0,     0,     0,     9,     2,     0,
       4,     0,     2,     0,     0,     6,     2,     0,     0,     6,
       6,     0,     0,     6,     1,     1,     0,     0,     6,     1,
       1,     0,     4,     2,     2,     0,     0,     0,     5,     1,
       1,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     9,     0,     0,     0,     0,
      11,     1,     1,     0,     1,     1,     0,     0,     0,     8,
       0,     3,     0,     4,     2,     0,     4,     0,     0,     0,
       5,     0,     3,     0,     4,     2,     0,     4,     0,     0,
       0,     5,     1,     1,     1,     1,     1,     1,     1,     0,
       0,     6,     0,     0,     0,     6,     0,     0,     0,     6,
       0,     0,     0,     6,     0,     2,     0,     4,     0,     3,
       3,     1,     1,     2,     0,     0,     0,     7,     0,     0,
       6,     0,     3,     0,     2,     0,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       3,     1,     1,     3,     2,     1,     0,     3,     3,     3,
       0,     3,     0,     0,     0,     0,     0,     0,    13,     0,
       3,     0,     2,     0,     0,     0,     5,     2,     0,     1,
       0,     3,     0,     3,     0,     0,     6,     0,     0,     6,
       1,     1,     1,     1,     1,     2,     3,     0,     0,     0,
       8,     3,     3,     2,     0,     3,     0,     0,     0,     8,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     0,     2,     5,     2,     3,     0,
       1,     0,     0,     0,     0,    10,     2,     2,     0,     0,
       3,     0,     3,     0,     3,     3,     3,     3,     4,     0,
       1,     2,     0,     0,     6,     0,     0,     5,     2,     0,
       0,     3,     0,     3,     0,     3,     0,     3
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
      yyerror (YY_("syntax error: cannot back up")); \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
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
                                              );
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
    default: /* Avoid compiler warnings. */
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
                  (unsigned long) yystacksize));

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
      yychar = yylex ();
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
        case 5:
#line 399 "fe/idl.ypp" /* yacc.c:1651  */
    {
          AST_Decl *d = (yyvsp[0].dcval);
          if (d)
            {
              d->annotation_appls ((yyvsp[-1].annotations_val));
            }
          else
            {
              idl_global->err ()-> unsupported_warning(
                "Annotating this type of definition is not supported");
            }
        }
#line 2375 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 6:
#line 412 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 2382 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 7:
#line 418 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) = (yyvsp[0].dcval);
        }
#line 2390 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 8:
#line 422 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) = 0;
        }
#line 2398 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 9:
#line 426 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) = 0;
        }
#line 2406 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 10:
#line 433 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AnnotationDeclSeen);
        }
#line 2414 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 11:
#line 437 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2423 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 12:
#line 442 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeDeclSeen);
        }
#line 2431 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 13:
#line 446 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = (yyvsp[-2].dcval);
        }
#line 2440 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 14:
#line 451 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeIdDeclSeen);
        }
#line 2448 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 15:
#line 455 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2457 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 16:
#line 460 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TypePrefixDeclSeen);
        }
#line 2465 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 17:
#line 464 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2474 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 18:
#line 469 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstDeclSeen);
        }
#line 2482 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 19:
#line 473 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = (yyvsp[-2].dcval);
        }
#line 2491 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 20:
#line 478 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptDeclSeen);
        }
#line 2499 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 21:
#line 482 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2508 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 22:
#line 487 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceDeclSeen);
        }
#line 2516 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 23:
#line 491 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2525 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 24:
#line 496 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleDeclSeen);
        }
#line 2533 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 25:
#line 500 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = (yyvsp[-2].dcval);
        }
#line 2542 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 26:
#line 505 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeDeclSeen);
        }
#line 2550 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 27:
#line 509 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2559 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 28:
#line 514 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentDeclSeen);
        }
#line 2567 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 29:
#line 518 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2576 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 30:
#line 523 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeDeclSeen);
        }
#line 2584 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 31:
#line 527 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2593 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 32:
#line 532 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EventDeclSeen);
        }
#line 2601 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 33:
#line 536 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2610 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 34:
#line 541 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeDeclSeen);
        }
#line 2618 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 35:
#line 545 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2627 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 36:
#line 550 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorDeclSeen);
        }
#line 2635 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 37:
#line 554 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          (yyval.dcval) = 0;
        }
#line 2644 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 38:
#line 559 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->err()->syntax_error (idl_global->parse_state());
        }
#line 2652 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 39:
#line 563 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          yyerrok;
          (yyval.dcval) = 0;
        }
#line 2662 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 40:
#line 572 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleSeen);
        }
#line 2670 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 41:
#line 576 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idlist) = (yyvsp[0].idlist);
        }
#line 2678 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 42:
#line 583 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleIDSeen);

          // The module_header rule is common to template module, fixed
          // module and instantiated template module. In the last
          // case, a fully scoped name is allowed, but here we
          // allow only an identifier (a scoped name of length
          // 1). If not satisfied, we output a parse error with
          // the appropriate message.
          if ((yyvsp[0].idlist)->length () != 1)
            {
              idl_global->err ()->syntax_error (
                IDL_GlobalData::PS_ModuleIDSeen);
            }

          AST_Module *m = 0;
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          /*
           * Make a new module and add it to the enclosing scope
           */
          if (s != 0)
            {
              m = idl_global->gen ()->create_module (s, (yyvsp[0].idlist));
              (void) s->fe_add_module (m);
            }

          (yyvsp[0].idlist)->destroy ();
          delete (yyvsp[0].idlist);
          (yyvsp[0].idlist) = 0;

          /*
           * Push it on the stack
           */
          idl_global->scopes ().push (m);

          (yyval.dcval) = m;
        }
#line 2721 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 43:
#line 622 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleSqSeen);
        }
#line 2729 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 44:
#line 626 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleBodySeen);
        }
#line 2737 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 45:
#line 630 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleQsSeen);
          /*
           * Finished with this module - pop it from the scope stack.
           */

          idl_global->scopes ().pop ();
          (yyval.dcval) = (yyvsp[-5].dcval);
        }
#line 2751 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 46:
#line 643 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleIDSeen);
        }
#line 2759 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 47:
#line 650 "fe/idl.ypp" /* yacc.c:1651  */
    {
          // The module_header rule is common to template module, fixed
          // module and instantiated template module. In the last
          // case, a fully scoped name is allowed, but here we
          // allow only an identifier (a scoped name of length
          // 1). If not satisfied, we output a syntax error with
          // the appropriate message.
          if ((yyvsp[0].idlist)->length () != 1)
            {
              idl_global->err ()->syntax_error (
                IDL_GlobalData::PS_ModuleIDSeen);
            }
        }
#line 2777 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 48:
#line 664 "fe/idl.ypp" /* yacc.c:1651  */
    {
          if (FE_Utils::duplicate_param_id ((yyvsp[0].plval)))
            {
              idl_global->err ()->duplicate_param_id (
                (yyvsp[-2].idlist));

              return 1;
            }
        }
#line 2791 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 49:
#line 674 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleParamsSeen);

          AST_Template_Module *tm =
            idl_global->gen ()->create_template_module ((yyvsp[-4].idlist),
                                                        (yyvsp[-2].plval));

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Module *m = s->fe_add_module (tm);

          // We've probably tried to reopen a template module,
          // going further will cause a crash.
          if (m == 0)
            {
              return 1;
            }

          /*
           * Push it on the stack
           */
          idl_global->scopes ().push (tm);

          // Contained items not part of an alias will get flag set.
          idl_global->in_tmpl_mod_no_alias (true);

          // Store these for reference as we parse the scope
          // of the template module.
          idl_global->current_params ((yyvsp[-2].plval));
        }
#line 2825 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 50:
#line 704 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleSqSeen);
        }
#line 2833 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 51:
#line 708 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleBodySeen);
        }
#line 2841 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 52:
#line 712 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleQsSeen);

          /*
           * Finished with this module - pop it from the scope stack.
           */
          idl_global->scopes ().pop ();

          // Unset the flag, the no_alias version because any scope
          // traversal triggered by an alias would have ended by now.
          idl_global->in_tmpl_mod_no_alias (false);

          // Clear the pointer so scoped name lookup will know
          // that we are no longer in a template module scope.
          idl_global->current_params (0);
        }
#line 2862 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 58:
#line 746 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (
            IDL_GlobalData::PS_ModuleRefSeen);
        }
#line 2871 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 59:
#line 751 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (
            IDL_GlobalData::PS_ModuleRefParamsSeen);
        }
#line 2880 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 60:
#line 756 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (
            IDL_GlobalData::PS_ModuleRefIDSeen);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[-6].idlist));

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[-6].idlist));
              return 1;
            }

          AST_Template_Module *ref =
            AST_Template_Module::narrow_from_decl (d);

          if (ref == 0)
            {
              idl_global->err ()->template_module_expected (d);
              return 1;
            }

          bool refs_match =
            ref->match_param_refs ((yyvsp[-3].slval),
                                   s);

          if (! refs_match)
            {
              // Error message is already output.
              return 1;
            }

          UTL_ScopedName sn ((yyvsp[0].idval), 0);

          AST_Template_Module_Ref *tmr =
            idl_global->gen ()->create_template_module_ref (
              &sn,
              ref,
              (yyvsp[-3].slval));

          (void) s->fe_add_template_module_ref (tmr);

          sn.destroy ();
          (yyvsp[-6].idlist)->destroy ();
          delete (yyvsp[-6].idlist);
          (yyvsp[-6].idlist) = 0;

          // Save the current flag value to be restored below.
          bool itmna_flag = idl_global->in_tmpl_mod_no_alias ();
          idl_global->in_tmpl_mod_no_alias (false);
          idl_global->in_tmpl_mod_alias (true);

          ast_visitor_context ctx;
          ctx.template_params (ref->template_params ());
          ast_visitor_tmpl_module_ref v (&ctx);

          // The implied IDL resulting from this reference is
          // created here, in the template module scope. Upon
          // instantiation of the enclosing template module, the
          // visitor copies this implied IDL to the instantiated
          // module scope. The extra copy is less than ideal, but
          // otherwise we have ugly lookup issues when the
          // referenced template module's contents are referenced
          // using the aliased scoped name.
          if (v.visit_template_module_ref (tmr) != 0)
            {
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("visit_template_module_ref")
                          ACE_TEXT (" failed\n")));

              idl_global->set_err_count (idl_global->err_count () + 1);
            }

          idl_global->in_tmpl_mod_no_alias (itmna_flag);
          idl_global->in_tmpl_mod_alias (false);
        }
#line 2962 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 61:
#line 837 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (
            IDL_GlobalData::PS_InstModuleSeen);
        }
#line 2971 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 62:
#line 842 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (
            IDL_GlobalData::PS_InstModuleArgsSeen);
        }
#line 2980 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 63:
#line 847 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (
            IDL_GlobalData::PS_InstModuleIDSeen);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName *sn = (yyvsp[-5].idlist);
          AST_Template_Module *ref = 0;
          AST_Decl *d = s->lookup_by_name (sn);

          if (d == 0)
            {
              idl_global->err ()->lookup_error (sn);
              return 1;
            }
          else
            {
              ref = AST_Template_Module::narrow_from_decl (d);

              if (ref == 0)
                {
                  idl_global->err ()->template_module_expected (d);
                  return 1;
                }
            }

          sn->destroy ();
          delete sn;
          sn = 0;
          (yyvsp[-5].idlist) = 0;

          if (! ref->match_arg_names ((yyvsp[-3].alval)))
            {
              return 1;
            }

          ACE_NEW_RETURN (sn,
                          UTL_ScopedName ((yyvsp[0].idval),
                                           0),
                          1);

          AST_Template_Module_Inst *tmi =
            idl_global->gen ()->create_template_module_inst (
              sn,
              ref,
              (yyvsp[-3].alval));

          (void) s->fe_add_template_module_inst (tmi);

          ast_visitor_context ctx;
          ctx.template_args ((yyvsp[-3].alval));
          ast_visitor_tmpl_module_inst v (&ctx);

          if (v.visit_template_module_inst (tmi) != 0)
            {
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("visit_template_module_inst")
                          ACE_TEXT (" failed\n")));

              idl_global->set_err_count (idl_global->err_count () + 1);
            }
        }
#line 3046 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 66:
#line 917 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Interface *i = 0;

          /*
           * Make a new interface node and add it to its enclosing scope.
           */
          if (s != 0 && (yyvsp[0].ihval) != 0)
            {
              i =
                idl_global->gen ()->create_interface (
                                        (yyvsp[0].ihval)->name (),
                                        (yyvsp[0].ihval)->inherits (),
                                        (yyvsp[0].ihval)->n_inherits (),
                                        (yyvsp[0].ihval)->inherits_flat (),
                                        (yyvsp[0].ihval)->n_inherits_flat (),
                                        (yyvsp[0].ihval)->is_local (),
                                        (yyvsp[0].ihval)->is_abstract ()
                                      );
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the interface to its definition scope.
               */
              (void) s->fe_add_interface (i);

              // This FE_InterfaceHeader class isn't destroyed with the AST.
              (yyvsp[0].ihval)->destroy ();
              delete (yyvsp[0].ihval);
              (yyvsp[0].ihval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (i);
        }
#line 3088 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 67:
#line 955 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceSqSeen);
        }
#line 3096 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 68:
#line 959 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceBodySeen);
        }
#line 3104 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 69:
#line 963 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceQsSeen);

          /*
           * Done with this interface - pop it off the scopes stack
           */
          idl_global->scopes ().pop ();
        }
#line 3117 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 70:
#line 975 "fe/idl.ypp" /* yacc.c:1651  */
    {
           idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceSeen);
         }
#line 3125 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 71:
#line 979 "fe/idl.ypp" /* yacc.c:1651  */
    {
           idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceIDSeen);
           (yyval.idval) = (yyvsp[0].idval);
         }
#line 3134 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 72:
#line 987 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);

          if ((yyvsp[0].nlval) != 0 && (yyvsp[0].nlval)->truncatable ())
            {
              idl_global->err ()->syntax_error (
                                      IDL_GlobalData::PS_InheritColonSeen
                                    );
            }

          /*
           * Create an AST representation of the information in the header
           * part of an interface - this representation contains a computed
           * list of all interfaces which this interface inherits from,
           * recursively
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[-1].idval), 0),
                          1);
          ACE_NEW_RETURN ((yyval.ihval),
                          FE_InterfaceHeader (n,
                                              (yyvsp[0].nlval),
                                              false,
                                              false,
                                              true),
                          1);

          if (0 != (yyvsp[0].nlval))
            {
              (yyvsp[0].nlval)->destroy ();
              delete (yyvsp[0].nlval);
              (yyvsp[0].nlval) = 0;
            }
        }
#line 3174 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 73:
#line 1024 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of an interface - this representation contains a computed
           * list of all interfaces which this interface inherits from,
           * recursively
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[-1].idval), 0),
                          1);
          ACE_NEW_RETURN ((yyval.ihval),
                          FE_InterfaceHeader (n,
                                              (yyvsp[0].nlval),
                                              true,
                                              false,
                                              true),
                          1);

          if (0 != (yyvsp[0].nlval))
            {
              (yyvsp[0].nlval)->destroy ();
              delete (yyvsp[0].nlval);
              (yyvsp[0].nlval) = 0;
            }
        }
#line 3207 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 74:
#line 1054 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of an interface - this representation contains a computed
           * list of all interfaces which this interface inherits from,
           * recursively
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[-1].idval), 0),
                          1);
          ACE_NEW_RETURN ((yyval.ihval),
                          FE_InterfaceHeader (n,
                                              (yyvsp[0].nlval),
                                              false,
                                              true,
                                              true),
                          1);

          if (0 != (yyvsp[0].nlval))
            {
              (yyvsp[0].nlval)->destroy ();
              delete (yyvsp[0].nlval);
              (yyvsp[0].nlval) = 0;
            }
        }
#line 3240 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 75:
#line 1086 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritColonSeen);
        }
#line 3248 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 76:
#line 1090 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyvsp[0].nlval)->truncatable ((yyvsp[-2].bval));
          (yyval.nlval) = (yyvsp[0].nlval);
        }
#line 3257 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 77:
#line 1095 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.nlval) = 0;
        }
#line 3265 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 82:
#line 1109 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->err ()->unsupported_error ("custom is not supported");
        }
#line 3273 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 84:
#line 1117 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_ValueType *v = 0;
          AST_Interface *i = 0;

          if (s != 0 && (yyvsp[0].vhval) != 0)
            {
              v =
                idl_global->gen ()->create_valuetype (
                  (yyvsp[0].vhval)->name (),
                  (yyvsp[0].vhval)->inherits (),
                  (yyvsp[0].vhval)->n_inherits (),
                  (yyvsp[0].vhval)->inherits_concrete (),
                  (yyvsp[0].vhval)->inherits_flat (),
                  (yyvsp[0].vhval)->n_inherits_flat (),
                  (yyvsp[0].vhval)->supports (),
                  (yyvsp[0].vhval)->n_supports (),
                  (yyvsp[0].vhval)->supports_concrete (),
                  false,
                  (yyvsp[0].vhval)->truncatable (),
                  false);

              i = AST_Interface::narrow_from_decl (v);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the valuetype to its definition scope
               */
              v = AST_ValueType::narrow_from_decl (i);
              (void) s->fe_add_valuetype (v);

              // FE_OBVHeader is not automatically destroyed in the AST
              (yyvsp[0].vhval)->destroy ();
              delete (yyvsp[0].vhval);
              (yyvsp[0].vhval) = 0;
            }

          /*
           * Push it on the scope stack
           */
          idl_global->scopes ().push (v);
        }
#line 3320 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 85:
#line 1160 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSqSeen);
        }
#line 3328 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 86:
#line 1164 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeBodySeen);
        }
#line 3336 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 87:
#line 1168 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeQsSeen);

          AST_ValueType *vt =
            AST_ValueType::narrow_from_scope (
                idl_global->scopes ().top_non_null ()
              );

          if (vt != 0 && vt->will_have_factory ())
            {
              idl_global->valuefactory_seen_ = true;
            }

          /*
           * Done with this value type - pop it off the scopes stack
           */
          idl_global->scopes ().pop ();
        }
#line 3359 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 88:
#line 1191 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_ValueType *v = 0;
          AST_Interface *i = 0;

          if (s != 0 && (yyvsp[0].vhval) != 0)
            {
              v =
                idl_global->gen ()->create_valuetype (
                    (yyvsp[0].vhval)->name (),
                    (yyvsp[0].vhval)->inherits (),
                    (yyvsp[0].vhval)->n_inherits (),
                    (yyvsp[0].vhval)->inherits_concrete (),
                    (yyvsp[0].vhval)->inherits_flat (),
                    (yyvsp[0].vhval)->n_inherits_flat (),
                    (yyvsp[0].vhval)->supports (),
                    (yyvsp[0].vhval)->n_supports (),
                    (yyvsp[0].vhval)->supports_concrete (),
                    true,
                    false,
                    false
                  );
              i = AST_Interface::narrow_from_decl (v);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the valuetype to its definition scope
               */
              v = AST_ValueType::narrow_from_decl (i);
              (void) s->fe_add_valuetype (v);

              // FE_OBVHeader is not automatically destroyed in the AST
              (yyvsp[0].vhval)->destroy ();
              delete (yyvsp[0].vhval);
              (yyvsp[0].vhval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (v);
        }
#line 3406 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 89:
#line 1234 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSqSeen);
        }
#line 3414 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 90:
#line 1238 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeBodySeen);
        }
#line 3422 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 91:
#line 1242 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeQsSeen);

          /*
           * Done with this valuetype - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        }
#line 3435 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 92:
#line 1255 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        }
#line 3443 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 93:
#line 1259 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);

          UTL_ScopedName *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_ScopedName ((yyvsp[-3].idval), 0),
                          1);
          ACE_NEW_RETURN ((yyval.vhval),
                          FE_OBVHeader (sn,
                                        (yyvsp[-2].nlval),
                                        (yyvsp[0].nlval),
                                        ((yyvsp[-2].nlval) != 0
                                           ? (yyvsp[-2].nlval)->truncatable ()
                                           : false)),
                          1);

          if (0 != (yyvsp[0].nlval))
            {
              (yyvsp[0].nlval)->destroy ();
              delete (yyvsp[0].nlval);
              (yyvsp[0].nlval) = 0;
            }

          if (0 != (yyvsp[-2].nlval))
            {
              (yyvsp[-2].nlval)->destroy ();
              delete (yyvsp[-2].nlval);
              (yyvsp[-2].nlval) = 0;
            }
        }
#line 3478 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 94:
#line 1293 "fe/idl.ypp" /* yacc.c:1651  */
    {
           idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSeen);
        }
#line 3486 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 95:
#line 1297 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeIDSeen);
          (yyval.idval) = (yyvsp[0].idval);
        }
#line 3495 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 96:
#line 1305 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.bval) = true;
        }
#line 3503 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 97:
#line 1309 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.bval) = false;
        }
#line 3511 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 98:
#line 1317 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.nlval) = (yyvsp[0].nlval);
        }
#line 3519 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 99:
#line 1321 "fe/idl.ypp" /* yacc.c:1651  */
    {
/*      |    EMPTY */
          (yyval.nlval) = 0;
        }
#line 3528 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 100:
#line 1330 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_ValueTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * valuetype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_valuetype_fwd (&n,
                                                            true);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 3555 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 101:
#line 1354 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_ValueTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * valuetype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_valuetype_fwd (&n,
                                                            false);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 3582 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 102:
#line 1380 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueBoxDeclSeen);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[-1].idval),
                            0);

          if (s != 0 && (yyvsp[0].dcval) != 0)
            {
              /*
              * Get the type_spec associated with the valuebox
              */
              AST_Type *tp = 0;
              AST_Typedef *td
                = AST_Typedef::narrow_from_decl ((yyvsp[0].dcval));

              if (td == 0)
                {
                  tp = AST_Type::narrow_from_decl ((yyvsp[0].dcval));
                }
              else
                {
                  tp = td->primitive_base_type ();
                }

              if (tp == 0)
                {
                  // The <type_spec> given is a valid type
                  idl_global->err ()->not_a_type ((yyvsp[0].dcval));
                }
              else
                {
                  AST_Decl::NodeType nt = tp->node_type ();

                  if (nt == AST_Decl::NT_valuetype
                      || nt == AST_Decl::NT_eventtype)
                    {
                      // valuetype is not allowed as <type_spec>
                      // for boxed value
                      idl_global->err ()->error0 (
                          UTL_Error::EIDL_ILLEGAL_BOXED_TYPE
                        );
                    }
                  else
                    {
                      /*
                      * Add the valuebox to its definition scope
                      */
                      AST_ValueBox *vb =
                        idl_global->gen ()->create_valuebox (&n,
                                                             tp);
                      (void) s->fe_add_valuebox (vb);
                    }
                }
            }

          (yyvsp[-1].idval)->destroy ();
          delete (yyvsp[-1].idval);
          (yyvsp[-1].idval) = 0;
        }
#line 3647 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 108:
#line 1456 "fe/idl.ypp" /* yacc.c:1651  */
    {
          /* is $0 to member_i */
          (yyval.vival) = AST_Field::vis_PUBLIC;
        }
#line 3656 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 109:
#line 1461 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 3663 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 110:
#line 1464 "fe/idl.ypp" /* yacc.c:1651  */
    {
          /* is $0 to member_i */
          (yyval.vival) = AST_Field::vis_PRIVATE;
        }
#line 3672 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 111:
#line 1469 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 3679 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 114:
#line 1480 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeDeclSeen);
        }
#line 3687 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 115:
#line 1484 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 3695 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 116:
#line 1488 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeIdDeclSeen);
        }
#line 3703 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 117:
#line 1492 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 3711 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 118:
#line 1496 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TypePrefixDeclSeen);
        }
#line 3719 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 119:
#line 1500 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 3727 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 120:
#line 1504 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstDeclSeen);
        }
#line 3735 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 121:
#line 1508 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state(IDL_GlobalData::PS_NoState);
        }
#line 3743 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 122:
#line 1512 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptDeclSeen);
        }
#line 3751 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 123:
#line 1516 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 3759 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 124:
#line 1520 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        }
#line 3767 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 125:
#line 1524 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 3775 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 126:
#line 1528 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpDeclSeen);
        }
#line 3783 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 127:
#line 1532 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 3791 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 128:
#line 1536 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->err()->syntax_error (idl_global->parse_state());
        }
#line 3799 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 129:
#line 1540 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          yyerrok;
        }
#line 3808 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 130:
#line 1548 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.nlval),
                          UTL_NameList ((yyvsp[-1].idlist),
                                        (yyvsp[0].nlval)),
                          1);
        }
#line 3819 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 131:
#line 1559 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SNListCommaSeen);
        }
#line 3827 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 132:
#line 1563 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ScopedNameSeen);

          UTL_NameList *nl = 0;
          ACE_NEW_RETURN (nl,
                          UTL_NameList ((yyvsp[0].idlist),
                                        0),
                          1);

          if ((yyvsp[-3].nlval) == 0)
            {
              (yyval.nlval) = nl;
            }
          else
            {
              (yyvsp[-3].nlval)->nconc (nl);
              (yyval.nlval) = (yyvsp[-3].nlval);
            }
        }
#line 3851 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 133:
#line 1583 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.nlval) = 0;
        }
#line 3859 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 134:
#line 1590 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SN_IDSeen);

          ACE_NEW_RETURN ((yyval.idlist),
                          UTL_IdList ((yyvsp[0].idval),
                                      0),
                          1);
        }
#line 3872 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 135:
#line 1599 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ScopeDelimSeen);
        }
#line 3880 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 136:
#line 1603 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SN_IDSeen);

          Identifier *id = 0;
          ACE_NEW_RETURN (id,
                          Identifier ((yyvsp[-2].strval)),
                          1);
          ACE::strdelete ((yyvsp[-2].strval));
          (yyvsp[-2].strval) = 0;
          UTL_IdList *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_IdList ((yyvsp[0].idval),
                                      0),
                          1);
          ACE_NEW_RETURN ((yyval.idlist),
                          UTL_IdList (id,
                                      sn),
                          1);
        }
#line 3904 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 137:
#line 1624 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ScopeDelimSeen);

          // This cleans up all the non-global "::"s in scoped names.
          // If there is a global one, it gets put into the UTL_IdList,
          // so we clean it up in the case above.
          ACE::strdelete ((yyvsp[0].strval));
          (yyvsp[0].strval) = 0;
        }
#line 3918 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 138:
#line 1634 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SN_IDSeen);

          UTL_IdList *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_IdList ((yyvsp[0].idval),
                                      0),
                          1);
          (yyvsp[-3].idlist)->nconc (sn);
          (yyval.idlist) = (yyvsp[-3].idlist);
        }
#line 3934 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 139:
#line 1648 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.idval),
                          Identifier ((yyvsp[0].strval)),
                          1);
          ACE::strdelete ((yyvsp[0].strval));
          (yyvsp[0].strval) = 0;
        }
#line 3946 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 140:
#line 1658 "fe/idl.ypp" /* yacc.c:1651  */
    {
          /* defining_id is a defining identifier
             whereas id is usually a reference to a defining identifier */
          ACE_NEW_RETURN ((yyval.idval), Identifier ((yyvsp[0].strval)), 1);
          ACE::strdelete ((yyvsp[0].strval));
          (yyvsp[0].strval) = 0;
        }
#line 3958 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 141:
#line 1669 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval), 0);

          if (ACE_OS::strcmp ((yyvsp[0].idval)->get_string (),
                              "TypeCode") == 0
              && !idl_global->in_main_file ())
            {
              AST_PredefinedType *pdt =
                idl_global->gen ()->create_predefined_type (
                                        AST_PredefinedType::PT_pseudo,
                                        &n
                                      );

              s->add_to_scope (pdt);

              (yyvsp[0].idval)->destroy ();
              delete (yyvsp[0].idval);
              (yyvsp[0].idval) = 0;

              break;
            }

          AST_InterfaceFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * interface. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_interface_fwd (&n,
                                                            0,
                                                            0);
              (void) s->fe_add_interface_fwd (f);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 4005 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 142:
#line 1713 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_InterfaceFwd *f = 0;
          idl_global->set_parse_state (
                          IDL_GlobalData::PS_InterfaceForwardSeen
                        );

          /*
           * Create a node representing a forward declaration of an
           * interface. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_interface_fwd (&n,
                                                            1,
                                                            0);
              (void) s->fe_add_interface_fwd (f);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 4035 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 143:
#line 1740 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_InterfaceFwd *f = 0;
          idl_global->set_parse_state (
                          IDL_GlobalData::PS_InterfaceForwardSeen
                        );

          /*
           * Create a node representing a forward declaration of an
           * interface. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_interface_fwd (&n,
                                                            0,
                                                            1);
              (void) s->fe_add_interface_fwd (f);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 4065 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 144:
#line 1769 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstSeen);
        }
#line 4073 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 145:
#line 1773 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstTypeSeen);
        }
#line 4081 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 146:
#line 1777 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstIDSeen);
        }
#line 4089 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 147:
#line 1781 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstAssignSeen);
        }
#line 4097 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 148:
#line 1785 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) = 0;
          UTL_ScopedName n ((yyvsp[-4].idval), 0);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Constant *c = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstExprSeen);

          /*
           * Create a node representing a constant declaration. Store
           * it in the enclosing scope.
           */
          if ((yyvsp[0].exval) != 0 && s != 0)
            {
              AST_Param_Holder *param_holder = (yyvsp[0].exval)->param_holder ();

              AST_Expression::AST_ExprValue *result =
                (yyvsp[0].exval)->check_and_coerce ((yyvsp[-6].etval), tao_enum_constant_decl);
              tao_enum_constant_decl = 0;

              // If the expression is a template parameter place
              // holder, 'result' will be 0, but it's ok.
              if (result == 0 && param_holder == 0)
                {
                  idl_global->err ()->coercion_error ((yyvsp[0].exval), (yyvsp[-6].etval));
                  (yyvsp[0].exval)->destroy ();
                  delete (yyvsp[0].exval);
                  (yyvsp[0].exval) = 0;
                }
              else
                {
                  AST_Expression::ExprType et = (yyvsp[-6].etval);

                  if (param_holder != 0
                      && et != param_holder->info ()->const_type_)
                    {
                      idl_global->err ()->mismatched_template_param (
                        param_holder->info ()->name_.c_str ());
                    }
                  else
                    {
                      c = idl_global->gen ()->create_constant ((yyvsp[-6].etval), (yyvsp[0].exval), &n);
                      (void) s->fe_add_constant (c);
                      (yyval.dcval) = c;
                    }
                }

              delete result;
              result = 0;
            }

          (yyvsp[-4].idval)->destroy ();
          delete (yyvsp[-4].idval);
          (yyvsp[-4].idval) = 0;
        }
#line 4157 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 155:
#line 1850 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_string;
        }
#line 4165 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 156:
#line 1854 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_wstring;
        }
#line 4173 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 157:
#line 1858 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_PredefinedType *c = 0;
          AST_Typedef *t = 0;
          UTL_ScopedName *sn = (yyvsp[0].idlist);

          /*
           * If the constant's type is a scoped name, it must resolve
           * to a scalar constant type
           */
          AST_Decl *d =
            s->lookup_by_name (sn);

          if (s != 0 && d != 0)
            {
              /*
               * Look through typedefs.
               */
              while (d->node_type () == AST_Decl::NT_typedef)
                {
                  t = AST_Typedef::narrow_from_decl (d);

                  if (t == 0)
                    {
                      break;
                    }

                  d = t->base_type ();
                }

              if (d->node_type () == AST_Decl::NT_pre_defined)
                {
                  c = AST_PredefinedType::narrow_from_decl (d);

                  (yyval.etval) = FE_Utils::PredefinedTypeToExprType (c->pt ());
                }
              else if (d->node_type () == AST_Decl::NT_string)
                {
                  (yyval.etval) = AST_Expression::EV_string;
                }
              else if (d->node_type () == AST_Decl::NT_wstring)
                {
                  (yyval.etval) = AST_Expression::EV_wstring;
                }
              else if (d->node_type () == AST_Decl::NT_enum)
                {
                  (yyval.etval) = AST_Expression::EV_enum;
                  tao_enum_constant_decl =
                    AST_Enum::narrow_from_decl (d);
                }
              else
                {
                  idl_global->err ()->constant_expected (sn, d);
                }
            }
          else
            {
              idl_global->err ()->lookup_error (sn);
            }

          sn->destroy ();
          delete sn;
          sn = 0;
          (yyvsp[0].idlist) = 0;
        }
#line 4243 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 161:
#line 1931 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_or,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4256 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 163:
#line 1944 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_xor,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4269 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 165:
#line 1957 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_and,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4282 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 167:
#line 1970 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_left,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4295 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 168:
#line 1979 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_right,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4308 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 170:
#line 1992 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_add,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4321 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 171:
#line 2001 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_minus,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4334 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 173:
#line 2014 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_mul,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4347 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 174:
#line 2023 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_div,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4360 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 175:
#line 2032 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_mod,
                                    (yyvsp[-2].exval),
                                    (yyvsp[0].exval)
                                  );
        }
#line 4373 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 177:
#line 2045 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_u_plus,
                                    (yyvsp[0].exval),
                                    0
                                  );
        }
#line 4386 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 178:
#line 2054 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen()->create_expr (
                                   AST_Expression::EC_u_minus,
                                   (yyvsp[0].exval),
                                   0
                                 );
        }
#line 4399 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 179:
#line 2063 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen()->create_expr (
                                   AST_Expression::EC_bit_neg,
                                   (yyvsp[0].exval),
                                   0
                                 );
        }
#line 4412 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 180:
#line 2075 "fe/idl.ypp" /* yacc.c:1651  */
    {
          /*
           * An expression which is a scoped name is not resolved now,
           * but only when it is evaluated (such as when it is assigned
           * as a constant value).
           */
          AST_Expression *expr = 0;
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[0].idlist));

          if (d == 0)
            {
              if (!idl_global->ignore_lookup_errors_)
                {
                  idl_global->err ()->lookup_error ((yyvsp[0].idlist));
                  return 1;
                }
            }
          else if (d->node_type () == AST_Decl::NT_const)
            {
              /*
               * If the scoped name is an IDL constant, it
               * may be used in an array dim, a string
               * bound, or a sequence bound. If so, it
               * must be unsigned and > 0. We assign the
               * constant's value and type to the
               * expression created here so we can check
               * them later.
               */
              AST_Constant *c =
                AST_Constant::narrow_from_decl (d);

              expr = idl_global->gen ()->create_expr (
                  c->constant_value (),
                  c->et ());
            }
          else
            {
              // An AST_Expression owns the scoped name
              // passed in this constructor, so we copy it
              // and destroy it below no matter which case
              // is followed.
              expr = idl_global->gen ()->create_expr (
                  (yyvsp[0].idlist)->copy ());
              if (d->node_type () == AST_Decl::NT_enum_val)
                {
                  AST_EnumVal *enumval = AST_EnumVal::narrow_from_decl (d);
                  expr->enum_parent (enumval->enum_parent ());
                }
            }

          (yyval.exval) = expr;
          (yyvsp[0].idlist)->destroy ();
          delete (yyvsp[0].idlist);
          (yyvsp[0].idlist) = 0;
        }
#line 4474 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 182:
#line 2134 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = (yyvsp[-1].exval);
        }
#line 4482 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 183:
#line 2141 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[0].ival));
        }
#line 4490 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 184:
#line 2145 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) =
            idl_global->gen ()->create_expr ((yyvsp[0].uival));
        }
#line 4499 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 185:
#line 2150 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[0].sval));
          (yyvsp[0].sval)->destroy ();
          delete (yyvsp[0].sval);
          (yyvsp[0].sval) = 0;
        }
#line 4510 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 186:
#line 2157 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[0].wsval));
        }
#line 4518 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 187:
#line 2161 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[0].cval));
        }
#line 4526 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 188:
#line 2165 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_OutputCDR::from_wchar wc ((yyvsp[0].wcval));
          (yyval.exval) = idl_global->gen ()->create_expr (wc);
        }
#line 4535 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 189:
#line 2170 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[0].fixval));
        }
#line 4543 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 190:
#line 2174 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[0].dval));
        }
#line 4551 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 191:
#line 2178 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = idl_global->gen ()->create_expr (true);
        }
#line 4559 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 192:
#line 2182 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = idl_global->gen ()->create_expr (false);
        }
#line 4567 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 193:
#line 2189 "fe/idl.ypp" /* yacc.c:1651  */
    {
          int good_expression = 1;
          (yyvsp[0].exval)->evaluate (AST_Expression::EK_positive_int);
          AST_Expression::AST_ExprValue *ev = (yyvsp[0].exval)->ev ();

          /*
           * If const_expr is an enum value (AST_EnumVal inherits from
           * AST_Constant), the AST_ExprValue will probably not be set,
           * but there's no need to check anyway
           */
          if (ev != 0)
            {
              switch (ev->et)
              {
                case AST_Expression::EV_ushort:
                  if (ev->u.usval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_ulong:
                  if (ev->u.ulval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_ulonglong:
                  if (ev->u.ullval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_octet:
                  if (ev->u.oval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_bool:
                  if (ev->u.bval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                default:
                  good_expression = 0;
                  break;
              }
            }

          if (good_expression)
            {
              (yyval.exval) = (yyvsp[0].exval);
            }
          else
            {
              idl_global->err ()->syntax_error (idl_global->parse_state ());
            }
        }
#line 4636 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 194:
#line 2257 "fe/idl.ypp" /* yacc.c:1651  */
    {
          if (idl_global->idl_version_ < IDL_VERSION_4)
            {
              idl_global->err ()->idl_version_error (
                "Annotations are an IDL4 feature");
            }

          Identifier *id = (yyvsp[-1].idval);
          UTL_ScopedName name (id, 0);
          AST_Annotation_Decl::escape_name (&name);
          AST_Annotation_Decl *annotation_decl = idl_global->gen ()->
            create_annotation_decl (&name);
          idl_global->scopes ().top_non_null ()->
            fe_add_annotation_decl (annotation_decl);
          idl_global->scopes ().push (annotation_decl);
        }
#line 4657 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 195:
#line 2274 "fe/idl.ypp" /* yacc.c:1651  */
    {
          Identifier *id = (yyvsp[-4].idval);
          idl_global->scopes ().pop ();
          id->destroy ();
          delete id;
        }
#line 4668 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 201:
#line 2292 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TypedefSeen);
          idl_global->in_typedef (true);
        }
#line 4677 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 205:
#line 2306 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *scope = idl_global->scopes ().top_non_null ();
          UTL_Scope *root = idl_global->scopes ().bottom ();

          AST_Expression::ExprType type = (yyvsp[-3].etval);
          Identifier *name = (yyvsp[-2].idval);
          UTL_ScopedName scoped_name (name, 0);
          AST_Expression *default_value = (yyvsp[-1].exval);

          AST_Decl * type_obj;
          switch (type)
            {
            case AST_Expression::EV_string:
            case AST_Expression::EV_wstring:
              type_obj = tao_string_decl;
              break;
            case AST_Expression::EV_enum:
              type_obj = tao_enum_constant_decl;
              break;
            default:
              type_obj = root->lookup_primitive_type (type);
            }

          FE_Declarator *declarator = new FE_Declarator (
            &scoped_name, FE_Declarator::FD_simple, 0);
          AST_Annotation_Member *member = idl_global->gen ()->
            create_annotation_member (
              type, declarator->compose (type_obj), declarator->name ());
          scope->fe_add_annotation_member (member);

          if (default_value)
            {
              // Check if types are compatible, else report error
              AST_Expression::AST_ExprValue *result =
                default_value->check_and_coerce (type, tao_enum_constant_decl);
              tao_enum_constant_decl = 0;
              if (result)
                {
                  member->value (default_value);
                }
              else
                {
                  idl_global->err ()->coercion_error (default_value, type);
                }
              delete result;
            }
        }
#line 4729 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 206:
#line 2357 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = (yyvsp[0].exval);
        }
#line 4737 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 207:
#line 2361 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.exval) = 0;
        }
#line 4745 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 208:
#line 2368 "fe/idl.ypp" /* yacc.c:1651  */
    {
          AST_Annotation_Appls *annotations = (yyvsp[-1].annotations_val);
          AST_Annotation_Appl *annotation = (yyvsp[0].annotation_val);
          if (annotation)
            {
              annotations->push_back (annotation);
            }
          (yyval.annotations_val) = annotations;
        }
#line 4759 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 209:
#line 2381 "fe/idl.ypp" /* yacc.c:1651  */
    {
          AST_Annotation_Appls *annotations = (yyvsp[-1].annotations_val);
          AST_Annotation_Appl *annotation = (yyvsp[0].annotation_val);
          if (annotation)
            {
              annotations->push_back (annotation);
            }
          (yyval.annotations_val) = annotations;
        }
#line 4773 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 210:
#line 2391 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.annotations_val) = new AST_Annotation_Appls ();
        }
#line 4781 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 211:
#line 2398 "fe/idl.ypp" /* yacc.c:1651  */
    {
          if (idl_global->idl_version_ < IDL_VERSION_4)
            {
              idl_global->err ()->idl_version_error (
                "Annotations are an IDL4 feature");
            }

          AST_Annotation_Decl *decl = 0;
          UTL_ScopedName *name = (yyvsp[0].idlist);
          AST_Annotation_Decl::escape_name (name);

          // Check for Matching Annotation Declaration
          AST_Decl *d = idl_global->scopes ().top_non_null ()->
            lookup_by_name (name);
          if (d)
            {
              decl = AST_Annotation_Decl::narrow_from_decl (d);
              if (decl)
                {
                  idl_global->scopes ().push (decl);
                }
            }
          else
            {
              Identifier &id = *name->last_component ();
              switch (idl_global->unknown_annotations_)
                {
                default:
                case IDL_GlobalData::UNKNOWN_ANNOTATIONS_WARN_ONCE:
                  if (idl_global->unknown_annotations_seen_.insert (id) == 1)
                    {
                      break;
                    }
                  idl_global->err ()->lookup_warning (name);
                  break;
                case IDL_GlobalData::UNKNOWN_ANNOTATIONS_WARN_ALL:
                  idl_global->err ()->lookup_warning (name);
                  break;
                case IDL_GlobalData::UNKNOWN_ANNOTATIONS_ERROR:
                  idl_global->err ()->lookup_error (name);
                  break;
                case IDL_GlobalData::UNKNOWN_ANNOTATIONS_IGNORE:
                  break;
                }

              // Ignore lookup errors for parameter values that might depend
              // on constants or enums from the annotation declaration.
              idl_global->ignore_lookup_errors_ = true;
            }

          (yyval.annotation_decl_val) = decl;
        }
#line 4838 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 212:
#line 2451 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->ignore_lookup_errors_ = false;
          AST_Annotation_Appl *appl = 0;
          UTL_ScopedName *name = (yyvsp[-2].idlist);
          AST_Annotation_Decl *decl = (yyvsp[-1].annotation_decl_val);
          AST_Annotation_Appl::Params *params = (yyvsp[0].annotation_params_val);

          if (decl)
            {
              appl = idl_global->gen ()->create_annotation_appl (name, params);
              appl->apply_from (decl);
              idl_global->scopes ().pop ();
            }

          (yyval.annotation_val) = appl;
        }
#line 4859 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 213:
#line 2471 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.annotation_params_val) = (yyvsp[-1].annotation_params_val);
        }
#line 4867 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 214:
#line 2475 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.annotation_params_val) = 0;
        }
#line 4875 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 215:
#line 2482 "fe/idl.ypp" /* yacc.c:1651  */
    {
          AST_Annotation_Appl::Params *params = new AST_Annotation_Appl::Params;
          AST_Annotation_Appl::Param *param = new AST_Annotation_Appl::Param;
          param->id = 0;
          param->expr = (yyvsp[0].exval);
          params->push (param);
          (yyval.annotation_params_val) = params;
        }
#line 4888 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 216:
#line 2491 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.annotation_params_val) = (yyvsp[0].annotation_params_val);
        }
#line 4896 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 217:
#line 2498 "fe/idl.ypp" /* yacc.c:1651  */
    {
          AST_Annotation_Appl::Params *params = (yyvsp[0].annotation_params_val);
          params->push ((yyvsp[-1].annotation_param_val));
          (yyval.annotation_params_val) = params;
        }
#line 4906 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 218:
#line 2506 "fe/idl.ypp" /* yacc.c:1651  */
    {
          AST_Annotation_Appl::Params *params = (yyvsp[0].annotation_params_val);
          params->push ((yyvsp[-1].annotation_param_val));
          (yyval.annotation_params_val) = params;
        }
#line 4916 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 219:
#line 2512 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.annotation_params_val) = new AST_Annotation_Appl::Params;
        }
#line 4924 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 220:
#line 2519 "fe/idl.ypp" /* yacc.c:1651  */
    {
          AST_Annotation_Appl::Param *param = new AST_Annotation_Appl::Param;
          param->id = (yyvsp[-2].idval);
          param->expr = (yyvsp[0].exval);
          (yyval.annotation_param_val) = param;
        }
#line 4935 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 221:
#line 2529 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TypedefSeen);
          idl_global->in_typedef (true);
        }
#line 4944 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 222:
#line 2534 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) = (yyvsp[0].dcval);
        }
#line 4952 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 223:
#line 2538 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) = (yyvsp[0].dcval);
        }
#line 4960 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 224:
#line 2542 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) = (yyvsp[0].dcval);
        }
#line 4968 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 225:
#line 2546 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) = (yyvsp[0].dcval);
        }
#line 4976 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 226:
#line 2550 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Native *node = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_NativeSeen);

          /*
           * Create a node representing a Native and add it to its
           * enclosing scope
           */
          if (s != 0)
            {
              node =
                idl_global->gen ()->create_native (
                                        (yyvsp[0].deval)->name ()
                                      );
              /*
               * Add it to its defining scope
               */
              (void) s->fe_add_native (node);
            }

          (yyvsp[0].deval)->destroy ();
          delete (yyvsp[0].deval);
          (yyvsp[0].deval) = 0;
        }
#line 5006 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 227:
#line 2576 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) = 0;
        }
#line 5014 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 228:
#line 2583 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeSpecSeen);
        }
#line 5022 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 229:
#line 2587 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          FE_Declarator *d = 0;
          AST_Typedef *t = 0;
          unsigned long index = 0UL;
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclaratorsSeen);

          /*
           * Create a list of type renamings. Add them to the
           * enclosing scope
           */
          if (s != 0 && (yyvsp[-2].dcval) != 0 && (yyvsp[0].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((yyvsp[0].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type * tp = d->compose ((yyvsp[-2].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  if (AST_Decl::NT_except == tp->node_type ())
                    {
                      idl_global->err ()->not_a_type (tp);
                      continue;
                    }

                  t = idl_global->gen ()->create_typedef (tp,
                                                          d->name (),
                                                          s->is_local (),
                                                          s->is_abstract ());

                  // If the base type is a sequence or array, the typedef
                  // constructor sets owns_base_type_ to true. But if
                  // there is a comma-separated list of such typedefs,
                  // the base type can be destroyed only once. In all
                  // other cases, the line below has no effect.
                  if (index++ > 0)
                    {
                      t->owns_base_type (false);
                    }

                  (void) s->fe_add_typedef (t);
                  idl_global->in_typedef (false);
                }

              // This FE_Declarator class isn't destroyed with the AST.
              (yyvsp[0].dlval)->destroy ();
              delete (yyvsp[0].dlval);
              (yyvsp[0].dlval) = 0;
            }

          (yyval.dcval) = t;
        }
#line 5091 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 232:
#line 2660 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[0].etval)
                                               );
        }
#line 5102 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 234:
#line 2668 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = 0;

          if (s != 0)
            {
              d =
                s->lookup_by_name ((yyvsp[0].idlist));
            }

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[0].idlist));
            }
          else
            {
              d->last_referenced_as ((yyvsp[0].idlist));
            }


          (yyval.dcval) = d;
        }
#line 5129 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 252:
#line 2723 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.dlval),
                          UTL_DeclList ((yyvsp[-1].deval),
                                        (yyvsp[0].dlval)),
                          1);
        }
#line 5140 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 253:
#line 2734 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsCommaSeen);
        }
#line 5148 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 254:
#line 2738 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsDeclSeen);

          UTL_DeclList *dl = 0;
          ACE_NEW_RETURN (dl,
                          UTL_DeclList ((yyvsp[0].deval),
                                        0),
                          1);

          if ((yyvsp[-3].dlval) == 0)
            {
              (yyval.dlval) = dl;
            }
          else
            {
              (yyvsp[-3].dlval)->nconc (dl);
              (yyval.dlval) = (yyvsp[-3].dlval);
            }
        }
#line 5172 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 255:
#line 2758 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dlval) = 0;
        }
#line 5180 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 258:
#line 2770 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.dlval),
                          UTL_DeclList ((yyvsp[-1].deval),
                                        (yyvsp[0].dlval)),
                          1);
        }
#line 5191 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 259:
#line 2781 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsCommaSeen);
        }
#line 5199 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 260:
#line 2785 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsDeclSeen);

          UTL_DeclList *dl = 0;
          ACE_NEW_RETURN (dl,
                          UTL_DeclList ((yyvsp[0].deval),
                                        0),
                          1);

          if ((yyvsp[-3].dlval) == 0)
            {
              (yyval.dlval) = dl;
            }
          else
            {
              (yyvsp[-3].dlval)->nconc (dl);
              (yyval.dlval) = (yyvsp[-3].dlval);
            }
        }
#line 5223 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 261:
#line 2805 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dlval) = 0;
        }
#line 5231 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 262:
#line 2812 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_ScopedName *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_ScopedName ((yyvsp[0].idval),
                                          0),
                          1);
          ACE_NEW_RETURN ((yyval.deval),
                          FE_Declarator (sn,
                                         FE_Declarator::FD_simple,
                                         0),
                          1);
        }
#line 5248 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 263:
#line 2828 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_ScopedName *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_ScopedName (
                              (yyvsp[0].dcval)->local_name ()->copy (),
                              0
                            ),
                          1);
          ACE_NEW_RETURN ((yyval.deval),
                          FE_Declarator (sn,
                                         FE_Declarator::FD_complex,
                                         (yyvsp[0].dcval)),
                          1);
        }
#line 5267 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 266:
#line 2851 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_long;
        }
#line 5275 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 267:
#line 2855 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_longlong;
        }
#line 5283 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 268:
#line 2859 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_short;
        }
#line 5291 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 269:
#line 2866 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_ulong;
        }
#line 5299 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 270:
#line 2870 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_ulonglong;
        }
#line 5307 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 271:
#line 2874 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_ushort;
        }
#line 5315 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 272:
#line 2881 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_double;
        }
#line 5323 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 273:
#line 2885 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_float;
        }
#line 5331 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 274:
#line 2889 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_longdouble;
        }
#line 5339 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 275:
#line 2896 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_fixed;
        }
#line 5347 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 276:
#line 2903 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_char;
        }
#line 5355 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 277:
#line 2907 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_wchar;
        }
#line 5363 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 278:
#line 2914 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_octet;
        }
#line 5371 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 279:
#line 2921 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_bool;
        }
#line 5379 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 280:
#line 2928 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_any;
        }
#line 5387 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 281:
#line 2935 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.etval) = AST_Expression::EV_object;
        }
#line 5395 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 282:
#line 2942 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StructSeen);
        }
#line 5403 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 283:
#line 2946 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StructIDSeen);
          (yyval.idval) = (yyvsp[0].idval);
        }
#line 5412 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 284:
#line 2955 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval), 0);
          AST_Structure *d = 0;

          /*
           * Create a node representing a struct declaration. Add it
           * to the enclosing scope
           */
          if (s != 0)
            {
              d =
                idl_global->gen ()->create_structure (
                                        &n,
                                        s->is_local (),
                                        s->is_abstract ()
                                      );
              AST_Structure::fwd_redefinition_helper (d, s);
              (void) s->fe_add_structure (d);
            }

          /*
           * Push the scope of the struct on the scopes stack.
           */
          idl_global->scopes ().push (d);

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 5447 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 285:
#line 2986 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StructSqSeen);
        }
#line 5455 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 286:
#line 2990 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StructBodySeen);
        }
#line 5463 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 287:
#line 2994 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StructQsSeen);

          /*
           * Done with this struct. Pop its scope off the scopes stack.
           */
          (yyval.dcval) = AST_Structure::narrow_from_scope (
                   idl_global->scopes ().top_non_null ()
                 );
          idl_global->scopes ().pop ();
        }
#line 5479 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 291:
#line 3015 "fe/idl.ypp" /* yacc.c:1651  */
    {
          /* is $0 to member_i */
          (yyval.vival) = AST_Field::vis_NA;
        }
#line 5488 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 292:
#line 3020 "fe/idl.ypp" /* yacc.c:1651  */
    {
          if ((yyvsp[0].decls_val))
            {
              AST_Decls & decls = *(yyvsp[0].decls_val);
              for (size_t i = 0; i < decls.size (); i++)
                {
                  decls[i]->annotation_appls ((yyvsp[-1].annotations_val));
                }
            }
        }
#line 5503 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 293:
#line 3034 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_MemberTypeSeen);
        }
#line 5511 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 294:
#line 3038 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_MemberDeclsSeen);
        }
#line 5519 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 295:
#line 3042 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          FE_Declarator *d = 0;
          AST_Field *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_MemberDeclsCompleted);
          AST_Decls *members = 0;

          /*
           * Check for illegal recursive use of type.
           */
          if ((yyvsp[-4].dcval) != 0
              && AST_illegal_recursive_type ((yyvsp[-4].dcval)))
            {
              idl_global->err ()->error1 (UTL_Error::EIDL_RECURSIVE_TYPE,
                                          (yyvsp[-4].dcval));
            }
          /*
           * Create a node representing a struct or exception member
           * Add it to the enclosing scope.
           */
          else if (s && (yyvsp[-4].dcval) && (yyvsp[-2].dlval))
            {
              members = new AST_Decls;
              for (UTL_DecllistActiveIterator l ((yyvsp[-2].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type *tp = d->compose ((yyvsp[-4].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  /* $0 denotes Visibility, must be on yacc reduction stack. */
                  f =
                    idl_global->gen ()->create_field (
                                            tp,
                                            d->name (),
                                            (yyvsp[-5].vival)
                                          );
                  members->push_back (f);
                  (void) s->fe_add_field (f);
                }
            }

          (yyvsp[-2].dlval)->destroy ();
          delete (yyvsp[-2].dlval);
          (yyvsp[-2].dlval) = 0;

          (yyval.decls_val) = members;
        }
#line 5583 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 296:
#line 3102 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->err()->syntax_error (idl_global->parse_state ());
        }
#line 5591 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 297:
#line 3106 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          yyerrok;
        }
#line 5600 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 298:
#line 3114 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionSeen);
        }
#line 5608 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 299:
#line 3118 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionIDSeen);
          (yyval.idval) = (yyvsp[0].idval);
        }
#line 5617 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 300:
#line 3126 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchSeen);
        }
#line 5625 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 301:
#line 3130 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[-3].idval), 0);
          AST_Union *u = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchOpenParSeen);

          /*
           * Create a node representing an empty union. Add it to its enclosing
           * scope.
           */
          if (s != 0)
            {
              u = idl_global->gen ()->create_union (0,
                                                    &n,
                                                    s->is_local (),
                                                    s->is_abstract ());

              AST_Structure *st = AST_Structure::narrow_from_decl (u);
              AST_Structure::fwd_redefinition_helper (st, s);
              u = AST_Union::narrow_from_decl (st);
              (void) s->fe_add_union (u);
            }

          /*
           * Push the scope of the union on the scopes stack
           */
          idl_global->scopes ().push (u);

          /*
           * Don't delete $1 yet; we'll need it a bit later.
           */
        }
#line 5662 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 302:
#line 3163 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchTypeSeen);
        }
#line 5670 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 303:
#line 3167 "fe/idl.ypp" /* yacc.c:1651  */
    {
          /*
           * The top of the scopes must be an empty union we added after we
           * encountered 'union <id> switch ('. Now we are ready to add a
           * correct one. Temporarily remove the top so that we setup the
           * correct union in a right scope.
           */
          UTL_Scope *top = idl_global->scopes ().top_non_null ();
          idl_global->scopes ().pop ();

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[-8].idval), 0);
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchCloseParSeen);

          /*
           * Create a node representing a union.
           */
          if ((yyvsp[-2].dcval) != 0 && s != 0)
            {
              AST_ConcreteType *tp =
                AST_ConcreteType::narrow_from_decl ((yyvsp[-2].dcval));

              if (tp == 0)
                {
                  idl_global->err ()->not_a_type ((yyvsp[-2].dcval));
                }
              else
                {
                  /* Create a union with a correct discriminator. */
                  AST_Union *u = 0;
                  u = idl_global->gen ()->create_union (tp,
                                                        &n,
                                                        s->is_local (),
                                                        s->is_abstract ());

                  /* Narrow the enclosing scope. */
                  AST_Union *e = AST_Union::narrow_from_scope (top);

                  e->redefine (u);
                  e->disc_annotations ((yyvsp[-3].annotations_val)); // Set Discriminator Annotations

                  u->destroy ();
                  delete u;
                }
            }

          /*
           * Restore the top.
           */
          idl_global->scopes ().push (top);

          (yyvsp[-8].idval)->destroy ();
          delete (yyvsp[-8].idval);
          (yyvsp[-8].idval) = 0;
        }
#line 5730 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 304:
#line 3223 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionSqSeen);
        }
#line 5738 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 305:
#line 3227 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionBodySeen);
        }
#line 5746 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 306:
#line 3231 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionQsSeen);

          /*
           * Done with this union. Pop its scope from the scopes stack.
           */
          (yyval.dcval) = AST_Union::narrow_from_scope (
                   idl_global->scopes ().top_non_null ()
                 );

          if ((yyval.dcval) != 0)
            {
              idl_global->scopes ().pop ();
            }
        }
#line 5766 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 307:
#line 3250 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[0].etval)
                                               );
        }
#line 5777 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 308:
#line 3257 "fe/idl.ypp" /* yacc.c:1651  */
    {
          /* wchars are not allowed. */
          if ((yyvsp[0].etval) == AST_Expression::EV_wchar)
            {
              idl_global->err ()->error0 (UTL_Error::EIDL_DISC_TYPE);
            }

          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[0].etval)
                                               );
        }
#line 5794 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 309:
#line 3270 "fe/idl.ypp" /* yacc.c:1651  */
    {
          /* octets are not allowed. */
          idl_global->err ()->error0 (UTL_Error::EIDL_DISC_TYPE);
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[0].etval)
                                               );
        }
#line 5807 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 310:
#line 3279 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[0].etval)
                                               );
        }
#line 5818 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 312:
#line 3287 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = 0;
          AST_PredefinedType *p = 0;
          AST_Typedef *t = 0;
          bool found = false;

          /*
           * The discriminator is a scoped name. Try to resolve to
           * one of the scalar types or to an enum. Thread through
           * typedef's to arrive at the base type at the end of the
           * chain.
           */
          d =
            s->lookup_by_name ((yyvsp[0].idlist));

          if (s != 0 && d != 0)
            {
              while (!found)
                {
                  switch (d->node_type ())
                  {
                    case AST_Decl::NT_enum:
                      (yyval.dcval) = d;
                      found = true;
                      break;
                    case AST_Decl::NT_pre_defined:
                      p = AST_PredefinedType::narrow_from_decl (d);

                      if (p != 0)
                        {
                          switch (p->pt ())
                          {
                            case AST_PredefinedType::PT_long:
                            case AST_PredefinedType::PT_ulong:
                            case AST_PredefinedType::PT_longlong:
                            case AST_PredefinedType::PT_ulonglong:
                            case AST_PredefinedType::PT_short:
                            case AST_PredefinedType::PT_ushort:
                            case AST_PredefinedType::PT_char:
                            case AST_PredefinedType::PT_boolean:
                              (yyval.dcval) = p;
                              found = true;
                              break;
                            case AST_PredefinedType::PT_wchar:
                            case AST_PredefinedType::PT_octet:
                              /* octets and wchars are not allowed */
                              idl_global->err ()->error0 (
                                  UTL_Error::EIDL_DISC_TYPE
                                );
                              (yyval.dcval) = 0;
                              found = true;
                              break;
                            default:
                              (yyval.dcval) = 0;
                              found = true;
                              break;
                          }
                        }
                      else
                        {
                          (yyval.dcval) = 0;
                          found = true;
                        }

                      break;
                    case AST_Decl::NT_typedef:
                      t = AST_Typedef::narrow_from_decl (d);

                      if (t != 0)
                        {
                          d = t->base_type ();
                        }

                      break;
                    default:
                      (yyval.dcval) = 0;
                      found = true;
                      break;
                  }
                }
            }
          else
            {
              (yyval.dcval) = 0;
            }

          if ((yyval.dcval) == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[0].idlist));

              (yyvsp[0].idlist)->destroy ();
              delete (yyvsp[0].idlist);
              (yyvsp[0].idlist) = 0;

              /* If we don't return here, we'll crash later.*/
              if (!idl_global->ignore_lookup_errors_)
                {
                  return 1;
                }
            }

          (yyvsp[0].idlist)->destroy ();
          delete (yyvsp[0].idlist);
          (yyvsp[0].idlist) = 0;
        }
#line 5929 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 316:
#line 3404 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionLabelSeen);
        }
#line 5937 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 317:
#line 3408 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemSeen);
        }
#line 5945 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 318:
#line 3412 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_UnionBranch *b = 0;
          AST_Field *f = (yyvsp[-2].ffval);
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemCompleted);

          /*
           * Create several nodes representing branches of a union.
           * Add them to the enclosing scope (the union scope)
           */
          if (s != 0 && (yyvsp[-5].llval) != 0 && (yyvsp[-2].ffval) != 0)
            {
              b =
                idl_global->gen ()->create_union_branch (
                                        (yyvsp[-5].llval),
                                        f->field_type (),
                                        f->name ()
                                      );
              b->annotation_appls ((yyvsp[-3].annotations_val));
              (void) s->fe_add_union_branch (b);

              // f has passed its field type to the union branch,
              // but the rest still needs to be cleaned up.
              f->AST_Decl::destroy ();
              delete f;
              f = 0;
            }
        }
#line 5978 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 319:
#line 3441 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->err()->syntax_error (idl_global->parse_state());
        }
#line 5986 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 320:
#line 3445 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          yyerrok;
        }
#line 5995 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 321:
#line 3453 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.llval),
                          UTL_LabelList ((yyvsp[-1].ulval),
                                         (yyvsp[0].llval)),
                          1);
        }
#line 6006 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 322:
#line 3463 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_LabelList *ll = 0;
          ACE_NEW_RETURN (ll,
                          UTL_LabelList ((yyvsp[0].ulval),
                                         0),
                          1);

          if ((yyvsp[-1].llval) == 0)
            {
              (yyval.llval) = ll;
            }
          else
            {
              (yyvsp[-1].llval)->nconc (ll);
              (yyval.llval) = (yyvsp[-1].llval);
            }
        }
#line 6028 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 323:
#line 3481 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.llval) = 0;
        }
#line 6036 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 324:
#line 3488 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_DefaultSeen);
        }
#line 6044 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 325:
#line 3492 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_LabelColonSeen);

          (yyval.ulval) = idl_global->gen ()->create_union_label (
                                       AST_UnionLabel::UL_default,
                                       0
                                     );
        }
#line 6057 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 326:
#line 3501 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_CaseSeen);
        }
#line 6065 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 327:
#line 3505 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_LabelExprSeen);
        }
#line 6073 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 328:
#line 3509 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_LabelColonSeen);

          (yyval.ulval) = idl_global->gen()->create_union_label (
                                      AST_UnionLabel::UL_label,
                                      (yyvsp[-2].exval)
                                    );
        }
#line 6086 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 329:
#line 3521 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemTypeSeen);
        }
#line 6094 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 330:
#line 3525 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemDeclSeen);

          /*
           * Check for illegal recursive use of type
           */
          if ((yyvsp[-2].dcval) != 0
              && AST_illegal_recursive_type ((yyvsp[-2].dcval)))
            {
              idl_global->err()->error1 (UTL_Error::EIDL_RECURSIVE_TYPE,
                                         (yyvsp[-2].dcval));

              (yyval.ffval) = 0;
            }
          /*
           * Create a field in a union branch
           */
          else if ((yyvsp[-2].dcval) == 0
                   || (yyvsp[0].deval) == 0)
            {
              (yyval.ffval) = 0;
            }
          else
            {
              AST_Type *tp = (yyvsp[0].deval)->compose ((yyvsp[-2].dcval));

              if (tp == 0)
                {
                  (yyval.ffval) = 0;
                }
              else
                {
                  (yyval.ffval) = idl_global->gen ()->create_field (
                                               tp,
                                               (yyvsp[0].deval)->name ()
                                             );
                }

              (yyvsp[0].deval)->destroy ();
              delete (yyvsp[0].deval);
              (yyvsp[0].deval) = 0;
            }
        }
#line 6142 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 331:
#line 3572 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_StructureFwd *d = 0;

          /*
           * Create a node representing a forward declaration of a struct.
           */
          if (s != 0)
            {
              d = idl_global->gen ()->create_structure_fwd (&n);
              (void) s->fe_add_structure_fwd (d);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;

          (yyval.dcval) = d;
        }
#line 6168 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 332:
#line 3597 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_UnionFwd *u = 0;

          /*
           * Create a node representing a forward declaration of a union.
           */
          if (s != 0)
            {
              u = idl_global->gen ()->create_union_fwd (&n);
              (void) s->fe_add_union_fwd (u);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 6192 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 333:
#line 3620 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumSeen);
        }
#line 6200 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 334:
#line 3624 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval), 0);
          AST_Enum *e = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumIDSeen);

          /*
           * Create a node representing an enum and add it to its
           * enclosing scope.
           */
          if (s != 0)
            {
              e = idl_global->gen ()->create_enum (&n,
                                                   s->is_local (),
                                                   s->is_abstract ());
              /*
               * Add it to its defining scope
               */
              (void) s->fe_add_enum (e);
            }

          /*
           * Push the enum scope on the scopes stack.
           */
          idl_global->scopes ().push (e);

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 6235 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 335:
#line 3655 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumSqSeen);
        }
#line 6243 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 336:
#line 3659 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumBodySeen);
        }
#line 6251 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 337:
#line 3663 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumQsSeen);

          /*
           * Done with this enum. Pop its scope from the scopes stack.
           */
          if (idl_global->scopes ().top () == 0)
            {
              (yyval.dcval) = 0;
            }
          else
            {
              (yyval.dcval) = AST_Enum::narrow_from_scope (
                       idl_global->scopes ().top_non_null ()
                     );
              idl_global->scopes ().pop ();
            }
        }
#line 6274 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 339:
#line 3688 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumCommaSeen);
        }
#line 6282 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 342:
#line 3697 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          Identifier id ((yyvsp[0].strval));
          ACE::strdelete ((yyvsp[0].strval));
          (yyvsp[0].strval) = 0;
          UTL_ScopedName n (&id, 0);
          AST_EnumVal *e = 0;
          AST_Enum *c = 0;

          /*
           * Create a node representing one enumerator in an enum
           * Add it to the enclosing scope (the enum scope)
           */
          if (s != 0
              && s->scope_node_type () == AST_Decl::NT_enum)
            {
              c = AST_Enum::narrow_from_scope (s);

              if (c != 0)
                {
                  e = idl_global->gen ()->create_enum_val (
                                              c->next_enum_val (),
                                              &n
                                            );
                  e->enum_parent (c);
                  e->annotation_appls ((yyvsp[-1].annotations_val));
                }

              (void) s->fe_add_enum_val (e);
            }
        }
#line 6318 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 343:
#line 3733 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceCommaSeen);
        }
#line 6326 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 344:
#line 3737 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceExprSeen);
        }
#line 6334 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 345:
#line 3741 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceQsSeen);

          AST_Sequence *seq = 0;
          Decl_Annotations_Pair *seq_head = (yyvsp[-5].decl_annotations_pair_val);
          AST_Decl *type = 0;
          AST_Annotation_Appls *type_annotations = 0;
          if (seq_head)
            {
              type = seq_head->decl;
              type_annotations = seq_head->annotations;
            }
          delete seq_head;

          /*
           * Remove sequence marker from scopes stack.
           */
          if (idl_global->scopes ().top() == 0)
            {
              idl_global->scopes ().pop ();
            }

          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          /*
           * Create a node representing a sequence
           */
          AST_Expression::AST_ExprValue *ev = 0;
          AST_Param_Holder *param_holder = 0;

          if ((yyvsp[-2].exval) != 0)
            {
              param_holder =
                (yyvsp[-2].exval)->param_holder ();

              ev = (yyvsp[-2].exval)->coerce (AST_Expression::EV_ulong);
            }

          // If the expression corresponds to a template parameter,
          // it's ok for the coercion to fail at this point. We check
          // for a type mismatch below.
          if (0 == (yyvsp[-2].exval)
              || (0 == ev && 0 == param_holder))
            {
              idl_global->err ()->coercion_error ((yyvsp[-2].exval),
                                                  AST_Expression::EV_ulong);
            }
          else if (type)
            {
              AST_Type *tp = AST_Type::narrow_from_decl (type);

              if (0 == tp)
                {
                  ; // Error will be caught in FE_Declarator.
                }
              else
                {
                  Identifier id ("sequence");
                  UTL_ScopedName sn (&id,
                                     0);

                  seq =
                    idl_global->gen ()->create_sequence (
                                            (yyvsp[-2].exval),
                                            tp,
                                            &sn,
                                            s->is_local (),
                                            s->is_abstract ()
                                          );
                  seq->base_type_annotations (type_annotations);

                  if (!idl_global->in_typedef ()
                      && !idl_global->anon_silent ())
                    {
                      idl_global->err ()->anonymous_type_diagnostic ();
                    }
                }
            }

          delete ev;
          ev = 0;
          (yyval.dcval) = seq;
        }
#line 6422 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 346:
#line 3826 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceQsSeen);

          AST_Sequence *seq = 0;
          Decl_Annotations_Pair *seq_head = (yyvsp[-1].decl_annotations_pair_val);
          AST_Decl *type = 0;
          AST_Annotation_Appls *type_annotations = 0;
          if (seq_head)
            {
              type = seq_head->decl;
              type_annotations = seq_head->annotations;
            }
          delete seq_head;

          /*
           * Remove sequence marker from scopes stack.
           */
          if (idl_global->scopes ().top () == 0)
            {
             idl_global->scopes ().pop ();
            }

          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          /*
           * Create a node representing a sequence.
           */
          if (type)
            {
              AST_Type *tp = AST_Type::narrow_from_decl (type);

              if (tp == 0)
                {
                  ; // Error will be caught in FE_Declarator.
                }
              else
                {
                  Identifier id ("sequence");
                  UTL_ScopedName sn (&id, 0);
                  ACE_CDR::ULong bound = 0UL;

                  seq =
                    idl_global->gen ()->create_sequence (
                        idl_global->gen ()->create_expr (
                                                bound,
                                                AST_Expression::EV_ulong
                                              ),
                        tp,
                        &sn,
                        s->is_local (),
                        s->is_abstract ()
                      );
                  seq->base_type_annotations (type_annotations);

                  if (!idl_global->in_typedef ()
                      && !idl_global->anon_silent ())
                    {
                      idl_global->err ()->anonymous_type_diagnostic ();
                    }
                }
            }

          (yyval.dcval) = seq;
        }
#line 6491 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 347:
#line 3894 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceSeen);

          /*
           * Push a sequence marker on scopes stack.
           */
          idl_global->scopes ().push (0);
        }
#line 6504 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 348:
#line 3903 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceSqSeen);
        }
#line 6512 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 349:
#line 3907 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceTypeSeen);
          Decl_Annotations_Pair *seq_head = new Decl_Annotations_Pair;
          seq_head->decl = (yyvsp[0].dcval);
          seq_head->annotations = (yyvsp[-1].annotations_val);
          (yyval.decl_annotations_pair_val) = seq_head;
        }
#line 6524 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 350:
#line 3918 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyvsp[-1].exval)->evaluate (AST_Expression::EK_positive_int);
          (yyval.dcval) = idl_global->gen ()->create_fixed ((yyvsp[-3].exval), (yyvsp[-1].exval));
        }
#line 6533 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 351:
#line 3927 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSqSeen);
        }
#line 6541 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 352:
#line 3931 "fe/idl.ypp" /* yacc.c:1651  */
    {
           idl_global->set_parse_state (IDL_GlobalData::PS_StringExprSeen);
        }
#line 6549 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 353:
#line 3935 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StringQsSeen);

          /*
           * Create a node representing a string.
           */
          AST_Expression::AST_ExprValue *ev = 0;

          if ((yyvsp[-2].exval) != 0)
            {
              ev = (yyvsp[-2].exval)->coerce (AST_Expression::EV_ulong);
            }

          if (0 == (yyvsp[-2].exval) || 0 == ev)
            {
              idl_global->err ()->coercion_error ((yyvsp[-2].exval),
                                                  AST_Expression::EV_ulong);
              (yyval.dcval) = 0;
            }
          else
            {
              tao_string_decl = idl_global->gen ()->create_string ((yyvsp[-2].exval));

              /*
               * Add this AST_String to the types defined in the global scope.
               */
              idl_global->root ()->fe_add_string (
                AST_String::narrow_from_decl (
                  tao_string_decl));

              if (!idl_global->in_typedef () && !idl_global->anon_silent ())
                {
                  idl_global->err ()->anonymous_type_diagnostic ();
                }

              (yyval.dcval) = tao_string_decl;
            }

          delete ev;
          ev = 0;
        }
#line 6595 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 354:
#line 3977 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StringCompleted);

          /*
           * Create a node representing a string.
           */
          ACE_CDR::ULong bound = 0UL;
          tao_string_decl =
            idl_global->gen ()->create_string (
                idl_global->gen ()->create_expr (bound,
                                                 AST_Expression::EV_ulong)
              );

          /*
           * Add this AST_String to the types defined in the global scope.
           */
          idl_global->root ()->fe_add_string (
            AST_String::narrow_from_decl (
              tao_string_decl));

          (yyval.dcval) = tao_string_decl;
        }
#line 6622 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 355:
#line 4003 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSeen);
        }
#line 6630 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 356:
#line 4011 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSqSeen);
        }
#line 6638 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 357:
#line 4015 "fe/idl.ypp" /* yacc.c:1651  */
    {
           idl_global->set_parse_state (IDL_GlobalData::PS_StringExprSeen);
        }
#line 6646 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 358:
#line 4019 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StringQsSeen);

          /*
           * Create a node representing a string.
           */
          if ((yyvsp[-2].exval) == 0
              || (yyvsp[-2].exval)->coerce (AST_Expression::EV_ulong) == 0)
            {
              idl_global->err ()->coercion_error ((yyvsp[-2].exval),
                                                  AST_Expression::EV_ulong);
              (yyval.dcval) = 0;
            }
          else
            {
              AST_String *string = idl_global->gen ()->create_wstring ((yyvsp[-2].exval));

              /*
               * Add this AST_String to the types defined in the global scope.
               */
              idl_global->root ()->fe_add_string (
                AST_String::narrow_from_decl (
                  string));

              if (!idl_global->in_typedef () && !idl_global->anon_silent ())
                {
                  idl_global->err ()->anonymous_type_diagnostic ();
                }

              (yyval.dcval) = string;
            }
        }
#line 6683 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 359:
#line 4052 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StringCompleted);

          /*
           * Create a node representing a wstring.
           */
          ACE_CDR::ULong bound = 0UL;
          AST_String *string =
            idl_global->gen ()->create_wstring (
                idl_global->gen ()->create_expr (bound,
                                                 AST_Expression::EV_ulong)
              );

          /*
           * Add this AST_String to the types defined in the global scope.
           */
          idl_global->root ()->fe_add_string (
            AST_String::narrow_from_decl (
              string));

          (yyval.dcval) = string;
        }
#line 6710 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 360:
#line 4078 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSeen);
        }
#line 6718 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 361:
#line 4085 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ArrayIDSeen);
        }
#line 6726 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 362:
#line 4089 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ArrayCompleted);

          AST_Array *array = 0;
          AST_Annotation_Appls *base_type_annotations = (yyvsp[-1].annotations_val);
          UTL_ExprList *array_dims = (yyvsp[0].elval);

          /*
           * Create a node representing an array.
           */
          if (array_dims)
            {
              UTL_ScopedName sn ((yyvsp[-3].idval),
                                 0);
              array =
                idl_global->gen ()->create_array (
                                        &sn,
                                        array_dims->length (),
                                        array_dims,
                                        0,
                                        0
                                      );
              array->base_type_annotations (base_type_annotations);
              sn.destroy ();

              if (!idl_global->in_typedef ()
                  && !idl_global->anon_silent ())
                {
                  idl_global->err ()->anonymous_type_diagnostic ();
                }
            }

          array_dims->destroy ();
          delete array_dims;

          (yyval.dcval) = array;
        }
#line 6768 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 363:
#line 4130 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.elval),
                          UTL_ExprList ((yyvsp[-1].exval),
                                        (yyvsp[0].elval)),
                          1);
        }
#line 6779 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 364:
#line 4140 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_ExprList *el = 0;
          ACE_NEW_RETURN (el,
                          UTL_ExprList ((yyvsp[0].exval),
                                        0),
                          1);

          if ((yyvsp[-1].elval) == 0)
            {
              (yyval.elval) = el;
            }
          else
            {
              (yyvsp[-1].elval)->nconc (el);
              (yyval.elval) = (yyvsp[-1].elval);
            }
        }
#line 6801 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 365:
#line 4158 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.elval) = 0;
        }
#line 6809 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 366:
#line 4165 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_DimSqSeen);
        }
#line 6817 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 367:
#line 4169 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_DimExprSeen);
        }
#line 6825 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 368:
#line 4173 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_DimQsSeen);

          /*
           * Array dimensions are expressions which must be coerced to
           * positive integers.
           */
          AST_Expression::AST_ExprValue *ev = 0;
          AST_Param_Holder *param_holder = 0;

          if ((yyvsp[-2].exval) != 0)
            {
              param_holder =
                (yyvsp[-2].exval)->param_holder ();

              ev =
                (yyvsp[-2].exval)->coerce (AST_Expression::EV_ulong);
            }

          if (0 == (yyvsp[-2].exval)
              || (ev == 0 && param_holder == 0))
            {
              idl_global->err ()->coercion_error ((yyvsp[-2].exval),
                                                  AST_Expression::EV_ulong);
              (yyval.exval) = 0;
            }
          else
            {
              if (param_holder != 0)
                {
                  AST_Expression::ExprType et =
                    param_holder->info ()->const_type_;

                  // If the bound expression represents a
                  // template parameter, it must be a const
                  // and of type unsigned long.
                  if (et != AST_Expression::EV_ulong)
                    {
                      idl_global->err ()->mismatched_template_param (
                        param_holder->info ()->name_.c_str ());

                      delete ev;
                      ev = 0;
                      return 1;
                    }
                }

              (yyval.exval) = (yyvsp[-2].exval);
            }

          delete ev;
          ev = 0;
        }
#line 6883 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 371:
#line 4235 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrROSeen);
        }
#line 6891 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 372:
#line 4239 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrSeen);
        }
#line 6899 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 373:
#line 4243 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrTypeSeen);
        }
#line 6907 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 374:
#line 4247 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclsSeen);
        }
#line 6915 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 375:
#line 4251 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Attribute *a = 0;
          FE_Declarator *d = 0;

          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          /*
           * Create nodes representing attributes and add them to the
           * enclosing scope.
           */
          if (s != 0
              && (yyvsp[-4].dcval) != 0
              && (yyvsp[-2].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((yyvsp[-2].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type *tp = d->compose ((yyvsp[-4].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  a =
                    idl_global->gen ()->create_attribute (
                                            true,
                                            tp,
                                            d->name (),
                                            s->is_local (),
                                            s->is_abstract ()
                                          );

                  if ((yyvsp[0].nlval) != 0)
                    {
                      (void) a->fe_add_get_exceptions ((yyvsp[0].nlval));

                      (yyvsp[0].nlval)->destroy ();
                      delete (yyvsp[0].nlval);
                      (yyvsp[0].nlval) = 0;
                    }

                  (void) s->fe_add_attribute (a);
                }
            }

          (yyvsp[-2].dlval)->destroy ();
          delete (yyvsp[-2].dlval);
          (yyvsp[-2].dlval) = 0;
        }
#line 6979 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 376:
#line 4314 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrSeen);
        }
#line 6987 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 377:
#line 4318 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrTypeSeen);
        }
#line 6995 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 378:
#line 4322 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclsSeen);
        }
#line 7003 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 379:
#line 4326 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseCompleted);
        }
#line 7011 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 380:
#line 4330 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Attribute *a = 0;
          FE_Declarator *d = 0;

          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseCompleted);

          /*
           * Create nodes representing attributes and add them to the
           * enclosing scope.
           */
          if (s != 0
              && (yyvsp[-6].dcval) != 0
              && (yyvsp[-4].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((yyvsp[-4].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type *tp = d->compose ((yyvsp[-6].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  a =
                    idl_global->gen ()->create_attribute (
                                            false,
                                            tp,
                                            d->name (),
                                            s->is_local (),
                                            s->is_abstract ()
                                          );

                  if ((yyvsp[-2].nlval) != 0)
                    {
                      (void) a->fe_add_get_exceptions ((yyvsp[-2].nlval));

                      (yyvsp[-2].nlval)->destroy ();
                      delete (yyvsp[-2].nlval);
                      (yyvsp[-2].nlval) = 0;
                    }

                  if ((yyvsp[0].nlval) != 0)
                    {
                      (void) a->fe_add_set_exceptions ((yyvsp[0].nlval));

                      (yyvsp[0].nlval)->destroy ();
                      delete (yyvsp[0].nlval);
                      (yyvsp[0].nlval) = 0;
                    }

                  (void) s->fe_add_attribute (a);
                }
            }

          (yyvsp[-4].dlval)->destroy ();
          delete (yyvsp[-4].dlval);
          (yyvsp[-4].dlval) = 0;
        }
#line 7084 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 381:
#line 4402 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptSeen);
        }
#line 7092 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 382:
#line 4406 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_Exception *e = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptIDSeen);

          /*
           * Create a node representing an exception and add it to
           * the enclosing scope.
           */
          if (s != 0)
            {
              e = idl_global->gen ()->create_exception (&n,
                                                        s->is_local (),
                                                        s->is_abstract ());
              (void) s->fe_add_exception (e);
            }

          /*
           * Push the exception scope on the scope stack.
           */
          idl_global->scopes ().push (e);

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 7125 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 383:
#line 4435 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptSqSeen);
        }
#line 7133 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 384:
#line 4439 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptBodySeen);
        }
#line 7141 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 385:
#line 4443 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptQsSeen);
          /*
           * Done with this exception. Pop its scope from the scope stack.
           */
          idl_global->scopes ().pop ();
        }
#line 7153 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 386:
#line 4455 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpTypeSeen);
        }
#line 7161 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 387:
#line 4459 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          Identifier id ((yyvsp[0].strval));
          ACE::strdelete ((yyvsp[0].strval));
          (yyvsp[0].strval) = 0;

          UTL_ScopedName n (&id, 0);
          AST_Operation *o = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing an operation on an interface
           * and add it to its enclosing scope.
           */
          if (s != 0 && (yyvsp[-3].dcval) != 0)
            {
              AST_Type *tp =
                AST_Type::narrow_from_decl ((yyvsp[-3].dcval));

              if (tp == 0)
                {
                  idl_global->err ()->not_a_type ((yyvsp[-3].dcval));
                }
              else if (tp->node_type () == AST_Decl::NT_except)
                {
                  idl_global->err ()->not_a_type ((yyvsp[-3].dcval));
                }
              else
                {
                  AST_Decl *d = ScopeAsDecl (s);
                  AST_Decl::NodeType nt = d->node_type ();
                  bool local =
                    s->is_local ()
                    || nt == AST_Decl::NT_valuetype
                    || nt == AST_Decl::NT_eventtype;

                  o =
                    idl_global->gen ()->create_operation (
                      tp,
                      (yyvsp[-4].ofval),
                      &n,
                      local,
                      s->is_abstract ());

                  if (!local && tp->is_local ())
                    {
                      idl_global->err ()->local_remote_mismatch (tp, o);
                      o->destroy ();
                      delete o;
                      o = 0;
                    }
                  else
                    {
                      (void) s->fe_add_operation (o);
                    }
                }
            }

          /*
           * Push the operation scope onto the scopes stack.
           */
          idl_global->scopes ().push (o);
        }
#line 7229 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 388:
#line 4523 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        }
#line 7237 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 389:
#line 4527 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);
        }
#line 7245 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 390:
#line 4531 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Operation *o = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpCompleted);

          /*
           * Add exceptions and context to the operation.
           */
          if (s != 0 && s->scope_node_type () == AST_Decl::NT_op)
            {
              o = AST_Operation::narrow_from_scope (s);

              if ((yyvsp[-2].nlval) != 0 && o != 0)
                {
                  (void) o->fe_add_exceptions ((yyvsp[-2].nlval));
                }

              if ((yyvsp[0].slval) != 0)
                {
                  (void) o->fe_add_context ((yyvsp[0].slval));
                }
            }

          /*
           * Done with this operation. Pop its scope from the scopes stack.
           */
          idl_global->scopes ().pop ();
        }
#line 7278 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 391:
#line 4563 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpAttrSeen);
          (yyval.ofval) = AST_Operation::OP_oneway;
        }
#line 7287 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 392:
#line 4568 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpAttrSeen);
          (yyval.ofval) = AST_Operation::OP_idempotent;
        }
#line 7296 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 393:
#line 4573 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ofval) = AST_Operation::OP_noflags;
        }
#line 7304 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 395:
#line 4581 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                  AST_Expression::EV_void
                                                );
        }
#line 7315 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 396:
#line 4591 "fe/idl.ypp" /* yacc.c:1651  */
    {
          //@@ PS_FactorySeen?
          idl_global->set_parse_state (IDL_GlobalData::PS_OpTypeSeen);
        }
#line 7324 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 397:
#line 4596 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          if (s->is_abstract ())
            {
              //@@ Fire error
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("error in %C line %d:\n")
                          ACE_TEXT ("Abstract valuetype can't have a ")
                          ACE_TEXT ("factory construct.\n"),
                          idl_global->filename ()->get_string (),
                          idl_global->lineno ()));

              idl_global->set_err_count (idl_global->err_count () + 1);
            }

          Identifier id ((yyvsp[0].strval));
          ACE::strdelete ((yyvsp[0].strval));
          (yyvsp[0].strval) = 0;

          UTL_ScopedName n (&id,
                            0);
          AST_Factory *factory = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing an factory construct
           * and add it to its enclosing scope
           */
          if (s != 0)
            {
              factory = idl_global->gen ()->create_factory (&n);
              (void) s->fe_add_factory (factory);
            }

          /*
           * Push the operation scope onto the scopes stack.
           */
          idl_global->scopes ().push (factory);
        }
#line 7369 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 398:
#line 4637 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        }
#line 7377 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 399:
#line 4641 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          if ((yyvsp[0].nlval) != 0)
            {
              UTL_Scope *s = idl_global->scopes ().top_non_null ();
              AST_Factory *f = AST_Factory::narrow_from_scope (s);
              (void) f->fe_add_exceptions ((yyvsp[0].nlval));
            }

          idl_global->scopes ().pop ();
        }
#line 7394 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 400:
#line 4657 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        }
#line 7402 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 401:
#line 4661 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        }
#line 7410 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 402:
#line 4665 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        }
#line 7418 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 403:
#line 4670 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        }
#line 7426 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 405:
#line 4680 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParCommaSeen);
        }
#line 7434 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 408:
#line 4689 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDirSeen);
        }
#line 7442 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 409:
#line 4693 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParTypeSeen);
        }
#line 7450 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 410:
#line 4697 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Argument *a = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDeclSeen);

          /*
           * Create a node representing an argument to an operation
           * Add it to the enclosing scope (the operation scope).
           */
          if ((yyvsp[-2].dcval) != 0
              && (yyvsp[0].deval) != 0 &&
              s != 0)
            {
              AST_Type *tp = (yyvsp[0].deval)->compose ((yyvsp[-2].dcval));

              if (tp != 0)
                {
                  a = idl_global->gen ()->create_argument (
                          AST_Argument::dir_IN,
                          tp,
                          (yyvsp[0].deval)->name ()
                        );

                  (void) s->fe_add_argument (a);
                }
            }

          (yyvsp[0].deval)->destroy ();
          delete (yyvsp[0].deval);
          (yyvsp[0].deval) = 0;
        }
#line 7486 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 411:
#line 4732 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        }
#line 7494 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 412:
#line 4736 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        }
#line 7502 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 413:
#line 4740 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        }
#line 7510 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 414:
#line 4745 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        }
#line 7518 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 416:
#line 4755 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParCommaSeen);
        }
#line 7526 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 419:
#line 4764 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDirSeen);
        }
#line 7534 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 420:
#line 4768 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParTypeSeen);
        }
#line 7542 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 421:
#line 4772 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Argument *a = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDeclSeen);

          /*
           * Create a node representing an argument to an operation
           * Add it to the enclosing scope (the operation scope).
           */
          if ((yyvsp[-2].dcval) != 0
              && (yyvsp[0].deval) != 0
              && s != 0)
            {
              AST_Type *tp = (yyvsp[0].deval)->compose ((yyvsp[-2].dcval));

              if (tp != 0)
                {
                  if (!s->is_local () && tp->is_local ())
                    {
                      idl_global->err ()->local_remote_mismatch (tp, s);
                    }
                  else
                    {
                      a =
                        idl_global->gen ()->create_argument (
                            (yyvsp[-4].dival),
                            tp,
                            (yyvsp[0].deval)->name ()
                          );
                      (void) s->fe_add_argument (a);
                    }
                }
            }

          (yyvsp[0].deval)->destroy ();
          delete (yyvsp[0].deval);
          (yyvsp[0].deval) = 0;
        }
#line 7585 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 422:
#line 4814 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[0].etval)
                                               );
        }
#line 7596 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 425:
#line 4823 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = 0;
          UTL_ScopedName *n = (yyvsp[0].idlist);

          if (s != 0)
            {
              d = s->lookup_by_name (n, false, false);
            }

          if (d == 0)
            {
              idl_global->err ()->lookup_error (n);
              (yyvsp[0].idlist)->destroy ();
              (yyvsp[0].idlist) = 0;

              /* If we don't return here, we'll crash later.*/
              return 1;
            }
          else
            {
              d->last_referenced_as ((yyvsp[0].idlist));
              AST_Decl::NodeType nt = d->node_type ();
              AST_Type *t = AST_Type::narrow_from_decl (d);
              AST_Typedef *td = 0;
              bool can_be_undefined = false;

              if (nt == AST_Decl::NT_typedef)
                {
                  // This code block ensures that a sequence of
                  // as-yet-undefined struct or union isn't used
                  // as a return type or argument.
                  td = AST_Typedef::narrow_from_decl (d);
                  AST_Type *pbt = td->primitive_base_type ();

                  if (pbt->node_type () == AST_Decl::NT_sequence)
                    {
                      t = pbt;
                      AST_Sequence *seq_type =
                        AST_Sequence::narrow_from_decl (pbt);
                      AST_Type *elem_type =
                        seq_type->base_type ();
                      AST_Decl::NodeType elem_nt =
                        elem_type->node_type ();

                      if (elem_nt == AST_Decl::NT_typedef)
                        {
                          AST_Typedef *elem_td =
                            AST_Typedef::narrow_from_decl (elem_type);
                          elem_type = elem_td->primitive_base_type ();
                          elem_nt = elem_type->node_type ();
                        }

                      if (elem_nt == AST_Decl::NT_interface
                          || elem_nt == AST_Decl::NT_interface_fwd
                          || elem_nt == AST_Decl::NT_valuetype
                          || elem_nt == AST_Decl::NT_valuetype_fwd
                          || elem_nt == AST_Decl::NT_component
                          || elem_nt == AST_Decl::NT_component_fwd)
                        {
                          can_be_undefined = true;
                        }
                    }

                  if (! t->is_defined () && ! can_be_undefined)
                    {
                      idl_global->err ()->error1 (
                        UTL_Error::EIDL_ILLEGAL_ADD,
                        (nt == AST_Decl::NT_typedef ? td : t));

                      /* If we don't return here, we'll crash later.*/
                      return 1;
                    }
                }
              else
                {
                  // For forward declared structs and unions, we
                  // want the full definition, but we need to
                  // check that it's been fully defined.
                  AST_StructureFwd *fwd =
                    AST_StructureFwd::narrow_from_decl (d);

                  if (fwd != 0)
                    {
                      t = fwd->full_definition ();

                      if (! t->is_defined ())
                        {
                          idl_global->err ()->error1 (
                            UTL_Error::EIDL_ILLEGAL_ADD,
                            t);

                          /* If we don't return here, we'll crash later.*/
                          return 1;
                        }

                      d = t;
                    }
                }
            }

          (yyval.dcval) = d;
        }
#line 7704 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 426:
#line 4930 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dival) = AST_Argument::dir_IN;
        }
#line 7712 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 427:
#line 4934 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dival) = AST_Argument::dir_OUT;
        }
#line 7720 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 428:
#line 4938 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.dival) = AST_Argument::dir_INOUT;
        }
#line 7728 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 429:
#line 4945 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseSeen);
        }
#line 7736 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 430:
#line 4949 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseSqSeen);
        }
#line 7744 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 431:
#line 4954 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseQsSeen);
          (yyval.nlval) = (yyvsp[-1].nlval);
        }
#line 7753 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 432:
#line 4959 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.nlval) = 0;
        }
#line 7761 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 433:
#line 4966 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseSeen);
        }
#line 7769 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 434:
#line 4970 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseSqSeen);
        }
#line 7777 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 435:
#line 4975 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseQsSeen);
          (yyval.nlval) = (yyvsp[-1].nlval);
        }
#line 7786 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 436:
#line 4980 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.nlval) = 0;
        }
#line 7794 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 437:
#line 4987 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseSeen);
        }
#line 7802 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 438:
#line 4991 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseSqSeen);
        }
#line 7810 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 439:
#line 4996 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseQsSeen);
          (yyval.nlval) = (yyvsp[-1].nlval);
        }
#line 7819 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 440:
#line 5001 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.nlval) = 0;
        }
#line 7827 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 441:
#line 5008 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextSeen);
        }
#line 7835 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 442:
#line 5012 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextSqSeen);
        }
#line 7843 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 443:
#line 5017 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextQsSeen);
          (yyval.slval) = (yyvsp[-1].slval);
        }
#line 7852 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 444:
#line 5022 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.slval) = 0;
        }
#line 7860 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 445:
#line 5029 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.slval),
                          UTL_StrList ((yyvsp[-1].sval),
                                       (yyvsp[0].slval)),
                          1);
        }
#line 7871 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 446:
#line 5040 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextCommaSeen);
        }
#line 7879 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 447:
#line 5044 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_StrList *sl = 0;
          ACE_NEW_RETURN (sl,
                          UTL_StrList ((yyvsp[0].sval),
                                       0),
                          1);

          if ((yyvsp[-3].slval) == 0)
            {
              (yyval.slval) = sl;
            }
          else
            {
              (yyvsp[-3].slval)->nconc (sl);
              (yyval.slval) = (yyvsp[-3].slval);
            }
        }
#line 7901 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 448:
#line 5062 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.slval) = 0;
        }
#line 7909 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 449:
#line 5069 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[-1].idlist));

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[-1].idlist));
            }
          else
            {
              d->set_id_with_typeid (
                     (yyvsp[0].sval)->get_string ()
                   );
            }

          (yyvsp[-1].idlist)->destroy ();
          delete (yyvsp[-1].idlist);
          (yyvsp[-1].idlist) = 0;

          (yyvsp[0].sval)->destroy ();
          delete (yyvsp[0].sval);
          (yyvsp[0].sval) = 0;
        }
#line 7938 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 450:
#line 5097 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = ScopeAsDecl (s);

          // If we are in a module, we want to avoid a lookup unless the
          // typeprefix is to be applied to some other scope, since we
          // might get a previous opening of the module, and the prefix
          // of this opening would never get checked or set.
          if (d->name ()->compare ((yyvsp[-1].idlist)) != 0)
            {
              d =
                s->lookup_by_name ((yyvsp[-1].idlist));
            }

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[-1].idlist));
            }
          else
            {
              d->set_prefix_with_typeprefix (
                     (yyvsp[0].sval)->get_string ()
                   );
            }

          (yyvsp[-1].idlist)->destroy ();
          delete (yyvsp[-1].idlist);
          (yyvsp[-1].idlist) = 0;

          (yyvsp[0].sval)->destroy ();
          delete (yyvsp[0].sval);
          (yyvsp[0].sval) = 0;
        }
#line 7976 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 453:
#line 5140 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_ComponentFwd *f = 0;
          idl_global->set_parse_state (
                          IDL_GlobalData::PS_ComponentForwardSeen
                        );

          /*
           * Create a node representing a forward declaration of a
           * component. Store it in the enclosing scope.
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_component_fwd (&n);
              (void) s->fe_add_component_fwd (f);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 8004 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 454:
#line 5167 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Component *c = 0;

          /*
           * Make a new component node and add it to the enclosing scope.
           */
          if (s != 0 && (yyvsp[0].chval) != 0)
            {
              c =
                idl_global->gen ()->create_component (
                                        (yyvsp[0].chval)->name (),
                                        (yyvsp[0].chval)->base_component (),
                                        (yyvsp[0].chval)->supports (),
                                        (yyvsp[0].chval)->n_supports (),
                                        (yyvsp[0].chval)->supports_flat (),
                                        (yyvsp[0].chval)->n_supports_flat ()
                                      );
              AST_Interface *i = AST_Interface::narrow_from_decl (c);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the component to its definition scope.
               */
              c = AST_Component::narrow_from_decl (i);
              (void) s->fe_add_component (c);

              // This FE_ComponentHeader class isn't destroyed with the AST.
              (yyvsp[0].chval)->destroy ();
              delete (yyvsp[0].chval);
              (yyvsp[0].chval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (c);
        }
#line 8047 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 455:
#line 5206 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentSqSeen);
        }
#line 8055 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 456:
#line 5210 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentBodySeen);
        }
#line 8063 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 457:
#line 5214 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentQsSeen);

          /*
           * Done with this component - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        }
#line 8076 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 458:
#line 5227 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentIDSeen);
        }
#line 8084 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 459:
#line 5231 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        }
#line 8092 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 460:
#line 5235 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of a component.
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[-4].idval),
                                          0),
                          1);
          ACE_NEW_RETURN ((yyval.chval),
                          FE_ComponentHeader (n,
                                              (yyvsp[-2].idlist),
                                              (yyvsp[0].nlval),
                                              false),
                          1);

          if (0 != (yyvsp[0].nlval))
            {
              (yyvsp[0].nlval)->destroy ();
              delete (yyvsp[0].nlval);
              (yyvsp[0].nlval) = 0;
            }

          if (0 != (yyvsp[-2].idlist))
            {
              (yyvsp[-2].idlist)->destroy ();
              delete (yyvsp[-2].idlist);
              (yyvsp[-2].idlist) = 0;
            }
        }
#line 8130 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 461:
#line 5272 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritColonSeen);
        }
#line 8138 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 462:
#line 5276 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idlist) = (yyvsp[0].idlist);
        }
#line 8146 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 463:
#line 5280 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idlist) = 0;
        }
#line 8154 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 466:
#line 5292 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ProvidesDeclSeen);
        }
#line 8162 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 467:
#line 5296 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 8170 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 468:
#line 5300 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UsesDeclSeen);
        }
#line 8178 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 469:
#line 5304 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 8186 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 470:
#line 5308 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EmitsDeclSeen);
        }
#line 8194 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 471:
#line 5312 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 8202 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 472:
#line 5316 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_PublishesDeclSeen);
        }
#line 8210 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 473:
#line 5320 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 8218 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 474:
#line 5324 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConsumesDeclSeen);
        }
#line 8226 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 475:
#line 5328 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 8234 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 476:
#line 5332 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        }
#line 8242 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 477:
#line 5336 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 8250 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 478:
#line 5340 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ExtendedPortDeclSeen);
        }
#line 8258 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 479:
#line 5344 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 8266 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 480:
#line 5350 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[-1].idlist), true, false);

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[-1].idlist));
              so_far_so_good = false;
            }
          else
            {
              int compare = 0;
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_interface:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_interface)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  case AST_Decl::NT_pre_defined:
                    // Nothing else but CORBA::Object can have
                    // this identifier.
                    compare =
                      ACE_OS::strcmp (d->local_name ()->get_string (),
                                      "Object");

                    // Simple provides port must use IDL interface
                    // or CORBA::Object.
                    if (compare != 0)
                      {
                        idl_global->err ()->interface_expected (d);
                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->interface_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *port_interface_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[0].idval));

              UTL_ScopedName sn ((yyvsp[0].idval),
                                 0);

              AST_Provides *p =
                idl_global->gen ()->create_provides (&sn,
                                                     port_interface_type);

              (void) s->fe_add_provides (p);
            }

          (yyvsp[-1].idlist)->destroy ();
          delete (yyvsp[-1].idlist);
          (yyvsp[-1].idlist) = 0;

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 8357 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 481:
#line 5440 "fe/idl.ypp" /* yacc.c:1651  */
    {
          // Lookups and checking are done where the 'interface_type'
          // token is used, in 'provides_decl' and 'uses_decl'.
          (yyval.idlist) = (yyvsp[0].idlist);
        }
#line 8367 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 482:
#line 5446 "fe/idl.ypp" /* yacc.c:1651  */
    {
          Identifier *corba_id = 0;

          ACE_NEW_RETURN (corba_id,
                          Identifier ("Object"),
                          1);

          UTL_IdList *conc_name = 0;
          ACE_NEW_RETURN (conc_name,
                          UTL_IdList (corba_id,
                                      0),
                          1);

          ACE_NEW_RETURN (corba_id,
                          Identifier ("CORBA"),
                          1);

          ACE_NEW_RETURN ((yyval.idlist),
                          UTL_IdList (corba_id,
                                      conc_name),
                          1);
        }
#line 8394 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 483:
#line 5471 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[-1].idlist), true, false);

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[-1].idlist));
              so_far_so_good = false;
            }
          else
            {
              int compare = 0;
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_interface:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_interface)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  case AST_Decl::NT_pre_defined:
                    // Nothing else but CORBA::Object can have
                    // this identifier.
                    compare =
                      ACE_OS::strcmp (d->local_name ()->get_string (),
                                      "Object");

                    // Simple provides port must use IDL interface
                    // or CORBA::Object.
                    if (compare != 0)
                      {
                        idl_global->err ()->interface_expected (d);
                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->interface_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *port_interface_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[0].idval));

              UTL_ScopedName sn ((yyvsp[0].idval),
                                 0);

              AST_Uses *u =
                idl_global->gen ()->create_uses (&sn,
                                                 port_interface_type,
                                                 (yyvsp[-2].bval));

              (void) s->fe_add_uses (u);

              AST_Component *c =
                AST_Component::narrow_from_scope (s);

              if (c != 0
                  && u->is_multiple ()
                  && !idl_global->using_ifr_backend ()
                  && !idl_global->ignore_idl3 ()
                  && nt != AST_Decl::NT_param_holder)
                {
                  // These datatypes must be created in the
                  // front end so they can be looked up
                  // when compiling the generated executor IDL.
                  FE_Utils::create_uses_multiple_stuff (c, u);
                }
            }

          (yyvsp[-1].idlist)->destroy ();
          delete (yyvsp[-1].idlist);
          (yyvsp[-1].idlist) = 0;

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 8501 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 484:
#line 5577 "fe/idl.ypp" /* yacc.c:1651  */
    {
          // We use this extra rule here to use in both uses_decl and
          // extended_uses_decl, so the LALR(1) parser can avoid conflicts.
          (yyval.bval) = (yyvsp[0].bval);
        }
#line 8511 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 485:
#line 5586 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.bval) = true;
        }
#line 8519 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 486:
#line 5590 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.bval) = false;
        }
#line 8527 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 487:
#line 5596 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[-1].idlist), true, false);

          if (0 == d)
            {
              idl_global->err ()->lookup_error ((yyvsp[-1].idlist));
              so_far_so_good = false;
            }
          else
            {
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_eventtype:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_eventtype)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->eventtype_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *event_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[0].idval));

              UTL_ScopedName sn ((yyvsp[0].idval),
                                 0);

              AST_Emits *e =
                idl_global->gen ()->create_emits (&sn,
                                                  event_type);

              (void) s->fe_add_emits (e);
            }

          (yyvsp[-1].idlist)->destroy ();
          delete (yyvsp[-1].idlist);
          (yyvsp[-1].idlist) = 0;

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 8601 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 488:
#line 5668 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[-1].idlist), true, false);

          if (0 == d)
            {
              idl_global->err ()->lookup_error ((yyvsp[-1].idlist));
              so_far_so_good = false;
            }
          else
            {
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_eventtype:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_eventtype)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->eventtype_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *event_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[0].idval));

              UTL_ScopedName sn ((yyvsp[0].idval),
                                 0);

              AST_Publishes *p =
                idl_global->gen ()->create_publishes (&sn,
                                                      event_type);

              (void) s->fe_add_publishes (p);
            }

          (yyvsp[-1].idlist)->destroy ();
          delete (yyvsp[-1].idlist);
          (yyvsp[-1].idlist) = 0;

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 8675 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 489:
#line 5740 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[-1].idlist), true, false);

          if (0 == d)
            {
              idl_global->err ()->lookup_error ((yyvsp[-1].idlist));
              so_far_so_good = false;
            }
          else
            {
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_eventtype:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_eventtype)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->eventtype_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *event_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[0].idval));

              UTL_ScopedName sn ((yyvsp[0].idval),
                                 0);

              AST_Consumes *c =
                idl_global->gen ()->create_consumes (&sn,
                                                     event_type);

              (void) s->fe_add_consumes (c);
            }

          (yyvsp[-1].idlist)->destroy ();
          delete (yyvsp[-1].idlist);
          (yyvsp[-1].idlist) = 0;

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
       }
#line 8749 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 490:
#line 5813 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Home *h = 0;

          /*
           * Make a new home node and add it to the enclosing scope.
           */
          if (s != 0 && (yyvsp[0].hhval) != 0)
            {
              h =
                idl_global->gen ()->create_home (
                                        (yyvsp[0].hhval)->name (),
                                        (yyvsp[0].hhval)->base_home (),
                                        (yyvsp[0].hhval)->managed_component (),
                                        (yyvsp[0].hhval)->primary_key (),
                                        (yyvsp[0].hhval)->supports (),
                                        (yyvsp[0].hhval)->n_supports (),
                                        (yyvsp[0].hhval)->supports_flat (),
                                        (yyvsp[0].hhval)->n_supports_flat ()
                                      );
              /*
               * Add the home to its definition scope.
               */
              (void) s->fe_add_home (h);

              // This FE_HomeHeader class isn't destroyed with the AST.
              (yyvsp[0].hhval)->destroy ();
              delete (yyvsp[0].hhval);
              (yyvsp[0].hhval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (h);
        }
#line 8790 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 491:
#line 5850 "fe/idl.ypp" /* yacc.c:1651  */
    {
          /*
           * Done with this component - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        }
#line 8801 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 492:
#line 5860 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeSeen);
        }
#line 8809 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 493:
#line 5864 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeIDSeen);
        }
#line 8817 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 494:
#line 5868 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        }
#line 8825 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 495:
#line 5872 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);
        }
#line 8833 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 496:
#line 5876 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ManagesSeen);
        }
#line 8841 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 497:
#line 5880 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ManagesIDSeen);
        }
#line 8849 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 498:
#line 5884 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_PrimaryKeySpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of a component home.
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[-10].idval), 0),
                          1);

          ACE_NEW_RETURN ((yyval.hhval),
                          FE_HomeHeader (n,
                                         (yyvsp[-8].idlist),
                                         (yyvsp[-6].nlval),
                                         (yyvsp[-2].idlist),
                                         (yyvsp[0].idlist)),
                          1);

          (yyvsp[-2].idlist)->destroy ();
          delete (yyvsp[-2].idlist);
          (yyvsp[-2].idlist) = 0;

          if (0 != (yyvsp[-8].idlist))
            {
              (yyvsp[-8].idlist)->destroy ();
              delete (yyvsp[-8].idlist);
              (yyvsp[-8].idlist) = 0;
            }

          if (0 != (yyvsp[0].idlist))
            {
              (yyvsp[0].idlist)->destroy ();
              delete (yyvsp[0].idlist);
              (yyvsp[0].idlist) = 0;
            }

          if (0 != (yyvsp[-6].nlval))
            {
              (yyvsp[-6].nlval)->destroy ();
              delete (yyvsp[-6].nlval);
              (yyvsp[-6].nlval) = 0;
            }
        }
#line 8899 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 499:
#line 5933 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritColonSeen);
        }
#line 8907 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 500:
#line 5937 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idlist) = (yyvsp[0].idlist);
        }
#line 8915 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 501:
#line 5941 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idlist) = 0;
        }
#line 8923 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 502:
#line 5949 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idlist) = (yyvsp[0].idlist);
        }
#line 8931 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 503:
#line 5953 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idlist) = 0;
        }
#line 8939 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 504:
#line 5960 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeSqSeen);
        }
#line 8947 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 505:
#line 5964 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeBodySeen);
        }
#line 8955 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 506:
#line 5968 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeQsSeen);
        }
#line 8963 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 510:
#line 5981 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_FactoryDeclSeen);
        }
#line 8971 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 511:
#line 5985 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 8979 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 512:
#line 5989 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_FinderDeclSeen);
        }
#line 8987 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 513:
#line 5993 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 8995 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 514:
#line 6001 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing a factory operation
           * and add it to the enclosing scope.
           */
          AST_Factory *f = idl_global->gen ()->create_factory (&n);
          (void) s->fe_add_factory (f);

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;

          /*
           * Push the factory scope onto the scopes stack.
           */
          idl_global->scopes ().push (f);
        }
#line 9022 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 515:
#line 6024 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        }
#line 9030 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 516:
#line 6028 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          /*
           * Add exceptions and context to the factory.
           */
          if ((yyvsp[0].nlval) != 0)
            {
              (void) s->fe_add_exceptions ((yyvsp[0].nlval));
            }

          /*
           * Done with this factory. Pop its scope from the scopes stack.
           */
          idl_global->scopes ().pop ();
        }
#line 9052 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 517:
#line 6050 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);

          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing a home finder
           * and add it to the enclosing scope.
           */
          AST_Finder *f =
            idl_global->gen ()->create_finder (&n);

          (void) s->fe_add_finder (f);


          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;

          /*
           * Push the operation scope onto the scopes stack.
           */
          idl_global->scopes ().push (f);
        }
#line 9083 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 518:
#line 6077 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        }
#line 9091 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 519:
#line 6081 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          /*
           * Add exceptions and context to the finder.
           */
          if ((yyvsp[0].nlval) != 0)
            {
              (void) s->fe_add_exceptions ((yyvsp[0].nlval));
            }

          /*
           * Done with this operation. Pop its scope from the scopes stack.
           */
          idl_global->scopes ().pop ();
        }
#line 9113 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 525:
#line 6114 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_EventTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * eventtype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_eventtype_fwd (&n,
                                                            false);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 9140 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 526:
#line 6142 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[0].idval),
                            0);
          AST_EventTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * eventtype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_eventtype_fwd (&n,
                                                            true);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (yyvsp[0].idval)->destroy ();
          delete (yyvsp[0].idval);
          (yyvsp[0].idval) = 0;
        }
#line 9167 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 527:
#line 6169 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_EventType *e = 0;
          AST_Interface *i = 0;

          if (s != 0 && (yyvsp[-1].idval) != 0)
            {
              UTL_ScopedName sn ((yyvsp[-1].idval),
                                 0);
              e =
                idl_global->gen ()->create_eventtype (
                    &sn,
                    (yyvsp[0].vhval)->inherits (),
                    (yyvsp[0].vhval)->n_inherits (),
                    (yyvsp[0].vhval)->inherits_concrete (),
                    (yyvsp[0].vhval)->inherits_flat (),
                    (yyvsp[0].vhval)->n_inherits_flat (),
                    (yyvsp[0].vhval)->supports (),
                    (yyvsp[0].vhval)->n_supports (),
                    (yyvsp[0].vhval)->supports_concrete (),
                    true,
                    false,
                    false
                  );
              i = AST_Interface::narrow_from_decl (e);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the eventetype to its definition scope
               */
              e = AST_EventType::narrow_from_decl (i);
              (void) s->fe_add_eventtype (e);
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (e);

          (yyvsp[-1].idval)->destroy ();
          delete (yyvsp[-1].idval);
          (yyvsp[-1].idval) = 0;
        }
#line 9215 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 528:
#line 6213 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeSqSeen);
        }
#line 9223 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 529:
#line 6217 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeBodySeen);
        }
#line 9231 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 530:
#line 6221 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeQsSeen);

          /*
           * Done with this eventtype - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        }
#line 9244 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 531:
#line 6235 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idval) = (yyvsp[0].idval);
        }
#line 9252 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 532:
#line 6244 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeIDSeen);

          ACE_DEBUG ((LM_DEBUG,
                      ACE_TEXT ("error in %C line %d\n"),
                      idl_global->filename ()->get_string (),
                      idl_global->lineno ()));
          ACE_DEBUG ((LM_DEBUG,
                      ACE_TEXT ("Sorry, I (TAO_IDL) can't handle")
                      ACE_TEXT (" custom yet\n")));
          (yyval.idval) = 0;
        }
#line 9269 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 533:
#line 6261 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeIDSeen);

          (yyval.idval) = (yyvsp[0].idval);
        }
#line 9279 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 534:
#line 6270 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        }
#line 9287 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 535:
#line 6274 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);

          ACE_NEW_RETURN ((yyval.vhval),
                          FE_OBVHeader (
                            0,
                            (yyvsp[-2].nlval),
                            (yyvsp[0].nlval),
                            (yyvsp[-2].nlval)
                              ? (yyvsp[-2].nlval)->truncatable ()
                              : false,
                            true),
                          1);

          if (0 != (yyvsp[0].nlval))
            {
              (yyvsp[0].nlval)->destroy ();
              delete (yyvsp[0].nlval);
              (yyvsp[0].nlval) = 0;
            }

          if (0 != (yyvsp[-2].nlval))
            {
              (yyvsp[-2].nlval)->destroy ();
              delete (yyvsp[-2].nlval);
              (yyvsp[-2].nlval) = 0;
            }
        }
#line 9320 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 536:
#line 6307 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_EventType *e = 0;
          AST_Interface *i = 0;

          if (s != 0 && (yyvsp[-1].idval) != 0)
            {
              // We create the scoped name here instead of with the
              // FE_EventHeader because there is a token for it only here.
              UTL_ScopedName sn ((yyvsp[-1].idval),
                                 0);
              e =
                idl_global->gen ()->create_eventtype (
                    &sn,
                    (yyvsp[0].vhval)->inherits (),
                    (yyvsp[0].vhval)->n_inherits (),
                    (yyvsp[0].vhval)->inherits_concrete (),
                    (yyvsp[0].vhval)->inherits_flat (),
                    (yyvsp[0].vhval)->n_inherits_flat (),
                    (yyvsp[0].vhval)->supports (),
                    (yyvsp[0].vhval)->n_supports (),
                    (yyvsp[0].vhval)->supports_concrete (),
                    false,
                    (yyvsp[0].vhval)->truncatable (),
                    false
                  );
              i = AST_Interface::narrow_from_decl (e);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the eventetype to its definition scope
               */
              e = AST_EventType::narrow_from_decl (i);
              (void) s->fe_add_eventtype (e);

              // FE_EventHeader is not automatically destroyed in the AST
              (yyvsp[0].vhval)->destroy ();
              delete (yyvsp[0].vhval);
              (yyvsp[0].vhval) = 0;

              sn.destroy ();
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (e);
        }
#line 9373 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 537:
#line 6356 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeSqSeen);
        }
#line 9381 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 538:
#line 6360 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeBodySeen);
        }
#line 9389 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 539:
#line 6364 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeQsSeen);

          /*
           * Done with this eventtype - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        }
#line 9402 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 540:
#line 6376 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idval) = (yyvsp[0].idval);
        }
#line 9410 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 541:
#line 6380 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.idval) = (yyvsp[0].idval);
        }
#line 9418 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 542:
#line 6387 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_type;
        }
#line 9426 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 543:
#line 6391 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_struct;
        }
#line 9434 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 544:
#line 6395 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_union;
        }
#line 9442 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 545:
#line 6399 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_eventtype;
        }
#line 9450 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 546:
#line 6403 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_sequence;
        }
#line 9458 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 547:
#line 6407 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_interface;
        }
#line 9466 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 548:
#line 6411 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_valuetype;
        }
#line 9474 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 549:
#line 6415 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_enum;
        }
#line 9482 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 550:
#line 6419 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_except;
        }
#line 9490 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 551:
#line 6423 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.ntval) = AST_Decl::NT_const;
          t_param_const_type = (yyvsp[0].etval);
        }
#line 9499 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 552:
#line 6431 "fe/idl.ypp" /* yacc.c:1651  */
    {
          if ((yyvsp[0].plval) == 0)
            {
              ACE_NEW_RETURN ((yyvsp[0].plval), FE_Utils::T_PARAMLIST_INFO, 1);
            }

          (yyvsp[0].plval)->enqueue_head (*(yyvsp[-1].pival));
          delete (yyvsp[-1].pival);
          (yyvsp[-1].pival) = 0;

          // The param added above is always the last one parsed,
          // so we check for matches between sequence<T> & T here.
          ACE_CString bad_id =
            FE_Utils::check_for_seq_of_param (
              (yyvsp[0].plval));

          if (!bad_id.empty ())
            {
              delete (yyvsp[0].plval);
              (yyvsp[0].plval) = 0;

              idl_global->err ()->mismatch_seq_of_param (bad_id.c_str ());
              return 1;
            }

          (yyval.plval) = (yyvsp[0].plval);
        }
#line 9531 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 553:
#line 6462 "fe/idl.ypp" /* yacc.c:1651  */
    {
          if ((yyvsp[-2].plval) == 0)
            {
              ACE_NEW_RETURN ((yyvsp[-2].plval), FE_Utils::T_PARAMLIST_INFO, 1);
            }

          (yyvsp[-2].plval)->enqueue_tail (*(yyvsp[0].pival));
          (yyval.plval) = (yyvsp[-2].plval);

          delete (yyvsp[0].pival);
          (yyvsp[0].pival) = 0;
        }
#line 9548 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 554:
#line 6475 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.plval) = 0;
        }
#line 9556 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 555:
#line 6482 "fe/idl.ypp" /* yacc.c:1651  */
    {

          ACE_NEW_RETURN ((yyval.pival),
                          FE_Utils::T_Param_Info,
                          1);

          AST_Decl::NodeType nt = (yyvsp[-1].ntval);

          (yyval.pival)->type_ = nt;
          (yyval.pival)->name_ = (yyvsp[0].strval);
          ACE::strdelete ((yyvsp[0].strval));
          (yyvsp[0].strval) = 0;

          if (nt == AST_Decl::NT_const)
            {
              (yyval.pival)->const_type_ = t_param_const_type;
              (yyval.pival)->enum_const_type_decl_ =
                tao_enum_constant_decl;

              // Reset these values.
              t_param_const_type = AST_Expression::EV_none;
              tao_enum_constant_decl = 0;
            }
        }
#line 9585 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 556:
#line 6507 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.pival),
                          FE_Utils::T_Param_Info,
                          1);

          (yyval.pival)->type_ = AST_Decl::NT_sequence;
          (yyval.pival)->seq_param_ref_  = (yyvsp[-2].strval);
          (yyval.pival)->name_ += (yyvsp[0].strval);

          ACE::strdelete ((yyvsp[-2].strval));
          (yyvsp[-2].strval) = 0;
          ACE::strdelete ((yyvsp[0].strval));
          (yyvsp[0].strval) = 0;
        }
#line 9604 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 557:
#line 6525 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.slval), UTL_StrList ((yyvsp[-1].sval), (yyvsp[0].slval)), 1);
        }
#line 9612 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 558:
#line 6532 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_StrList *sl = 0;
          ACE_NEW_RETURN (sl, UTL_StrList ((yyvsp[0].sval), 0), 1);

          if ((yyvsp[-2].slval) == 0)
            {
              (yyval.slval) = sl;
            }
          else
            {
              (yyvsp[-2].slval)->nconc (sl);
              (yyval.slval) = (yyvsp[-2].slval);
            }
        }
#line 9631 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 559:
#line 6547 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.slval) = 0;
        }
#line 9639 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 560:
#line 6554 "fe/idl.ypp" /* yacc.c:1651  */
    {
          ACE_NEW_RETURN ((yyval.sval),
                          UTL_String ((yyvsp[0].strval), true),
                          1);
        }
#line 9649 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 561:
#line 6563 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeSeen);
        }
#line 9657 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 562:
#line 6567 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeIDSeen);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          Identifier id ((yyvsp[0].strval));
          ACE::strdelete ((yyvsp[0].strval));
          (yyvsp[0].strval) = 0;

          UTL_ScopedName sn (&id, 0);
          AST_PortType *p =
            idl_global->gen ()->create_porttype (&sn);

          (void) s->fe_add_porttype (p);

          // Push it on the scopes stack.
          idl_global->scopes ().push (p);
        }
#line 9679 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 563:
#line 6585 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeSqSeen);
        }
#line 9687 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 564:
#line 6589 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeBodySeen);
        }
#line 9695 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 565:
#line 6593 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeQsSeen);

          // Done with this port type - pop it off the scopes stack.
          idl_global->scopes ().pop ();
        }
#line 9706 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 566:
#line 6603 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 9713 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 567:
#line 6609 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 9720 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 568:
#line 6612 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 9727 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 569:
#line 6618 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 9734 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 570:
#line 6621 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 9741 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 571:
#line 6624 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 9748 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 572:
#line 6627 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 9755 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 573:
#line 6630 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        }
#line 9763 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 574:
#line 6634 "fe/idl.ypp" /* yacc.c:1651  */
    {
        }
#line 9770 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 575:
#line 6640 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ExtendedPortDeclSeen);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[-1].idlist));
          AST_PortType *pt = 0;
          bool so_far_so_good = true;

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[-1].idlist));
              so_far_so_good = false;
            }
          else
            {
              pt = AST_PortType::narrow_from_decl (d);

              if (pt == 0)
                {
                  idl_global->err ()->error1 (UTL_Error::EIDL_PORTTYPE_EXPECTED,
                                              d);
                  so_far_so_good = false;
                }
            }

          if (so_far_so_good)
            {
              Identifier id ((yyvsp[0].strval));
              ACE::strdelete ((yyvsp[0].strval));
              (yyvsp[0].strval) = 0;

              UTL_ScopedName sn (&id,
                                 0);

              AST_Extended_Port *ep =
                idl_global->gen ()->create_extended_port (
                  &sn,
                  pt);

              (void) s->fe_add_extended_port (ep);

              // Create (in the AST) the struct(s) and sequence(s)
              // needed for multiplex uses ports, if any.
              for (UTL_ScopeActiveIterator i (pt, UTL_Scope::IK_decls);
                   !i.is_done ();
                   i.next ())
                {
                  d = i.item ();

                  AST_Uses *u = AST_Uses::narrow_from_decl (d);

                  if (u != 0 && u->is_multiple ())
                    {
                      AST_Component *c =
                        AST_Component::narrow_from_scope (s);

                      FE_Utils::create_uses_multiple_stuff (
                        c,
                        u,
                        id.get_string ());
                    }
                }
            }

          (yyvsp[-1].idlist)->destroy ();
          delete (yyvsp[-1].idlist);
          (yyvsp[-1].idlist) = 0;
        }
#line 9843 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 576:
#line 6709 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_MirrorPortDeclSeen);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[-1].idlist));
          AST_PortType *pt = 0;
          bool so_far_so_good = true;

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[-1].idlist));
              so_far_so_good = false;
            }
           else
             {
               pt = AST_PortType::narrow_from_decl (d);

               if (pt == 0)
                 {
                   idl_global->err ()->error1 (UTL_Error::EIDL_PORTTYPE_EXPECTED,
                                               d);
                   so_far_so_good = false;
                 }
             }

          if (so_far_so_good)
            {
              Identifier id ((yyvsp[0].strval));
              ACE::strdelete ((yyvsp[0].strval));
              (yyvsp[0].strval) = 0;

              UTL_ScopedName sn (&id,
                                 0);

              AST_Mirror_Port *mp =
                idl_global->gen ()->create_mirror_port (
                  &sn,
                  pt);

              (void) s->fe_add_mirror_port (mp);
            }

          (yyvsp[-1].idlist)->destroy ();
          delete (yyvsp[-1].idlist);
          (yyvsp[-1].idlist) = 0;
        }
#line 9894 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 577:
#line 6759 "fe/idl.ypp" /* yacc.c:1651  */
    {
          if ((yyvsp[0].alval) == 0)
            {
              ACE_NEW_RETURN ((yyvsp[0].alval),
                              FE_Utils::T_ARGLIST,
                              1);
            }

          (yyvsp[0].alval)->enqueue_head ((yyvsp[-1].dcval));
          (yyval.alval) = (yyvsp[0].alval);
        }
#line 9910 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 578:
#line 6774 "fe/idl.ypp" /* yacc.c:1651  */
    {
          if ((yyvsp[-3].alval) == 0)
            {
              ACE_NEW_RETURN ((yyvsp[-3].alval),
                              FE_Utils::T_ARGLIST,
                              1);
            }

          (yyvsp[-3].alval)->enqueue_tail ((yyvsp[0].dcval));
          (yyval.alval) = (yyvsp[-3].alval);
        }
#line 9926 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 579:
#line 6786 "fe/idl.ypp" /* yacc.c:1651  */
    {
          (yyval.alval) = 0;
        }
#line 9934 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 580:
#line 6793 "fe/idl.ypp" /* yacc.c:1651  */
    {
          // To avoid grammar conflicts with this LALR(1) parser,
          // we take advantage of the fact that an expression can
          // be a scoped name. At that lower level, we create an
          // expression containing the scoped name, and at a
          // higher lever, deduce that it's not supposed to be
          // a constant and look up the type to add to the template
          // arg list.
          AST_Expression *ex = (yyvsp[0].exval);
          UTL_ScopedName *sn = ex->n ();
          AST_Decl *d = 0;
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          if (sn != 0)
            {
              d = s->lookup_by_name (sn);

              if (d == 0)
                {
                  idl_global->err ()->lookup_error (sn);
                  return 1;
                }
              else
                {
                  AST_Decl::NodeType nt = d->node_type ();

                  if (nt == AST_Decl::NT_enum_val)
                    {
                      (yyvsp[0].exval)->evaluate (
                        AST_Expression::EK_const);

                      (yyval.dcval) =
                        idl_global->gen ()->create_constant (
                          (yyvsp[0].exval)->ev ()->et,
                          (yyvsp[0].exval),
                          sn);
                    }
                  else
                    {
                      (yyval.dcval) = d;
                    }
                }
            }
          else
            {
              (yyvsp[0].exval)->evaluate (
                AST_Expression::EK_const);

              (yyval.dcval) =
                idl_global->gen ()->create_constant (
                  (yyvsp[0].exval)->ev ()->et,
                  (yyvsp[0].exval),
                  0);
            }
        }
#line 9994 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 582:
#line 6856 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorSeen);
        }
#line 10002 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 583:
#line 6860 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorIDSeen);
        }
#line 10010 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 584:
#line 6864 "fe/idl.ypp" /* yacc.c:1651  */
    {
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Connector *parent = 0;
          bool so_far_so_good = true;

          Identifier id ((yyvsp[-2].strval));
          ACE::strdelete ((yyvsp[-2].strval));
          (yyvsp[-2].strval) = 0;

          UTL_ScopedName sn (&id, 0);

          if ((yyvsp[0].idlist) != 0)
            {
              AST_Decl *d =
                s->lookup_by_name ((yyvsp[0].idlist));

              if (d == 0)
                {
                  idl_global->err ()->lookup_error ((yyvsp[0].idlist));
                  so_far_so_good = false;
                }

              parent =
                AST_Connector::narrow_from_decl (d);

              if (parent == 0)
                {
                  idl_global->err ()->error1 (
                    UTL_Error::EIDL_CONNECTOR_EXPECTED,
                    d);

                  so_far_so_good = false;
                }

              (yyvsp[0].idlist)->destroy ();
              delete (yyvsp[0].idlist);
              (yyvsp[0].idlist) = 0;
            }

          if (so_far_so_good)
            {
              AST_Connector *c =
                idl_global->gen ()->create_connector (&sn,
                                                      parent);

              (void) s->fe_add_connector (c);

              // Push it on the scopes stack.
              idl_global->scopes ().push (c);
           }
        }
#line 10066 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 585:
#line 6919 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorSqSeen);
        }
#line 10074 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 586:
#line 6923 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorBodySeen);
        }
#line 10082 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 587:
#line 6927 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorQsSeen);

          // Done with this connector - pop it off the scope stack.
          idl_global->scopes ().pop ();
        }
#line 10093 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 590:
#line 6942 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ProvidesDeclSeen);
        }
#line 10101 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 591:
#line 6946 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 10109 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 592:
#line 6950 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_UsesDeclSeen);
        }
#line 10117 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 593:
#line 6954 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 10125 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 594:
#line 6958 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        }
#line 10133 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 595:
#line 6962 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 10141 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 596:
#line 6966 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_ExtendedPortDeclSeen);
        }
#line 10149 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;

  case 597:
#line 6970 "fe/idl.ypp" /* yacc.c:1651  */
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        }
#line 10157 "fe/idl.tab.cpp" /* yacc.c:1651  */
    break;


#line 10161 "fe/idl.tab.cpp" /* yacc.c:1651  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
                  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 6975 "fe/idl.ypp" /* yacc.c:1910  */

/* programs */

/*
 * ???
 */
int
tao_yywrap (void)
{
  return 1;
}

/*
 * Report an error situation discovered in a production
 */
void
tao_yyerror (const char *msg)
{
  ACE_ERROR ((LM_ERROR,
              "%C\n",
              msg));
}
