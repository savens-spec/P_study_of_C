/* program 4.6 the almost indefinite loop - computing an average*/
#include <stdio.h>

int main(void)
{
	char answer = 'N';  /* record yes or no to continue loop*/
	double total = 0.0;  /* total of value entered*/
	double value = 0.0;  /*value entered*/
	int count = 0;   /*number of value entered*/

	printf("This program calculate the average of"" any number of value");

	for( ;; )    /*indefinite loop*/
	{
		printf("Enter a value");  /*prompt for the next value*/
		scanf("%lf", &value);  /*read the next value*/
		total += value;  /*add value to total*/
		++count;  /*increment count of value*/

		/*check for mor input*/
		printf("Do you want to enter another value? (Y or N): ");
		scanf("%c", &answer);  /*read responce Y or N*/

		if(tolower(answer) == 'n')  /*look for any sign of no*/
			break;  /*exit from loop*/
	}
	/*output the average of two decimal place*/
	printf("\nThe average is %.2lf\n",  total/count);
	return 0;
}
