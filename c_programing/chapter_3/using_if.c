/*program 3.2 using if statement to decide on a discout*/

#include <stdio.h>

int main(void)
{
	const double unit_price = 3.50; /*unit price in dollar*/
	int quantity = 0;
	printf("Enter the number that you want to buy:"); /*prompt message*/
	scanf("%d", &quantity); /*read tye input*/

	/*test for otger quantity qualify for discount*/
	if(quantity>10) /*5% discout*/
		printf("The price for %d is $%.2f\n", quantity, quantity*unit_price*0.95);
	else
		printf("the price for %d id $%.2f\n", quantity, quantity*unit_price);
	return 0;
}
