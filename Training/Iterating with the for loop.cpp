#include <stdio.h>

void main()
{
	int ia[] = { 1, 2, 3, 4, 5, 0 };

	for (int *ip = ia; *ip; ++ip) // int x is creating the testing variable, x is testing to see if the value to true, and --x is telling it what to do before it starts a new loop
	{
		printf("value is is %d\n", *ip);
	}






	/*for (int x = 5; x; --x) // int x is creating the testing variable, x is testing to see if the value to true, and --x is telling it what to do before it starts a new loop
	{
	printf("x is %d\n", x);
	} */


	while (int a = 1); {} //Keeps console up
}