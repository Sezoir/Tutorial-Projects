#include <iostream>
using namespace std;

void main()
{
	char cstring[] = "Superstring";

	cout << "length of array: " << sizeof(cstring) << endl;		// The value will always be 1 byte more than the number of characters in the character array.
	cout << cstring << endl;									// This is due to c strings having a null terminator at the end of the array.

	for (unsigned int i = 0; cstring[i]; i++)
	{
		printf("%02d: %c\n", i, cstring[i]);
	}

	while (true) {}
}

/*
	-If the array has a set size i.e "char cstring[5]", and more than 4 character are stored in the array,  then the extra characters and the null terminator
	 will be written outside the end of the array, overwriting memory not belonging to the array. This is called a buffer overflow.
	-C does not provent you from using memory you dont own. The result is undefined bahaviour, which means your program could do anything.
*/