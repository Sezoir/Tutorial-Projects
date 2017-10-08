#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename cT, typename retT = cT, typename sepT = decltype(cT::value_type)>	// The "= decltype(cT::value_type)" assigns a default container type if one is not specified.
retT joinContainer(const cT & o, const sepT & sep) // Takes 2 arguments for cT and sepT.
{
	retT out;	// Declares a temporay variable for the return type called out.
	auto it = o.begin();
	while (it != o.end())	// Iterate through the container.
	{
		out += *it;
		if (++it != o.end()) out += sep; // Adds a seperator out.
	}
	return out;
}

void main()
{
	string s1("This is a string");
	string s2("This is another string");
	string s3("Yet another string");
	
	// Join the character of a string
	cout << joinContainer(s1, ":") << endl;

	// Join strings from a vector, returning a string.
	vector<string> vs({ s1, s2, s3 });
	cout << joinContainer<vector<string>, string>(vs, ", ") << endl;

	while (true) {};
}