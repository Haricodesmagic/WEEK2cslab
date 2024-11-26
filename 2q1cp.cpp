#include <stdio.h>
#include <math.h>

int main()
{
	float n1, n2, n3;
	printf("Enter three different numbers \n");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if (n1 >= n2 && n1 >= n3)
 		{
		 printf("%f is the larger number", n1);}
	else if (n2 >= n1 && n2 >= n3)
		{
		printf("%f is the larger number", n2);}
	else if (n3 >= n1 && n3 >= n2)
		{
		printf("%.2f is the larger number", n3); }
	return 0;
}
