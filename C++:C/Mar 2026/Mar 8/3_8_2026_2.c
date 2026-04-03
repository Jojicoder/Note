#include <stdio.h>
#include <string.h>

int main(void){
    char dst[32] = "";
    char src[] = ", World!";

    printf("before: %s\n",dst);
    strcat(dst,src);
    printf("after : %s\n", dst);

    char dst2[32] = "Hello";
    strncat(dst2,src,6);
    printf("strncat: %s\n", dst2);

    return 0;
}