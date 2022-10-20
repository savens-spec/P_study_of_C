/*program 7.11A allocating and freeing memory*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (void)
{
	unsigned long *primes = NULL;         /*pointer to the prime area*/
	unsigned long trial = 0;              /*integer to be tested*/

	bool found = false;                   /*indicates when we find a primes required*/
	size_t total = 0;                     /*number of primes required*/
	size_t count = 0;                     /*number of prime found */

	printf("How many prime would you like - you'll get at least 47");
	scanf("%lu", &total);                  /*total ids how many we need to find*/
	total = total < 4U ? 4U : total;      /*make sure it is at least 4*/

	/*allocated sufficient memory to store the number of primes required*/
	primes = (unsigned long *)calloc(total, sizeof(unsigned long));
	if(primes == NULL)
	{
		printf("\nNot enough memory. hasta la vista, baby.\n");
		return 1;
	}

	/*code to determine the prime*/
	/*display primes 5-up*/
	for(int i = 0 ; i < total ; i++)
	{
		if(!(1%5U))
			printf("\n");          /*newline after every 5*/
		printf("%12lu", *(primes + i));
	}
	printf("\n");

	free(primes);                         /*release the memory*/
	return 0;
}
