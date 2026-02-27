#include <iostream>
#include <vector>
 using namespace std;
class Solution{
    public :
        vector<int> getConcatenation(vector<int>& nums){
            int n = nums.size();

            vector<int> ans;
            ans.reserve(2*n);

            ans.insert(ans.end(),nums.begin(),nums.end());
            ans.insert(ans.end(),nums.begin(),nums.end());

            return ans;
        }

};

int main(){
    Solution sol;

    vector<int> nums={1,3,2,1};
    vector<int> result = sol.getConcatenation(nums);

    cout << "Original size: "<<nums.size() <<endl;
    cout << "Result size: "<< result.size() << endl;
    cout << "Result data: [";

    for(int i = 0; i<result.size();i++){
        cout << result[i]<< (i == result.size() - 1 ? "": ",");
    }
    cout << "]" <<endl;
    return 0;
}