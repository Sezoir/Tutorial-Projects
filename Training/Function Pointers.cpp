#include <iostream>
using namespace std;

void func();

void main()
{
	void(*fptr)() = func;		// Brackets are used around the *fptr due to operator precedence.
	(*fptr)();					// The ampersand (&) is not needed for function pointers, but is considered good practice due to easier understanding.

	while (true) {}
}

void func()
{
	printf("this is func()\n");
}

/*
- Variables declared in a function default to automatic storage.
*/