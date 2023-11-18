// #include <stdio.h>

// void main() 
// {
//     int* x = 10;
//     printf("%d", x);
// }

#include <stdio.h>

void main() 
{
    int value = 10; // normal var initialisation
    int* x = &value;    // assign the memory location of value to x
    
    // print memory location --> %p is hexadecimal -->  since %p expects a void*
    printf("%p", x);     
}
