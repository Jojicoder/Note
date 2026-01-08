#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> inventory;
    string item;
    cout << "アイテムを入力(endで終了) :" << endl;
    
    while(cin >> item)
    {
        if(item=="end"){
            break;}
    

    inventory.push_back(item);
    }

    cout << "持ち物の数 :" << inventory.size() <<" 個" << endl;

    if(!inventory.empty()){
        cout <<"最初のアイテム: " << inventory[0] <<endl;
    }
    return 0;
}