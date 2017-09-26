#include <iostream>
using namespace std;

unsigned long int factorial(unsigned long int n)
{
	if (n < 2) return 1;
	//return factorial(n - 1) * n;		// The issue with using a recursive function is that for functions with a lot of iterations it can quickly use a lot of resources.
	unsigned long int result = n;
	while (n > 1) result *= --n;		// So a while loop is typically a lot faster and mreo efficient than a recursive function.
	return result;
}

void main()
{
	unsigned long int n = 10;
	cout << "factorial of " << n << " is " << factorial(n) << endl;

	while (true) {}
}