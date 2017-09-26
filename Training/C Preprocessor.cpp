/*

File Inclusion, for example when you use the include directive, the contonent of the file will be included in replace of the include directive
Then this combined file, called a translation unit is passed to the compiler

A preprocessor macros is another preprocessor, for example #define CONSTANT 1, will replace the word CONSTANT n the compiler with the digit 1

Conditional Processing allows you to compile parts of your code if the conditions are true

Pragma's may be used to define certain interpertation behaviours to the compiler
However Pragma's cannot be ported


*/

#include <stdio.h>

#define ONE (1)	// This is not a constant variable, as all it does is replace the letter ONE with the digit 1
// As this is a preprocessor, you do not need a ; at the end of it, as it is not part of the C language, as the same preprocessor may be used in multiple languages
// Sometime you can get error so it is very common to surrend the digit or string in ()

void main()
{
	printf("The constant is: %d\n", ONE);

	while (int a = 1); {} // Keeps console up
}