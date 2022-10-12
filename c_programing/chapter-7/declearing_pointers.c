/*program 7.1 A simple program using pointers*/
#include <stdio.h>

int main(void)
{
	int number = 0;   /*a variable type int initialized to o*/
	int *pointer = NULL; /*a pointer that can point to type int*/

	number = 10;
	printf("\nnumber's address: %p", &number);    /*output the address*/
	printf("\nnumbber's value: %d\n\n", number);  /*output the value*/

	pointer = &number;  /*stores the sddress of number in pointers*/

	printf("pointer's address: %p", &pointer);     /*output the address*/
	printf("\npinters's size: %ld bytes", sizeof(pointer));  /*output size*/
	printf("\npointer's value: %p", pointer);   /*output the value (an address)*/
	printf("\nvalue pointed to: %d\n", *pointer); /*value at the address*/
	return 0;
}
