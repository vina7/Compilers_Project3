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
#line 24 "y.tab.c"

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
    0,   31,   31,   32,   54,   33,   33,   33,   34,   28,
   28,   28,   35,   35,   36,   36,   37,   37,   37,   37,
   29,   29,   29,   29,   52,   30,   38,   38,   39,   39,
   40,   40,   40,   49,   49,   50,   50,   41,   42,   42,
   43,   43,   43,   43,   53,   44,   44,   44,   44,   45,
   45,   45,   46,   46,   47,   47,   47,   47,   48,   48,
   48,   14,   14,   12,   12,   12,   13,   13,   15,   15,
   16,   16,   10,   10,    9,    5,    3,    3,    2,    2,
   11,   11,    8,    8,   17,   17,    7,    4,    4,    4,
    4,    4,    4,    4,    6,   19,   19,   19,   20,   20,
   20,   20,   18,   22,   22,   22,   22,   23,   23,   23,
   24,   24,   24,   21,   21,    1,   55,   27,   27,   25,
   25,   26,   26,   51,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    1,    3,    2,    3,    1,    2,
    1,    1,    2,    3,    1,    2,    3,    4,    5,    6,
    1,    2,    3,    4,    2,    1,    2,    1,    2,    3,
    1,    1,    1,    3,    3,    1,    3,    2,    3,    4,
    6,    6,    7,    7,    1,    4,    3,    3,    2,    2,
    3,    2,    2,    1,    2,    2,    1,    1,    2,    3,
    4,    3,    2,    1,    2,    3,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    3,    3,    4,    1,    3,
    1,    2,    1,    3,    3,    5,    3,    1,    3,    3,
    3,    3,    3,    3,    1,    2,    2,    1,    3,    3,
    3,    1,    1,    3,    3,    3,    1,    1,    3,    2,
    1,    1,    1,    1,    1,    2,    1,    1,    1,    4,
    3,    1,    3,    0,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    2,    5,    0,    3,
    0,    4,    0,    0,    7,    0,    0,    9,   11,   13,
    0,    0,    0,    0,   15,   26,    0,    0,    8,   10,
    6,    0,   55,   56,    0,    0,    0,   14,   16,   45,
    0,    0,    0,    0,    0,    0,    0,   17,    0,    0,
    0,    0,   60,   29,    0,    0,  117,    0,    0,  114,
    0,    0,    0,    0,  115,    0,  113,   31,    0,   98,
  102,    0,  111,    0,  107,  108,   25,   33,   32,    0,
   18,    0,    0,    0,    0,    0,    0,   61,   30,   19,
    0,    0,    0,    0,    0,    0,   97,  110,   96,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  118,  116,  119,    0,    0,   54,
    0,   42,    0,    0,   41,    0,   20,    0,    0,  109,
   34,    0,   35,   77,    0,    0,   90,   92,   91,   94,
   93,   89,  101,  100,   99,  106,  105,  104,    0,    0,
    0,    0,    0,   48,    0,    0,   63,    0,    0,   69,
   67,   75,   73,   74,   72,   71,    0,   64,   68,   70,
    0,   53,    0,   44,   43,   39,    0,   37,   78,    0,
  121,    0,    0,   52,    0,    0,    0,   82,    0,    0,
   62,    0,   46,   40,   80,  123,  120,   51,   87,   85,
   76,   66,    0,   84,    0,   86,
};
static const short yydgoto[] = {                          2,
   66,  135,   67,   68,  161,   69,  162,  163,  164,  165,
  166,  167,  168,  120,  169,  170,  171,   70,   71,   72,
   73,   74,   75,   76,  115,  151,  116,   16,   36,   23,
    6,    7,   12,   17,  121,   24,   25,   37,   45,   77,
   78,   93,   19,   85,  154,  122,   26,   33,   79,   96,
  117,   49,   41,    9,   80,
};
static const short yysindex[] = {                      -177,
 -192,    0, -222, -197, -163, -197,    0,    0, -259,    0,
 -248,    0,  -90, -246,    0, -256, -179,    0,    0,    0,
 -137, -137, -121,  -60,    0,    0, -118, -118,    0,    0,
    0, -158,    0,    0, -117, -102, -245,    0,    0,    0,
 -105,  -88, -236,  -81,  -74, -121, -201,    0,  -76, -120,
  -85, -126,    0,    0,  -79, -235,    0,  -66,  -94,    0,
 -201,  -86,  -86,  -86,    0,  -57,    0,    0,  -27,    0,
    0, -219,    0, -247,    0,    0,    0,    0,    0, -229,
    0,  -58, -237,  -51,  -55, -237,  -39,    0,    0,    0,
  -36,  -94,  -47,  -38,  -75, -263,    0,    0,    0, -106,
  -94,  -94,  -94,  -94,  -94,  -94,  -86,  -86,  -86,  -86,
  -86,  -86,  -49,  -94,    0,    0,    0, -224, -186,    0,
  -62,    0,  -25, -237,    0, -237,    0,  -29,  -94,    0,
    0, -201,    0,    0,  -26,  -30,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -229,  -22,
  -23, -184,   -6,    0,  -94,  -94,    0,  -94, -150,    0,
    0,    0,    0,    0,    0,    0, -251,    0,    0,    0,
  -19,    0, -224,    0,    0,    0,  -10,    0,    0,  -94,
    0,  -94, -229,    0, -224,  -62,  -62,    0,  -94, -199,
    0,  -99,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -94,    0,  -62,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  263,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   -3,    0,    0,    0,
    2,    3,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -167,    0,   -1,    0,    0,    0,
    0,    0,    4,    0, -152,    0,    0,    0,    1,    0,
    0,    0,    0,    0,    0,    5,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -122,    0,    0,  -21,    0,
    0,  -41,    0,  -61,    0,    0,    0,    0,    0, -154,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    6,    0, -253,    0,    7,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   -4,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    8,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -154,   10,
    0,    0,    0,    0,    0,    0,    0, -238,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -212,    0,   13,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -154,    0,   14,    0,    0,    0,    0, -191,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
 -116,   98, -115,  -59,    0,  170,    0,    0,    0,    0,
    0,    0,   90, -119,    0,    0,    0,  -48,    0,    0,
    0,    0,  -54,    0,    0,    0, -141,    0,    0,    0,
    0,  282,    0,    0,  278,    0,  266,  245,    0,  -56,
    0,    0,  276,  -50,  -31,  -80,   -7,   -9,    0,    0,
    0,  237,  267,    0,    0,
};
#define YYTABLESIZE 295
static const short yytable[] = {                         94,
   87,  172,  159,  160,   95,  125,   28,  181,   98,  110,
   13,   14,   34,   97,  132,   99,   47,   21,   22,   14,
   38,   13,  190,   52,   38,   11,   47,  133,   48,   32,
  113,  111,  128,   53,   29,   81,  114,   38,   90,  191,
  136,  197,   15,  174,   88,  175,  112,  119,   27,  152,
  107,    4,   81,  153,  150,  146,  147,  148,  143,  144,
  145,   83,   57,   58,   57,   59,  199,  200,  108,  177,
  109,    3,  204,  159,  160,  178,  155,   57,   83,    5,
   82,   60,   65,   61,  156,  206,   62,   63,   64,  155,
   84,   65,  158,    1,   28,  186,  187,  156,  188,   65,
    8,  184,  124,  124,  157,  158,   28,  189,  124,   27,
   28,   31,  124,   43,  124,  124,  100,  124,  124,  124,
  136,   27,  196,  124,  124,   27,  124,  124,   32,  201,
  124,  124,  124,  124,  112,  124,  124,   21,   22,  124,
  112,  193,   35,  205,   82,   40,  112,  112,   44,  112,
  112,  112,   83,  198,   84,  112,  112,   57,  112,  112,
   59,   50,  112,  112,  112,  112,  134,  112,  112,   57,
   20,  112,   59,   21,   22,   46,   60,   57,   51,   82,
   59,   62,   63,   64,  203,  119,   65,   86,   60,   84,
   54,   55,   89,   62,   63,   64,   60,   81,   65,   92,
   38,  103,   63,   21,   22,  118,   65,  103,  103,  100,
  103,  103,  103,  123,  149,  131,  103,  124,  129,  103,
  103,   95,  119,  103,  103,  103,  103,   95,  103,  103,
   95,   95,   95,  126,  130,  101,   95,  127,  173,   95,
   95,  102,  176,   95,   95,   95,  179,  180,  183,   95,
   88,   88,   88,  103,  104,  182,   88,  185,  105,  106,
  192,  194,    1,   88,   12,   57,   58,   59,   49,   88,
  137,  138,  139,  140,  141,  142,   21,  195,   22,  202,
   79,  122,   23,   24,   36,   47,   50,   10,   18,   39,
   56,   30,   91,    0,   42,
};
static const short yycheck[] = {                         59,
   51,  121,  119,  119,   61,   86,   14,  149,   63,  257,
  259,  268,   22,   62,  278,   64,  262,  264,  265,  268,
  274,  259,  274,  260,  278,  285,  262,  291,  274,  266,
  260,  279,   92,   43,  291,  274,  266,  291,  274,  291,
  100,  183,  291,  124,   52,  126,  294,  285,  295,  274,
  270,  274,  291,  278,  114,  110,  111,  112,  107,  108,
  109,  274,  264,  265,  264,  267,  186,  187,  288,  129,
  290,  264,  192,  190,  190,  132,  276,  264,  291,  277,
  265,  283,  274,  285,  284,  205,  288,  289,  290,  276,
  275,  293,  292,  271,  262,  155,  156,  284,  158,  291,
  264,  152,  257,  258,  291,  292,  274,  258,  263,  262,
  278,  291,  267,  272,  269,  270,  267,  272,  273,  274,
  180,  274,  182,  278,  279,  278,  281,  282,  266,  189,
  285,  286,  287,  288,  257,  290,  291,  264,  265,  294,
  263,  173,  264,  203,  265,  264,  269,  270,  266,  272,
  273,  274,  273,  185,  275,  278,  279,  264,  281,  282,
  267,  267,  285,  286,  287,  288,  273,  290,  291,  264,
  261,  294,  267,  264,  265,  278,  283,  264,  267,  265,
  267,  288,  289,  290,  284,  285,  293,  273,  283,  275,
  272,  266,  272,  288,  289,  290,  283,  274,  293,  266,
  261,  263,  289,  264,  265,  264,  293,  269,  270,  267,
  272,  273,  274,  265,  264,  291,  278,  273,  266,  281,
  282,  263,  285,  285,  286,  287,  288,  269,  290,  291,
  272,  273,  274,  273,  273,  263,  278,  274,  264,  281,
  282,  269,  272,  285,  286,  287,  273,  278,  272,  291,
  272,  273,  274,  281,  282,  278,  278,  264,  286,  287,
  280,  272,    0,  285,  268,  264,  264,  264,  273,  291,
  101,  102,  103,  104,  105,  106,  278,  180,  278,  190,
  273,  272,  278,  278,  278,  273,  273,    6,   11,   24,
   46,   16,   56,   -1,   28,
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
"Program : PROGRAMnum IDnum SEMInum ProgramB",
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
#line 252 "grammer.y"
tree GlobalType = NULL; 
tree ReturnType = NULL;
int counter=0;
int counter2=0;
int counter3 = 0;
int idnumber = 0;
int idnumber2 = 0;
int idnumber3=0;
int idnumber4=0;
int counter4=0;
int counter5=0;
int yycolumn, yyline;
FILE *treelst;
main() { 
treelst = stdout; 
yyparse(); 
STInit();
}
// Print out Errors
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"
#line 491 "y.tab.c"

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
#line 17 "grammer.y"
	{yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(STNode, InsertEntry(yystack.l_mark[-2].intg)));  
	  STPrint(); printtree(yyval.tptr, 0);}
