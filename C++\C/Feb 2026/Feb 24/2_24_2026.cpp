#include <stdio.h>

// ==========================================
// 1. Greedy Algorithm for Plate Loading
// ==========================================
void calculate_plates(int target_weight) {
    int bar_weight = 45;
    
    // 片側に追加すべき重量を計算
    int side_weight = (target_weight - bar_weight) / 2;
    
    // ジムにある標準的なプレートの種類（重い順）
    int plates[] = {45, 35, 25, 10, 5};
    int num_plates = sizeof(plates) / sizeof(plates[0]);

    printf("Target Weight: %d lbs\n", target_weight);
    printf("Load per side: %d lbs\n\n", side_weight);
    printf("[Required Plates]\n");

    // 重いプレートから順番に貪欲に計算していくループ
    for (int i = 0; i < num_plates; i++) {
        // ① 今見ているプレートが何枚入るか（商）を計算
        int count = side_weight / plates[i];
        
        if (count > 0) {
            printf("- %d lb plate x %d\n", plates[i], count);
            
            // ② 残りの重量（余り）に更新する
            side_weight = side_weight % plates[i];
        }
    }
}

// ==========================================
// 2. Main Function
// ==========================================
int main() {
    // 315lbのデッドリフトを上げるためのプレートを計算
    int my_deadlift_goal = 315;
    
    calculate_plates(my_deadlift_goal);

    return 0;
}