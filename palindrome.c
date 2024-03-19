#include <stdio.h>

void main() {
    int number, reverse = 0, originalNumber;

    printf("Enter number to check its palindrome number...");
    scanf("%d", &number);

    originalNumber = number;

    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    if (originalNumber == reverse) {
        printf("%d is a palindrome number.", originalNumber);
    } else {
        printf("%d is not a palindrome number.", originalNumber); 
    }
}