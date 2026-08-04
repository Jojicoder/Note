#include <iostream>

int main(){
    auto doubleValue = [](int x){
        return x*2;
    };

    std::cout << doubleValue(10)<<std::endl;
    std::cout << doubleValue(50)<<std::endl;
    return 0;
}

