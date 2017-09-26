#include <stdio.h>
//#include "func.h" - This is used for declaring a function which is in another file such as the header file.

int func(int x); // If you are going to put the function after the when is is used, you will have to have a declaring value to tell the compiler to look for it below.

void main()
{
	printf("Hellow, World!\n");
	int y = 50;
	int x = func(&y);
	printf("The number is %d\n", x);
	printf("y is %d\n", y);


	while (int a = 1); {} //Keeps console up

}

int func(int * x)	// Because y is not a number but a name, you must use a pointer to point towards the adresse of y
{					// Otherwise y will not be stored in x, and will return the number 50
	printf("This is in the function\n");
	*x += 25;
	return *x;
}


