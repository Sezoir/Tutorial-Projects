#include <stdio.h>

extern int var;			//This is calling upon the values from another file in the same folder as it.
extern void func();		// Therefore this allows you to use those values in this file.

void main()
{
	func();
	printf("The extern var is %d\n", var);

	while (int a = 1); {} //Keeps console up
}