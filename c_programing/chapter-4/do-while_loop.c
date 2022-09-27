/*program 4.11 reversing the digits*/
#include <stdio.h>

int main(void)
{
	int number = 0; /* the muber to be rversed*/
	int rebmun = 0; /* the revered number*/
	int temp = 0;   /*working storage*/

	/*get the value of the revered*/
	printf("\nEnter a positive integer: ");
	scanf("%d", &number);

	temp = number;

	/*reverse the number stored in tmp*/
	do
	{
		rebmun = 10*rebmun + temp % 10;   /*add the right most digit*/
		temp = temp/10;   /*remove the rightmost digit*/
	} while(temp);    /*continue while temp>0*/

	printf("\nThe number %d reversed is %d rebmun ehT\n", number, rebmun);
	return 0;
}
