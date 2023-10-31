#include <stdio.h>
#include <conio.h>

void main()
{
    float radius, volume;
    printf("Enter radius: ");
    scanf("%f", &radius);
    volume = (4/3.0)*3.14*radius*radius*radius;
    printf("Volume of sphere is: %.2f", volume);
}