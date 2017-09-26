
#ifndef _Include_A	// Tests to see if the variable has been defined, if it has then the contents inside will be ignored. 
					// This acts as a safeguard against including a file more than once as it lock outs after the first inclusion.
#define _Include_A

int test() 
{
	return 2;
}

#endif // This should always be at the end of the header to ensure all functions are included in the safeguard.


