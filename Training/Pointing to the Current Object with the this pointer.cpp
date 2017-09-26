#include <iostream>
using namespace std;

class Class1
{
	int i;
public:
	void setValue(int value) { i = value; }		// These types of functions in a class are known as accessor, as they are going to be used to access the private data member.
	int getValue() { return i; }
	void lookAtThis(int i);
};

void Class1::lookAtThis(int i)
{
	printf("i is %d\n", i);					// This prints the local scope as it overides the i from the global scope.
	printf("object i is %d\n", this->i);	// To do so, we use "this->i". "this" is actually a pointer, pointing to the object. 
}

void main()
{
	int i = 47;
	Class1 object1;

	object1.setValue(i);
	object1.lookAtThis(9);
	cout << "Value is " << object1.getValue() << endl;

	while (true) {}
}
