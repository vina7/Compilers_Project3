%{ /* definition */
#include "proj2.h"
#include <stdio.h>
#include "proj3.h"
#include <string.h>
%}
%start Program
%token <intg> ANDnum ASSGNnum DECLARATIONSnum DOTnum ENDDECLARATIONSnum EQUALnum GTnum IDnum INTnum LBRACnum LPARENnum METHODnum NEnum ORnum PROGRAMnum RBRACnum RPARENnum SEMInum VALnum WHILEnum CLASSnum COMMAnum DIVIDEnum ELSEnum EQnum GEnum ICONSTnum IFnum LBRACEnum LEnum LTnum MINUSnum NOTnum PLUSnum RBRACEnum RETURNnum SCONSTnum TIMESnum VOIDnum ERRORnum STRERRORnum COMMERRORnum IDERRORnum BACKSLASHnum EOFnum			
%type <tptr> Variable Expre MethodCallStatement Expression AssignmentStatement SimpleExpression WhileStatement IfStatement Statements_Op4 Statements_Op3  ReturnStatement Statementsop Statement StatementList AssignmentStatement Statements_Op MethodCallStatement Statements_Op2 IFState_Op Term Simple_op Simple_op2 UnsignedConstant Term_op Factor Factor_op Variable Variable_op2 Variable_op3 Variable_op ClassBodyC FieldDeclC FieldDeclE
Program ProgramB ClassDecl ClassBody ClassBodyB Decls DeclsB FieldDecl VariableDeclId VariableDeclIdB VariableInitializer ArrayCreationExpression ArrayCreationExpressionB MethodDecl FormalParameterList FormalParameterListC Block Type TypeB ArrayInitializer ArrayInitializerB epsilon 
FieldDeclD MethodHelp ClassName Variableid ProgramC
%% /* yacc specification */

// First Half of Grammar - Ryan //

/* Program */
Program:
	ProgramC IDnum SEMInum ProgramB {$$ = MakeTree(ProgramOp, $4, MakeLeaf(STNode, InsertEntry($2)));  
	   STPrint(); printtree($$, 0);};
ProgramC:
	PROGRAMnum {STInit();};
ProgramB:
	ClassDecl {$$ = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), $1);} |
	ProgramB ClassDecl  {$$ = MakeTree(ClassOp, $1, $2);};

/* Class Declarations */
ClassDecl:
	CLASSnum ClassName ClassBody {$$ = MakeTree(ClassDefOp, $3,$2); CloseBlock();};
ClassName:
	IDnum {if(LookUpHere($1)!=0){error_msg(REDECLARATION,CONTINUE,$1,0);} $$=MakeLeaf(STNode, InsertEntry($1)); SetAttr(LookUpHere($1), KIND_ATTR, CLASS); OpenBlock();};
/* ClassBody */
ClassBody:
    LBRACEnum ClassBodyB RBRACEnum {$$ = $2;} |
    LBRACEnum RBRACEnum {$$ = MakeLeaf(DUMMYNode, 0);}| 
	LBRACEnum ClassBodyC RBRACEnum {$$ = $2;};
ClassBodyB:
    Decls {$$ = $1;};
ClassBodyC:
    ClassBodyC MethodDecl  { $$ = MakeTree(BodyOp, $1, $2); } |
    MethodDecl {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), $1);} | 
	ClassBodyB {$$=$1;};
	
/* Declarations */
Decls:
	DECLARATIONSnum ENDDECLARATIONSnum {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));} |
	DECLARATIONSnum DeclsB ENDDECLARATIONSnum {$$ = $2;};
DeclsB:
	FieldDecl {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), $1);} |
	DeclsB FieldDecl {$$ = MakeTree(BodyOp, $1, $2);};
	
