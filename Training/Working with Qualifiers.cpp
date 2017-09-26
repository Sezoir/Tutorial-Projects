#include <iostream>
using namespace std;

void main()
{
	const int x = 50; //As const has been used, x cannot be changed from its initial value.
	x = 70;
	printf("x is %d\n", x);



	for (int i = 0; i < 5; ++i)
	{
		static int j = 12;	//As static has been used, the value j will exist after the excution of the block has been finished, as it will initalise once and then acculamate its value.
		j += i;
		printf("i is %d, j is %d\n", i, j);
	}
	while (true) {}
}