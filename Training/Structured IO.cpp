#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>	// Used for "strncpy".
#include <stdint.h>	// Used for "uint8_t" type.

enum {slen = 128};	// Defines a constant.

struct s1
{
	uint8_t a;	// Used for when you want a byte that is being used as a integer.
	uint8_t b;
	char s[slen];
};

void main()
{
	const char *fn = "test2.bin";	// Use ".bin" to create a binary file for the write/read binary mode.
	const char * str = "This is a literal C-String\n";

	// Create/Read the file
	printf("Writing file\n");
	FILE * fw = fopen(fn, "wb");	// "wb" means write binary mode.

	struct s1 buf1;
	for (int i = 0; i < 5; i++)	// Used to populate the buf1
	{
		buf1.a = i;
		buf1.b = strlen(str);
		strncpy(buf1.s, str, slen);	// Used incase the string is too long for the buffer, you can stop it and now overwrite your string.
		fwrite(&buf1, sizeof(struct s1), 1, fw);	// "fwrite" is the binary equivalent of the "fputs". 
	}

	fclose(fw);
	printf("Done.\n");

	// Read the file
	printf("Reading file\n");
	FILE * fr = fopen(fn, "rb");
	struct s1 buf2;
	int rc;
	while ((rc = fread(&buf2, sizeof(struct s1), 1, fr) ))	// "fread" is the binary equivalent of the "fgets"
	{
		printf("a: %d, b: %d, s: %s", buf2.a, buf2.b, buf2.s);
	}

	fclose(fr);
	printf("Done.\n");

	while (true) {};
}

/*
	- Note that: 
		- "strncpy" 3 arguments are: the destination of the string, string itself, maximum lenth of the buffer.
		- "fwrite" 4 arguments are: pointer to the buf, size of the buffer, number of the buffers, file handle.
		- "fread" 4 arguments are: pointer to the buf, size of the buffer, number of the buffers, file handle.
*/