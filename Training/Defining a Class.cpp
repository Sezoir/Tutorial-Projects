#include <iostream>
using namespace std;

/* class Class1
{
	int i;	// As it is not specified, this will be defaulted to private access.
	public:
	void setValue(int value) { i = value; }		// The "void setValue(int value) is part of the interface, whereas the {i = value;} is the implementation.
	int getValue() { return i; }
};

Normally is it considered good practice to seperate the interface and implementation. Hence: */

class Class1
{
	int i;
public:
	void setValue(int value);
	int getValue();
};

void Class1::setValue(int value)		// The compiler does not recognise that they are implementations, so we give it the name of the class, as if it was a namespace.
{
	i = value;
}
int Class1::getValue()
{
	return i;
}

void main()
{
	int i = 47;
	Class1 object1;

	object1.setValue(i);
	cout << "Value is " << object1.getValue() << endl;

	while (true) {}
}

/*
	- Typically in a project:
	- The interface (Class1 in this example) would be in a seperate header file.
	- The implementation would be a seperate .cpp file.
*/
