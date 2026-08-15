#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a ={3,5,2,8,4};
    vector<int> sum(a.size()+1,0);

    for(int i = 0; i <a.size();i++){
        sum[i+1] = sum[i] +a[i];
    }

    int Q;
    cin >> Q;

    for(int i = 0;i < Q;i++)
    {
        int l,r;
        cin>> l >>r;

        cout << sum[r+1] - sum[l] <<endl;
    }
    return 0; 
}