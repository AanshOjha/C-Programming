#include <stdio.h>
void main()
{
    int sub1, sub2, sub3, sub4, sub5, percent;
    printf("Enter marks in 5 subjects: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    percent = ((sub1+sub2+sub3+sub4+sub5)*100)/500;
    printf("\nPercentage obtained: %d", percent);
    
    if (percent>=60)
        printf("\nFirst Division");
    else if (percent>=45 && percent<60)
        printf("\nSecond Division");
    else if (percent>=33 && percent<45)
        printf("\nThird Division");
    else
        printf("\nFailed");
}