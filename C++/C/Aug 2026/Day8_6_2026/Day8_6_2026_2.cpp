#include "raylib.h"

int main()
{
    InitWindow(800, 450, "Mouse Click");

    Vector2 position = {400, 225};

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        {
            position = GetMousePosition();
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawCircleV(position, 20, BLUE);
        DrawText("Hold Left Mouse Button", 20, 20, 20, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}