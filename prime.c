#include <stdio.h>
void main() 
    {
        int num, count = 0;

        printf("Enter a number to find its prime or not: ");
        scanf("%d", &num);

        for (int i = 2; i <= num; i++) 
            if (num % i == 0) count++;

        if (count > 1) 
            printf("\nThe number %d is not a prime number.", num);
        else 
            printf("\nThe number %d is a prime number.", num);
    }