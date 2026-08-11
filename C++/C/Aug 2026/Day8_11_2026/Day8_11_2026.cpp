#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {2,4,7,9,12,15,20};

    int target = 12;

    int left = 0;
    int right = nums.size()-1;

    while(left <= right){

        int mid = (left + right)/2;

        if(nums[mid] == target){
            cout << "Found: " <<mid << endl;
            return 0;
        }
        else if(nums[mid] < target)
        {
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    } 

    cout << "Not Found" <<endl;

    return 0;
}