#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
    public: 
        vector<int> twoSum(vector<int>& nums, int target){
            unordered_map<int, int> map;

            for(int i = 0; i<nums.size();i++){
                int complement = target - nums[i];

                if(map.count(complement)){
                    return{map[complement], i};
                }
                map[nums[i]] = i;
            }
            return {};
        }
};

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution sol;

    vector<int> result = sol.twoSum(nums, target);

    if(result.size() ==2){
        cout << "見つかったインデックス: " << result[0] <<", " << result[1] << endl;
    }else{
        cout << "解が見つかりませんでした" << endl;
    }

    return 0;
}