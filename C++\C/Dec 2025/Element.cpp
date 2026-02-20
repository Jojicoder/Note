#include <iostream>

enum class Element{
    Fire,
    Water,
    Grass
};

int main(){
    Element myMagic = Element::Fire;
    Element enemyType = Element::Grass;

    std::cout << "魔法発動！"<< std::endl;

    switch(myMagic){
        std::cout << "火属性の攻撃"<< std::endl;
        if(enemyType == Element::Grass){
            std::cout << ">> 効果は抜群だ" << std::endl;
            
        }else if(ene)
    }
}