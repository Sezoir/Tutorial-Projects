#include <iostream>
using namespace std;

class MultBy
{
	int mult;
public:
	MultBy(int n) : mult(n) {};
	int operator () (int n) { return mult*n; };
};

void main()
{
	MultBy times4(4);
	MultBy times10(10); //
	MultBy times15(15);
	cout << "times4(5) is " << times4(5) << endl;
	cout << "times4(5) is " << times4(5) << endl;
	cout << "times4(5) is " << times4(5) << endl;	  
	cout << "times4(5) is " << times4(5) << endl;	 
	cout << "times4(5) is " << times4(5) << endl;
	cout << "times4(5) is " << times4(5) << endl;

	while (true) {};
}