#include <stdio.h>

void rev_arr(int *arr[], int n);
void main() 
    {
        int arr[] = {1,2,3,4,5};
        rev_arr(&arr, 5);

    }

void rev_arr(int *arr[], int n)
    {
        for (int i = 0; i <n; i++) 
            {
                int *temp = *arr[i];
                *arr[i] = *arr[n - i - 1];
                arr[n-i-1] = temp;
            }

        for(int j = 0; j<n; j++)
            {
                printf("\t%d", arr[j]);
            }
    }