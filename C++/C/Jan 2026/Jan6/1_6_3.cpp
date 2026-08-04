#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
    public :
        vector<int> twoSum(vector<int>& nums, int target){
            unordered_map<int, int> map;
            for(int i = 0;i < nums.size();i++){
                int current = nums[i];
                int partner = target - current;

                if(map.count(partner)){
                    return {map[partner],i};
                }
                map[current] =i;
            }
            return{};
        }
        
    };

    int main(){
        vector<int> nums = {2,7,11,15};
        int target = 9;

        Solution sol;
        vector<int> result = sol.twoSum(nums, target);

        cout <<"インデックス: "<< result[0] <<"," << result[1] <<endl;
        return 0;
    }

