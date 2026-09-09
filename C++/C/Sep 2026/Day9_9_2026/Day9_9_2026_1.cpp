#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<pair<int,int>> v = {
        {1,100},
        {2,200},
        {3,300}
    };

    cout << "vector<pair>:" <<endl;

    for(auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }

    map<int, int> mp;
    mp[1] = 100;
    mp[2] = 200;
    mp[3] = 300;

    cout << "map:" <<endl;
    cout << mp[2] <<endl;

    return 0;
}