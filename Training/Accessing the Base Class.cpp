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

// We declare the class dog and that it is inheriting from Animal. 
class Dog : public Animal	// So there is a colon follow by a access specifier and the name of the class that is being inherited.
{
	int walked;
public:
	Dog(string n) : Animal(n, "dog", "woof"), walked(0) {};	// Calling the structure for the base class, and we are providing it the info. We also initialise our own data member.
	int walk() { return ++walked; };
};

class Cat : public Animal
{
	int petted;
public:
	Cat(string n) : Animal(n, "cat", "meow"), petted(0) {};
	int pet() { return ++petted; };
};

class Pig : public Animal
{
	int fed;
public:
	Pig(string n) : Animal(n, "pig", "oink"), fed(0) {};
	int feed() { return ++fed; };
	string latin() const;
};

string Pig::latin() const
{
	return string(Animal::name() + "-ay");	// ** This is how you access and should acces the base class.
}

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

	cout << p.latin() << endl;	

	while (true) {};
}

/*
	- Look at the pig::latin() for the example.
	- This is a method for accessing the base class to call a member, and it is how you should access the base class, so there is no
	  conflicts.
*/