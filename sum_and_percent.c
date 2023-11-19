#include <stdio.h>

void main() {
    int sub1, sub2, sub3, sub4, sub5, sum;
    float percent;

    printf("Enter marks in subject 1, 2, 3, 4 and 5 (out of 100):\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percent = sum/5;
    
    printf("Results \nSum: %d\n", sum);
    printf("Percentage: %.2f %%", percent);

}
