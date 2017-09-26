#include <stdio.h>

void main()
{

	int x = printf("Hellow, World!\n"); // printf is an expression, however the whole line is a statement as it is terminated by a ;
	printf("printf returned %d\n", x);

	while (int a = 1); {} //Keeps console up
} // curley braces makes this section a block