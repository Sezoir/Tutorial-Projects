#include <iostream>
using namespace std;

int f(int i)
{
	cout << "this is f()" << endl;
	return i;
}

void main()
{
	int i;
	int(*pFunc) (int) = &f;	// First parentheses is used to declare what type, and the second parentheses is used to state the argument.
	i = (*pFunc)(47);
	cout << i << endl;

	while (true) {};
}