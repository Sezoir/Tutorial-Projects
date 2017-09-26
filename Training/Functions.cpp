#include <stdio.h>

void f(int *p)				// The value p carries as its value, a pointer to a.
{
	++(*p);						// So if we want to increment the value of a, we need to so by dereference the pointer. The *is called the indirection operatoror sometimes the dereference operator.
}

void main(void)
{
	int a = 1;
	f(&a);						//The ampersand (&), also known as the address of operator
	printf("a is %d\n", a);

	while (true) {}

}





/*
void f(int a)	//As this a is in a different block, is has a different scope than the a from the main function.
{				//So the callers copy will remain as the value 1.
	++a;
}

void main(void)
{
	int a = 1;
	f(a);
	printf("a is %d\n", a);

	while(true) {}
}
----------------------------------------
	- As of C++, functions can have the same name (Will not cause a name collision) as the function is based on the function signature.
	- The function signature is based of the return type, the name of the functions and the type of the function arguments.



} */
