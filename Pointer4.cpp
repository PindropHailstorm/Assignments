// C++ program to illustrate Pointers in C++
#include <stdio.h>

void test()
{
	int var = 20;
	
	// declare pointer variable	
	int *ptr;
	
	// note that data type of ptr and var must be same
	ptr = &var;	

	// assign the address of a variable to a pointer
	printf("Value at ptr = %p \n",ptr);
	printf("Value at var = %d \n",var);
	printf("Value at *ptr = %d \n", *ptr);	
}

// Driver program
int main()
{
	test();
}
