#include <iostream>
using namespace std;

/* class A
{
	int ia;
public:
	void setA(const int a) { ia = a; }		// These types of functions in a class are known as accessor, as they are going to be used to access the private data member.
	int getA() { return ia; }

};

void main()
{
	A a;
	a.setA(47);
	cout << a.getA() << endl;

	while(true) {}
} */

class A
{
	int ia;
public:
	void setA(const int a);
	int getA() const;			// Adding the const after the argument makes it const safe.

};

void A::setA(const int a)
{
	ia = a;
}

int A::getA() const
{
	return ia;
}

void main()
{
	A a;
	a.setA(47);
	const A b = a;		// As I declared object b as a const, the implementation functions above, have to be declared const safe.
	cout << a.getA() << endl;
	cout << b.getA() << endl;

	while (true) {}
}

// Const safe means that once added on, you are not going to change anything that would not make it safe for a constant.
// Therefore a non-const object can use any of the non-const safe or const safe methods, however a const object may only use const safe methods.