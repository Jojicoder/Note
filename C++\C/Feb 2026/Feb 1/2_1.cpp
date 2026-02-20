#include <iostream>
#include <vector>

using namespace std;

int main(){

    const int N = 100;

    vector<bool> isPrime(N+1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for(int i=2;i*i<= N;++i){
        if(isPrime[i]){
            for(int j = i *2;j<=N;j+= i){
                isPrime[j]= false;
            }
        }
    }

    cout << N << "までの素数リスト: " << endl;
    for(int i =0; i <=N; ++i)
    if(isPrime[i]){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
