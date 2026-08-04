#include "raylib.h"

int main() {
    // 1. 画面のサイズ（横幅800、縦幅450）とタイトルを設定してウィンドウを開く
    InitWindow(800, 450, "My First WebAssembly Game");
    SetTargetFPS(60); // 1秒間に60回画面を更新する

    // プレイヤー（四角形）の初期位置
    int playerX = 400;

    // 2. ゲームのメインループ（ウィンドウが閉じられるまで繰り返す）
    while (!WindowShouldClose()) {
        
        // 3. 入力処理：矢印キーが押されたら位置を移動
        if (IsKeyDown(KEY_RIGHT)) playerX += 5;
        if (IsKeyDown(KEY_LEFT))  playerX -= 5;

        // 4. 描画処理
        BeginDrawing();
        ClearBackground(RAYWHITE); // 背景を白で塗りつぶす

        // 文字を表示
        DrawText("Use Left/Right Arrow Keys to Move!", 10, 10, 20, DARKGRAY);

        // プレイヤー（青い四角）を描画 (X座標, Y座標, 横幅, 縦幅, 色)
        DrawRectangle(playerX, 200, 50, 50, BLUE);

        EndDrawing();
    }

    // 5. 終了処理：ウィンドウを閉じる
    CloseWindow();
    return 0;
}
