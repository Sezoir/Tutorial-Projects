#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <errno.h>	// Used for perror
#include <string.h>

void main()
{
	printf("errno is: %d\n", errno);
	printf("Erasing file foo.bar\n");
	remove("foo.bar");
	printf("errno is %d\n", errno);
	printf("The error message is: %s", strerror(errno)); // strerror will return the error for errno to the stderr stream.
	
	/*perror("Couldnt erase file.");	// The message will be printed out to the stderr stream if the line above has an error.
									// After the message it will be followed by : and then the thread local error. */
	while (true) {};
}

/*
	- C perror and strerror() is used quite commonly in both C and C++.
*/