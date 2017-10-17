#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <time.h>

void main()
{
	const static int bufSize = 128;
	time_t t = time(NULL);

	struct tm gmt = *gmtime(&t);
	struct tm localt = *localtime(&t);
	printf("Direct from struct tm:\n");
	printf("Universal time is now %04d-%02d-%02d %02d-%02d-%02d\n",
		gmt.tm_year + 1900, gmt.tm_mon, gmt.tm_mday, gmt.tm_hour, gmt.tm_min, gmt.tm_sec);

	printf("Universal time is now %04d-%02d-%02d %02d-%02d-%02d\n",
		localt.tm_year + 1900, localt.tm_mon, localt.tm_mday, localt.tm_hour, localt.tm_min, localt.tm_sec);

	char buf[bufSize];

	size_t len = strftime(buf, bufSize, "%Y-%m-%d %H:%M:%S", &gmt);
	printf("from strftime (gmt): \n");
	printf("Universal time is now %s (%ld characters)\n", buf, len);

	len = strftime(buf, bufSize, "%Y-%m-%d %H:%M:%S, %Z", &localt);
	printf("from strftime (localt): \n");
	printf("Universal time is now %s (%ld characters)\n", buf, len);

	while (true) {};
}

/*
	- The bases of time and data in C is the time_t type.
	- The time_t type is typically either a 32 bit or more recently 64 bit signed integer, giving the number of seconds since midnight
	  January 1st 1970 GMT.
	- So the time function simply returns a tim_t value in terms of the number of seconds since January 1970.
	- There are two functions, GMT time and local time, which will take a time_t value and return a struct which has all the parts of the 
	  time.

	- There is another way of displaying time which is much easier to do using the strftime function.
	- strftime takes a format and it will format out the time, based on a tm struct into a C string. 
	- The following are the replacements for the strftime function: %Y (Year), %m (Month), %d (Day), %H (Hour), %M (Minute), %S (Second),
	  %Z (local time zone).
*/