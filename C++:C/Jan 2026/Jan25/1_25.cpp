#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iomanip>

using namespace std;

bool hasSharedBirthday(int peopleCount, mt19937& gen, uniform_int_distribution<>& dist){
    vector<int> birthdays;

    for(int i = 0; i< peopleCount;i++){
        birthdays.push_back(dist(gen));
    }

    sort(birthdays.begin(), birthdays.end());

    auto it = adjacent_find(birthdays.begin(), birthdays.end());

    return (it != birthdays.end());

}

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 365);

    vector<int> testCases = {5, 10, 23,30,50,70};
    const int TRIALS = 10000;

    cout << "---誕生日のパラドックス シュミレーション----" << endl;
    cout << "試行回数: " << TRIALS << "回" << endl;

    for(int n :testCases){
        int matchCount = 0;

    for(int i = 0; i < TRIALS; i++){
        if(hasSharedBirthday(n, gen,dist)){
            matchCount++;
        }
    }
    
    double probability = (static_cast<double>(matchCount) / TRIALS) * 100.0;

    cout << setw(8) << n << fixed<< setprecision(2) << setw(11) <<probability << "%  " <<endl;}
    cout << "\n終了するにはEnterキーを押してください...";
    cin.get();

    return 0;
}
