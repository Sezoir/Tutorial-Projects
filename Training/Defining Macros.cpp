#include <stdio.h>

#define MACRO1(a, b) ( a > b ? a : b )

void main()
{
	int them = 5;
	int that = 7;
	printf("them: %d, that: %d, result: %d\n", them, that, MACRO1(them, that));

	while (int a = 1); {} // Keeps console up
}