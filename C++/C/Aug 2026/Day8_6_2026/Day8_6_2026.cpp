#include "raylib.h"

int main()
{
    InitWindow(800,450,"Key Press");

    bool show = false;

    SetTargetFPS(60);

    while(!WindowShouldClose()){

        if(IsKeyPressed(KEY_SPACE)){
            show = !show;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        if(show){
            DrawText("Hello",330,200,30, BLUE);
        }


        EndDrawing();
    }

    CloseWindow();
}