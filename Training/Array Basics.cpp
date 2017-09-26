
void main()
{

	int ia[5]; // This is an array, which will allow for 6 intergers to be stored in it.

	ia[0] = 1; // The array will always start at 0

	int *ip = ia; // Because this is an array, you do not need to assign the & due to it being a special case in c syntax

	*ip = 2; // This assigns the first number of the array to be 2, beacause the pointer is pointing at the first element.

	++ip; // You can increament the pointer, so that it will point to the second element in the array.

	*ip = 3; // This assigns the value 3 to the second element.

	*(++ip) = 4; // This increaments the points and assigns the number to the array.
}