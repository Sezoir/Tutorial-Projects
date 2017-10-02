#include <iostream> 
#include <typeinfo>
using namespace std;

struct A {};
struct B {};

void main()
{
	struct A a1;
	struct A a2;
	struct B b1;
	struct B b2;

	if (typeid(a1) == typeid(struct B))	// - typeid will return the type of whatever is in the parentheses, i.e: typeid(a1) will
	{									//   return the struct A type.
		cout << "same" << endl;
	}
	else
	{
		cout << "different" << endl;
	}

	cout << typeid(a1).name() << endl;	// - This type of approach it not often very useful, as all it returns is the name used
										//   by the compiler for it. "a1" can be replaced by different container types such as int.
	while (true) {};
}

