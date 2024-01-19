/*This is a program for checking whether a number is odd or not with the use of binary operations*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d", &number);
    if (number & 1)
    {
        printf("The number is odd.\n");
    }
    else
        printf("The number is even.\n");

    return 0;
}