#include <stdio.h>
void main()
{
    int a = 5;
    float b = 5.78;
    int c = b;    // implicit conversion
    printf("%d", (int)b); // explicit conversion
    printf("%d", c);  
}