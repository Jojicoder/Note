#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;
int main(){
    vector<int> data = {10,20,30};

    try{
        cout << data[3] << endl;
    }
    catch(const out_of_range& e){
        cout << e.what()<< endl;
    }
    return 0;
}
