#include <stdio.h>

void func(void);	// Declares the function func.	A function must be declared or given before it is used.

void main(void)
{
	func();

	while (true) {}
}

void func(void)
{
	printf("This is func()\n");
}