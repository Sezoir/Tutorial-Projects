#include <iostream>
using namespace std;

void main()
{
	int x = 5;
	int y = 6;

	if (x == y)
	{
		cout << "x is equal to y" << endl;
	}
	else if (x < y)
	{
		cout << "x is greater than y" << endl;
	} 
	else
	{
		cout << "x is less than y" << endl;
	}

	while (true) {};
}

/*
	- C++ has a range of different comparison operatos that can be used, theses being: "<, >, ==, <=, >=, !=".
*/