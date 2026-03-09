#include <stdio.h>
#include <string.h>

int main(void){
    char str1[] = "Apple";
    char str2[] = "apple";
    char str3[] = "banana";

    printf("str1 vs str2 : %d\n", strcmp(str1, str2));
    printf("str1 vs str3 : %d\n", strcmp(str1,str3));
    printf("str3 vs str1 : %d\n", strcmp(str3,str1));

    if(strcmp(str1, str2)==0){
        printf("str1 and str2 are equal\n");
    }else{
         printf("str1 and str2 are not equal\n");
    }

    return 0;
}
