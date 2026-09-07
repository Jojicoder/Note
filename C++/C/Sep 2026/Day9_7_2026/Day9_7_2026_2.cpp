#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    vector<int> a = {1,2,3,2,4,3,5};

    unordered_set<int> seen;
    unordered_set<int> duplicate;

    for(int x : a)
    {
        if(seen.count(x))
        {
            duplicate.insert(x);
        }else
        {
            seen.insert(x);
        }
    }

    for(int x : duplicate)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}