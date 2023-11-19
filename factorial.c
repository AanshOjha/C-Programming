#include <stdio.h>

int factorial(int num) {
    if (num == 0) {
        return 1;
    }

    int factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    return factorial;
}

void main()
{
    int n;
    printf("Enter the number to find its factorial:\n");
    scanf("%d", &n);
    printf("Factorial of the number is: %d", factorial(n));

}