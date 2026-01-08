#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers;

    int input;
    std::cout << "数字を入力してください 0を入力すると終了します。"<< std::endl;

    while(std::cin >> input){
        if(input == 0){
            break;
        }
    

    numbers.push_back(input);
    }

    std::cout <<"保存されたデータ集: "<<numbers.size() <<" 個"<< std::endl;
    
    if(!numbers.empty()){
        std::cout<<"最後に入力された数: " << numbers.back() << std::endl;
    }
    return 0;
}