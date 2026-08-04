#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 100};
    std::vector<int> evens; // 偶数を入れるための新しい箱

    for (int x : data) {
        // アルゴリズムの核：「2で割った余りが0」なら偶数
        if (x % 2 == 0) {
            evens.push_back(x);
        }
    }

    std::cout << "見つかった偶数の数: " << evens.size() << "個" << std::endl;
    
    // 中身を確認
    for (int x : evens) {
        std::cout << x << " ";
    }
}