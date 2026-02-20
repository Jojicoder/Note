#include <iostream>
#include <random>

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1,100);

    int secretNumber = distrib(gen);
    int guess = 0;
    int attempts = 0;

    cout << "1から100の間の数字を当ててください！" << endl;

    while(guess != secretNumber){
        cout << "数字を入力: ";
        cin >> guess;
        attempts++;
        
        if(guess > secretNumber){
            cout << "もっと小さい数字です。" << endl;}
        else if(guess < secretNumber){
            cout << "もっと大きい数字です。" << endl;
        }else{
            cout << "正解！ "<< attempts <<"回目で当たりました！ " << endl;
        }
    }
    return 0;
}