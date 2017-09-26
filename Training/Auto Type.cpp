#include <iostream>
#include <typeinfo>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int> i = { 1, 2, 3, 4, 5 };

	for (auto it = i.begin(); it != i.end(); ++it) // auto can be used to replace vector<int>::iterator
	{
		cout << *it << endl;
	}

	while (true) {}
}

// The auto type can be used to detect the type of data and assign the correct type.
// This is especially useful for replacing much longer typed types as shown above.

/* int func()
{
return 1;
}

void main()
{
auto x = func();
cout << x << endl;
cout << typeid(x).name() << endl;

while(true) {}
} */

