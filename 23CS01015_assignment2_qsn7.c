/*This is a program for a simple tax and tip cost calculator*/
#include <stdio.h>
#include <math.h>
int main()
{
    float mealcost, tippercent, taxpercent;
    printf("Enter the Mealcost\n");
    scanf("%f", &mealcost);
    printf("Enter the tip percent\n");
    scanf("%f", &tippercent);
    printf("Enter the taxpercent\n");
    scanf("%f", &taxpercent);
    float tipcost = tippercent * mealcost / 100;
    float taxcost = taxpercent * mealcost / 100;
    float finalcost = mealcost + tipcost + taxcost;
    printf("The Total cost is %d", (int)round(finalcost));
    return 0;
}