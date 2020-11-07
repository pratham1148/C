#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);
    // & is address of and %d is format specifier
    int c = a - b;

    printf("sum of a and b is %d", c);
    return 0;
}