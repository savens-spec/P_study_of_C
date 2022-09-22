/* program 2.10 exercising bitwise oprators*/
#include <stdio.h>

int main(void)
{
	unsigned int original = 0xABC;
	unsigned int result = 0;
	unsigned int mask = 0xF;  /*rightmost four bits*/

	printf("\nOriginal = %X", original);


	/*insert first digit in result*/
	result |= original&mask;   /* put right four digit from origin in result*/

	/*get second digit*/
	original >>= 4;  /*shift original right four positions*/
	result <<= 4;   /*make room for nest digit*/
	result |= original&mask;   /*put right 4 bits from the original result*/

	/*get the third digit*/
	original >>= 4; /*shift original right 4 positions*/
	result <<= 4;   /*make room for next digit*/
	result |= original&mask;   /*put right 4 bits from original in result*/
	printf("\t result = %X\n", result);
	return 0;
}
