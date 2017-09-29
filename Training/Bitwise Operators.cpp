#include <iostream>
using namespace std;

void main()
{
	unsigned int x = 5;
	unsigned int y = 10;

	printf("%08x, %08x, %08x\n", x, y, x & y);	// x and y has no common digits so the result is 00000000.
	printf("%08x, %08x, %08x\n", x, y, x | y);
	printf("%08x, %08x, %08x\n", x, y, x << 4);	// Takes any bits that are set and shift to the left by 4.

	while (true) {};
}

/*
	C provides bitwise operators which act on the acutally binary of the content of a number.
	This include; & (and), | (or), ^ (Xor), ~ (bitwise not), << (bit-left shift), >> (bit-right shift).
	These bitwise operators only work on integers, but can be overloaded to work on other types as well.
*/
