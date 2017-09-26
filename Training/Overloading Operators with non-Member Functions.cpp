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
	Rational operator - (const Rational &) const;
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

Rational operator + (const Rational & lhs, const Rational & rhs)	// Whereas before the class to the left was automatically included, now you have to specifify both sides.
{
	return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator()	* rhs.numerator()), lhs.denominator() * rhs.denominator());	// Issue
}	// Note that we use const Rational & to change the number into a class.

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

	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / b << endl;

	cout << 14 << "+" << a << "=" << 14 + a << endl;	// This is the effect of a non-member operator overload.

	while (true) {};
}
