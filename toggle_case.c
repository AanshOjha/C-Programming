#include <stdio.h>
#include <string.h>

void main() {
    char str[20];

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A') && (str[i] <= 'Z')) {
            str[i] += 32;  // Convert uppercase to lowercase
        } else if ((str[i] >= 'a') && (str[i] <= 'z')) {
            str[i] -= 32;  // Convert lowercase to uppercase
        }
    }

    printf("\n%s\n", str);
}
