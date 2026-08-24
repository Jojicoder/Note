#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    vector<int> a = {2,7,11,15};
    int target = 9;

    unordered_set<int> seen;

    for(int x : a)
    {
        int need = target - x;

        if(seen.count(need))
        {
            cout << "Found" << endl;
            return 0;
        }
        seen.insert(x);
    }

    cout << "not Found" << endl;
    return 0;
}
