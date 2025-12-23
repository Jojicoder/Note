#include <iostream>
#include <string>
using namespace std;
class Hero{
    private:
    string name;
    int hp;
    int attackPower;

    public:
        Hero(string n, int h, int a) : name(n), hp(h), attackPower(a){}

        void attack() const{
            cout << name << " の攻撃！" << attackPower << " ダメージ" << endl;

        }

        void takeDamage(int damage){
            hp -= damage;
            if(hp < 0) hp = 0;
            cout << name << " は " << damage << " のダメージを受けた。残りHP: " << hp << endl;
        }

        bool isAlive() const{
            return hp > 0;
        }
};

int main(){
    Hero myHero("勇者",100,25);

    myHero.attack();
    myHero.takeDamage(30);
    myHero.takeDamage(80);

    if(!myHero.isAlive()){
        cout << "勇者は倒れてしまった。。" << endl;
        }

    return 0;
}