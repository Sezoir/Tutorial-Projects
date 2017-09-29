#include <iostream>
using namespace std;

struct S
{
	int a;
	int b;
	int c;
};

void main()
{
	struct S s = { 1, 2, 3 };
	struct S *sp = %s;

	printf("s has members a: %d, b: %d, c: %d", s.a, s.b, s.c);
	printf("s has members a: %d, b: %d, c: %d", sp->a, sp->b, sp->c);	//Note that "->" dereferences and gets to the member in one operator.

	while (true) {};
}

/*
	The period	"." is a member operator that is used for accessing the members of a struct or class.

*/

