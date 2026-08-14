#include "raylib.h"

int main()
{
    InitWindow(800,450,"RPG Battle");

    int playerHp = 30;
    int enemyHp = 20;

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        if(IsKeyPressed(KEY_ONE))
        {
            enemyHp -= 5;
        }

        BeginDrawing();

        ClearBackground(BLACK);

        DrawText(TextFormat("Player HP: %d",playerHp),50,50,30,WHITE);
        DrawText(TextFormat("Slime HP: %d",enemyHp),500,50,30,WHITE);

        DrawText("1. Attack",50,300,30,WHITE);
        
        if(enemyHp <= 0)
        {
            DrawText("Slim defeated!",280,200,30,YELLOW);
        }
        
        EndDrawing();
    }
    CloseWindow();

}