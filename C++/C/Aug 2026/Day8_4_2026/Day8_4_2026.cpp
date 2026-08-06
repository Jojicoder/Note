#include "raylib.h"

int main(){
    InitWindow(800,450,"Movement Limit");

    Rectangle player = {100, 100, 50, 50};
    float speed = 5.0f;

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        if(IsKeyDown(KEY_RIGHT)) player.x += speed;
        if(IsKeyDown(KEY_LEFT)) player.x -= speed;
        if(IsKeyDown(KEY_UP)) player.y -=speed;
        if(IsKeyDown(KEY_DOWN)) player.y +=speed;

        if(player.x < 0)
            player.x = 0;
        
        if(player.y < 0)
            player.y = 0;
        
        
        if(player.x + player.width > GetScreenWidth())
            player.x = GetScreenWidth() - player.width;
        
        if(player.y + player.height > GetScreenHeight())
            player.y = GetScreenHeight() - player.height;
        

        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        DrawRectangleRec(player, BLUE);
        DrawText("Move with arrow keys",20,20,20,DARKGRAY);

        EndDrawing();
    } 

    CloseWindow();
    return 0;
}