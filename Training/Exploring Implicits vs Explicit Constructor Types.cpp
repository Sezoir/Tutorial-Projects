#include <iostream>

const std::size_t maxlen = 1024;	// Maximum length of bwString

class BWSize
{
	std::size_t _size;
public:
	explicit BWSize(std::size_t);	// Constructor: size from int
	explicit BWSize(const char *);	// The explicit keyword stops any kind of implicit conversions of types.
	std::size_t size() const;
};

BWSize::BWSize(const std::size_t n)
{
	std::cout << "BWSize from int" << std::endl;
	_size = (n <= maxlen) ? n : 0;
}

BWSize::BWSize(const char * s)
{
	std::cout << "Constructor: BWSize from c_string" << std::endl;
	for (std::size_t i = 0; i < maxlen; i++)
	{
		if (s[i] == '\0')
		{
			_size = i;
			return;
		}
	}
	_size = 0;
}

std::size_t BWSize::size() const
{
	return _size;
}

using namespace std;

void func(const BWSize & s)
{
	cout << "s.size() is " << s.size() << endl;
}

void main()
{
	BWSize s((size_t)5);	// If "BWSize s = (size_t) 5;" it trys a conversion to size_t because of the equals (=) sign (Equal sign is a copy/paste) even though it is already size_t type. 
	cout << "s.size() is " << s.size() << endl;
	func(BWSize("xxxxx"));

	while (true) {}
}