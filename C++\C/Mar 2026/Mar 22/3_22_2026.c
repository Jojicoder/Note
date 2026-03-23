#include <stdio.h>

int my_strlen(const char *s){
    int count =0;
    while(*s != '\0'){
        count++;
        s++;
    }

    return count;
}

void my_strcpy(char *dst, const char *src){

    while(*src !='\0')
    {
        *dst = *src;
        dst++;
        src++;
    }
}

int my_strcmp(const char *s1, const char *s2){
    while (*s1 !='\0'&& *s1==*s2){
        s1++;
        s2++;
    }

    return *s1 - *s2;
}

void my_strcat(char *s1, const char *s2){
    while (*s1 !='\0')
        s1++;


    while(*s2!='\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1='\0';
}


int main(){
    char src[] ="Hello";
    char dst[32];

    printf("my_strlen : %d\n",my_strlen(src));

    my_strcpy(dst, src);
    printf("my_strcpy : %s\n", dst);

    printf("my_strcmp (Hello vs Hello) : %d\n", my_strcmp("Hello", "Hello"));
    printf("my_strcmp (Hello vs World) : %d\n", my_strcmp("Hello", "World"));

    my_strcat(dst,", World!");
    printf("my_strcat : %s\n", dst);

    return 0;
}