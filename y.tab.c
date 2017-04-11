#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "grammer.y"
 /* definition */
#include "proj2.h"
#include <stdio.h>
#include "proj3.h"
#include <string.h>
#line 25 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ANDnum 257
#define ASSGNnum 258
#define DECLARATIONSnum 259
#define DOTnum 260
#define ENDDECLARATIONSnum 261
#define EQUALnum 262
#define GTnum 263
#define IDnum 264
#define INTnum 265
#define LBRACnum 266
#define LPARENnum 267
#define METHODnum 268
#define NEnum 269
#define ORnum 270
#define PROGRAMnum 271
#define RBRACnum 272
#define RPARENnum 273
#define SEMInum 274
#define VALnum 275
#define WHILEnum 276
#define CLASSnum 277
#define COMMAnum 278
#define DIVIDEnum 279
#define ELSEnum 280
#define EQnum 281
#define GEnum 282
#define ICONSTnum 283
#define IFnum 284
#define LBRACEnum 285
#define LEnum 286
#define LTnum 287
#define MINUSnum 288
#define NOTnum 289
#define PLUSnum 290
#define RBRACEnum 291
#define RETURNnum 292
#define SCONSTnum 293
#define TIMESnum 294
#define VOIDnum 295
#define ERRORnum 296
#define STRERRORnum 297
#define COMMERRORnum 298
#define IDERRORnum 299
#define BACKSLASHnum 300
#define EOFnum 301
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,   56,   31,   31,   32,   54,   33,   33,   33,   34,
   28,   28,   28,   35,   35,   36,   36,   37,   37,   37,
   37,   29,   29,   29,   29,   52,   30,   38,   38,   39,
   39,   40,   40,   40,   49,   49,   50,   50,   41,   42,
   42,   43,   43,   43,   43,   53,   44,   44,   44,   44,
   45,   45,   45,   46,   46,   47,   47,   47,   47,   48,
   48,   48,   14,   14,   12,   12,   12,   13,   13,   15,
   15,   16,   16,   10,   10,    9,    5,    3,    3,    2,
    2,   11,   11,    8,    8,   17,   17,    7,    4,    4,
    4,    4,    4,    4,    4,    6,   19,   19,   19,   20,
   20,   20,   20,   18,   22,   22,   22,   22,   23,   23,
   23,   24,   24,   24,   21,   21,    1,   55,   27,   27,
   25,   25,   26,   26,   51,
};
static const short yylen[] = {                            2,
    4,    1,    1,    2,    3,    1,    3,    2,    3,    1,
    2,    1,    1,    2,    3,    1,    2,    3,    4,    5,
    6,    1,    2,    3,    4,    2,    1,    2,    1,    2,
    3,    1,    1,    1,    3,    3,    1,    3,    2,    3,
    4,    6,    6,    7,    7,    1,    4,    3,    3,    2,
    2,    3,    2,    2,    1,    2,    2,    1,    1,    2,
    3,    4,    3,    2,    1,    2,    3,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    3,    3,    4,    1,
    3,    1,    2,    1,    3,    3,    5,    3,    1,    3,
    3,    3,    3,    3,    3,    1,    2,    2,    1,    3,
    3,    3,    1,    1,    3,    3,    3,    1,    1,    3,
    2,    1,    1,    1,    1,    1,    2,    1,    1,    1,
    4,    3,    1,    3,    0,
};
static const short yydefred[] = {                         0,
    2,    0,    0,    0,    0,    0,    0,    3,    6,    0,
    4,    0,    5,    0,    0,    8,    0,    0,   10,   12,
   14,    0,    0,    0,    0,   16,   27,    0,    0,    9,
   11,    7,    0,   56,   57,    0,    0,    0,   15,   17,
   46,    0,    0,    0,    0,    0,    0,    0,   18,    0,
    0,    0,    0,   61,   30,    0,    0,  118,    0,    0,
  115,    0,    0,    0,    0,  116,    0,  114,   32,    0,
   99,  103,    0,  112,    0,  108,  109,   26,   34,   33,
    0,   19,    0,    0,    0,    0,    0,    0,   62,   31,
   20,    0,    0,    0,    0,    0,    0,   98,  111,   97,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  119,  117,  120,    0,    0,
   55,    0,   43,    0,    0,   42,    0,   21,    0,    0,
  110,   35,    0,   36,   78,    0,    0,   91,   93,   92,
   95,   94,   90,  102,  101,  100,  107,  106,  105,    0,
    0,    0,    0,    0,   49,    0,    0,   64,    0,    0,
   70,   68,   76,   74,   75,   73,   72,    0,   65,   69,
   71,    0,   54,    0,   45,   44,   40,    0,   38,   79,
    0,  122,    0,    0,   53,    0,    0,    0,   83,    0,
    0,   63,    0,   47,   41,   81,  124,  121,   52,   88,
   86,   77,   67,    0,   85,    0,   87,
};
static const short yydgoto[] = {                          2,
   67,  136,   68,   69,  162,   70,  163,  164,  165,  166,
  167,  168,  169,  121,  170,  171,  172,   71,   72,   73,
   74,   75,   76,   77,  116,  152,  117,   17,   37,   24,
    7,    8,   13,   18,  122,   25,   26,   38,   46,   78,
   79,   94,   20,   86,  155,  123,   27,   34,   80,   97,
  118,   50,   42,   10,   81,    3,
};
static const short yysindex[] = {                      -177,
    0,    0, -192, -222, -197, -163, -197,    0,    0, -259,
    0, -248,    0,  -90, -246,    0, -256, -179,    0,    0,
    0, -137, -137, -121,  -46,    0,    0, -115, -115,    0,
    0,    0, -158,    0,    0, -113, -123, -245,    0,    0,
    0, -105,  -91, -236,  -93,  -80, -121, -201,    0,  -89,
  -85,  -59, -126,    0,    0,  -79, -235,    0,  -75,  -94,
    0, -201,  -86,  -86,  -86,    0,  -69,    0,    0,  -27,
    0,    0, -219,    0, -247,    0,    0,    0,    0,    0,
 -229,    0,  -72, -237,  -65,  -68, -237,  -63,    0,    0,
    0,  -73,  -94,  -62,  -50,  -56, -263,    0,    0,    0,
 -106,  -94,  -94,  -94,  -94,  -94,  -94,  -86,  -86,  -86,
  -86,  -86,  -86,  -30,  -94,    0,    0,    0, -224, -186,
    0,  -47,    0,  -25, -237,    0, -237,    0,  -29,  -94,
    0,    0, -201,    0,    0,  -26,  -22,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -229,
  -20,  -24, -184,  -15,    0,  -94,  -94,    0,  -94, -150,
    0,    0,    0,    0,    0,    0,    0, -251,    0,    0,
    0,  -19,    0, -224,    0,    0,    0,   -9,    0,    0,
  -94,    0,  -94, -229,    0, -224,  -47,  -47,    0,  -94,
 -199,    0, -139,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -94,    0,  -47,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,  262,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   -3,    0,    0,
    0,    2,    3,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -167,    0,   -1,    0,    0,
    0,    0,    0,    4,    0, -152,    0,    0,    0,    1,
    0,    0,    0,    0,    0,    0,    5,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -122,    0,    0,  -21,
    0,    0,  -41,    0,  -61,    0,    0,    0,    0,    0,
 -154,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    6,    0, -253,    0,    7,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   -4,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    8,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -154,
   10,    0,    0,    0,    0,    0,    0,    0, -238,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -212,    0,   13,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -154,    0,   14,    0,    0,    0,    0,
 -191,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
 -117,   97, -116,  -60,    0,  169,    0,    0,    0,    0,
    0,    0,   89, -120,    0,    0,    0,  -49,    0,    0,
    0,    0,  -55,    0,    0,    0, -142,    0,    0,    0,
    0,  281,    0,    0,  277,    0,  265,  244,    0,  -57,
    0,    0,  275,  -51,  -32,  -81,   -8,  -10,    0,    0,
    0,  236,  266,    0,    0,    0,
};
#define YYTABLESIZE 295
static const short yytable[] = {                         95,
   88,  173,  160,  161,   96,  126,   29,  182,   99,  111,
   14,   15,   35,   98,  133,  100,   48,   22,   23,   15,
   39,   14,  191,   53,   39,   12,   48,  134,   49,   33,
  114,  112,  129,   54,   30,   82,  115,   39,   91,  192,
  137,  198,   16,  175,   89,  176,  113,  120,   28,  153,
  108,    5,   82,  154,  151,  147,  148,  149,  144,  145,
  146,   84,   58,   59,   58,   60,  200,  201,  109,  178,
  110,    4,  205,  160,  161,  179,  156,   58,   84,    6,
   83,   61,   66,   62,  157,  207,   63,   64,   65,  156,
   85,   66,  159,    1,   29,  187,  188,  157,  189,   66,
    9,  185,  125,  125,  158,  159,   29,  190,  125,   28,
   29,   32,  125,   44,  125,  125,  101,  125,  125,  125,
  137,   28,  197,  125,  125,   28,  125,  125,   33,  202,
  125,  125,  125,  125,  113,  125,  125,   22,   23,  125,
  113,  194,   36,  206,  204,  120,  113,  113,   41,  113,
  113,  113,   45,  199,   47,  113,  113,   58,  113,  113,
   60,   51,  113,  113,  113,  113,  135,  113,  113,   58,
   21,  113,   60,   22,   23,   52,   61,   58,   55,   83,
   60,   63,   64,   65,   82,   56,   66,   84,   61,   85,
   93,  119,   90,   63,   64,   65,   61,  101,   66,  124,
  128,  104,   64,  130,  125,   83,   66,  104,  104,  127,
  104,  104,  104,   87,   39,   85,  104,   22,   23,  104,
  104,   96,  131,  104,  104,  104,  104,   96,  104,  104,
   96,   96,   96,  150,  132,  102,   96,  120,  174,   96,
   96,  103,  177,   96,   96,   96,  180,  184,  186,   96,
   89,   89,   89,  104,  105,  181,   89,  183,  106,  107,
  193,    1,  195,   89,   13,   58,   59,   60,   50,   89,
  138,  139,  140,  141,  142,  143,   22,  196,   23,  203,
   80,  123,   24,   25,   37,   48,   51,   11,   19,   40,
   57,   31,   92,    0,   43,
};
static const short yycheck[] = {                         60,
   52,  122,  120,  120,   62,   87,   15,  150,   64,  257,
  259,  268,   23,   63,  278,   65,  262,  264,  265,  268,
  274,  259,  274,  260,  278,  285,  262,  291,  274,  266,
  260,  279,   93,   44,  291,  274,  266,  291,  274,  291,
  101,  184,  291,  125,   53,  127,  294,  285,  295,  274,
  270,  274,  291,  278,  115,  111,  112,  113,  108,  109,
  110,  274,  264,  265,  264,  267,  187,  188,  288,  130,
  290,  264,  193,  191,  191,  133,  276,  264,  291,  277,
  265,  283,  274,  285,  284,  206,  288,  289,  290,  276,
  275,  293,  292,  271,  262,  156,  157,  284,  159,  291,
  264,  153,  257,  258,  291,  292,  274,  258,  263,  262,
  278,  291,  267,  272,  269,  270,  267,  272,  273,  274,
  181,  274,  183,  278,  279,  278,  281,  282,  266,  190,
  285,  286,  287,  288,  257,  290,  291,  264,  265,  294,
  263,  174,  264,  204,  284,  285,  269,  270,  264,  272,
  273,  274,  266,  186,  278,  278,  279,  264,  281,  282,
  267,  267,  285,  286,  287,  288,  273,  290,  291,  264,
  261,  294,  267,  264,  265,  267,  283,  264,  272,  265,
  267,  288,  289,  290,  274,  266,  293,  273,  283,  275,
  266,  264,  272,  288,  289,  290,  283,  267,  293,  265,
  274,  263,  289,  266,  273,  265,  293,  269,  270,  273,
  272,  273,  274,  273,  261,  275,  278,  264,  265,  281,
  282,  263,  273,  285,  286,  287,  288,  269,  290,  291,
  272,  273,  274,  264,  291,  263,  278,  285,  264,  281,
  282,  269,  272,  285,  286,  287,  273,  272,  264,  291,
  272,  273,  274,  281,  282,  278,  278,  278,  286,  287,
  280,    0,  272,  285,  268,  264,  264,  264,  273,  291,
  102,  103,  104,  105,  106,  107,  278,  181,  278,  191,
  273,  272,  278,  278,  278,  273,  273,    7,   12,   25,
   47,   17,   57,   -1,   29,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 301
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ANDnum","ASSGNnum",
"DECLARATIONSnum","DOTnum","ENDDECLARATIONSnum","EQUALnum","GTnum","IDnum",
"INTnum","LBRACnum","LPARENnum","METHODnum","NEnum","ORnum","PROGRAMnum",
"RBRACnum","RPARENnum","SEMInum","VALnum","WHILEnum","CLASSnum","COMMAnum",
"DIVIDEnum","ELSEnum","EQnum","GEnum","ICONSTnum","IFnum","LBRACEnum","LEnum",
"LTnum","MINUSnum","NOTnum","PLUSnum","RBRACEnum","RETURNnum","SCONSTnum",
"TIMESnum","VOIDnum","ERRORnum","STRERRORnum","COMMERRORnum","IDERRORnum",
"BACKSLASHnum","EOFnum","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : Program",
"Program : ProgramC IDnum SEMInum ProgramB",
"ProgramC : PROGRAMnum",
"ProgramB : ClassDecl",
"ProgramB : ProgramB ClassDecl",
"ClassDecl : CLASSnum ClassName ClassBody",
"ClassName : IDnum",
"ClassBody : LBRACEnum ClassBodyB RBRACEnum",
"ClassBody : LBRACEnum RBRACEnum",
"ClassBody : LBRACEnum ClassBodyC RBRACEnum",
"ClassBodyB : Decls",
"ClassBodyC : ClassBodyC MethodDecl",
"ClassBodyC : MethodDecl",
"ClassBodyC : ClassBodyB",
"Decls : DECLARATIONSnum ENDDECLARATIONSnum",
"Decls : DECLARATIONSnum DeclsB ENDDECLARATIONSnum",
"DeclsB : FieldDecl",
"DeclsB : DeclsB FieldDecl",
"FieldDecl : FieldDeclE VariableDeclId SEMInum",
"FieldDecl : FieldDeclE VariableDeclId FieldDeclD SEMInum",
"FieldDecl : FieldDeclE FieldDeclC COMMAnum VariableDeclId SEMInum",
"FieldDecl : FieldDeclE FieldDeclC COMMAnum VariableDeclId FieldDeclD SEMInum",
"FieldDeclC : VariableDeclId",
"FieldDeclC : VariableDeclId FieldDeclD",
"FieldDeclC : FieldDeclC COMMAnum VariableDeclId",
"FieldDeclC : FieldDeclC COMMAnum VariableDeclId FieldDeclD",
"FieldDeclD : EQUALnum VariableInitializer",
"FieldDeclE : Type",
"VariableDeclId : IDnum VariableDeclIdB",
"VariableDeclId : IDnum",
"VariableDeclIdB : LBRACnum RBRACnum",
"VariableDeclIdB : VariableDeclIdB LBRACnum RBRACnum",
"VariableInitializer : Expression",
"VariableInitializer : ArrayInitializer",
"VariableInitializer : ArrayCreationExpression",
"ArrayInitializer : LBRACEnum VariableInitializer RBRACEnum",
"ArrayInitializer : LBRACEnum ArrayInitializerB RBRACEnum",
"ArrayInitializerB : VariableInitializer",
"ArrayInitializerB : ArrayInitializerB COMMAnum VariableInitializer",
"ArrayCreationExpression : INTnum ArrayCreationExpressionB",
"ArrayCreationExpressionB : LBRACnum Expression RBRACnum",
"ArrayCreationExpressionB : ArrayCreationExpressionB LBRACnum Expression RBRACnum",
"MethodDecl : METHODnum Type MethodHelp LPARENnum RPARENnum Block",
"MethodDecl : METHODnum VOIDnum MethodHelp LPARENnum RPARENnum Block",
"MethodDecl : METHODnum Type MethodHelp LPARENnum FormalParameterList RPARENnum Block",
"MethodDecl : METHODnum VOIDnum MethodHelp LPARENnum FormalParameterList RPARENnum Block",
"MethodHelp : IDnum",
"FormalParameterList : VALnum INTnum IDnum FormalParameterListC",
"FormalParameterList : VALnum INTnum IDnum",
"FormalParameterList : INTnum IDnum FormalParameterListC",
"FormalParameterList : INTnum IDnum",
"FormalParameterListC : COMMAnum IDnum",
"FormalParameterListC : COMMAnum IDnum FormalParameterListC",
"FormalParameterListC : SEMInum FormalParameterList",
"Block : Decls StatementList",
"Block : StatementList",
"Type : IDnum TypeB",
"Type : INTnum TypeB",
"Type : IDnum",
"Type : INTnum",
"TypeB : LBRACnum RBRACnum",
"TypeB : LBRACnum RBRACnum TypeB",
"TypeB : LBRACnum RBRACnum DOTnum Type",
"StatementList : LBRACEnum Statementsop RBRACEnum",
"StatementList : LBRACEnum RBRACEnum",
"Statementsop : Statement",
"Statementsop : Statementsop SEMInum",
"Statementsop : Statementsop SEMInum Statement",
"Statement : AssignmentStatement",
"Statement : Statements_Op",
"Statements_Op : MethodCallStatement",
"Statements_Op : Statements_Op2",
"Statements_Op2 : ReturnStatement",
"Statements_Op2 : Statements_Op3",
"Statements_Op3 : IfStatement",
"Statements_Op3 : Statements_Op4",
"Statements_Op4 : WhileStatement",
"AssignmentStatement : Variable ASSGNnum Expression",
"MethodCallStatement : Variable LPARENnum RPARENnum",
"MethodCallStatement : Variable LPARENnum Expre RPARENnum",
"Expre : Expression",
"Expre : Expression COMMAnum Expre",
"ReturnStatement : RETURNnum",
"ReturnStatement : RETURNnum Expression",
"IfStatement : IFState_Op",
"IfStatement : IFState_Op ELSEnum StatementList",
"IFState_Op : IFnum Expression StatementList",
"IFState_Op : IFState_Op ELSEnum IFnum Expression StatementList",
"WhileStatement : WHILEnum Expression StatementList",
"Expression : SimpleExpression",
"Expression : SimpleExpression LTnum SimpleExpression",
"Expression : SimpleExpression GTnum SimpleExpression",
"Expression : SimpleExpression EQnum SimpleExpression",
"Expression : SimpleExpression NEnum SimpleExpression",
"Expression : SimpleExpression LEnum SimpleExpression",
"Expression : SimpleExpression GEnum SimpleExpression",
"SimpleExpression : Simple_op2",
"Simple_op : PLUSnum Term",
"Simple_op : MINUSnum Term",
"Simple_op : Term",
"Simple_op2 : Simple_op2 PLUSnum Term",
"Simple_op2 : Simple_op2 MINUSnum Term",
"Simple_op2 : Simple_op2 ORnum Term",
"Simple_op2 : Simple_op",
"Term : Term_op",
"Term_op : Term_op TIMESnum Factor",
"Term_op : Term_op DIVIDEnum Factor",
"Term_op : Term_op ANDnum Factor",
"Term_op : Factor",
"Factor : Factor_op",
"Factor : LPARENnum Expression RPARENnum",
"Factor : NOTnum Factor",
"Factor_op : UnsignedConstant",
"Factor_op : Variable",
"Factor_op : MethodCallStatement",
"UnsignedConstant : ICONSTnum",
"UnsignedConstant : SCONSTnum",
"Variable : Variableid Variable_op",
"Variableid : IDnum",
"Variable_op : Variable_op2",
"Variable_op : epsilon",
"Variable_op2 : LBRACnum Variable_op3 RBRACnum Variable_op",
"Variable_op2 : DOTnum IDnum Variable_op",
"Variable_op3 : Expression",
"Variable_op3 : Expression COMMAnum Expression",
"epsilon :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 255 "grammer.y"
//variables keep track of the id names, number of braces, and if a string is being used
tree GlobalType = NULL; 
tree ReturnType = NULL;
int counter=0;
int ismain=0;
int isstring=0;
int counter2=0;
int counter3 = 0;
int counter6=0;
int idnumber6=0;
int idnumber = 0;
int idnumber2 = 0;
int idnumber3=0;
int idnumber4=0;
int idnumber5=0;
int counter4=0;
int counter5=0;
int yycolumn, yyline;
FILE *treelst;
main() { 
treelst = stdout; 
yyparse(); 

}
// Print out Errors
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"
#line 499 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 18 "grammer.y"
	{yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(STNode, InsertEntry(yystack.l_mark[-2].intg)));  
	   STPrint(); printtree(yyval.tptr, 0);}
