#include <iostream>
#include <string>
using namespace std;

void main()
{
	std::string cppstring = "This is a C++ string.";

	cout << "Size of the string is: " << sizeof(cppstring) << endl;
	cout << cppstring << endl;

	for (auto it = cppstring.begin(); it != cppstring.end(); ++it) // .begin() and .end() only work with strings	// for (unsigned int i = 0; i < cppstring.size(); i++)
	{
		printf("%c\n", *it);
	}

	while (true) {}
}



/*
-The C++ string class is not a fundamental type. This is a class from the standard template library.
-C++ strings are a container of characters.

for (char c : cppstring)  //cppstring can be replace with any container object, and char replace with its fundamental type
{
printf("%c\n", c);
}
*/