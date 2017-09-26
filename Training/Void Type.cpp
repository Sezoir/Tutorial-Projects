#include <iostream>
using namespace std;

void func(void);

void main()
{
	cout << "void-type.c" << endl;
	func();

	while (true) {}
}

void func(void)
{
	cout << "This is a function" << endl;
}

/* 
Void is used to return no value to functions in C
Void is not used for variable.
Void is only really used for function parameters and function returns. */