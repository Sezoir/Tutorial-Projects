#include <iostream>
using namespace std;

struct S
{
	int a;
	long b;
	char c;
	long int d;
	long long int e;
};

void main()
{
	struct S a;
	
	printf("size is %d\n", (int) sizeof(a));	// sizeof will return the bytes of a storage type as a unsigned integer.
												// In the parenthesis of the sizeof operator can be data types, data variables, objects, etc.
												// "size_t" is an unsigned integer type guaranteed to support the longest object for the platform you use.
	while (true) {};
}
