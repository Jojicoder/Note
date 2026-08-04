#include <stdio.h>
#include <stdlib.h>

/* 文字を生成するための「抽象」構造体 */
typedef struct CharacterFactory {
    char (*produce)(void);
    struct CharacterFactory* next;
} CharacterFactory;

/* * 複雑な計算で 'H' (ASCII 72) を生成する
 * ロジック: 2の3乗 × 9 = 8 * 9 = 72
 */
char generate_H(void) {
    int base = 2;
    int exponent = 3;
    int multiplier = 9;
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return (char)(result * multiplier);
}

/* 'e' (101) = 10の2乗 + 1 */
char generate_e(void) {
    return (char)((10 * 10) + 1);
}

/* 'l' (108) = 12 × 9 */
char generate_l(void) {
    return (char)(12 * 9);
}

/* 'o' (111) = 'l' + 3 */
char generate_o(void) {
    return (char)(generate_l() + 3);
}

/* ' ' (32) = 2の5乗 */
char generate_space(void) {
    return (char)(1 << 5);
}

/* 'W' (87) = 100 - 13 */
char generate_W(void) {
    return (char)(100 - 13);
}

/* 'r' (114) = 'o' + 3 */
char generate_r(void) {
    return (char)(generate_o() + 3);
}

/* 'd' (100) = 10の2乗 */
char generate_d(void) {
    return (char)(10 * 10);
}

/* '!' (33) = space + 1 */
char generate_exclamation(void) {
    return (char)(generate_space() + 1);
}

/* ヌル終端文字 */
char generate_null(void) {
    return 0;
}

/* ファクトリーを作成する関数（メモリ確保の無駄遣い） */
CharacterFactory* create_factory(char (*generator_func)(void)) {
    CharacterFactory* node = (CharacterFactory*)malloc(sizeof(CharacterFactory));
    if (node == NULL) {
        fprintf(stderr, "Fatal Error: Failed to allocate memory for critical business logic.\n");
        exit(EXIT_FAILURE);
    }
    node->produce = generator_func;
    node->next = NULL;
    return node;
}

/* リンク付きリストにノードを追加 */
void append_factory(CharacterFactory** head, char (*generator_func)(void)) {
    CharacterFactory* new_node = create_factory(generator_func);
    if (*head == NULL) {
        *head = new_node;
    } else {
        CharacterFactory* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

/* メイン処理 */
int main(void) {
    CharacterFactory* pipeline = NULL;

    // 非効率的に1文字ずつビルドプロセスに追加
    append_factory(&pipeline, generate_H);
    append_factory(&pipeline, generate_e);
    append_factory(&pipeline, generate_l);
    append_factory(&pipeline, generate_l);
    append_factory(&pipeline, generate_o);
    append_factory(&pipeline, generate_space);
    append_factory(&pipeline, generate_W);
    append_factory(&pipeline, generate_o);
    append_factory(&pipeline, generate_r);
    append_factory(&pipeline, generate_l);
    append_factory(&pipeline, generate_d);
    append_factory(&pipeline, generate_exclamation);
    append_factory(&pipeline, generate_null);

    // 実行フェーズ
    CharacterFactory* current = pipeline;
    while (current != NULL) {
        char c = current->produce();
        if (c != 0) {
            printf("%c", c);
        }
        
        // メモリリークを防ぐための後処理（ただし変数再利用はしない）
        CharacterFactory* temp = current;
        current = current->next;
        free(temp);
    }

    printf("\n");
    return 0;
}
