#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> box = {1,5,9,7,3};
    int target = 80;
    bool found = false;

    for(int x : box){
        if(x == target){
            found = true;
            break;
        }
    }

    if(found){
        cout <<"当たり "<< target<< endl;
    }else{
        cout <<"NO"<< endl;
    }

    return 0;

}