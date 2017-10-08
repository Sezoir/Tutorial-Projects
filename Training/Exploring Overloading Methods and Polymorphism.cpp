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
	virtual void speak() const;	// The virtual qualifier declares speak() as being inheritable.
	const string & name() const { return _name; };
	const string & type()  const { return _type; };
	const string & sound() const { return _sound; };
	virtual ~Animal() {};
};

void Animal::speak() const
{
	printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}


class Dog : public Animal
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
	void speak() const;	// By including the speak member here, we automacally overide the speak member in the base Animal class.
};

void Cat::speak() const 
{
	Animal::speak();
	cout << "purrrrr" << endl;
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

	Animal *ap[] = { &d, &c, &p, nullptr };

	for (int i = 0; ap[i]; ++i)
	{
		ap[i] -> speak();	// Notice doing this will only call the Animal speak() member, not the overriden Cat speak() member.
	}						// To fix this we need to declare the Animal speak() member as virtual.
	cout << d.name() << " the dog has been walked " << d.walk() << " times." << endl;
	cout << c.name() << " the cat has been petted " << c.pet() << " times." << endl;
	cout << p.name() << " the pig has been fed " << p.feed() << " times." << endl;

	while (true) {};	
}

/*
	- For the example for Overloading methods look under the Cat class.
	- We can overload the members of an superclass from the subclass by just making a member as normal but in the subclass.
	  This will result in the subclass member automatically overloading the member in the superclass.
	- Even though a member of the superclass has been overloaded, it can still be used if specified with the declaration operator ( :: ).

	- For when you are using generic pointers/references you must use the virtual qualifer.
	- Whenever you declare a virtual method in a base class, you must also include a virtual destructor.
	- This just lets the detructor in each of the derived classes also overload the destructor in the base class.
	- This is important as this makes sure the detructor that is actually called matches the object thats being destroyed.
	- So in other words if we are allowing certain methods to be overloaded in derived class through a generic pointer, though a 
	  pointer to the base class, this will make sure an appropiate destrutor is called.
	- Whilst this not a required thing to do, 99% of the time it is the right thing to do.

	- Overloading methods and derived class is a fundamental part of polymorphism.
*/