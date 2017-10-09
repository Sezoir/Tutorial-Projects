#define _CRT_SECURE_NO_DEPRECATE
#include <cstdio>
using namespace std;

int main()
{
	const char * fn = "test.file";
	const static int maxstring = 1024;
	const char * str = "This is a literal C-String.\n";

	// Create/write the file
	printf("Writing file\n");
	FILE * fw = fopen(fn, "w");	// fopen takes 2 arguments; the file name, and then the mode string.
	for (int i = 0; i < 5; i++)	// Write the string out 5 times.
	{
		fputs(str, fw);	// fputs is a line orientated write, so writes a line at a time to the file.
	}
	fclose(fw);	// Close the file
	printf("Done.\n");

	// Read File
	printf("Reading File\n");
	char buf[maxstring];
	FILE * fr = fopen(fn, "r");	// "r" for read.
	char * rc;
	while ((rc = fgets(buf, maxstring, fr))) // "fgets" reads the file, the arguments are: stored, buffer, file handle.
	{										 // this returns a pointer to the buffer or null for the end of the file.
		printf(buf);
	}
	fclose(fr);
	printf("Done.\n");

	while (true) {};
}

/*
	- "fopen" returns a "file handle". This is a pointer to a file structure that is defined in stdio.h.
	- "FILE" is a structure type.
*/