#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a = {2,1,3,2,4};

    int K = 6;
    int left = 0;
    int sum = 0;

    for(int right = 0;right < a.size();right++)
    {
        sum += a[right];
        while(sum > K)
        {
            sum -= a[left];
            left++;
        }

        if(sum == K)
        {
            cout << "Found" <<endl;
            return 0;
        }
    }

    cout << "Not Found" << endl;

    return 0;
}