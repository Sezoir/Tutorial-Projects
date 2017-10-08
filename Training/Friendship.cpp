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
	Animal(const string & n, const string & t, const string & s)
		: _name(n), _type(t), _sound(s) {};
	friend class Dog;
	friend class Cat;
	friend class  Pig;	// This allows for the the specified class access to all of the private data.
	friend const string &  get_animal_name(const Animal & a);
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
};

const string & get_animal_name(const Animal & a)
{
	return a._name;
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

	cout << "The dog is named" << get_animal_name(d) << endl;

	while (true) {};
}

/*
	- The friend declaration is a way to let a class access the private members of another class.
	- This can also be extended to functions.
	- Whilst the friend declaration can be very useful, it can also undermine the concept of encapsulation for 
	  object-orientated programming. Therefore the better way of going about it is by accessing them by an accesor, i.e in this case
	  "a.name();".
*/