#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> scores = {50,20,90,10,60};

    sort(scores.begin(),scores.end());

    cout <<"昇順 ";
    for(int s:scores){
        cout << s << " ";
    }

    cout << endl;
    return 0;
}