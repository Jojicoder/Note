#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {2, 4, 7, 9};
    vector<int> sum(a.size() + 1, 0);

    for (int i = 0; i < a.size(); i++)
        sum[i + 1] = sum[i] + a[i];

    cout << sum[4] - sum[1] << endl;
}