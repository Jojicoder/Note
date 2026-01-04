#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
       int singleNumber(vector<int>& nums){

        sort(nums.begin(), nums.end());
        for(int i = 0; i < (int)nums.size()-1;i+=2){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
        }

        return nums.back();
       }
};

int main(){
    vector<int> nums = {4,1,2,1,3,2,3,4,6,7,8,8,6};

    Solution sol;
    int result = sol.singleNumber(nums);

    cout << "一回だけ現れる数字: "<< result << endl;
    return 0;
}