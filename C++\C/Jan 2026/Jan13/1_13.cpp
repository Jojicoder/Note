#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> data = {100,200,300};

    auto it = data.begin();

    cout << *it << endl;

    it++;
    cout << *it << endl;
    *it=999;
    it++;
    cout << *it << endl;

    return 0;
}