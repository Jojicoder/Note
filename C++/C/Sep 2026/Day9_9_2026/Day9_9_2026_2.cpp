#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> nums = {5,2,8,3,7};

    int sum = 0;

    for(int x: nums)
    {
        sum+=x;
    }

    int maxValue = *max_element(nums.begin(),nums.end());
    int minValue = *min_element(nums.begin(),nums.end());

    double average = (double)sum / nums.size();

    cout <<"Sum: " << sum <<endl;
    cout <<"Max: " << maxValue <<endl;
    cout <<"Min: " << minValue << endl;
    cout << "Average: " << average << endl;

    return 0;
}