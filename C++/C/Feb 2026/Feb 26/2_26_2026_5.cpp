#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:

        int removeElement(vector<int>& nums,int val){
            int writer = 0;

            for(int reader =0; reader<nums.size();reader++){
                if(nums[reader]!=val){
                    nums[writer] = nums[reader];
                    writer++;
                }
            }

            return  writer;
        }
};

int main(){
    Solution sol;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val= 2;

    cout << "Before: ";
    for(int x : nums)cout << x << " ";
    cout << endl;

    int k = sol.removeElement(nums,val);
    cout << "After (Count: "<< k <<"): ";
    for(int x: nums)cout << x << " ";
    cout << endl;
}