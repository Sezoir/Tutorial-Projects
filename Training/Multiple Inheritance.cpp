#include <iostream>
#include <string>
using namespace std;

class Animal
{
	string _name;
	string _type;
	string _sound;
	// Private structure prevents construction of base class
	Animal() {};
protected:	// Protected structure for use by derived classes
	Animal(const string & n, const string & t, const string & s)
		: _name(n), _type(t), _sound(s) {};
public:
	void speak() const;
	const string & name() const { return _name; };
	const string & type()  const { return _type; };
	const string & sound() const { return _sound; };
};

void Animal::speak() const
{
	printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

class Fur
{
	string _type;
	Fur() {};
protected:
	Fur(const string & f) : _type(f) {};
public:
	const string & type() const { return _type; };
};

class Dog : public Animal
{
	int walked;
public:
	Dog(string n) : Animal(n, "dog", "woof"), walked(0) {};	// Calling the structure for the base class, and we are providing it the info. We also initialise our own data member.
	int walk() { return ++walked; };
};

class Cat : public Animal, public Fur	// Adding multiple inheritance
{
	int petted;
public:
	Cat(string n) : Animal(n, "cat", "meow"), Fur("Silky"), petted(0) {};
	int pet() { return ++petted; };
	void grooming();
};

void Cat::grooming()
{
	cout << Animal::name() << " grooms her " << Fur::type() << " fur " << endl;
}

class Pig : public Animal
{
	int fed;
public:
	Pig(string n) : Animal(n, "pig", "oink"), fed(0) {};
	int feed() { return ++fed; };
};

void main()
{
	Dog d("Rover");
	Cat c("Fluffy");
	Pig p("Arnold");

	d.speak();
	c.speak();
	p.speak();

	cout << d.name() << " the dog has been walked " << d.walk() << " times." << endl;
	cout << c.name() << " the cat has been petted " << c.pet() << " times." << endl;
	cout << p.name() << " the pig has been fed " << p.feed() << " times." << endl;

	c.grooming();

	while (true) {};
}


/*
	- Multiple inheritance is the technique of inheriting multiple base classes.
	- In C++ it's as simple as lisiting the multiple classes in the definition.
	- An example of this is with the Cat class.
*/