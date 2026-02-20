#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
            unordered_set<int> board(nums1.begin(), nums1.end());

            vector<int> result;

            for(int card : nums2){
                    if(board.count(card)){
                        result.push_back(card);
                        board.erase(card);
                    }
            }

            return result;
        }
};

int main(){
    vector<int> nums1 = {1,2,2,1,3};
    vector<int> nums2 = {2,2,3};

    Solution sol;
    vector<int> answer = sol.intersection(nums1, nums2);

    cout << "共通していた数字:  ";
    for(int num : answer){
        cout << num << " ";
    } 
    cout << endl;
    return 0;
}
