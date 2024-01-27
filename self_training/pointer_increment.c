#include <stdio.h>
void main()   
    {
        int age = 18; 
        int *ptr = &age;
        int arr[] = {1,2,3,4,5,6,7,8};
        printf("%d", arr[0] == *arr);
        // printf("%d\n", &age);
        
        // printf("%d", *ptr);
    }