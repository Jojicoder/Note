#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> data ={5,1,4,2,8};

    int n = data.size();

    cout << "Before sort" <<endl;
    for(int x : data)cout << x << " ";
    cout << endl;

    for(int i = 0;i<n-1;i++){
        for(int j = 0;j < n-1-i;j++){
            if(data[j]<data[j+1]){
                int temp = data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    cout << "After sort" << endl;
    for(int x :data) cout << x <<" ";
    cout <<endl;
    return 0;

}