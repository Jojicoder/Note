#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> numbers;
    numbers.reserve(20);

    for(int i = 0; i < 20;i++){
        numbers.push_back(i);
        cout << numbers.size() << " :"<<numbers.capacity()<<endl;

    }
    return 0;

}