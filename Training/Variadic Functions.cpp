#include <stdio.h>
#include <stdarg.h>		// In C++ the equiviliant header is <cstdarg>

double average(const int count, ...)	// The 
{					// va_list is a marco that is used for implementing the variable argument list.
	va_list ap;		// Every function that uses a variable argument list must declare a variable or this type, and must declare va_start and va_end.
	int i;
	double total = 0.0;

	va_start(ap, count);	// In va_start you pass it the last argument before the 3 drops in the argument list. This tells va_start that the thing right after that is where variable list begins.
	for (i = 0; i < count; i++)
	{
		total += va_arg(ap, double);	// The first argument for va_arg must give it the va list variable, and the second argument gives the type of what that argument is going to be.
	}									// Everytime va_arg is called, it will return the next number along in the list, i.e it will first give 25.0, then 35.7 etc.
	va_end(ap);		//Then we end the va list, otherwise it could cause leaky code.
	return total / count;
}

int message(const char * fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	int rc = vfprintf(stdout, fmt, ap);		//vfprintf takes the channel out (stdout), the format type, and a variable argument list.
	fputs("\n", stdout);
	va_end(ap);
	return rc;
}

void main()
{
	message("This is a message");
	message("average: %lf", average(5, 25.0, 35.7, 50.1, 127.6, 75.0));

	while (true) {}
}

// For functions that may take a varing number of arguments, C and C++ provide variadic functions.
// This technique works in both C and C++.