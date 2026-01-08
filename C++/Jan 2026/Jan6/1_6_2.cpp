#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
            unordered_map<int, int> counts;

            for(int num : nums1){
                counts[num]++;
            }

            vector<int> result;

            for(int num : nums2){
                if(counts[num] > 0){
                    result.push_back(num);
                    counts[num]--;
                }
            }
            return result;
        }
};

int main(){
    vector<int> nums1 = {1,2,2,1,3};
    vector<int> nums2 = {2,2,3,3};

    Solution sol;
    vector<int> answer = sol.intersection(nums1, nums2);

    cout<<"わたせた数字：";
    for(int num : answer){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}