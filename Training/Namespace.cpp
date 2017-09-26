#include <iostream>
#include <string>

namespace BWString
{
	const std::string bws = "This is BWString::string";
	class string
	{
		std::string s;
	public:
		string(void) : s(bws) {};
		string(const std::string & _s) : s(bws) {};
		operator std::string & (void) { return s; };

	};
}		// Namespace BWString

BWString::string s1("This is a string");

void main()
{
	std::string s = s1;				// Can be std::string or BWString::string
	std::cout << s << std::endl;

	while (true) {}
}

/*
	- Namespaces are a way of sectioning code of in a form of "file" like structure. 
	  However, you should avoid fully treating like a file system and keep each namespace seperate from other namespaces, i.e do not place a namespace inside a namespace.
	- Libraries are typically set inside of a namespace, i.e: The C++ standard library is set in the std namespace.
	- Namespace are a good way of avoiding name collions as functions, classes etc will not collide with each other if they are in different namespaces (Typically used to avoid name collisions in larger libraries).
	- Any function, class, etc that is not specifically placed into a namespace is automatically place inside the global namespace, typical places as shown is the main function.
	- The code "using namespace" followed by the name of a namespace, (i.e using namespace std;) should either be avoided or used carefully, as what it does is set all of the commands to be used from the namespace specified,
	  untill either the end of the code or changed by another "using namespace". Use of this too much can lead to what is known as namespace pollution.
	- Another way, however not ideal is to use "using namespace::function". This will seach for the function name and only look in the namespace specified, i.e "using std::cout", will only look in the std namespace
	  whenever it sees cout.
	- The ideal way of using namespace is specifying the namespace for each commandt, i.e as shown above, by the namespace follow by 2 colons, i.e std::string or BWString::string.
*/