break;
case 2:
#line 20 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 3:
#line 21 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 4:
#line 25 "grammer.y"
	{yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr,yystack.l_mark[-1].tptr); CloseBlock();}
break;
case 5:
#line 27 "grammer.y"
	{if(LookUpHere(yystack.l_mark[0].intg)!=0){error_msg(REDECLARATION,CONTINUE,yystack.l_mark[0].intg,0);} yyval.tptr=MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)); SetAttr(LookUpHere(yystack.l_mark[0].intg), KIND_ATTR, CLASS); OpenBlock();}
break;
case 6:
#line 30 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 7:
#line 31 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 8:
#line 32 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 9:
#line 34 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 10:
#line 36 "grammer.y"
	{ yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr); }
break;
case 11:
#line 37 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), yystack.l_mark[0].tptr);}
break;
case 12:
#line 38 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 13:
#line 42 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 14:
#line 43 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 15:
#line 45 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 16:
#line 46 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 17:
#line 50 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeLeaf(DUMMYNode, 0)))); counter = 0;}
break;
case 18:
#line 51 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr))); counter = 0;}
break;
case 19:
#line 52 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-3].tptr, MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));counter = 0;}
break;
case 20:
#line 53 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));counter = 0;}
break;
case 21:
#line 55 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 22:
#line 56 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[0].tptr)));}
break;
case 23:
#line 57 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 24:
#line 58 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-3].tptr, MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[0].tptr)));}
break;
case 25:
#line 60 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 26:
#line 62 "grammer.y"
	{GlobalType = yystack.l_mark[0].tptr; yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 27:
#line 66 "grammer.y"
	{ counter2=0; idnumber=yystack.l_mark[-1].intg; printf("%d ",idnumber); if(LookUpHere(yystack.l_mark[-1].intg)!=0){error_msg(REDECLARATION,CONTINUE,yystack.l_mark[-1].intg,0);} yyval.tptr = MakeLeaf(STNode, InsertEntry(yystack.l_mark[-1].intg)); SetAttr(LookUp(yystack.l_mark[-1].intg),DIMEN_ATTR,counter);}
break;
case 28:
#line 67 "grammer.y"
	{ idnumber=yystack.l_mark[0].intg; printf("%d ",idnumber); counter2=0;  if(LookUpHere(yystack.l_mark[0].intg)!=0){error_msg(REDECLARATION,CONTINUE,yystack.l_mark[0].intg,0);}yyval.tptr = MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)); SetAttr(LookUp(yystack.l_mark[0].intg),DIMEN_ATTR,counter);}
