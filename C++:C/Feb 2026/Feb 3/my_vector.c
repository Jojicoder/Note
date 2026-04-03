#include <stdio.h>
#include <stdlib.h> // malloc, realloc, free のために必要

// 1. 構造体の定義
typedef struct {
    int *data;      // データの塊へのポインタ
    int size;       // 現在の要素数
    int capacity;   // 最大容量
} MyVector;

// 2. 初期化関数
void init_vector(MyVector *v, int initial_capacity) {
    v->data = (int *)malloc(initial_capacity * sizeof(int));
    v->size = 0;
    v->capacity = initial_capacity;
    printf("[Init] Capacity: %d\n", v->capacity);
}

// 3. 追加関数（ここが引っ越しポイント）
void push_back(MyVector *v, int value) {
    if (v->size == v->capacity) {
        // 容量が足りなくなったら2倍に増やす
        int old_capacity = v->capacity;
        v->capacity *= 2;
        v->data = (int *)realloc(v->data, v->capacity * sizeof(int));
        printf("[Resize] %d -> %d (Memory Moved!)\n", old_capacity, v->capacity);
    }
    v->data[v->size] = value;
    v->size++;
}

// 4. メモリ解放関数
void free_vector(MyVector *v) {
    free(v->data);
    v->data = NULL;
    printf("[Free] Memory released.\n");
}

// 5. 実行（メイン関数）
int main() {
    MyVector v;
    init_vector(&v, 2); // 最初は容量2でスタート

    printf("--- Pushing 10 elements ---\n");
    for (int i = 1; i <= 10; i++) {
        push_back(&v, i * 10);
        printf("Value: %d, Size: %d, Capacity: %d\n", v.data[i-1], v.size, v.capacity);
    }

    free_vector(&v);
    return 0;
}