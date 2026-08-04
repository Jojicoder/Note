#include <stdio.h>

int main(void) {
    int i = 0;
    /* * 通常は "Hello World!\n"[i] と書くところを
     * i["Hello World!\n"] と書いています。
     * C言語ではこれで正しく動きます。
     */
    while (i < 13) {
        putchar(i++["Hello World!\n"]);
    }
    return 0;
}