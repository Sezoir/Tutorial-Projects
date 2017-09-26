#include <iostream>
#include <string>
using namespace std;

void func(string &);

void main()
{
	string s = "really big string with lots of text in it";
	func(s);
	printf("s is %s\n", s.c_str()); // .c_str() is a way of displaying a C++ string.

	while (true) {}
}

void func(string & s) // The variables inside a () is called a parameter, and is a way for the function func to make a copy of a variable inputed into the function main.
{
	cout << "in func() " << s << endl;
}