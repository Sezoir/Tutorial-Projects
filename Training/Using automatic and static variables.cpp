#include <iostream>
using namespace std;

void func();

void main()
{
	func();
	func();
	func();
	func();
	func();

	while (true) {}
}

void func()
{
	int o = 5;				// No storage specifier has been used, so is defaulted to automatic storage. This means the variable is destroyed at the end of the function/ end of its scope.
	static int i = 5;		// Static storage is not temporary, its persistant for the life of the process.

	printf("this is func(), o is %d\n", o++);
	printf("this is func(), i is %d\n", i++);
}

/*
- Variables declared in a function default to automatic storage.
*/