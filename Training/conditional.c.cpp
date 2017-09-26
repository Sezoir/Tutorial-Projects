
#ifndef CONDITIONAL H
#define CONDITIONAL H

//#define NUMBER 2		//You can define the number up here, however it is a much more effective method is you only have it defined once, rather than twice

#ifdef (FOO) // Detects if FOO has been defined, if so it will define the number to 47 than 2

#define NUMBER 47

else

#define NUMBER 2

#endif // if's have to end in a #endif

#endif