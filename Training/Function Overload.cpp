#include <iostream>
using namespace std;

// Volume of a cube
int volume(int s)
{
	cout << "Cube of " << s << endl;
	return s * s * s;
}

// Volume of a cylinder
double volume(double r, int h)
{
	cout << "Cylinder of " << r << "x" << h << endl;
	return 3.14159 * r * r * h;
}

// Volume of a cuboid
long volume(long a, long b, long c)
{
	cout << "Cuboid of " << a << "x" << b << "x" << c << endl;
	return a * b * c;
}

void main()
{
	cout << "Volume of a 2x2x2 cube: " << volume(2) << endl;
	cout << "Volume of a cylinder, radius 2, height 2: " << volume(2.0, 2) << endl;
	cout << "Volume of a 2x3x4 cuboid: " << volume(2, 3, 4) << endl;

	while (true) {}
}

// Functions in C++ with the same name is known as function overload.
// In C++ functions are defined by their function signature, so it is possible to have functions with the same name but operate differently to one another.
// In C functions are distinguished only by there name, and hence this would not work.