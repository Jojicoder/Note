#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int removeDuplicates(vector<int>& nums){
            if(nums.empty()) return 0;


            int k = 1;

            for (int i = 1; i < nums.size(); i++){

                if (nums[i] != nums[i-1]){
                    nums[k] = nums[i];

                    k++;
                }
            }

            return k;
        }
};

int main(){
            Solution sol;

            vector<int> nums = {0, 0, 1, 1, 1, 2, 2,3,3,4};
            cout <<"--実行前--" << endl;
            cout << "元の配列: ";
            for(int n : nums) cout << n << " ";
            cout << "\n\n";

            int  k = sol.removeDuplicates(nums);

            cout << "--実行後--" << endl;
            cout << "戻り値 (k): " << k << endl;

            cout << "修正後の配列（先頭 " << k << " 個）：";
            for(int i = 0; i < k; i++)
                cout << nums[i] << " ";
            cout << endl;

            cout << "（参考）配列の残り部分: ";
            for(int i = k; i < nums.size(); i++){
                cout << nums[i] << " ";
            }
            cout << endl;

            return 0;
}