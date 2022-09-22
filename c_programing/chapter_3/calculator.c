/*program 3.11 a simple calculator*/
#include <stdio.h>

int main(void)
{
	double number1 = 0.0;  /*first operand value a decimal number*/
	double number2 = 0.0;   /*secound operand value a decimal number*/
	char operation = 0;      /*operation must be +, -, *, /, or %,*/


	printf("\nEnter the Calculation\n");
	scanf("%lf %c %lf", &number1, &operation, &number2);

	/*the code for checks goes here*/
	switch(operation)
	{
		case '+':    /*no checks necessary for add*/
			printf("=%lf\n", number1 + number2);
			break;

		case '-':   /*no checks necessary for subtract*/
			printf("=%lf\n", number1 - number2);
			break;

		case '*':  /*no checks necessary for multiply*/
			printf("=%lf\n", number1 * number2);
			break;

		case '/':  /*no checks necassary for division*/
			if(number2 ==0)
				printf("\n\n\aDivision by zero error!\n");
			else
				printf("=%lf\n", number1 / number2);
			break;

		case '%':
			if((long)number2 == 0)
				printf("\n\n\aDivision by Zero error!\n");
			else
				printf("=%ld\n", (long)number1 % (long)number2);
			break;

		default:   /*operation invalid if we get to here*/
			printf("\n\n\aIllegal operation!\n");
			break;
	}
	return 0;
}