/* Field Declarations */
FieldDecl:
	FieldDeclE VariableDeclId SEMInum {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $2, MakeTree(CommaOp, $1, MakeLeaf(DUMMYNode, 0)))); counter = 0;} |
	FieldDeclE VariableDeclId FieldDeclD SEMInum {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $2, MakeTree(CommaOp, $1, $3))); counter = 0;} |
	FieldDeclE FieldDeclC COMMAnum VariableDeclId SEMInum {$$ = MakeTree(DeclOp, $2, MakeTree(CommaOp, $4, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));counter = 0;} |
	FieldDeclE FieldDeclC COMMAnum VariableDeclId FieldDeclD SEMInum {$$ = MakeTree(DeclOp, $2, MakeTree(CommaOp, $4, MakeTree(CommaOp, GlobalType, $5)));counter = 0;} ;
FieldDeclC:
	VariableDeclId {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $1, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));} |
	VariableDeclId FieldDeclD {$$ = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, $1, MakeTree(CommaOp, GlobalType, $2)));} |
	FieldDeclC COMMAnum VariableDeclId {$$ = MakeTree(DeclOp, $1, MakeTree(CommaOp, $3, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));} |
	FieldDeclC COMMAnum VariableDeclId FieldDeclD {$$ = MakeTree(DeclOp, $1, MakeTree(CommaOp, $3, MakeTree(CommaOp, GlobalType, $4)));};
FieldDeclD:
	EQUALnum VariableInitializer{$$ = $2;};
FieldDeclE:
	Type {GlobalType = $1; $$=$1;};

/* Variable Declaration ID */
VariableDeclId:
	IDnum VariableDeclIdB { counter2=0; idnumber=$1;   $$ = MakeLeaf(STNode, InsertEntry($1)); SetAttr(LookUp($1),DIMEN_ATTR,counter);} |
	IDnum { idnumber=$1;  counter2=0;  $$ = MakeLeaf(STNode, InsertEntry($1)); SetAttr(LookUp($1),DIMEN_ATTR,counter);};
VariableDeclIdB:
	LBRACnum RBRACnum {counter=1;} |
	VariableDeclIdB LBRACnum RBRACnum {counter=counter+1;};	
	
/* VariableInitializer */
VariableInitializer:
	Expression {$$ = $1;} |
	ArrayInitializer {$$ = $1;} |
	ArrayCreationExpression {$$ = $1;};
	
/* ArrayInitializer */
ArrayInitializer:
	LBRACEnum VariableInitializer RBRACEnum {$$ = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), $2), GlobalType);} |
	LBRACEnum ArrayInitializerB RBRACEnum {$$ = MakeTree(ArrayTypeOp, $2, GlobalType);};
ArrayInitializerB:
	VariableInitializer {$$ = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), $1);} |
	ArrayInitializerB COMMAnum VariableInitializer {$$ = MakeTree(CommaOp, $1, $3);};
	
/* ArrayCreationExpression */
ArrayCreationExpression:
	INTnum ArrayCreationExpressionB { if(GetAttr(LookUp(idnumber), DIMEN_ATTR)!=counter2){error_msg(INDX_MIS,CONTINUE, idnumber,0);}$$ = MakeTree(ArrayTypeOp, $2, MakeLeaf(INTEGERTNode, 0));};
ArrayCreationExpressionB:
	LBRACnum Expression RBRACnum {counter2 = 1; $$ = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), $2);} |
	ArrayCreationExpressionB LBRACnum Expression RBRACnum {counter2=counter2 +1; $$ = MakeTree(BoundOp, $1, $3);};

