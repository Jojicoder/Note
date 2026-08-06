#include "raylib.h"
#include "GameData.hpp"
#include "GameLogic.hpp"
#include "GameRenderer.hpp"

int main(){

    InitWindow(800,450, "File Separation");

    GameData data{
        {100,100,50,50},
        5.0f
    };

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        UpdateGame(data);
        DrawGame(data);
    }

    CloseWindow();

    return 0;

}