break;
case 29:
#line 69 "grammer.y"
	{counter=1;}
break;
case 30:
#line 70 "grammer.y"
	{counter=counter+1;}
break;
case 31:
#line 74 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 32:
#line 75 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 33:
#line 76 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 34:
#line 80 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr), GlobalType);}
break;
case 35:
#line 81 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, GlobalType);}
break;
case 36:
#line 83 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 37:
#line 84 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 38:
#line 88 "grammer.y"
	{printf("%d ",idnumber); if(GetAttr(LookUp(idnumber), DIMEN_ATTR)!=counter2){error_msg(INDX_MIS,CONTINUE, idnumber,0);}yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, MakeLeaf(INTEGERTNode, 0));}
break;
case 39:
#line 90 "grammer.y"
	{counter2 = 1; yyval.tptr = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr);}
break;
case 40:
#line 91 "grammer.y"
	{counter2=counter2 +1; yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);}
break;
case 41:
#line 95 "grammer.y"
	{ SetAttr(LookUp(idnumber3), KIND_ATTR, FUNC); ReturnType = yystack.l_mark[-4].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, yystack.l_mark[-3].tptr, MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , ReturnType)), yystack.l_mark[0].tptr); CloseBlock(); }
break;
case 42:
#line 96 "grammer.y"
	{ SetAttr(LookUp(idnumber3), KIND_ATTR, PROCE); yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, yystack.l_mark[-3].tptr, MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , MakeLeaf(DUMMYNode, 0))), yystack.l_mark[0].tptr); CloseBlock(); }
