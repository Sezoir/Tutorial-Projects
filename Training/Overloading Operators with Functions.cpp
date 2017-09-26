#include <iostream>
using namespace std;

class A
{
	int a;
public:
	A(int a) : a(a) {};
	int value() { return a; }
};

int operator + (A & lhs, A & rhs)				// By using the keyword operator, it looks for the operator + for the function overload.
{
	cout << "Operator + for class A" << endl;
	return lhs.value() + rhs.value();
}

void main()
{
	A a(5);
	A b(42);

	cout << "Add them up: " << a + b << endl;

	while (true) {}
}