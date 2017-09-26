#include <iostream>
using namespace std;

int &f(int & b)		//As this is now affecting variables outside of its scope which can lead to unintended side affects. A way to avoid this which is quite common is to be the quallifier const infront of the variables.
{
	return ++b;
}

void main()
{
	int i = 5;
	f(i);
	printf("i is %d\n", i);

	while (true) {}
}

/*
int & ir = i;	//Calling a reference variable as ir, and are referencing it to i.
ir = 10;

You cannot reference itself, have a pointer to a reference or have an array of references.
A reference cannot be null, cannot be uninitialised and cannot be chaged to another variable.

Sometimes you have to pass a class object as an argument to some function. If the object is passed by value, all of the object data is copied from that one variable to the other variable.
References are used to avoid this, and allows for more efficient code.
*/