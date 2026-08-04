#include "raylib.h"

int main()
{
    InitWindow(800,450, "Texture");

    Texture2D player = LoadTexture("player.png");

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawTexture(player,100,100,WHITE);

        EndDrawing();
    }

    UnloadTexture(player);
    CloseWindow();

    return 0;
}