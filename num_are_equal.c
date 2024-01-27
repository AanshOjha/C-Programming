#include <stdio.h>
void main() 
{
    int a, b;
    printf("Enter 2 numbers to check if they are equal or not: ");
    scanf("%d%d", &a, &b);

    if (a == b)
        printf("\nBoth numbers are equal.");
    else 
        printf("\nBoth numbers are not equal.");
}