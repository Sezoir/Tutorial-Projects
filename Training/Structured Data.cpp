#include <cstdio>
using namespace std;

typedef struct employee			//A struct is not a class.
{
	int id;
	const char * name;
	const char * role;
} emp_t; //Typedef with a name or tag at the end can be used for a shorthand way of writing out the struct, rather than having to type "struct employee" constantly.

void main()
{
	emp_t joe = { 42, "Joe", "Boss" };
	emp_t *ep = &joe;

	printf("%s is the %s and has id %d\n", ep->name, ep->role, ep->id);

	while (true) {}
}

/* struct employee
{
int id;
const char * name;
const char * role;
};

void main()
{
struct employee joe = { 42, "Joe", "Boss" };

printf("%s is the %s and has id %d\n", joe.name, joe.role, joe.id);

while(true) {}
} */