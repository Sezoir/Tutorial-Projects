#include <iostream>
using namespace std;

void main()
{
	char c;
	short int si;
	int i;
	long int li;
	long long int lli;

	cout << "Size of char c is " << sizeof(c) << endl;					//Char can hold up 8 bits.
	cout << "Size of short int si is " << sizeof(si) << endl;			//Short int can hold up to 16 bits or a maxiumum that it <=int.
	cout << "Size of int i is " << sizeof(i) << endl;					//Int must be at least 16 bits.
	cout << "Size of long int li is " << sizeof(li) << endl;			//Long int must be at least 32 bits.
	cout << "Size of long long int lli is " << sizeof(lli) << endl;		//Long long int must be at least 64 bits.

	printf("c is 127\n");
	c = 127;
	printf("c is %d\n", c);
	c++;
	printf("after increment, c is %d\n", c);

	while (true) {}
}

/*

1 Byte is equal to 8 bits.
When using sizeof(), it will give the number of bytes of the data type that is currently used by the memory.

*/