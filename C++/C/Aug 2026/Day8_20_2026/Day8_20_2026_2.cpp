#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a ={1,2,1,1,3,2};

    int right = 0;
    int sum = 0;
    int best = 0;
    int K = 4;

    for(int left = 0; left < a.size();left++)
    {
        while(right < a.size() && sum +a[right] <= K)
        {
            sum += a[right];
            right++;
        }

        best = max(best, right - left);

        if(right == left)
            right++;
    }

    cout << best << endl;

    return 0;
}