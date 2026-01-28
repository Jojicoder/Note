#include <iostream>
#include <vector>

int main() {
    // 3次元の座標 (x, y, z)
    std::vector<int> point = {3, 4, 5};
    
    int result = 0;

    // 数学: Σ(x^2)
    // 中身を順番に「2乗」して足していく
    for (int x : point) {
        result += x * x; 
    }

    // 計算: 3*3 + 4*4 + 5*5 = 9 + 16 + 25 = 50
    std::cout << "二乗和の結果: " << result << std::endl;

    return 0;
}