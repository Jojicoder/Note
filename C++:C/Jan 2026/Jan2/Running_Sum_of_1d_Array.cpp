
#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
        vector<int> runningSum(vector<int>& nums){
            for(int i = 1; i < nums.size(); i++){
                nums[i]= nums[i] + nums[i-1];
            }
            return nums;
        }
};

int main(){
    vector<int> myInput = {1,2,3,4};

    Solution sol;
    vector<int> result = sol.runningSum(myInput);

    cout <<"実行結果: ";
    for(int n :result){
        cout << n << " ";
    }
    cout <<endl;
    return 0;
}

