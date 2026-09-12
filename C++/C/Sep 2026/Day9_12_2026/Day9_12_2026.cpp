#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    uint8_t low = 0x34;
    uint8_t high = 0x12;

    uint16_t value = 
    low | (high <<8);

    cout << hex << value <<endl;

    return 0;
}