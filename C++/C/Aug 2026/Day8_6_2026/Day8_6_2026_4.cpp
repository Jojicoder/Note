#include "raylib.h"

int main()
{
    InitWindow(800,450,"Click Game");
 Rectangle target ={300,180,50,50};
 Rectangle chase ={0,0,50,50};

 DrawRectangleRec(chase,RED);
    int score = 0;
   

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {

        if(CheckCollisionPointRec(chase,target))
            {
                score++;

                target.x = GetRandomValue(0,700);
                target.y = GetRandomValue(0,390);
            }
            BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawRectangleRec(target,BLUE);
            DrawText(TextFormat("Score: %d",score),20,20,30,BLACK);

            EndDrawing();
    }

    CloseWindow();
    return 0;
}