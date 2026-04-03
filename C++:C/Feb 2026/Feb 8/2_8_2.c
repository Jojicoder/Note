#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[20];
    int energy;
    int hunger;
} Pet;

Pet* create_pet(const char* name){
    Pet* p = (Pet*)malloc(sizeof(Pet));

    if(p == NULL)exit(1);

    strcpy(p->name,name);
    p-> energy = 50;
    p-> hunger = 50;

    printf("🐣 %s 生まれた!\n", p->name);
    return p;
}

void feed(Pet* p){
    printf("🍖 %s ご飯を与えた\n",p->name);
    p->hunger -=20;
    if(p->hunger <0) p->hunger = 0;
}

void play(Pet* p){
    printf("🎾 %s と遊んだ\n", p->name);
}

void show_status(Pet* p){
    printf("   [状態] 元気: %d / 空腹: %d\n", p->energy, p->hunger);
}

void bye_pet(Pet* p){
    printf("👋 %s とお別れしました\n", p->name);
}

int main(){
    printf("いくせいげーむ");
    Pet* mypet = create_pet("ポチ");

    show_status(mypet);
    show_status(mypet);

    play(mypet);   // 遊ぶ (ポインタを渡して中身を書き換える)
    show_status(mypet);

    feed(mypet);   // ご飯 (ポインタを渡して中身を書き換える)
    show_status(mypet);

    play(mypet);   // また遊ぶ
    show_status(mypet);

    // 最後は必ず解放
    bye_pet(mypet);

    return 0;

    
}