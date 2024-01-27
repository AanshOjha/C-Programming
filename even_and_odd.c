#include <stdio.h>
void main()
{
    int num;
    printf("Enter number to check its even or odd: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even number.", num);
    else 
        printf("%d is Odd number.", num);
}