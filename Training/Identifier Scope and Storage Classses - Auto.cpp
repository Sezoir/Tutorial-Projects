#include <stdio.h>

void main()
{
	int number = 1; // You have to declare the variable before it is used.
	// Also if the number is declared in a different block, then it will not be recognised.
	// There are different storage types that can be used when making a interger: Auto, Static, Extern and Register.
	// Auto is the default storage when a interger is defined in a block. So it is allocated a temporay space in this block and is deallocated at the end of the block.

	printf("This number is %d\n", number);

	while (int a = 1); {} //Keeps console up
}