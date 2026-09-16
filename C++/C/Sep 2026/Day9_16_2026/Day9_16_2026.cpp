#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    int a[3] = {10,20,30};
    uint8_t b[3] = {1,2,3};

    int* p1 = a;
    uint8_t* p2 = b;

    cout << p1 <<endl;
    cout << p1 + 1 << endl;

    cout << static_cast<void*>(p2) <<endl;
    cout << static_cast<void*>(p2 + 1) <<endl;

    return 0;

}