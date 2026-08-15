#include <iostream>
#include <vector>
using namespace std;1 
int main(){
    vector<int> a ={2,4,7,9,12};
    vector<int> sum(a.size() + 1,0);

    for(int i = 0; i < a.size(); i++)
        sum[i+1] = sum[i] + a[i];

    int l, r;
    cin >> l >> r;
    cout << sum[r+1] - sum[l] <<endl;
}