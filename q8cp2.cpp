/* Question 8 Write a program to input sides of a triangle and check wether a triangle is equilateral, scalene or isosceles triangle */

#include <stdio.h>
#include <math.h>

int main()
{
	float n1, n2, n3;
	printf("Enter three length of the three sides of a triangle \n");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if((n1==n2 && n1==n3) && n2==n3)
	{
		printf("The Triangle is an Equilateral Triangle");
    }
    else if((n1==n2 || n1==n3 || n2==n3) && (n1!=n2 || n1!=n3 || n2!=n3))
	{
		printf("The Triangle is an Isosceles Triangle");
	}
	else if(n1!=n2 && n1!=n3 && n2!=n3)
	{
		printf("The Triangle is an Scalene Triangle");
	}
	return 0;
}
		
