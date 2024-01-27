#include <stdio.h>
void main()
{
    int side, area;
    printf("Enter length of side: ");
    scanf("%d", &side);
    area = side*side;
    printf("Area of square is: %d", area);
}