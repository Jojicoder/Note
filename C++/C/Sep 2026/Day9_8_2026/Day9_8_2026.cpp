#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string s = "banana";

    unordered_map<char, int> count;

    for(char c:s)
    {
        count[c]++;
    }
    
    for(auto p : count)
    {
        cout << p.first << " : "<< p.second <<endl;
    }

    return 0;
}