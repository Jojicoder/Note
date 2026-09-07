#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    vector<int> a = {1,2,3,4};
    vector<int> b = {3,4,5,6};

    unordered_set<int> s;

    for(int x : a)
    {
        s.insert(x);
    }

    for(int x : b)
    {
        if(s.count(x))
        {
            cout << x << " ";
        }
    }

    cout << endl;

    return 0;
}