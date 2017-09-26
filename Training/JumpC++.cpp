#include <iostream>
#include <vector>
#include <string>
using namespace std;

void a() { puts("This is a()"); }
void b() { puts("This is b()"); }
void c() { puts("This is c()"); }
void d() { puts("This is d()"); }
void e() { puts("This is e()"); }

int jump(const string &);
int prompt();

vector<void(*)()>funcs = { a, b, c, d, e, };

void main()
{
	while (prompt())

		cout << "<<" << endl << "Done" << endl << "<<" << endl;

	while (true) {}
}

int prompt()
{
	cout << "Choose an option:" << endl
		<< "" << endl
		<< "1. Function a()" << endl
		<< "2. Function b()" << endl
		<< "3. Function c()" << endl
		<< "4. Function d()" << endl
		<< "5. Function e()" << endl
		<< "Q. Quit." << endl
		<< ">> " << endl;
	string response;
	cin >> response;

	return jump(response);
}

int jump(const string & s)
{
	char code = s[0];
	if (code == 'q' || code == 'Q') return false;

	unsigned int i = (int)code - '0';
	i--;	// List is zero-based.
	if ((i > 8) || (i < 0))
	{
		cout << "Invalid Choice" << endl;
		return true;
	}

	if (i < funcs.size())
	{
		funcs[i]();
		return true;
	}
	else
	{
		cout << "Invalid Choice" << endl;
		return true;
	}
}
