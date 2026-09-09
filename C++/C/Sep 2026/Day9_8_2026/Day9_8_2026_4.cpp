#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dp;

    dp.push_back(10);
    dp.push_back(20);
    dp.push_front(5);

    cout << dp.front()<<endl;
    cout << dp.back() << endl;

    dp.pop_front();
    dp.pop_back();

    cout << dp.front() << endl;

    return 0;
}