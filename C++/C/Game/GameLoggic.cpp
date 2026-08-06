#include "GameLogic.hpp"

void UpdateGame(GameData& data)
{
    if(IsKeyDown(KEY_RIGHT)) data.player.x += data.speed;
    if(IsKeyDown(KEY_LEFT)) data.player.x -= data.speed;
    if(IsKeyDown(KEY_UP)) data.player.y -= data.speed;
    if(IsKeyDown(KEY_DOWN)) data.player.y += data.speed;

    if(data.player.x < 0)
        data.player.x = 0;
    
    if(data.player.y < 0)
        data.player.y = 0;
    
    if(data.player.x + data.player.width > GetScreenWidth())
        data.player.x = GetScreenWidth() - data.player.width;
    
    if(data.player.y + data.player.height > GetScreenHeight())
        data.player.y = GetScreenHeight() - data.player.height;
    
        
}