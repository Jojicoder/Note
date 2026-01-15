#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> master_data = {100,200,300};

    for(const int& val:master_data){
        cout << val <<" ";
        
    }
    cout << '\n';

    auto it = master_data.cbegin();
    cout << *it << endl;

    return 0;
}