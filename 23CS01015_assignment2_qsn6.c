/*This is a program for checking whether a number is odd and lies between a specific range*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d", &number);
    int var1 = ((number & 1) && (number < 200) && (number > 100)) ? 1 : 0;
    if (var1)
    {
        printf("True\n");
    }
    else
        printf("False");

    return 0;
}