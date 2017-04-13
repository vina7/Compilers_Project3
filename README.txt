Authors: Ryan Yoder and Vinayak Nesarikar

Instructions:
	1. make
	2. ./parser < filename
The rules that were appended for Semantic checking:
	Variable
	Factor
	while statement
	if statement
	return statement
	method call
	assignment statement
	method declarations
	class declarations
	
Project completed in group sessions; all work done collaboratively.

Semantic checks run as intended, specified below:
	1. All names declared within the same block (i.e., method or class) must be unique.
	2. All names used within the program must be declared such that using the scoping rule, there exists a
	corresponding declarations visible from each use of a name (i.e., there should be no uses of undeclared
	names).
	3. The whole program contains only one method with name “main”.
	4. The number of array indices in an indexed component (i.e. USE) should match the number of dimensions
	declared for the array (i.e. DEF). We will only have 1-dimension and 2-dimension arrays.
	5. The number of arguments in a method call must match the number of parameters in the declarations.
	6. String constants are only used in output statements.
	
	- All attributes specified by professor Zhang are included.
	- Semantic errors print out and allow the program to continue so that:
		 - all semantic errors within the program are identified 
		 - the symbol table and tree are still printed out
		 - some semantic errors may cause a segmentation fault (because of the tree and symbol table creation) but still prints out all the semantic errors
		 As allowed by professor Zhang
	- Program name and attributes print out in the symbol table, as Zhang said this was optional
	- The program compiles with two warnings, both of which are within functions that were provided for us by professor Zhang.
