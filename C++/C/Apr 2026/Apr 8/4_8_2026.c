#include <stdio.h>

int main(void){
    int x =42;
    int* y = &x;

    printf("value of x      : %d\n",x);
    printf("address of x    : %p\n",(void *)&x);
    printf("value via p     : %d\n",*y);

    *y=100;
    printf("x after rewrite : %d\n",x);

    return 0;
}