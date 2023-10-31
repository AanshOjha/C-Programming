#include <stdio.h>
#include <conio.h>

void main()
{
    float length, breadth, area;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);
    area = length*breadth;
    printf("Area of rectangle is: %.2f", area);
}