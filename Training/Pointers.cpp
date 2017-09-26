#include <iostream>

using namespace std;

static int x;
static int *ip; // * Declares that the interger ip is a pointer, which will point to a location, rather than the content.

void main()
{
	ip = &x; // This returns the address of the interger x to ip because of the &x.
	cout << ip << endl; // The address is the location of where the actualy interger is stored in the memory.

	int y = *ip; // This assigns the content in the pointer *ip to y, which points to the addresse of the inter x in the memory. 

	while (int a = 1) {}

}
