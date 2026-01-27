#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> data = {12, 5,99,40,3};

    int champion = data[0];
    for (int challenger : data){
        if(challenger > champion){
            champion = challenger;
        }
    }

    cout << champion<<endl;
    return 0;
}