break;
case 43:
#line 97 "grammer.y"
	{ SetAttr(LookUp(idnumber3), KIND_ATTR, FUNC); ReturnType = yystack.l_mark[-5].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, yystack.l_mark[-4].tptr, MakeTree(SpecOp, yystack.l_mark[-2].tptr, ReturnType)), yystack.l_mark[0].tptr); CloseBlock();}
break;
case 44:
#line 98 "grammer.y"
	{ SetAttr(LookUp(idnumber3), KIND_ATTR, PROCE); yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, yystack.l_mark[-4].tptr, MakeTree(SpecOp, yystack.l_mark[-2].tptr, MakeLeaf(DUMMYNode, 0))), yystack.l_mark[0].tptr); CloseBlock();}
break;
case 45:
#line 100 "grammer.y"
	{idnumber3 = yystack.l_mark[0].intg;  if(LookUpHere(yystack.l_mark[0].intg)!=0){error_msg(REDECLARATION,CONTINUE,yystack.l_mark[0].intg,0);} yyval.tptr=MakeLeaf(STNode,InsertEntry(yystack.l_mark[0].intg)); SetAttr(LookUp(yystack.l_mark[0].intg),ARGNUM_ATTR,counter4); printf("stusadsafff %d\n",GetAttr(LookUp(yystack.l_mark[0].intg),NAME_ATTR)); counter4=0; OpenBlock();}
