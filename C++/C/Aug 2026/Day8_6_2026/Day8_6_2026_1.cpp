#include "raylib.h"

int main()
{
    InitWindow(800,450,"Mouse");

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        Vector2 mouse = GetMousePosition();

        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawCircleV(mouse, 20,BLUE);
        DrawText("Move the mouse!",20,20,20,DARKGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}