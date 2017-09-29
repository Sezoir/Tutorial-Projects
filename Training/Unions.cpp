	#include <iostream>
#include <stdint.h>
using namespace std;

union ipv4				// Setup like this to pack/unpack ip addresses. Ip Addresses are 32 bits, and contains 4 8 bit fields, and each one of the fields is a seperate number.
{						// So the ip address can be used as 4 seperate objects, or as 1 object.
	struct
	{
		uint8_t a;
		uint8_t b;
		uint8_t c;
		uint8_t d;
	} bytes;
	uint32_t int32;
};


void main()
{
	union ipv4 addr;
	addr.bytes = { 192, 168, 0, 96 };
	printf("%d.%d.%d.%d - (%08x)\n",	// %x is used to print the data in a hexadecimal form.
		addr.bytes.a, addr.bytes.b, addr.bytes.c, addr.bytes.d, addr.int32);

	while (true) {}
}