#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    vector<string> votes = {
        "A","B","A","C","A","B","A"
    };

    unordered_map<string, int> voteCounts;

    cout << "集計を開始します。"<< endl;

    for(const auto& name : votes){
        voteCounts[name]++;
    }

    for(const auto& pair : voteCounts){
        cout << pair.first << ": "<< pair.second << "票" << endl; 
    }
    string winner;
    int maxVotes = 0;
    for(const auto& pair : voteCounts){
        if(pair.second > maxVotes){
            maxVotes = pair.second;
            winner = pair.first;
        }
    }

    cout << "優勝は " << winner << " (" << maxVotes <<"票）です"<< endl;
    return 0;
}