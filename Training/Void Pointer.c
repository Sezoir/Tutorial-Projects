#include <stdio.h>

void * func(void *);

void main()
{
	printf("This is a void-pointer.c\n");

	char * cp = "1234";
	int * vp = func(cp);	//Creates an integer pointer = to the void pointer pointing to the character pointer.
	printf("%08x\n", *vp);	//Returns the 1234 as a hexadecimal number in reverse order.

	while (1) {}
}

void * func(void * vp)
{
	return vp;
}