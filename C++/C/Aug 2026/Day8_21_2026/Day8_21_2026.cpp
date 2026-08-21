#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a = {2,1,5,2,3,2};

    int k = 7;
    int left = 0;
    int sum = 0;
    int best = a.size() + 1;

    for(int right = 0; right < a.size(); right++)
    {
        sum += a[right];

        while(sum >= k)
        {
            best = min(best, right - left + 1);

            sum -= a[left];
            left++;
        }
    }

    cout << best << endl;

    return 0;
}