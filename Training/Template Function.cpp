#include <iostream>
#include <string>
using namespace std;

template <typename Type> Type maxof(Type a, Type b)	// The keyword "typename" indicates the type that will be templated, 
{													// but the keyword class can also be used and it often.
													// Either or these tokens mean the same thing
	return (a > b ? a : b);
}

void main()
{
	cout << maxof(7, 9) << endl;
	cout << maxof<string>("aaaa", "baaa") << endl;

	while (true) {};
}

/*
	- The example above is both type agnostic and type safe:
		- It is type agnostic in that is will work in any type that has support for the greater than operator.
		- It is type safe as in the compiler will generate a specialisation of the function for that given type, i.e on line 13 it will
		  generate a specialisation of that function for an integer type.
*/