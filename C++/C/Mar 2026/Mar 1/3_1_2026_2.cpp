#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int minCostClimbinStairs(vector<int>& cost){
            int n = cost.size();
            int prev2 =cost[0];
            int prev1 =cost[1];

            for(int i = 2; i<n;i++){
                int curr = cost[i]+min(prev1,prev2);
                prev2 = prev1;
                prev1 = curr;
            }

            return min(prev1,prev2);
        }
};

int main(){
    Solution sol;

    vector<int> cost1 = {10,15,20};
    cout << sol.minCostClimbinStairs(cost1)<<endl;

    vector<int> cost2 = {1,100,1,1,1,100,1,1};
    cout << sol.minCostClimbinStairs(cost2)<< endl;

    return 0;
}