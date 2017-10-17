#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	const static int strSize = 1024;
	const char * source = "This is a string";
	char * string = NULL;

	printf("Allocating space for string.\n");
	string = (char *) malloc(strSize * sizeof(char)); // Malloc will allocate memory space and return a void pointer to that space.
	if (string == NULL)
	{
		puts("Cannot allocate memory.\n");
		while (true) {};
	}

	strncpy(string, source, strSize);
	printf("The string is %s\n", string);

	printf("Freeing string space.\n");
	free(string); // Frees the space allocated by malloc.
	string = NULL; // Always a good idea to return the pointer that is no longer pointing to the space allocated back to NULL.

	while (true) {};
}



/*
	- In C memory is allocated using malloc and released with free.
	- Malloc has a function signature malloc("Size of the things being allocated").
	- Note that there is another to allocate memory in C, using the calloc.
		- This will do the same job as malloc with one distinct diffrence, when the memory is free'ed it will actively ensure that all
		  of the memory used to returned to only 0's (So clears it).
		- This can be useful as if you use a lot of memory, when using malloc you will find that things will be left behind if you
		  keep assigning it and freeing it, where with calloc it will actively ensure everything is cleaned.
		- The function signature of calloc is: calloc("The number of things being allocated", "Size of the things being allocated").
	- Typically when programming in C++ you should just use new and delete operators as it will include constructors/destructors, however
	  malloc/calloc and free does run more efficiently, but not by much.
*/