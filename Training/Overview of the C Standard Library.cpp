/*
	- The standard C library is part of the ANSI/ISO C standard library.
	- As C++ include the full definition of C, the standard C library is also fully included in the C++ standard.
	- Functionalities include:
		- File I/O,
		- C Strings (Char arrays),
		- Memory Allocations,
		- Date and time,
		- Error Handling,
		- Other Utilities.
	- There are two distinct versions of the standard C library:
		- For C:	#include <stdio.h>
		- For C++:	#include <cstdio>
	- In C++ the symbols from the standard library is in the std namespace.
	- The C library does not support namespaces.
	- Runtime support for the standard C library is provided by a compiled runtime library that is linked to your program as part of 
	  the build process.
	- The runtime support library is typically called libc, and for the ggc compiler system the runtime system is called glibc.
	  The version compatible with your system is typically installed with the ggc system or whatever compiler you are using.
*/