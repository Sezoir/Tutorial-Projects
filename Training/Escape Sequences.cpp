#include <iostream>
using namespace std;

void main()
{
	char string[] = "This is \041 a string";

	cout << string << endl;

	while (true) {}
}

/*
-Some characters in C and C++ has special meaning and are otherwise not normally accessible in the C language character set.
-Escape sequences are use to otherwise access these characters.
-The following are escape sequences used to get certain characters:
\' = '
\" = "
\\ = \
\x(Hexadecimal Number) = Corresponding ASCII Character, i.e \x40 = @
\n = New line
\t = Tab
\u(Unicode Code) = Corresponding Unicode Character, i.e \u03bc = ?
\(Octal Value) = Corresponding ASCII Character, i.e \041 = !
*/