#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char name[50];
    int hp;
    int max_hp;
    int attack;
} Character;

Character* create_character(const char* name, int hp, int attack){
    Character* c = (Character*)malloc(sizeof(Character));

    if(c == NULL){
        printf("メモリ確保に失敗しました\n");
        exit(1);
    }

    strcpy(c->name, name);
    c->hp = hp;
    c->max_hp = hp;
    c->attack = attack;

    printf("[生成] %s が現れた！ (HP: %d / ATK: %d)\n", c->name, c->hp, c->attack);
    return c;
}

void delete_character(Character* c){
    printf("[消滅] %sはメモリから解放されました\n", c->name);
    free(c);
}

void attack_character(Character* self, Character* target){
    int damage = self -> attack * (rand() % 5);

    target -> hp -= damage;
    if(target -> hp < 0) target-> hp=0;

    printf(">> %sの攻撃! %s のダメージ! (HP: %d)\n", self->name,target-> name,damage, target->hp);
}

int main(){
    srand((unsigned int)time(NULL));

    printf("バトル開始\n");

    Character* hero = create_character("勇者", 100,20);
    Character* boss = create_character("魔王", 150,15);

    printf("\n");

    int turn = 1;
    while(hero->hp> 0 && boss ->hp >0){
        printf("---ターン%d ---\n", turn);
        attack_character(hero, boss);

        if(boss->hp>0){
            attack_character(boss, hero);
        }

        printf("\n");
        turn++;

    }

    if(hero->hp>0){
        printf("勇者: %s! 世界に平和が訪れた \n", hero->name);
    }else{
        printf("勝者: %s... 世界は闇に包まれた \n", boss->name);
    }

    delete_character(hero);
    delete_character(boss);
    return 0;
}