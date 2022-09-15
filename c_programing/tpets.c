/*Project 2.4 simple calculation*/
#include <stdio.h>

int main(void)
{
	int total_pets;
	int cat;
	int dogs;
	int ponies;
	int others;

	/*adding values */
	cat = 2;
	dogs = 1;
	ponies = 1;
	others = 46;

	total_pets = cat + dogs + ponies +others;
	printf("we have %d in total", total_pets);
	return 0;
}