break;
case 2:
#line 21 "grammer.y"
	{STInit();}
break;
case 3:
#line 23 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 4:
#line 24 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 5:
#line 28 "grammer.y"
	{yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr); CloseBlock();}
break;
case 6:
#line 30 "grammer.y"
	{if(LookUpHere(yystack.l_mark[0].intg)!=0){error_msg(REDECLARATION,CONTINUE,yystack.l_mark[0].intg,0);} yyval.tptr=MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)); SetAttr(LookUpHere(yystack.l_mark[0].intg), KIND_ATTR, CLASS); OpenBlock();}
break;
case 7:
#line 33 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 8:
#line 34 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 9:
#line 35 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 10:
#line 37 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 11:
#line 39 "grammer.y"
	{ yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr); }
break;
case 12:
#line 40 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), yystack.l_mark[0].tptr);}
break;
case 13:
#line 41 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 14:
#line 45 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 15:
#line 46 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 16:
#line 48 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 17:
#line 49 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 18:
#line 53 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeLeaf(DUMMYNode, 0)))); counter = 0;}
break;
case 19:
#line 54 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr))); counter = 0;}
break;
case 20:
#line 55 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-3].tptr, MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));counter = 0;}
break;
case 21:
#line 56 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));counter = 0;}
break;
case 22:
#line 58 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 23:
#line 59 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[0].tptr)));}
break;
case 24:
#line 60 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 25:
#line 61 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-3].tptr, MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[0].tptr)));}
break;
case 26:
#line 63 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 27:
#line 65 "grammer.y"
	{GlobalType = yystack.l_mark[0].tptr; yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 28:
#line 69 "grammer.y"
	{ counter2=0; idnumber=yystack.l_mark[-1].intg;   yyval.tptr = MakeLeaf(STNode, InsertEntry(yystack.l_mark[-1].intg)); SetAttr(LookUp(yystack.l_mark[-1].intg),DIMEN_ATTR,counter);}
break;
case 29:
#line 70 "grammer.y"
	{ idnumber=yystack.l_mark[0].intg;  counter2=0;  yyval.tptr = MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)); SetAttr(LookUp(yystack.l_mark[0].intg),DIMEN_ATTR,counter);}
