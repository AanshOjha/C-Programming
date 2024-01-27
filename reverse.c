#include <stdio.h>
void main()
{
    int number, reverse = 0, remainder;

    // Input a number from the user
    printf("Please enter a number to reverse it: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;    // 5 | 4 | 3
        reverse = reverse * 10 + remainder; // 5 | 50 + 4 = 54 | 540 + 3 = 543
        number /= 10;   // 34 | 3
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reverse);
}