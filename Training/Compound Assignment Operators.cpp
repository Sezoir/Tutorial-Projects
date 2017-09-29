#include <iostream>
using namespace std;

void main()
{
	int x = 5;
	int y = 10;
	x += y;	// Note that x += y is not the same as x = x + y. In the first scenario x is only evaulated once, 
			// where in the second it is evaluated twice. This can lead to issues when using functions with these operators.	

	cout << x << endl;

	while (true) {};
}

/*
	C and C++ support compound assignment operators.
	These are "+=, -=, *=, /=, %=, <<=, >>=, &=, |=, ^=".
*/
