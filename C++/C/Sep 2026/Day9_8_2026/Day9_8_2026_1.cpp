#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string s = "swiss";
    unordered_map<char,int> count;

    for(char c : s)
    {
        count[c]++;
    }

    for(char c : s)
    {
        if(count[c] == 1)
        {
            cout << c << endl;
            return 0;
        }
    }

    cout << "Not Found" << endl;

    return 0;
}