#include <stdio.h>

void main()
{
    int num, factorial;
    printf("Enter the number to find its factorial:\n");
    scanf("%d", &num);
    if (num == 0) {
        factorial = 1;
    }

    factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("Factorial of the number is: %d", factorial);

}