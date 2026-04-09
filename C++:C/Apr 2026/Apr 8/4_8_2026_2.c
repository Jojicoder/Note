#include <stdio.h>

void double_value(int *p){
    *p = *p *2;
}

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void){
    int x = 5;
    double_value(&x);
    printf("after double_value: %d\n",x);

    int a = 3, b = 7;
    swap(&a,&b);
    printf("after swap: a = %d, b= %d\n",a,b);
    return 0;
}