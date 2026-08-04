#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;

    // n 個分の int をヒープに確保
    int *arr =(int*)malloc(sizeof(int) * 5);
    if (arr==NULL) {
        fprintf(stderr, "memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // メモリを解放する
    free(arr);
    arr = NULL;

    return 0;
}