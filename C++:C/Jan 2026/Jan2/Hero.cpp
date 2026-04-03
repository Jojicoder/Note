#include <iostream>
#include <string>


class Hero{
    public:
        std::string name;
        int hp;
        int attack;

        void sayHello(){
            std::cout << "私は " <<name <<"だ！(HP: "<< hp <<")" << std::endl;
        }
};

int main(){
    Hero h1;

    h1.name = "アーサー";
    h1.hp = 100;
    h1.attack = 50;

    Hero h2;
    h2.name = "ランスロット";
    h2.hp = 85;

    std::cout <<"--- 勇者たちの挨拶 ---" << std::endl;
    h1.sayHello();
    h2.sayHello();

    return 0;
}