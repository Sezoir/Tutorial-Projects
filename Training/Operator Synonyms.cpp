#include <iostream> 	   
#include <ciso646>
using namespace std;

void main()
{
	int a = 0;
	int b = 1;
	int c = 47;
	int d = 112;
	int e = c bitand d;

	if (a and b)
	{
		cout << "true" << endl;
	}
	else 
	{
		cout << "false" << endl;
	}

	cout << "c is " << e << endl;
	
	while (true) {};
}

/*
	**	The operator synonyms are not enabled in visual studio by default in the compiler, so you have to include the ciso646 header.
		More can be found out here: https://docs.microsoft.com/en-gb/cpp/build/reference/microsoft-extensions-to-c-and-cpp

	- Operator synonyms are not actually synonyms, but are actually text alias.
	- This can result in wierd errors, i.e: "int e = bitand d;". This would result in an erros as the compiler would think you
	  are trying to assign the address to e as "bitand" is replaced by &.
	  This can get wierder if it is "int bitwise e = d;" as this would actually create a reference to d assigned under e.
	- This is an uncommon usage as it can lead to confusion with errors, and potential hidden errors that are carried through but not
	  intended.
*/