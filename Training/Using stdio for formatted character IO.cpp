#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void main()
{
	int i = 5;
	printf("i is: %d\n", i); // Prints to the standard out channel.
	fprintf(stderr, "i is: %d\n", i); // Prints the standard error channel.

	char * s = "This is a string.";
	/*FILE * of = fopen("file.txt", "w");
	fprintf(of, "%s", s); // Prints the c string to the file.
	fclose(of); */

	const int bufsize= 128;
	char os[bufsize];
	//	sprintf(os, "s is: %s\n", s);	// This is quite dangerous as it assumes the buffer size is large enough, which can result in u.b if
	// not big enough.
	snprintf(os, bufsize,"s is: %s\n", s);	// snprintf limits size of the buffer.
	puts(os);;

	while (true) {};
}

/*
- The way printf works is that it takes a format string and it uses replacement tokens in the format string and those replacement tokens
get replaced by the various values from the arguments to prints formated to the replacement tokens.
- And the printf value takes tbhis formated string prints in the console or sends it to the stdout stream.
- Format Specifiers include:
- "%d": Integer Number,
- "%f": Floating Point Number,
- "%s": C String,
- "%c": Character,
- "%p": Pointer,
- "%%": The % Character.

*/