/* Method Declaration */
MethodDecl:
	METHODnum Type MethodHelp LPARENnum RPARENnum Block { SetAttr(LookUp(idnumber3),ARGNUM_ATTR,counter4); counter4=0; SetAttr(LookUp(idnumber3), KIND_ATTR, FUNC); ReturnType = $2; $$ = MakeTree(MethodOp, MakeTree(HeadOp, $3, MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , ReturnType)), $6); CloseBlock(); } |
	METHODnum VOIDnum MethodHelp LPARENnum RPARENnum Block { SetAttr(LookUp(idnumber3),ARGNUM_ATTR,counter4); counter4=0; SetAttr(LookUp(idnumber3), KIND_ATTR, PROCE); $$ = MakeTree(MethodOp, MakeTree(HeadOp, $3, MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , MakeLeaf(DUMMYNode, 0))), $6); CloseBlock(); } |
	METHODnum Type MethodHelp LPARENnum FormalParameterList RPARENnum Block { SetAttr(LookUp(idnumber3),ARGNUM_ATTR,counter4); counter4=0; SetAttr(LookUp(idnumber3), KIND_ATTR, FUNC); ReturnType = $2; $$ = MakeTree(MethodOp, MakeTree(HeadOp, $3, MakeTree(SpecOp, $5, ReturnType)), $7); CloseBlock();} |
	METHODnum VOIDnum MethodHelp LPARENnum FormalParameterList RPARENnum Block { SetAttr(LookUp(idnumber3),ARGNUM_ATTR,counter4); counter4=0; SetAttr(LookUp(idnumber3), KIND_ATTR, PROCE); $$ = MakeTree(MethodOp, MakeTree(HeadOp, $3, MakeTree(SpecOp, $5, MakeLeaf(DUMMYNode, 0))), $7); CloseBlock();};
MethodHelp:
	IDnum { if(strcmp(getname($1),"main")==0){if(ismain==0){ismain=ismain+1;}else{error_msg(MULTI_MAIN,CONTINUE,$1,0);}} idnumber3 = $1;  if(LookUpHere($1)!=0){error_msg(REDECLARATION,CONTINUE,$1,0);} $$=MakeLeaf(STNode,InsertEntry($1));  OpenBlock();};

/* FormalParameterList */
FormalParameterList:
	VALnum INTnum IDnum FormalParameterListC {  counter4=counter4 +1;$$ = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry($3)), MakeLeaf(INTEGERTNode, 0)), $4);SetAttr(LookUp($3),DIMEN_ATTR,0);}|
	VALnum INTnum IDnum { counter4=counter4+1; $$ = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry($3)), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0)); SetAttr(LookUp($3),DIMEN_ATTR,counter);} |
	INTnum IDnum FormalParameterListC { counter4=counter4+1; $$ = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry($2)), MakeLeaf(INTEGERTNode, 0)), $3); SetAttr(LookUp($2),DIMEN_ATTR,counter);} |
	INTnum IDnum {counter4=counter4+1;$$ = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry($2)), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));SetAttr(LookUp($2),DIMEN_ATTR,counter);};
FormalParameterListC:
	COMMAnum IDnum {counter4=counter4+1; $$ = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry($2)), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));SetAttr(LookUp($2),DIMEN_ATTR,counter);} |
	COMMAnum IDnum FormalParameterListC {counter4=counter4+1; $$ = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(STNode, InsertEntry($2)), MakeLeaf(INTEGERTNode, 0)), $3); SetAttr(LookUp($2),DIMEN_ATTR,counter);} |
	SEMInum FormalParameterList {$$ = $2;};

/* Block */
Block:
	Decls StatementList {$$ = MakeTree(BodyOp, $1, $2);} |
	StatementList {$$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), $1); };

/* Type */
Type:
	IDnum TypeB { $$ = MakeTree(TypeIdOp, MakeLeaf(IDNode, LookUp($1)), $2);} |
	INTnum TypeB { $$ = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), $2);} |
	IDnum {$$ = MakeTree(TypeIdOp, MakeLeaf(IDNode, LookUp($1)), MakeLeaf(DUMMYNode, 0));} |
	INTnum {$$ = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), MakeLeaf(DUMMYNode, 0));};
TypeB:
	LBRACnum RBRACnum { counter =1; $$ = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));} |
	LBRACnum RBRACnum TypeB {counter= counter+1; $$ = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), $3);} |
	LBRACnum RBRACnum DOTnum Type {counter =counter +1;$$ = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeTree(FieldOp, $4, MakeLeaf(DUMMYNode, 0)));};

	
// Second Half of Grammar - Vin //

