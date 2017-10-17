#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void main()
{
	puts("Hellow World"); // Note that puts automatically includes the new line whereas fputs does not. 
	fputs("Hellow World\n", stdout);

	FILE * out = fopen("file.txt", "w");
	fputs("This is a string\n", out);
	fclose(out);

	char s[128];
	FILE * in = fopen("file.txt", "r");
	fgets(s, 128, in);
	fclose(in);
	printf(s);

	remove("file.txt");
	while (true) {};
}

/*
	- Note that you should never use "gets", as it is obsolete.
*/