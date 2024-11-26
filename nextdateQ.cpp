/* To give output for the next date of the year */

#include <stdio.h>
#include <math.h>

int main()

 {
    int date, month, year;
    printf("Enter the date, month and year is sequence \n");
    printf("DATE :");
    scanf("%d", &date);
    printf("MONTH (in numbers) :");
    scanf("%d", &month);
    printf("YEAR :");
    scanf("%d", &year);
    if(date>0 && month<=12)
    return 0;
}

