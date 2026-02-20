#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

struct Skill{
    string name;
    int mpCost;
    int power;
};

int main(){
    unordered_map<int, Skill> skillBook;
    
    skillBook[1] = {"ファイアー",5,30};
    skillBook[2] = {"サンダー",8,45};
    skillBook[10] = {"メテオ",50, 200};

    int skillId;
    cout <<"発動するスキルIDを入力(1,2,10): ";
    cin >> skillId;

    if(skillBook.find(skillId) != skillBook.end()){
        Skill s = skillBook[skillId];

        cout << "発動" << s.name <<"!" << endl;
        cout << "消費MP"<< s.mpCost << endl;
        cout << "敵に" << s.power <<" のダメージ" << endl;
    
    }else{
        cout << "そのスキルは覚えていません" << endl;
    }

    return 0;

}