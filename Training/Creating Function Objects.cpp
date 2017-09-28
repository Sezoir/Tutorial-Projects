#include <iostream>
using namespace std;

class MultBy
{
	int mult;
public:
	MultBy(int n) : mult(n) {};
	int operator () (int n) { return mult*n; };	// Creates an operator overload, so that whenever the the object is called with the brackets
};												// this member will be called.

void main()
{
	MultBy times4(4);
	MultBy times10(10); //
	MultBy times15(15);
	cout << "times4(5) is " << times4(5) << endl;
	cout << "times4(15) is " << times4(15) << endl;
	cout << "times10(5) is " << times10(5) << endl;	  
	cout << "times10(15) is " << times10(15) << endl;	 
	cout << "times15(5) is " << times15(5) << endl;
	cout << "times15(5) is " << times15(15) << endl;

	while (true) {};
}