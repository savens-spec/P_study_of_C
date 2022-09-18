/* program 2.13 choosing the correct type of job 1*/
#include <stdio.h>

int main(void)
{
	const float Revenue_per_150 = 4.5f;
	short Jansold = 23500; /*stock sold in the mont from january to march*/
	short Febsold = 19300;
	short Marsold = 21600;
	float RevQuater = 0.0f;

	long Quatersold = Jansold+Febsold+Marsold; /*calculat quaterly total*/

	/*output montly sales and total for quater*/
	printf("stock sold in\nJan: %d \nFeb: %d \nMar: %d", Jansold,Febsold,Marsold);
	printf("\nTotal stock sold in first quater: %ld", Quatersold);
	/*calculate tge total revenue for tge quater and output it */
	RevQuater = (float)Quatersold/150*Revenue_per_150;
	printf("\nSales revenue this quater is: $%.2f\n", RevQuater);
	return 0;
}

