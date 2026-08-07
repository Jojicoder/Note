#include "raylib.h"

int main(){
    InitWindow(800,450,"Hover");

    Rectangle button = {300,100,200,70};

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        Vector2 mouse = GetMousePosition();

        bool hover = CheckCollisionPointRec(mouse,button);

        BeginDrawing();

        ClearBackground(RAYWHITE);

        if(hover)
            DrawRectangleRec(button,GREEN);
        else
            DrawRectangleRec(button,GRAY);

        DrawText("START",355,200,30,BLACK);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}