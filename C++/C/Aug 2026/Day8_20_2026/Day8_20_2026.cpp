#include <iostream>
using namespace std;

int main(){
    int coins[] = {500,100,50,10,5,1};
    int money = 786;
    int count = 0;

    for(int coin : coins)
    {
        count += money /coin;
        money %= coin;
    }

    cout << count << endl;

    return 0;
}