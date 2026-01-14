#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> data;

    data.reserve(5);

    cout << data.size() << endl;
    for(int x :data){
        cout << x <<" ";
    }
    cout << endl << endl;

    data.resize(8,99);

    for(int x :data){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}