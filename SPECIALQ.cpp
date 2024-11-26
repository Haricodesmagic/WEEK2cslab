// Special Question //
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
  printf("Welcome \n");
  int x, y, z;
  x= (rand()%9) + 1;
  y= (rand()%9) + 1;
  printf("Find the value of %d + %d = ", x, y);
  scanf("%d", &z);
  if (z==x+y)
  {
  	printf("Excellent Work");
  }
  else
  {
  	printf("Sorry friend, Try better next time");
  }
  return 0;
}
