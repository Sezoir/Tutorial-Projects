#include <stdio.h>

void main()
{
	for (int i = 1; i <= 5; ++i)
	{
		static int number = 1;	// Static storage is permanant and will stay there after the block.
		// So this has to be used to see the increase of the interger, whereas auto would have remade the interger each time. 

		printf("This number is %d\n", number++);
	}

	while (int a = 1); {} //Keeps console up
}