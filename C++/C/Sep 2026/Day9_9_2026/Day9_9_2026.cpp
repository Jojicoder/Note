#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<string, int> p;

    p.first = "Alice";
    p.second = 90;

    cout << p.first << endl;
    cout << p.second << endl;

    return 0;
}