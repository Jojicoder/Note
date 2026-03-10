#include <stdio.h>
#include <string.h>

int main(void){
    char src[] = "Helloooooooooooooooooooooooooooooooooo";
    char dst1[32];
    char dst2[32];

    strcpy(dst1,src);
    printf("strcpy result: %s\n", dst1);

    strncpy(dst2,src,sizeof(dst2)-1);
    dst2[sizeof(dst2)-1]='\0';
    printf("strncpy result: %s\n", dst2);

    printf("src unchanged : %s\n", src);

    return 0;
}