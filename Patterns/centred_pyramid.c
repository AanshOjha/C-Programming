#include <stdio.h>

void main() 
{
    int rows = 5;

    for (int i = 0; i < rows; i++)
    {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++) //firstly 4, 3, 2, 1 spaces
            printf(" ");

        // Print stars without spaces
        for (int k = 0; k < 2 * i + 1; k++) // no of stars 1, 3, 5, 7, 9
            printf("*");

        printf("\n");
    }
}

/*
    *
   ***
  *****
 *******
*********
*/
