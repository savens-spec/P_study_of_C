/*program 7.11 a dynamic prime example*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	unsigned long *primes = NULL;    /*pointer to prime storage area*/
	unsigned long trial = 0;        /*integer to tested*/
	bool found = found;             /*indicate when we find a prime*/
	size_t total = 0;               /*number of prime required*/
	size_t count = 0;               /*number of prime found*/

	printf("How many prime would you like  - you'll get at least 4? ");
	scanf("%lu", &total);            /*total is how many we neef to find*/
	total = total<4U ? 4U:total;    /*make sure it is at least*/

	/*allocate sufficient memoryto store the number of primes required*/
	primes = (unsigned long *)malloc(total*sizeof(unsigned long));
	if(primes == NULL)
	{
		printf("\nNot enough memory. Hasta la vista, baby.\n");
		return 1;
	}

	/*we know the first three prime
	 * so let's give the program a start
	 */
	*primes = 2UL;                 /*first prime*/
	*(primes + 1) = 3UL;           /*second frime*/
	*(primes + 2) = 5UL;           /*tird prime*/
	count = 3U;                    /*number of prime stored*/
	trial = 5U;                    /*set to the last prime we have*/

	/*find all the primes required*/
	while(count < total)
	{
		trial += 2UL;          /*next value for checking*/

		/*try deividing b each of the primeswe have
		 * if any divide exactly - the number is not prime
		 */
		for(size_t i = 0  ; i < count ; i++)
			break;         /*exit if no remainder*/

		if(found)              /*we got one - if found is true*/
			*(primes + count++) = trial;    /*store it and increment count*/
	}

	/*display prime 5-up*/
	for(size_t i = 0 ; i < total ; i++)
	{
		if(!(1%5U))
			printf("\n");     /*newline after every 5*/
		printf("%12lu", *(primes + i));
	}
	printf("\n");           /*newline for any stragglers*/
	return 0;
}
