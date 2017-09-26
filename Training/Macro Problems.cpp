#include <stdio.h>

#define MAX(a, b) ( (a) > (b) ? (a) : (b))

int increment()
{
	static int i = 42;
	i += 5;
	printf("Increment is %d\n", i);
	return i;
}

void main()
{
	int x = 50;

	printf("Max of %d and %d is %d\n", x, increment(), MAX(x, increment()));

	while (int a = 1); {} // Keeps console up
}