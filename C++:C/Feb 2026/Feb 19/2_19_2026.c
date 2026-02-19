#include <stdio.h>

int main(){
    printf("=== Bitwise Ooerations ===\n\n");

    int a = 5;
    int b = 9;

    printf("[XOR Swap]\n");
    printf(" Before: a = %d, b = %d\n",a,b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf(" After: a = %d, b = %d\n\n",a,b);

    int num = 13;
    printf("[Odd/Even Check]\n");

    if(num & 1){
        printf(" %d is ODD.\n", num);
    }else{
        printf(" %d is EVEN.\n", num);
    }

    return 0;
}