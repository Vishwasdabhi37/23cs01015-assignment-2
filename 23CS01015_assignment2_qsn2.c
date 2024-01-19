/*This is a code for the application of ternary operator((condition)? a:b statement)*/
#include <stdio.h>
int main()
{
    int a = 17, b = -90, c = 12;
    int max1 = (a > b) ? a : b;
    int max2 = (max1 > c) ? max1 : c;
    printf("%d", max2);
    return 0;
}