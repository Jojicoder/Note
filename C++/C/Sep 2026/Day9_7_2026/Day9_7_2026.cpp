#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
        vector<int> a ={1,2,2,3,3,3,4};
        unordered_map<int,int> count;

        for(int x : a)
        {
            count[x]++;
        }

        int bestValue = 0;
        int bestCount = 0;

        for(auto p : count)
        {
            if(p.second > bestCount)
            {
                bestCount = p.second;
                bestValue = p.first;
            }
        }

        cout << bestValue << endl;
        return 0;
}