#include "raylib.h"

int main()
{
    InitWindow(800,450,"Follow Mouse");

    Vector2 player ={100,100};
    float speed = 3.0f;

    while(!WindowShouldClose())
    {
        Vector2 mouse = GetMousePosition();

        if(player.x < mouse.x)player.x +=speed;
        if(player.x > mouse.x)player.x -=speed;
        if(player.y < mouse.y)player.y +=speed;
        if(player.y > mouse.y)player.y -=speed;

        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawCircleV(player,20,BLUE);

        EndDrawing();
    }

    CloseWindow();
}