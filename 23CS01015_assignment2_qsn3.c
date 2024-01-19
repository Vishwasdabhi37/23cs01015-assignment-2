/*This is a code for changing days into years-months-weeks-days format*/
#include <stdio.h>
int main()
{
    int no_of_days = 890;
    int years = 0, months = 0, weeks = 0;
    years = no_of_days / 365;
    no_of_days %= 365;
    months = no_of_days / 30;
    no_of_days %= 30;
    weeks = no_of_days / 7;
    no_of_days %= 7;
    printf("Years : %d\n", years);
    printf("Months : %d\n", months);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d\n", no_of_days);

    return 0;
}