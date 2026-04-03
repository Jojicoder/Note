#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "Hello, World!";

    printf("string : %s\n",str);
    printf("length : %zu\n",strlen(str));

    printf("sizeof : %zu\n", sizeof(str));

    return 0;
}