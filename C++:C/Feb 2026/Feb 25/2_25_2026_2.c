#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int hp;
    int level;

}Player;

void level_up(Player* p) {
    p->level = p->level +1;
    p->hp = p->hp+20;

    printf("[Sytem] %s leveled up to Lv.%d!\n", p->name,p->level);
}

int main(){
    printf("=== Struct & Piinter Review ===\n\n");

    Player hero;
    strcpy(hero.name, "Hero");
    hero.hp = 100;
    hero.level = 1;

    printf("[Before] %s: Lv.%d, HP:%d\n", hero.name,hero.level,hero.hp);

    level_up(&hero);

    printf("[After] %s: Lve.%d, HP:%d\n",hero.name,hero.level,hero.hp);

    return 0;


}