#include <stdio.h>

int main(void) {
    /* * "Hello World!\n" を4文字ずつ区切って数値(int)にしたもの
     * H(48) e(65) l(6c) l(6c) -> 0x6c6c6548 (リトルエンディアン)
     * これを10進数にしたのが 1819043144 です。
     */
    int t[] = {
        1819043144, // "Hell"
        1870078063, // "o Wo"
        560229490,  // "rld!"
        10          // "\n" (改行)
    };

    /* int配列のアドレスを char* に無理やりキャストして渡す */
    puts((char*)t);

    return 0;
}