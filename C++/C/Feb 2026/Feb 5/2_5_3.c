#include <stdio.h>

int main(void) {

    int total = 0; // カウンターを0でセット
    
    char *str = "Hello World";
    char *ptr = str;
    int *a=0;
    while (*ptr != '\0') {
        putchar(*ptr);
        ptr++;     
        total++;   // 修正：ここで1増やす！
    }
    
    putchar('\n');
    a = 10;
    printf("%d\n",a);
    
    // 最後に数えた文字数を表示してみる
    printf("文字数: %d\n", total);
    
    return 0;
}