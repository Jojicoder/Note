//Active recall
#include <stdio.h>

void double_value(int* x){
    *x = *x * 2;
}

int main(void){
    int x =10;
    double_value(&x);
    printf("This double value %d\n",x);

    return 0;
}