break;
case 30:
#line 72 "grammer.y"
	{counter=1;}
break;
case 31:
#line 73 "grammer.y"
	{counter=counter+1;}
break;
case 32:
#line 77 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 33:
#line 78 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 34:
#line 79 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 35:
#line 83 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr), GlobalType);}
break;
case 36:
#line 84 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, GlobalType);}
break;
case 37:
#line 86 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 38:
#line 87 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 39:
#line 91 "grammer.y"
	{ if(GetAttr(LookUp(idnumber), DIMEN_ATTR)!=counter2){error_msg(INDX_MIS,CONTINUE, idnumber,0);}yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, MakeLeaf(INTEGERTNode, 0));}
break;
case 40:
#line 93 "grammer.y"
	{counter2 = 1; yyval.tptr = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr);}
break;
case 41:
#line 94 "grammer.y"
	{counter2=counter2 +1; yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);}
break;
case 42:
#line 98 "grammer.y"
	{ SetAttr(LookUp(idnumber3),ARGNUM_ATTR,counter4); counter4=0; SetAttr(LookUp(idnumber3), KIND_ATTR, FUNC); ReturnType = yystack.l_mark[-4].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, yystack.l_mark[-3].tptr, MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , ReturnType)), yystack.l_mark[0].tptr); CloseBlock(); }
