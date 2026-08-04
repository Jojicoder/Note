#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){

srand(time(nullptr));

int total =0;
for(int i = 1; i<=10;i++){
    int dice = rand() % 6 + 1;
    total +=dice;
    cout << "Roll " << i << ": " <<dice <<endl;
}

cout << "Total = " <<total << endl;

return 0;
}

