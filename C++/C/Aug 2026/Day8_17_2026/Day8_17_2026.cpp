#include <iostream>
#include <vector>
using namespace std;

int findRoot(int x, vector<int>& parent)
{
    if(parent[x] == x)
        return x;

    return parent[x] = findRoot(parent[x], parent);
}

int main(){
    vector<int> parent = {0,1,2,3,4};

    parent[1] = 0;
    parent[2] = 0;

    cout << findRoot(2, parent) << endl;

    return 0;
}