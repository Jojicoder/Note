#include <stdio.h>
#include <stdlib.h> // malloc, free用

typedef struct {
    char name[20];
    int hp;
} Hero;

int main() {
    // 1. 【確保】 ヒープ領域に勇者を作る (new)
    Hero *h = (Hero *)malloc(sizeof(Hero));

    // 2. 【操作】 データを書き込む (矢印 -> を使う！)
    sprintf(h->name, "Joji"); // 名前をセット
    h->hp = 100;
    printf("誕生: %s (HP: %d)\n", h->name, h->hp);

    // 3. 【変更】 ポインタ経由でHPを減らす
    h->hp -= 30;
    printf("ダメージ! 残りHP: %d\n", h->hp);

    // 4. 【解放】 メモリをOSに返す (delete)
    free(h);
    printf("伝説は終わった（メモリ解放完了）\n");

    return 0;
}