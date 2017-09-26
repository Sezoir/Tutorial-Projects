#include <iostream>

class Rational
{
	int _n;
	int _d;
public:
	Rational(int numerator = 0, int denominator = 1) : _n(numerator), _d(denominator) {};	// Initialiser list after the ":".
	Rational(const Rational & rhs) : _n(rhs._n), _d(rhs._d) {};
	~Rational();
	inline int numerator() const { return _n; };
	inline int denominator() const { return _d; };
	Rational & operator = (const Rational &);
	Rational operator + (const Rational &) const;	// Hvaing the operation overload inside of the class tell the compiler
	Rational operator - (const Rational &) const;	// to replace the a+b with a.operator+(b)	
	Rational operator * (const Rational &) const;
	Rational operator / (const Rational &) const;
};

Rational & Rational::operator = (const Rational & rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignment" << std::endl;
		_n = rhs.numerator();
		_d = rhs.denominator();
	}
	return *this;
}

Rational Rational::operator + (const Rational & rhs) const
{
		return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator - (const Rational & rhs) const
{
	return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator * (const Rational & rhs) const
{
	return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / (const Rational & rhs) const
{
	return Rational(_n * rhs._d, _d * rhs._n);
}

Rational::~Rational()
{
	std::cout << "Destructor " << _n << '/' << _d << std::endl;
}

std::ostream & operator <<  (std::ostream & o, const Rational & r)
{
	return o << r.numerator() << '/' << r.denominator();
}

void main()
{
	using namespace std;

	Rational a = 7;		// 7/1
	cout << "a is: " << a << endl;
	Rational b(5, 3);	// 5/3
	cout << "b is: " << b << endl;
	Rational c = b;		// Copy Constructor
	cout << "c is: " << c << endl;
	Rational d;			// Default Constructor
	cout << "d is: " << d << endl;
	d = c;
	cout << "d is: " << d << endl;
	Rational & e = d;	// Reference
	d = e;				// Assignment to self
	cout << "e is: " << e << endl;

	cout << a << "+" << b << "=" << a + b << endl;	// When you overload an operator in a class it expects the left hand side to be the class itself.
	cout << a << "-" << b << "=" << a - b << endl;	// This is how it knows what function to call.
	cout << a << "*" << b << "=" << a * b << endl;	// The solution to this is to move the operator overload outside of the class.
	cout << a << "/" << b << "=" << a / b << endl;

	while (true) {};
}

/*
#include <iostream>
#include <string>

class SuperString
{
	std::string a;
public:
	SuperString(char test[] = "Test") : a(test) {};
	SuperString(const std::string string) : a(string) {};
	~SuperString();
	std::string getstring() const;
	SuperString operator + (const SuperString &) const;
};

SuperString::~SuperString()
{

}

std::string SuperString::getstring() const
{
	return a;
}

SuperString SuperString::operator + (const SuperString & other) const
{
	std::string fstring = a + " " + other.a;

	return SuperString(fstring);
}

void main()
{
	using namespace std;
	SuperString s1 = "Hello";
	SuperString s2 = "World";
	SuperString s3 = "Yeah";

	cout << (s1 + s2 + s3).getstring() << endl;

	while (true) {};
}
*/