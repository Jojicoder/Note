#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> grid ={
        {1,2,3},{4,5,6},{7,8,9}
    };
    grid.push_back({{10,11,12}});
    cout << "grid[1][2] = " << grid[1][2]<< endl;

    for (vector<int> row :grid){
        for(int cell : row)
        {
        cout << cell << " ";
        }   
        cout << endl;   
}
return 0;
}