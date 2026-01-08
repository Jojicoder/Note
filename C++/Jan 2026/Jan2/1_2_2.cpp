#include <iostream>
#include <vector>

int main(){
    std::vector<int> scores = {10, 20, 30};

    for(int& score : scores){
        score = score* 2;
    }

    std:: cout << "２倍した結果: ";
    for(int score:scores){
        std::cout << score << " ";
    }

    std::cout << std::endl;

    return 0;
}