#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:

        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
            int p1 = m-1;
            int p2 = n-1;
            int p = m+n-1;

            while(p2>=0){
                if(p1>=0 && nums1[p1]>nums2[p2]){
                    nums1[p] = nums1[p1];
                    p1--;
                }
                else
                    {
                        nums1[p] = nums2[p2];
                        p2--;
                    }
                p--;
            }
        }
};

int main(){
    Solution sol;

    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 ={2,5,6};
    int n = 3;

    cout << "Before merge: ";
    for(int x:nums1)cout << x <<" ";
    cout << endl;

    sol.merge(nums1,m,nums2,n);
    cout << "After merge: ";
    for(int x: nums1)cout << x << " ";
    cout << endl;

    return 0;
}