break;
case 46:
#line 104 "grammer.y"
	{ printf("%d\n",yystack.l_mark[-1].intg); counter4=counter4 +1;yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[-1].intg)), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);SetAttr(LookUp(yystack.l_mark[-1].intg),DIMEN_ATTR,0);}
break;
case 47:
#line 105 "grammer.y"
	{ printf("%d\n",yystack.l_mark[0].intg);counter4=counter4+1; yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0)); SetAttr(LookUp(yystack.l_mark[0].intg),DIMEN_ATTR,counter);}
break;
case 48:
#line 106 "grammer.y"
	{printf("%d\n",yystack.l_mark[-1].intg); counter4=counter4+1; yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[-1].intg)), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr); SetAttr(LookUp(yystack.l_mark[-1].intg),DIMEN_ATTR,counter);}
break;
case 49:
#line 107 "grammer.y"
	{printf("%d\n",yystack.l_mark[0].intg); counter4=counter4+1;yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));SetAttr(LookUp(yystack.l_mark[0].intg),DIMEN_ATTR,counter);}
break;
case 50:
#line 109 "grammer.y"
	{printf("%d\n",yystack.l_mark[0].intg); counter4=counter4+1; yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[0].intg)), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));SetAttr(LookUp(yystack.l_mark[0].intg),DIMEN_ATTR,counter);}
break;
case 51:
#line 110 "grammer.y"
	{printf("%d\n",yystack.l_mark[-1].intg); counter4=counter4+1; yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry(yystack.l_mark[-1].intg)), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr); SetAttr(LookUp(yystack.l_mark[-1].intg),DIMEN_ATTR,counter);}
break;
case 52:
#line 111 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 53:
#line 115 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 54:
#line 116 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr); }
break;
case 55:
#line 120 "grammer.y"
	{ yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, LookUp(yystack.l_mark[-1].intg)), yystack.l_mark[0].tptr);}
break;
case 56:
#line 121 "grammer.y"
	{ yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), yystack.l_mark[0].tptr);}
break;
case 57:
#line 122 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, LookUp(yystack.l_mark[0].intg)), MakeLeaf(DUMMYNode, 0));}
break;
case 58:
#line 123 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 59:
#line 125 "grammer.y"
	{ counter =1; yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 60:
#line 126 "grammer.y"
	{counter= counter+1; yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 61:
#line 127 "grammer.y"
	{counter =counter +1;yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeTree(FieldOp, yystack.l_mark[0].tptr, MakeLeaf(DUMMYNode, 0)));}
break;
case 62:
#line 134 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 63:
#line 135 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),MakeLeaf(DUMMYNode,0));}
break;
case 64:
#line 137 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp, MakeLeaf(DUMMYNode, 0),yystack.l_mark[0].tptr);}
break;
case 65:
#line 138 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 66:
#line 139 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 67:
#line 143 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 68:
#line 144 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 69:
#line 146 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 70:
#line 147 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 71:
#line 149 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 72:
#line 150 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 73:
#line 152 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 74:
#line 153 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 75:
#line 155 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 76:
#line 159 "grammer.y"
	{yyval.tptr = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),yystack.l_mark[-2].tptr),yystack.l_mark[0].tptr);}
break;
case 77:
#line 163 "grammer.y"
	{printf("%d ",idnumber2); if(GetAttr(LookUp2(idnumber4,idnumber2),ARGNUM_ATTR)!=0){error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);} yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-2].tptr,MakeLeaf(DUMMYNode,0)); }
break;
case 78:
#line 164 "grammer.y"
	{printf("%d ",idnumber2); if(GetAttr(LookUp2(idnumber4, idnumber2),ARGNUM_ATTR)!=counter5){error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);} yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-3].tptr,yystack.l_mark[-1].tptr); counter5=0; }
