/* Write a C program to calculate salary of an employee given the basic salary. Assume values for DA and HRA */

#include <stdio.h>
#include <math.h>

int main()
{

float salary;
	printf(" Enter the basic salary of the employee in rupees :");
	scanf("%f", &salary);
	
	if(salary >= 10000)
	{
		printf("The final salary of the employee is %f rupees", salary + (5*salary)/10 + (3*salary)/10);
	}
	else
	{
		printf("The final salary of the employee is %f rupees", salary + (3*salary)/10 + (2*salary)/10);
	}
	return 0;
}
