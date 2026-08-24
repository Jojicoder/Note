#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> mp ={
        {"A",2},
        {"B",7},
        {"C",4},
        {"D",5}
    };

    int target = 9;

    for(auto a : mp)
    {
        for(auto b : mp)
        {
            if(a.first != b.first && a.second + b.second == target)
            {
                cout << a.first << " " << b.first << endl;
            }
        }
    }

    return 0;
}