break;
case 43:
#line 99 "grammer.y"
	{ SetAttr(LookUp(idnumber3),ARGNUM_ATTR,counter4); counter4=0; SetAttr(LookUp(idnumber3), KIND_ATTR, PROCE); yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, yystack.l_mark[-3].tptr, MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , MakeLeaf(DUMMYNode, 0))), yystack.l_mark[0].tptr); CloseBlock(); }
break;
case 44:
#line 100 "grammer.y"
	{ SetAttr(LookUp(idnumber3),ARGNUM_ATTR,counter4); counter4=0; SetAttr(LookUp(idnumber3), KIND_ATTR, FUNC); ReturnType = yystack.l_mark[-5].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, yystack.l_mark[-4].tptr, MakeTree(SpecOp, yystack.l_mark[-2].tptr, ReturnType)), yystack.l_mark[0].tptr); CloseBlock();}
break;
case 45:
#line 101 "grammer.y"
	{ SetAttr(LookUp(idnumber3),ARGNUM_ATTR,counter4); counter4=0; SetAttr(LookUp(idnumber3), KIND_ATTR, PROCE); yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, yystack.l_mark[-4].tptr, MakeTree(SpecOp, yystack.l_mark[-2].tptr, MakeLeaf(DUMMYNode, 0))), yystack.l_mark[0].tptr); CloseBlock();}
