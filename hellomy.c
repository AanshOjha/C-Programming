#include <stdio.h>
#include <conio.h>

void main() 
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping, first number = %d & second number = %d", a, b);
}