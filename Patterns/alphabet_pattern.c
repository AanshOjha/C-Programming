#include <stdio.h>

void main()
{
    int rows;
    char ch = 'A';
    printf("Enter no of rows\n");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
        ch++;
    }
}