break;
case 46:
#line 103 "grammer.y"
	{ if(strcmp(getname(yystack.l_mark[0].intg),"main")==0){if(ismain==0){ismain=ismain+1;}else{error_msg(MULTI_MAIN,CONTINUE,yystack.l_mark[0].intg,0);}} idnumber3 = yystack.l_mark[0].intg;  if(LookUpHere(yystack.l_mark[0].intg)!=0){error_msg(REDECLARATION,CONTINUE,yystack.l_mark[0].intg,0);} yyval.tptr=MakeLeaf(STNode,InsertEntry(yystack.l_mark[0].intg));  OpenBlock();}
break;
case 47:
#line 107 "grammer.y"
	{  counter4=counter4 +1;yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[-1].intg)), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);SetAttr(LookUp(yystack.l_mark[-1].intg),DIMEN_ATTR,0);}
break;
case 48:
#line 108 "grammer.y"
	{ counter4=counter4+1; yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0)); SetAttr(LookUp(yystack.l_mark[0].intg),DIMEN_ATTR,counter);}
break;
case 49:
#line 109 "grammer.y"
	{ counter4=counter4+1; yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[-1].intg)), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr); SetAttr(LookUp(yystack.l_mark[-1].intg),DIMEN_ATTR,counter);}
break;
case 50:
#line 110 "grammer.y"
	{counter4=counter4+1;yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));SetAttr(LookUp(yystack.l_mark[0].intg),DIMEN_ATTR,counter);}
