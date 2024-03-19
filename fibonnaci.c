#include <stdio.h>

int fibo(int num) {
    if (num<= 1)
        return num;
    return(fibo(num-1) + fibo(num-2));
}

void main()
{
    int num = 10;
    printf("the %d no in fibo is %d.", num, fibo(num));
}
