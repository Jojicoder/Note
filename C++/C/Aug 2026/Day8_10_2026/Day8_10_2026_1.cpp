#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {4,7,2,9,5};

    int target = 9;
    int index = -1;

    for(int i = 0; i < nums.size();i++){
        if(target == nums[i])
          {
                index = i;
                break;
          }  
    }

    if(index != -1)
    {
        cout <<"Found: " << index <<endl;
    }
    else
    {
        cout << "Not Found" <<endl;
    }

    return 0;
}