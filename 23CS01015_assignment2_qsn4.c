/*This is a program to check whether a year is a leap year or not*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("year %d is a leap year.\n", year);
    }
    else
        printf("Year %d is not a leap year.\n ");
    return 0;
}