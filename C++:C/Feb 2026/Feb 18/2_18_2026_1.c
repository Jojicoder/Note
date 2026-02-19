#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // usleep用 (Windowsなら <windows.h> で Sleep)
#include <time.h>

#define HEIGHT 20
#define WIDTH 40

// ==========================================
// 1. 細胞の状態を表示する関数
// ==========================================
void draw_grid(int grid[HEIGHT][WIDTH]) {
    // 画面をクリアしてカーソルを左上に戻す魔法のコード (ANSIエスケープ)
    printf("\033[H\033[J");

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (grid[y][x] == 1) {
                printf("O "); // 生きている細胞
            } else {
                printf(". "); // 死んでいる場所
            }
        }
        printf("\n");
    }
}

// ==========================================
// 2. 周囲の生きている細胞を数える関数
// ==========================================
int count_neighbors(int grid[HEIGHT][WIDTH], int x, int y) {
    int sum = 0;
    // 周囲8マスを調べる
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            // 自分自身は数えない
            if (i == 0 && j == 0) continue;

            int col = x + j;
            int row = y + i;

            // 画面外は無視する (安全策)
            if (col >= 0 && col < WIDTH && row >= 0 && row < HEIGHT) {
                sum += grid[row][col];
            }
        }
    }
    return sum;
}

// ==========================================
// 3. 次の世代を計算する関数 (The Rules)
// ==========================================
void update_grid(int current[HEIGHT][WIDTH], int next[HEIGHT][WIDTH]) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            
            // 1.今の状態と、周りの人数を調べる
            int state = current[y][x];
            int neighbors = count_neighbors(current, x, y);

            // --- ライフゲームの4つのルール ---
            
            if (state == 0 && neighbors == 3) {
                // 【誕生】 死んでいても、周りに3人いれば生まれる
                next[y][x] = 1;
            } 
            else if (state == 1 && (neighbors < 2 || neighbors > 3)) {
                // 【過疎・過密】 仲間が少なすぎるか、多すぎると死ぬ
                next[y][x] = 0;
            } 
            else {
                // 【維持】 それ以外は現状維持
                next[y][x] = state;
            }
        }
    }
}

// ==========================================
// 4. メイン関数
// ==========================================
int main() {
    int grid[HEIGHT][WIDTH];     // 現在の世界
    int next_grid[HEIGHT][WIDTH]; // 次の瞬間の世界

    srand(time(NULL));

    // 1. 初期化：ランダムに細胞をばら撒く
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // 20%の確率で生きた細胞を置く
            grid[y][x] = (rand() % 5 == 0) ? 1 : 0;
        }
    }

    // 2. 無限ループでシミュレーション
    printf("=== Conway's Game of Life ===\n");
    
    while (1) {
        draw_grid(grid);          // 1. 描画
        update_grid(grid, next_grid); // 2. 次の世界を計算
        
        // 3. 次の世界を今の世界にコピー (更新)
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                grid[y][x] = next_grid[y][x];
            }
        }

        // 4. 少し待つ (0.1秒)
        usleep(100000); 
    }

    return 0;
}