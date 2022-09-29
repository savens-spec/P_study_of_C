/* program 5.5 using the and opertor*/
#include <stdio.h>

int main(void)
{
	/*declare some integer variable*/
	long a = 1L;
	long b = 2L;
	long c = 3L;

	/*declear some float variable**/
	double d = 4.0;
	double e = 5.0;
	double f = 6.0;

	printf("A varible of type long occupies %ld byte.", sizeof(long));
	printf("\nHere  are the addresses of some variable of type long:");
	printf("\nThe adress of a is %p the address of b is: %p", &a, &b);
	printf("\nThe address of c is: %p", &c);
	printf("\n\nA variable of type double occupies %ld bytes.", sizeof(double));
	printf("\nHere are the addresses of  some variable of type double:");
	printf("\nThe address of d is : %p  The address of e is: %p", &d, &e);
	printf("\nThe adress of f is: %p\n", &f);
	return 0;
}
