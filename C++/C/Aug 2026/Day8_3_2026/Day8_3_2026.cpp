#include "raylib.h"

int main(){
    InitWindow(800,450,"Collision");

    Rectangle player = {100,100,50,50};
    Rectangle goal = {500, 200, 80, 80};

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        if(IsKeyDown(KEY_RIGHT)) player.x +=5;
        if(IsKeyDown(KEY_LEFT)) player.x -=5;
        if(IsKeyDown(KEY_UP)) player.y -=5;
        if(IsKeyDown(KEY_DOWN)) player.y +=5;

        bool hit = CheckCollisionRecs(player,goal);

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangleRec(player, BLUE);
        DrawRectangleRec(goal,GREEN);

        if(hit){
            DrawText("GOAL!",320,50,40,RED);
        }

        EndDrawing();
    
    }

    CloseWindow();

    return 0;
}