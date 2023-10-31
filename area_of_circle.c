#include <stdio.h>
#include <conio.h>

void main()
{
    float radius, area, circum;
    
    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14*radius*radius;
    circum = 2*3.14*radius;
    
    printf("Cicumference of circle is: %.2f", circum);
    printf("Area of circle is: %.2f", area);
}