#include <stdio.h>

int main(void){
    int x = 42;
    int *p = &x;

    printf("value of    x : %d\n",x);
    printf("address of  x : %p\n",(void *)&x);
    printf("value via p   : %d\n", *p);

    *p = 100;
    printf("x after rewrite: %d\n",x);

    return 0;
}