#include <iostream>
using namespace std;

void main()
{
	float f;
	double df;
	long double ldf;

	cout << "Size of float f is " << sizeof(f) << endl;
	cout << "Size of double float df is " << sizeof(df) << endl;
	cout << "Size of long double float ldf is " << sizeof(ldf) << endl;

	f = 0.1;
	f += 0.1 + 0.1;
	cout << "f is " << f << endl;
	if (f == 0.3) cout << "yes" << endl;		//As 0.3 is undefined, when it trys to match the exact binary, 0.3 is not defined as a float so an exact match cannot happen.
	else cout << "no" << endl;					//To fix this you can replace 0.3 with (float)0.3 so that the compiler understands to compare f with a float of 0.3.

	while (true) {}
}

/*

1 Byte is equal to 8 bits.
When using sizeof(), it will give the number of bytes of the data type that is currently used by the memory.

*/