/*progam 2.8 calculation om a table*/
#include <stdio.h>

int main(void)
{
	float radius = 0.0f; /*the radius of the table*/
	float diameter = 0.0f; /*diameter of the table*/
	float circumference = 0.0f; 
	float area = 0.0f; /*area of a circle*/
	float pi = 3.14159265f;
	printf("input the diameter of table:");
	scanf("%f", &diameter); /*read the diameter from the keyboard*/
	radius = diameter/2.0f; /*calculate the radius*/
	circumference = 2.0f*pi*radius;
	area = pi*radius*radius;
	printf("\nThe circumference is %2.0f", circumference);
	printf("\nThe area is %.2f\n", area);
	return 0;
}
