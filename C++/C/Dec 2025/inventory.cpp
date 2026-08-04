#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> inventory;

    cout << "アイテムを拾いました"<< endl;

    inventory.push_back("薬草");
    inventory.push_back("銅の剣");
    inventory.push_back("解熱剤");

    cout << "現在の持ち物(" << inventory.size() << "個)"<< endl;

    for(const auto& item : inventory){
        cout << " " << item << endl;
    }

    return 0;
}