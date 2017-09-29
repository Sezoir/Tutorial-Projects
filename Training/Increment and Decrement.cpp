#include <iostream>
using namespace std;

void main()
{
	int i = 12;
	cout << ++i << endl;
	i = 12;
	cout << i++ << endl;
	cout << i << endl << endl;

	char s1[] = "string";
	char *c = s1;
	printf("Value is %c\n", *c++);
	printf("Value is %c\n", *c++);
	printf("Value is %c\n", *c++);
	printf("Value is %c\n", *c++);
	printf("Value is %c\n\n", *c++);

	int ia[] = { 1, 2, 3, 4, 5, 0 };
	int *ip = ia;
	printf("value is %d\n", *ip++);
	printf("value is %d\n", *ip++);
	printf("value is %d\n", *ip++);
	printf("value is %d\n", *ip++);
	printf("value is %d\n\n", *ip);

	for (int *ip = ia; *ip; ip++)
	{
		printf("%d\n", *ip);
	}

	while (true) {};
}

/*
	- C++ provide unary operators to increment and decrement values by the "++" and "--" operators.
	- This will either increment or decrement the value of a value by 1.
	- Depending on the placement of the increment can affect the result.
	- Placing the unary operator on the lhs of the value will increase/decrease the value first then do whatever the function wants.
	  Whereas placing it on the rhs of the value will increase/decrease the value after the function has finished.
	  This is called the prefix and the postfix of the value.
	- This is commonly used with char array pointers as shown above.
	  This becomes intresting when you use interger array pointers instead. The reason for this is that intergers arrays are 4 bytes apart 
	  not 1 byte apart as with char arrays. Due to using a pointer pointing to the array, if we increment the pointer it will jump
	  by 4 bytes rather than 1 byte (leading to the next number).
	  This is commonly used with for loops, as shown above.
*/