break;
case 79:
#line 166 "grammer.y"
	{counter5=1; yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 80:
#line 167 "grammer.y"
	{counter5=counter5+1; yyval.tptr = MakeTree(CommaOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 81:
#line 171 "grammer.y"
	{yyval.tptr = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );}
break;
case 82:
#line 172 "grammer.y"
	{yyval.tptr=MakeTree(ReturnOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) ); }
break;
case 83:
#line 176 "grammer.y"
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 84:
#line 177 "grammer.y"
	{yyval.tptr = MakeTree(IfElseOp, yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 85:
#line 179 "grammer.y"
	{yyval.tptr= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr));}
break;
case 86:
#line 180 "grammer.y"
	{yyval.tptr=MakeTree(IfElseOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp,yystack.l_mark[-1].tptr,yystack.l_mark[0].tptr));}
break;
case 87:
#line 184 "grammer.y"
	{yyval.tptr= MakeTree(LoopOp,yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr );}
break;
case 88:
#line 188 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 89:
#line 189 "grammer.y"
	{ yyval.tptr=MakeTree(LTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 90:
#line 190 "grammer.y"
	{ yyval.tptr=MakeTree(GTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 91:
#line 191 "grammer.y"
	{ yyval.tptr=MakeTree(EQOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 92:
#line 192 "grammer.y"
	{ yyval.tptr=MakeTree(NEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 93:
#line 193 "grammer.y"
	{ yyval.tptr=MakeTree(LEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 94:
#line 194 "grammer.y"
	{ yyval.tptr=MakeTree(GEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 96:
#line 200 "grammer.y"
	{yyval.tptr=MakeTree(AddOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 97:
#line 201 "grammer.y"
	{yyval.tptr=MakeTree(UnaryNegOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 98:
#line 202 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 99:
#line 204 "grammer.y"
	{yyval.tptr= MakeTree(AddOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 100:
#line 205 "grammer.y"
	{yyval.tptr= MakeTree(UnaryNegOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 101:
#line 206 "grammer.y"
	{yyval.tptr= MakeTree(OrOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 102:
#line 207 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 103:
#line 211 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 104:
#line 213 "grammer.y"
	{yyval.tptr= MakeTree(MultOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 105:
#line 214 "grammer.y"
	{yyval.tptr= yyval.tptr= MakeTree(DivOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 106:
#line 215 "grammer.y"
	{yyval.tptr= MakeTree(AndOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 107:
#line 216 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 108:
#line 220 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 109:
#line 221 "grammer.y"
	{yyval.tptr=yystack.l_mark[-1].tptr;}
break;
case 110:
#line 222 "grammer.y"
	{yyval.tptr = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),yystack.l_mark[0].tptr); }
break;
case 111:
#line 224 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 112:
#line 225 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 113:
#line 226 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 114:
#line 230 "grammer.y"
	{yyval.tptr= MakeLeaf(NUMNode, yystack.l_mark[0].intg);}
break;
case 115:
#line 231 "grammer.y"
	{yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);}
break;
case 116:
#line 235 "grammer.y"
	{if(IsAttr(LookUp(idnumber4), DIMEN_ATTR)){if(GetAttr(LookUp(idnumber4), DIMEN_ATTR)!=counter3){error_msg(INDX_MIS,CONTINUE, idnumber4,0);} counter3=0;} yyval.tptr = MakeTree(VarOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 117:
#line 237 "grammer.y"
	{idnumber4= yystack.l_mark[0].intg; yyval.tptr = MakeLeaf(IDNode, LookUp(yystack.l_mark[0].intg));}
break;
case 118:
#line 239 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr; }
break;
case 119:
#line 240 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 120:
#line 242 "grammer.y"
	{counter3 =counter3+1; yyval.tptr=MakeTree(SelectOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 121:
#line 243 "grammer.y"
	{idnumber2=yystack.l_mark[-1].intg; LookUp(idnumber4); yyval.tptr= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, LookUp2(idnumber4,yystack.l_mark[-1].intg)),MakeLeaf(DUMMYNode,0)), yystack.l_mark[0].tptr); SetAttr(LookUp2(idnumber4,yystack.l_mark[-1].intg),DIMEN_ATTR,0);}
break;
case 122:
#line 245 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 123:
#line 246 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp,yystack.l_mark[-2].tptr ,MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0)));}
break;
case 124:
#line 249 "grammer.y"
	{}
break;
#line 1186 "y.tab.c"
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
