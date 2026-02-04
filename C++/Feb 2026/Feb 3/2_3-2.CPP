#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> scores = {40,55,80,98,59,100};

    vector<int> passed;
    vector<int> failed;

    for(int &score : scores){
        score = score+5;
        if(score > 100)
            score = 100;
    }

    for(int score : scores){
        if(score >= 60){
            passed.push_back(score);
        }else{
            failed.push_back(score);
        }
    }
    cout <<  "Passed the test " << passed.size()<<endl;
    for(int s :passed) cout << s << " ";

    cout<<endl << "Failed the test " << failed.size() <<endl;
    for(int s : failed) cout << s<< " ";
    cout << endl;

    return 0;

}