break;
case 51:
#line 112 "grammer.y"
	{counter4=counter4+1; yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));SetAttr(LookUp(yystack.l_mark[0].intg),DIMEN_ATTR,counter);}
break;
case 52:
#line 113 "grammer.y"
	{counter4=counter4+1; yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[-1].intg)), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr); SetAttr(LookUp(yystack.l_mark[-1].intg),DIMEN_ATTR,counter);}
break;
case 53:
#line 114 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 54:
#line 118 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 55:
#line 119 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr); }
break;
case 56:
#line 123 "grammer.y"
	{ yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, LookUp(yystack.l_mark[-1].intg)), yystack.l_mark[0].tptr);}
break;
case 57:
#line 124 "grammer.y"
	{ yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), yystack.l_mark[0].tptr);}
break;
case 58:
#line 125 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, LookUp(yystack.l_mark[0].intg)), MakeLeaf(DUMMYNode, 0));}
break;
case 59:
#line 126 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 60:
#line 128 "grammer.y"
	{ counter =1; yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 61:
#line 129 "grammer.y"
	{counter= counter+1; yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 62:
#line 130 "grammer.y"
	{counter =counter +1;yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeTree(FieldOp, yystack.l_mark[0].tptr, MakeLeaf(DUMMYNode, 0)));}
break;
case 63:
#line 137 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 64:
#line 138 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),MakeLeaf(DUMMYNode,0));}
break;
case 65:
#line 140 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp, MakeLeaf(DUMMYNode, 0),yystack.l_mark[0].tptr);}
break;
case 66:
#line 141 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 67:
#line 142 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 68:
#line 146 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 69:
#line 147 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 70:
#line 149 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 71:
#line 150 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 72:
#line 152 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 73:
#line 153 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 74:
#line 155 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 75:
#line 156 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 76:
#line 158 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 77:
#line 162 "grammer.y"
	{yyval.tptr = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),yystack.l_mark[-2].tptr),yystack.l_mark[0].tptr); if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);} isstring=0;}
