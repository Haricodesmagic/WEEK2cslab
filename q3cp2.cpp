/* Write a C Program to calculate electricity bill given the number of units as input. Assume any values for surcharge and charge per unit */

#include <stdio.h>
#include <math.h>

int main()
{
	float unit;
	printf("Enter the number of units burnt by the consumer :");
	scanf("%f", &unit);
	
	if(unit >= 100)
	{
		printf("The electricity bill of the consumer is %f rupees", unit*3 + (4*unit)/10);
	}
	else
	{
		printf("The electricity bill of the consumer is %f rupees", unit*2 + (3*unit)/10);
	}
	return 0;
}
