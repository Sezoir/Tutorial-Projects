#include <iostream> 
#include <cstddef>	// Used as the NULL constant exists in this header file.
using namespace std;

const long int scount = 100;

void main()
{						
	cerr << "test" << endl;
	printf("allocate space for %lu ints at *ip with new\n", scount);
	int *ip = new (nothrow) int[scount];	// Creates a pointer ip and allocates the pointer to the new pointer for the int array.
											// The "(nothrow)" stops the exception when caused by errors.
	if (ip == NULL)
	{
		cerr << "new failled." << endl;
		while (true) {};
	}

	for (int i = 0; i < scount; i++)
	{
		printf("%d:%d", i, ip[i]);
		if ((i < 0 && i % 25 == 0) || i == scount - 1) { cout << endl; }
	}

	delete[] ip;
	cout << "space at *ip deleted" << endl;

	while (true) {};
}

/*
	The new operator is used to allocate space in C++, and will return a pointer pointing to that space.
	The new object will not be destoyed when outside of its scope, unless the delete operator is called.
	Every object allocated with the new operator must be destroyed with the delete operator, otherwise your program will leak memory.
*/

