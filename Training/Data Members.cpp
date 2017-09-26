#include <iostream>
using namespace std;

/* struct A		- The only real difference between a struct and a class, is that a struct defaults its data members to public, where as a class defaults to private.
{
	int ia;
	int ib;
	int ic;
};

class A
{
public:
	int ia;
	int ib;
	int ic;
}; */

class A
{
public:
	int ia;
	string sb;
	int ic;
};

void main()
{
	A a = { 1, "two", 3 };

	printf("ia is %d, sb is %s, ic is %d\n", a.ia, a.sb.c_str(), a.ic);		// ".c_str()" gives us back a C string that can be used with printf.

	while (true) {}
}