#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};

    for(int i = 1; i < nums.size();i++){
        nums[i] =nums[i] + nums[i-1];
    }

    for(int x: nums){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;

}