/*Statement List rule*/
StatementList: 
	LBRACEnum Statementsop RBRACEnum {$$ = $2;} |  
	LBRACEnum RBRACEnum {$$ = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),MakeLeaf(DUMMYNode,0));} ;
Statementsop: 
	Statement {$$ = MakeTree(StmtOp, MakeLeaf(DUMMYNode, 0),$1);}|
	Statementsop SEMInum {$$ = $1;}|
	Statementsop SEMInum Statement {$$ = MakeTree(StmtOp,$1, $3);};
	
/*Statement*/
Statement : 
	AssignmentStatement {$$ = $1;} | 
	Statements_Op {$$ = $1;};
Statements_Op : 
	MethodCallStatement {$$ = $1;} | 
	Statements_Op2 {$$ = $1;};
Statements_Op2: 
	ReturnStatement {$$ = $1;} | 
	Statements_Op3 {$$=$1;};
Statements_Op3: 
	IfStatement {$$ = $1;} | 
	Statements_Op4 {$$ = $1;};
Statements_Op4: 
	WhileStatement {$$ = $1;};
	
/*Assignemnt*/
AssignmentStatement: 
	Variable ASSGNnum Expression {$$ = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),$1),$3); if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);} isstring=0;};
	
/*MethodCallStatement*/
MethodCallStatement: 
	Variable LPARENnum RPARENnum { if(idnumber2!=0){if(GetAttr(LookUp2(idnumber4, idnumber2),ARGNUM_ATTR)!=counter5){ error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);}}else {if(GetAttr(LookUp(idnumber4),ARGNUM_ATTR)!=counter5){ error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);}} $$ = MakeTree(RoutineCallOp,$1,MakeLeaf(DUMMYNode,0)); } | 
	Variable LPARENnum Expre RPARENnum { if(strcmp(getname(idnumber6),"system")!=0 || (strcmp(getname(idnumber2),"println")!=0)){if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber6,0);} }  if(idnumber2!=0){ if(GetAttr(LookUp2(idnumber6, idnumber2),ARGNUM_ATTR)!=counter5){error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);}}else {if(GetAttr(LookUp(idnumber6),ARGNUM_ATTR)!=counter5){ error_msg(ARGUMENTS_NUM2,CONTINUE,idnumber2,0);}} $$ = MakeTree(RoutineCallOp,$1,$3); counter6=0;  counter5=0; isstring=0; };
Expre: 
	Expression {counter5=1; $$ = MakeTree(CommaOp, $1,MakeLeaf(DUMMYNode,0) ); }|  
	Expression COMMAnum Expre {counter5=counter5+1; $$ = MakeTree(CommaOp,$1,$3);}; 
	
/*Return rule*/
ReturnStatement: 
	RETURNnum {$$ = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );} | 
	RETURNnum Expression {$$=MakeTree(ReturnOp, $2,MakeLeaf(DUMMYNode,0) ); if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);}isstring=0;};
	
/*If rule*/
IfStatement : 
	IFState_Op {$$= $1;}| 
	IFState_Op ELSEnum StatementList {$$ = MakeTree(IfElseOp, $1,$3);};
IFState_Op : 
	IFnum Expression StatementList {$$= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, $2, $3));if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);}isstring=0;} | 
	IFState_Op ELSEnum IFnum Expression StatementList {$$=MakeTree(IfElseOp, $1, MakeTree(CommaOp,$4,$5)); if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);}isstring=0;}
	
/*While rule*/
WhileStatement : 
	WHILEnum Expression StatementList {$$= MakeTree(LoopOp,$2, $3 ); if(isstring ==1){error_msg(TYPE_MIS,CONTINUE, idnumber5,0);}isstring=0; };
	
