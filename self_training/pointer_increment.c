#include <stdio.h>
void main()   
    {
        int age = 18;
        int *ptr = &age;
        int **ptr1 = &ptr;
        // ptr = &age;
        // ptr1 = &ptr;
        printf("%d\n", age);
        printf("%d\n", ptr);
        printf("%d", ptr1);
    }