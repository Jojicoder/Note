#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 50;

   vector<bool> isPrime(n+1,true);
    isPrime[0] =false;
    isPrime[1] =false;

    for(int i = 2;i * i<=n;i++ )
    {
        if(isPrime[i])
        {
            for(int j = i*i;j<=n;j+=i)
            {
                isPrime[j] = false;
            }
        }
    }

    cout << "Prime numbers: ";

    for(int i = 2; i <= n; i++)
    {
        if(isPrime[i])
        cout << i << " ";
    }

    cout << endl;
    return 0;
}