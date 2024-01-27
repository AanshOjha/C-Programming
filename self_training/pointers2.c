#include <stdio.h>
void square(int *n);
void main()
    {
        int x = 10;
        // int *ptr = &x;
        // int a = *ptr;
        // printf("%d", a);
        // printf("\nAddress of x: %p", &x);
        // printf("\nAddress of a: %p", &a);
        // printf("\nValue in ptr: %p", ptr);
        // printf("\nAddress of ptr: %d", *ptr);

        square(&x);  
        printf("Original x = %d", x);     
    }
    
void square(int *n) 
    {
        *n = (*n) * (*n);
        printf("Square = %d\n", *n);
    }

   