break;
case 78:
#line 166 "grammer.y"
	{ if(idnumber2!=0){if(GetAttr(LookUp2(idnumber4, idnumber2),ARGNUM_ATTR)!=counter5){ error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);}}else {if(GetAttr(LookUp(idnumber4),ARGNUM_ATTR)!=counter5){ error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);}} yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-2].tptr,MakeLeaf(DUMMYNode,0)); }
break;
case 79:
#line 167 "grammer.y"
	{ if(strcmp(getname(idnumber6),"system")!=0 || (strcmp(getname(idnumber2),"println")!=0)){if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber6,0);} }  if(idnumber2!=0){ if(GetAttr(LookUp2(idnumber6, idnumber2),ARGNUM_ATTR)!=counter5){error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);}}else {if(GetAttr(LookUp(idnumber6),ARGNUM_ATTR)!=counter5){ error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);}} yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-3].tptr,yystack.l_mark[-1].tptr); counter6=0;  counter5=0; isstring=0; }
break;
case 80:
#line 169 "grammer.y"
	{counter5=1; yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) ); }
break;
case 81:
#line 170 "grammer.y"
	{counter5=counter5+1; yyval.tptr = MakeTree(CommaOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 82:
#line 174 "grammer.y"
	{yyval.tptr = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );}
break;
case 83:
#line 175 "grammer.y"
	{yyval.tptr=MakeTree(ReturnOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) ); if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);}isstring=0;}
