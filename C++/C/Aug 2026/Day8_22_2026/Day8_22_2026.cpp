#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a ={2,1,5,1,3,2};

    int K =3;
    int sum = 0;
    int best = 0;

    for(int i = 0; i < K;i++)
    sum += a[i];

    best = sum;

    for(int right = K; right < a.size();right++)
    {
        sum +=a[right];
        sum -=a[right-K];

        best = max(best, sum);
    }

    cout << best << endl;

    return 0;
}