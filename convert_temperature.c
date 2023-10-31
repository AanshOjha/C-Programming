// Converts into Fahrenheit, taking input in Centigrade

#include <stdio.h>
#include <conio.h>

void main()
{
    float temp, ans;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &temp);
    ans = (temp*(9/5.0)) + 32;
    printf("Answer: %.2f deg Fahrenheit", ans);
}