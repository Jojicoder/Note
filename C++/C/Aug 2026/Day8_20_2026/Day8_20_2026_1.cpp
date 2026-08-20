#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {2,1,3,2,1};

    int right = 0;
    int sum = 0;
    int best = 0;

    for(int left = 0; left < a.size();left++)
    {
        while(right < a.size() && sum + a[right] <= 5)
        {
            sum += a[right];
            right++;
        }

        best = max(best, right - left);

        if(right == left)
            right++;
        else    sum -= a[left];

    }
    cout << best << endl;
    return 0;
}