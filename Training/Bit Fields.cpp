#include <iostream>
using namespace std;

struct preferences
{
	bool likesMusic : 1;  // the : 1 means that it will use a maximum of 1 bit for storing the value.
	bool hasHair : 1;
	bool hasinternet : 1;
	bool hasdinosaur : 1;
	unsigned int NumberofChildren : 4;
};

void main()
{
	struct preferences homer;
	homer.likesMusic = true;
	homer.hasHair = false;
	homer.hasinternet = true;
	homer.hasdinosaur = false;
	homer.NumberofChildren = 3;

	if (homer.likesMusic) printf("Homer likes music\n");
	if (homer.hasHair) printf("Homer has hair\n");
	if (homer.hasinternet) printf("Homer has internet\n");
	if (homer.hasdinosaur) printf("Homer has a dinosaur");
	printf("Homer has %d children\n", homer.NumberofChildren);

	while (true) {}
}