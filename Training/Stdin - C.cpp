#include <stdio.h>

enum { max_string = 127 }; //making a number
static char string[max_string + 1] = " "; //making a string

void main()
{
	printf("Type a string: ");
	fgets(string, max_string, stdin);
	printf("The string is: %s\n", string); 

	while (int a = 1) {}
}