#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int main(){
    unordered_map<string, string> friends;

    friends["Alice"] = "オンライン";
    friends["Bob"] = "離席中";
    friends["Charlie"] = "ゲーム中";

    cout << "現在のフレンドリスト"<< endl;
    for(const auto& pair : friends){
        cout <<"*" << pair.first << " : "<< pair.second << endl;
    }

    cout << "\n[通知] Aliceの状態が変わりました。"<< endl;
    friends["Alice"] = "寝ています";

    cout << "[通知] Bobをリストから削除します。" << endl;
    friends.erase("Bob");

    cout << "\n操作後のフレンドリスト" <<endl;

    for(const auto& pair : friends){
        cout <<"*"<<pair.first <<" : "<< pair.second<< endl;
    }

    if(friends.find("Bob")==friends.end()){
        cout << "\nBobをもうリストにいません。"<< endl;
    }
    return 0;
}