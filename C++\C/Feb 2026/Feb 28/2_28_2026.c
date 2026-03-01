#include <stdio.h>

// ==========================================
// 1. 導関数 f'(x) = 2x の定義
// 先ほど手計算で求めた「傾き（勢い）」を出すマシーン
// ==========================================
double derivative(double x) {
    return 2.0 * x;
}

int main() {
    // 初期位置（山の上の適当な場所、x = 5.0 からスタート）
    double current_x = 5.0; 
    
    // 学習率（1歩の歩幅：大きすぎると谷を飛び越え、小さいと時間がかかる）
    double learning_rate = 0.1;
    
    printf("\n--- Gradient Descent (Finding the minimum of y = x^2) ---\n");

    // ==========================================
    // 2. 谷底を目指して坂を下るループ（学習プロセス）
    // ==========================================
    for (int step = 1; step <= 20; step++) {
        
        // 現在地の傾きを微分で計算する
        double slope = derivative(current_x);
        
        // 傾きの逆方向（下り方向）へ、歩幅を掛けて一歩進む
        current_x = current_x - (learning_rate * slope);
        
        printf("Step %2d | Current x: %.5f | Slope: %.5f\n", step, current_x, slope);
    }

    printf("\nFinished! The minimum x is approximately: %.5f\n\n", current_x);
    return 0;
}