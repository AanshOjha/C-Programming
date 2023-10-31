#include <stdio.h>
#include <conio.h>

void main()
{
    float radius, height, volume;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter height: ");
    scanf("%f", &height);
    volume = 3.14*radius*radius*height;
    printf("Volume of cylinder is: %.2f", volume);
}