/* Expression rule */
Expression : 
	SimpleExpression {$$ = $1;}
	| SimpleExpression LTnum SimpleExpression { $$=MakeTree(LTOp,$1,$3); }| 
	SimpleExpression GTnum SimpleExpression { $$=MakeTree(GTOp,$1,$3); } | 
	SimpleExpression EQnum SimpleExpression { $$=MakeTree(EQOp,$1,$3); } | 
	SimpleExpression NEnum SimpleExpression { $$=MakeTree(NEOp,$1,$3); } | 
	SimpleExpression LEnum SimpleExpression { $$=MakeTree(LEOp,$1,$3); } | 
	SimpleExpression GEnum SimpleExpression { $$=MakeTree(GEOp,$1,$3); };
	
/*Simple Expression*/
SimpleExpression : 
	Simple_op2;
Simple_op : 
	PLUSnum Term {$$=MakeTree(AddOp,$2,MakeLeaf(DUMMYNode,0));} | 
	MINUSnum Term {$$=MakeTree(UnaryNegOp,$2,MakeLeaf(DUMMYNode,0));} | 
	Term {$$=$1;} ;
Simple_op2: 
	Simple_op2 PLUSnum Term {$$= MakeTree(AddOp,$1,$3);} | 
	Simple_op2 MINUSnum Term {$$= MakeTree(UnaryNegOp,$1,$3);}| 
	Simple_op2 ORnum Term {$$= MakeTree(OrOp,$1,$3);} | 
	Simple_op {$$=$1;};
	
/*Term rules*/
Term : 
	Term_op {$$=$1;};
Term_op: 
	Term_op  TIMESnum Factor {$$= MakeTree(MultOp,$1,$3);} | 
	Term_op DIVIDEnum Factor {$$= $$= MakeTree(DivOp,$1,$3);} | 
	Term_op ANDnum Factor {$$= MakeTree(AndOp,$1,$3);} | 
	Factor {$$=$1;};
	
/*Factor rules*/
Factor : 
	Factor_op {$$=$1;} | 
	LPARENnum Expression RPARENnum {$$=$2; if(isstring ==1){ error_msg(TYPE_MIS,CONTINUE, idnumber5,0);} isstring=0;} | 
	NOTnum Factor {$$ = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),$2); } ;
Factor_op: 
	UnsignedConstant {$$=$1;} | 
	Variable {$$=$1;} |
	MethodCallStatement {$$=$1;};
	
/*UnsignedConstant rules*/
UnsignedConstant: 
	ICONSTnum {$$= MakeLeaf(NUMNode, $1);} | 
	SCONSTnum {$$ = MakeLeaf(STRINGNode, $1); idnumber5=$1; isstring=1;}; 
	
/*Variable rule*/
Variable : 
	Variableid Variable_op {if(IsAttr(LookUp(idnumber4), DIMEN_ATTR)){if(GetAttr(LookUp(idnumber4), DIMEN_ATTR)!=counter3){error_msg(INDX_MIS,CONTINUE, idnumber4,0);} counter3=0;} $$ = MakeTree(VarOp, $1, $2);};
Variableid:
	IDnum {idnumber4= $1; if(counter6==0){idnumber6=$1;} $$ = MakeLeaf(IDNode, LookUp($1));};
Variable_op: 
	Variable_op2 {$$=$1; } | 
	epsilon {$$ = MakeLeaf(DUMMYNode,0);};
Variable_op2 : 
	LBRACnum Variable_op3 RBRACnum Variable_op {counter3 =counter3+1; $$=MakeTree(SelectOp, $2, $4);} | 
	DOTnum IDnum Variable_op {counter6=1; idnumber2=$2; LookUp(idnumber4); $$= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, LookUp2(idnumber4,$2)),MakeLeaf(DUMMYNode,0)), $3); SetAttr(LookUp2(idnumber4,$2),DIMEN_ATTR,0);};
Variable_op3 : 
	Expression {$$ = MakeTree(IndexOp, $1,MakeLeaf(DUMMYNode,0) );} | 
	Expression COMMAnum Expression {$$ = MakeTree(IndexOp,$1 ,MakeTree(IndexOp, $3,MakeLeaf(DUMMYNode,0)));} ;
	
/* Epsilon */
epsilon : {};

%%
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
