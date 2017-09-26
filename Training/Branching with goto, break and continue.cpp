#include <stdio.h>

void main()
{
	for (int i = 0; i < 10; ++i)
	{
		if (i == 5) continue; // break will end the for loop, whereas continue will skip everything after the continue and then carry on the loop
		printf("i is %d\n", i);
	}



	/*printf("Before the goto.\n"); //goto will skip past all the code untill it reaches the assign name and then it will carry on with the code
	goto target;
	printf("After the goto.\n");
	target:
	printf("After the target.\n"); */

	while (int a = 1) {}
}