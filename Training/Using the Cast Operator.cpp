#include <iostream> 
using namespace std;

void main()
{												// - The size(of) operator will normally return a long unsigned int.
												// - However, the %d expects an int type. To get around this we use the cast operator 
												//   to convert the long unsigned int into a int.
	printf("Value is %d\n", (int) sizeof(int));	// - This is the C way of using the cast operator. This is typically better as 
												//   it allows for compatibility between C and C++ compilers. 
	printf("Value is %d\n", int(sizeof(int)));	// - This is the C++ way of using the cast operator.

	while (true) {};
}

// The cast operator is used to force a type conversion between two compatible types.
// There are two forms of the cast operator, and you use the one which suits you.