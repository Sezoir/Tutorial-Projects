#include <stdio.h>

const int iOne = 1;		//This is the C++ version for constants 	#define ONE (1) - This is the C version for constants
const int iTwo = 2;		//											#define TWO (2)
const int iThree = 3;	//											#define THREE (3)
const int iFour = 4;	//											#define FOUR (4)

void main()
{
	int foo = 10;
	switch (foo)
	{
	case iOne:
		puts("one");
		break;
	case iTwo:
		puts("two");
		break;
	case iThree:
		puts("three");
		break;
	case iFour:
		puts("four");
		break;
	default:
		puts("Default");
		break;
	}

	while (int a = 1); {} //Keeps console up
}