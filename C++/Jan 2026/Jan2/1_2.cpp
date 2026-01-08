#include <iostream>
#include <vector>

int main(){
    std::vector<int> scores = {80, 65,90,72,88};
    int total = 0;

    for(int score :scores){
        total += score;
    }

    std::cout << "合計点: "<< total << std:: endl;

    return 0;
}