break;
case 84:
#line 179 "grammer.y"
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 85:
#line 180 "grammer.y"
	{yyval.tptr = MakeTree(IfElseOp, yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 86:
#line 182 "grammer.y"
	{yyval.tptr= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr));if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);}isstring=0;}
break;
case 87:
#line 183 "grammer.y"
	{yyval.tptr=MakeTree(IfElseOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp,yystack.l_mark[-1].tptr,yystack.l_mark[0].tptr)); if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);}isstring=0;}
break;
case 88:
#line 187 "grammer.y"
	{yyval.tptr= MakeTree(LoopOp,yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr ); if(isstring ==1){error_msg(TYPE_MIS,CONTINUE, idnumber5,0);}isstring=0; }
break;
case 89:
#line 191 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 90:
#line 192 "grammer.y"
	{ yyval.tptr=MakeTree(LTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 91:
#line 193 "grammer.y"
	{ yyval.tptr=MakeTree(GTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 92:
#line 194 "grammer.y"
	{ yyval.tptr=MakeTree(EQOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 93:
#line 195 "grammer.y"
	{ yyval.tptr=MakeTree(NEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 94:
#line 196 "grammer.y"
	{ yyval.tptr=MakeTree(LEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 95:
#line 197 "grammer.y"
	{ yyval.tptr=MakeTree(GEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 97:
#line 203 "grammer.y"
	{yyval.tptr=MakeTree(AddOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 98:
#line 204 "grammer.y"
	{yyval.tptr=MakeTree(UnaryNegOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 99:
#line 205 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 100:
#line 207 "grammer.y"
	{yyval.tptr= MakeTree(AddOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 101:
#line 208 "grammer.y"
	{yyval.tptr= MakeTree(UnaryNegOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 102:
#line 209 "grammer.y"
	{yyval.tptr= MakeTree(OrOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 103:
#line 210 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 104:
#line 214 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 105:
#line 216 "grammer.y"
	{yyval.tptr= MakeTree(MultOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 106:
#line 217 "grammer.y"
	{yyval.tptr= yyval.tptr= MakeTree(DivOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 107:
#line 218 "grammer.y"
	{yyval.tptr= MakeTree(AndOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 108:
#line 219 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 109:
#line 223 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 110:
#line 224 "grammer.y"
	{yyval.tptr=yystack.l_mark[-1].tptr; if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);} isstring=0;}
break;
case 111:
#line 225 "grammer.y"
	{yyval.tptr = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),yystack.l_mark[0].tptr); }
break;
case 112:
#line 227 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 113:
#line 228 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 114:
#line 229 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 115:
#line 233 "grammer.y"
	{yyval.tptr= MakeLeaf(NUMNode, yystack.l_mark[0].intg);}
break;
case 116:
#line 234 "grammer.y"
	{yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg); idnumber5=yystack.l_mark[0].intg; isstring=1;}
break;
case 117:
#line 238 "grammer.y"
	{if(IsAttr(LookUp(idnumber4), DIMEN_ATTR)){if(GetAttr(LookUp(idnumber4), DIMEN_ATTR)!=counter3){error_msg(INDX_MIS,CONTINUE, idnumber4,0);} counter3=0;} yyval.tptr = MakeTree(VarOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 118:
#line 240 "grammer.y"
	{idnumber4= yystack.l_mark[0].intg; if(counter6==0){idnumber6=yystack.l_mark[0].intg;} yyval.tptr = MakeLeaf(IDNode, LookUp(yystack.l_mark[0].intg));}
break;
case 119:
#line 242 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr; }
break;
case 120:
#line 243 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 121:
#line 245 "grammer.y"
	{counter3 =counter3+1; yyval.tptr=MakeTree(SelectOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 122:
#line 246 "grammer.y"
	{counter6=1; idnumber2=yystack.l_mark[-1].intg; LookUp(idnumber4); yyval.tptr= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, LookUp2(idnumber4,yystack.l_mark[-1].intg)),MakeLeaf(DUMMYNode,0)), yystack.l_mark[0].tptr); SetAttr(LookUp2(idnumber4,yystack.l_mark[-1].intg),DIMEN_ATTR,0);}
break;
case 123:
#line 248 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 124:
#line 249 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp,yystack.l_mark[-2].tptr ,MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0)));}
break;
case 125:
#line 252 "grammer.y"
	{}
break;
#line 1198 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
