#include <stdio.h>

void a() { puts("This is a()"); }
void b() { puts("This is b()"); }
void c() { puts("This is c()"); }
void d() { puts("This is d()"); }
void e() { puts("This is e()"); }

int jump(char *);
int prompt();

void(*funcs[])() = { a, b, c, d, e, NULL };

void main()
{
	while (prompt())
		puts("\nDone.");

	while (1) {}
}

int prompt()
{
	puts("Choose an option:");
	puts("");
	puts("1. Function a()");
	puts("2. Function b()");
	puts("3. Function c()");
	puts("4. Function d()");
	puts("5. Function e()");
	puts("Q. Quit.");
	printf(">> ");
	char *response;
	size_t numchars = 1;
	getline(&response, &numchars, stdin);

	return jump(response);
}

int jump(char* s)
{
	char code = s[0];
	if (code == 'q' || code == 'Q') return 0;

	// Get the length of the funcs array
	int func_length;
	for (func_length = 0; funcs[func_length] != NULL; func_length++);

	unsigned int i = (int)code - '0';
	i--;	// List is zero-based.
	if ((i < 0) || (i > 8))
	{
		puts("Invalid Choice");
		return 1;
	}

	if (i < func_length)
	{
		funcs[i]();
		return 1;
	}
	else
	{
		puts("Invalid Choice");
		return 1;
	}
}
