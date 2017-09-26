#include <iostream>
#include <string>
using namespace std;

const static string unk = "Unknown";
const static string clone_prefix = "clone-";

class Animal
{
	string _type;
	string _name;
	string _sound;
public:
	Animal();	// Default Constructor (Does not need to be included). If you put this in the private area of the class, you will stop the default constructor from being valid.
	Animal(const string & type, const string & name, const string & sound);

	Animal(const Animal &);
	Animal & operator = (const Animal &);	// The operator keyword followed by an operator i.e "operator =" can be used a type of function name.
	~Animal();
	void print() const;
};

Animal::Animal() : _type(unk), _name(unk), _sound(unk)	// The colon (:) allows for you to initialise the strings before it is called with arguments.
{
	cout << "Default Constructor" << endl;
}

Animal::Animal(const string & type, const string & name, const string & sound)
	: _type(type), _name(name), _sound(sound)
{
	cout << "Constructor with arguments" << endl;
}

Animal::Animal(const Animal & a)
{
	cout << "Copy Constructor" << endl;
	_type = a._type;
	_sound = a._sound;
	_name = clone_prefix + a._name;
}

Animal::~Animal()
{
	cout << "Destructor: " << _name << " the " << _type << endl;

	static int a = 0;
	if (a != 2)			// Keeps console up.
	{
		a++;
	}
	else
	{
		while (true) {}
	}

}

void Animal::print() const
{
	cout << _name << " the " << _type << " says " << _sound << endl;
}

Animal & Animal::operator = (const Animal & o)
{
	cout << "Assignment Operator" << endl;
	if (this != &o)
	{
		_type = o._type;
		_name = clone_prefix + o._name;
		_sound = o._sound;
	}
	return *this;
}

void main()
{
	Animal a;
	a.print();

	const Animal b("goat", "bob", "baah");
	b.print();

	const Animal c = b;
	c.print();

	a = c;
	a.print();


}
