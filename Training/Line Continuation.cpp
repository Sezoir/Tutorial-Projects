#include <stdio.h>

//the macro ends at the end of the line
//The \ can be used to extend the macro to the next line.

#define SWAP(a,b) do {   \
											a ^= b;		\
											b ^= a;		\
											a ^= b;		\
																				} while(0) //the do loop allows for a block.


void main()
{
	printf("Hellow, Wor\
ld!\n");  //The backslash can be used to continue the line, as it ignores the rest of the line

	int them = 7;
	int that = 9;

	printf("them is: %d, that is: %d\n", them, that);
	SWAP(them, that);
	printf("them is: %d, that is: %d\n", them, that);

	while (true); {} // Keeps console up
}




/*
The operator ^= is a bitwise XOR, and hence uses binary version of the number for the operation.

Normal:	0 1 02 03 004 005 006 007 0008 0009 0010 0011 0012 0013 0014 0015
Binary:	0 1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111

Say a = 7 ---> 0111
Say b = 9 ---> 1001

a ^= b;
--> a = 1110
b ^= a;
--> b = 0111
a ^= b;
--> 1001

Therfore now, a = 9 and b = 7

*/