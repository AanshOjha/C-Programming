#include <stdio.h>
#include <conio.h>

void main()
{
    float base, height, area;
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);
    area = (base*height)/2;
    printf("Area of Triangle is: %.2f", area);
    
}