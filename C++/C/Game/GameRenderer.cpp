#include "GameRenderer.hpp"

void DrawGame(const GameData& data){
    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawRectangleRec(data.player,BLUE);
    DrawText("Move with arrow keys", 20,20,20,DARKGRAY);

    EndDrawing();
}
