#include <stdio.h>
#include "conditional.c.cpp" // This include the other file under that name.

#define FOO // As the define has come after the include, it the defined NUMBER will not be 47, as at the time it was not defined.

void main()
{
	printf("Number is %d\n", NUMBER);

	while (int a = 1); {} // Keeps console up
}