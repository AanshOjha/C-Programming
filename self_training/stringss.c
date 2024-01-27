#include <stdio.h>
#include <string.h>
void main() {
    char str[] = "Aansh Ojha";
    printf("%s\n", str);

    // strlen()
    int len = strlen(str);
    printf("Length of str: %d\n", len);

    // strcpy()
    char copy[20];
    strcpy(copy, str); 
    printf("This is copy of str: %s\n", copy);

    // strcat()
    //strcat(str, copy);
    printf("String concatenation: %s\n", str);  

    //  strcpm(firstStr, secStr)
    int ans = strcmp(str, copy);
    printf("%d", ans);

}
