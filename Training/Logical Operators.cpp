#include <iostream>
using namespace std;

void main()
{
	if(true && true)
	{
		puts("true");
	}
	else
	{
		puts("false");
	}

	while (true) {};
}

/*
	C uses 1 and 0 as its logical operator for true and false in corresponding order. 
	C++ instead uses the keywords "true" and "false".
	These operators can be used for making logical arguments.
	&& can be used for the symbolic word "And".
	|| can be used for the symbolic word "Or".
*/
