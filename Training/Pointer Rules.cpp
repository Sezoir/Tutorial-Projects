#include <iostream>
using namespace std;

void main(void)
{
	int a = 5;
	int *b = &a;

	cout << *b << endl;
	cout << b << endl;

	while (true) {}
}



/*
	- The asterisk (*) has two different operation depending on the situation.
	- It can be used to dereference an address to find its data, e.g: a = 1; b = &a; c = *b; Therefore c = 1.
	- Its other use is to initite (create) a pointer, e.g: int * a

	- A pointer is used to store a memory location or memory address of an object by using the ampersand(&).
	- The type tag that is applied before the pointer is not the type of the pointer itself, but the type of the data the pointer points to.
	- You can find the data of the address the pointer points to by dereferencing the pointer.
	- A pointer that is = to another pointer will store the address of the second pointer.
	- Multiple pointers can be created with the same pointer to data type, e.g: int *b = &a, *c = &a; or int *b, *c

	- When using pointers with integer arrays, the memory locations for integer arrays are always 1 after the next, so you can iterate through the array addresses by +1 onto the address.

	- When using pointers with arrays other than integers it is a little different. The reason for this is that when adding one to a pointer, the pointer is made to point to the following
	  element of the same type, and, therefore, the size in bytes of the type it points to is added to the pointer.

	- When trying to find the address of a character in character pointer array (char *a = "String), make sure to use a void pointer or else the compiler will think you are trying to create
	  another character pointer array, e.g:
		char *a = "String";
		for ( char *b = &a[0]; b != &a[sizeof(a)] ; ++b)
		{
			cout << (void *) b << endl;
		}
*/