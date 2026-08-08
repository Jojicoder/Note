#include "raylib.h"

int main()
{
    InitWindow(800,450,"Chase Game");

    Rectangle target = {300,180,50,50,};
    Rectangle chase = {0,0,50,50};

    float speed = 2.0f;
    int score = 0;

    SetTargetFPS(60);
    
    while(!WindowShouldClose())
    {
        if(chase.x < target.x)
            chase.x += speed;
        
        if(chase.x > target.x)
            chase.x -= speed;

        if(chase.y < target.y)
            chase.y += speed;
        
        if(chase.y > target.y)
            chase.y -= speed;

        if(CheckCollisionRecs(chase,target))
        {
            score++;

            target.x = GetRandomValue(0,750);
            target.y = GetRandomValue(0,400);
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangleRec(target,BLUE);
        DrawRectangleRec(chase,RED);

        DrawText(
            TextFormat("Score: %d", score),
            20,
            20,
            30,
            BLACK
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}