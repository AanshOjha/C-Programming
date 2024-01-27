#include <stdio.h>
void star(int n);
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    star(n);
    return 0;
}

void star(int n) {
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}