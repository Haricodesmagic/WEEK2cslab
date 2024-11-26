/* Write a C program to check if three numbers are equal or not */

#include <stdio.h>
#include <math.h>

int main()
{
	float n1, n2, n3;
	printf("Enter three different numbers \n");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if((n1==n2 && n1==n3) && n2==n3)
	{
		printf("Equal");
	}
	else
	{
		printf("Not Equal");
	}
	return 0; 
}
