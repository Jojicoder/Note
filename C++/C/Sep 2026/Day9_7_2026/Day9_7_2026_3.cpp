#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> a = {1,3,5,2,3,4};
    unordered_set<int> seen;

    for(int x: a)
    {
        if(seen.count(x))
        {
            cout << x << endl;
            return 0;
        }

        seen.insert(x);
    }

    cout << "No Duplicate" <<endl;

    return 0;
}