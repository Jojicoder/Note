#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a = {1, 3, 5, 7, 9};

    int target = 6;

    auto it = lower_bound(a.begin(), a.end(), target);

    cout << *it << endl;

    return 0;
}