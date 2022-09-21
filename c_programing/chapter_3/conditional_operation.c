/*program 3.6 multiple discount level using conditonal operation*/
#include <stdio.h>

int main(void)
{
	const double unit_price = 3.50;  /*unit in dollars*/
	const double discount1 = 0.05;  /*discount for mor than 10*/
	const double discount2 = 0.01;  /* discount for more than 20*/
	const double discount3 = 0.15;  /*discont for more than 50*/
	double total_price = 0.0;
	int quantity = 0;

	printf("Enter the number that you want to buy:");
	scanf("%d", &quantity);

	total_price = quantity*unit_price*(1.0 - (quantity>50 ? discount3 : (quantity>20 ? discount2 : (quantity>10 ? discount1 : 0.0))));

	printf("The price for %d is $%.2f\n", quantity, total_price);
	return 0;
}
