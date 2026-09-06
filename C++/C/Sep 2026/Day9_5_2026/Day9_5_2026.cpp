#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a = {4,2,4,1,2,3};

    sort(a.begin(),a.end());

    a.erase(
        unique(a.begin(),a.end()),
        a.end()
    );

    for(int x: a)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}