#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    uint8_t a =255;
    uint16_t b =65535;
    uint32_t c =100000;

    cout << static_cast<int>(a) << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}