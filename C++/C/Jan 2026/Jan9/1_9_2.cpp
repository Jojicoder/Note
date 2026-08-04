#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> scores = {70, 95, 82, 60,88};

    int sum = 0;
    for(int s:scores){
        sum +=s;
    }

    double average = static_cast<double>(sum) / scores.size();

    cout << sum <<endl;
    cout << scores.size() <<endl;
    cout << average<< endl;
    for(int s:scores){
        if(s > average)
            cout << s << endl;
    }
    return 0;
}
