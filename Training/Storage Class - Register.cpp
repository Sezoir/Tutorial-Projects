#include <stdio.h>

void main()
{
	for (int i = 1; i <= 5; ++i)
	{
		register int number = 1;	// This Works just like auto, however it tell the compiler to store in a register of the processor rather than storing in a temporary storage space.
		// Only use this when absolutely necassary,
		printf("This number is %d\n", number++);
	}

	while (int a = 1); {} //Keeps console up
}