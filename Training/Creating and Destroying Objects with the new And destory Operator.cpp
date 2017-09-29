#include <iostream>
using namespace std;

class A 
{
	int _a;
	int _b;
	int _c;
public:
	A( int );
	~A();
	int a() { return _a; }
	int b() { return _b; }
	int c() { return _c; }
};

A::A(int i = 0) : _a(i), _b(i + 1), _c(i + 2)
{
	cout << "A constructor called" << endl;
}

A::~A()
{
	cout << "A destructor called" << endl;
}

void main()
{
	cout << "Allocating space for one A object" << endl;
	A * a = new (nothrow) A;	// Here, we are allocating space for the object with the "new" operator.
								// The "new" operator returns a pointer to the object. Then the "new" operator takes the name of the 
								// class it is allocating and it allocates space for that class and calls the constructor.
								// The nothrow operator to the "new" operator basically says to not throws exceptations if it fails.
								// If you use an array of objects, you must place the [] after A with the number in.
								// If you use "new" for an array, you cannot pass arguments to the constructors, so you are stuck with the default constructor.
	if (a == nullptr)			// Instead of a null pointer, you could use "void *", or "!a"
	{
		cerr << "new A failed." << endl;
		while (true) {};
	}
	printf("a: %d, %d, %d\n", a->a(), a->b(), a->c());	// Using the pointer member dereference	operators for a,b and c.
	delete a;	// Here we destroy the object that we created, by passing the pointer that was created by the "new" to the delete operator.
				// Note that if you use an array of objects, the delete needs to have [] after it. The delete operator will know how big the array is from the new pointer.
	cout << "space for A object deleted" << endl;

	while (true) {};
}