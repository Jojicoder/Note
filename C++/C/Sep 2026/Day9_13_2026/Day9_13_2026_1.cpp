#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    uint8_t memory[2] = {0x34, 0x12};

    uint16_t value =
        memory[0] |
            (memory[1] << 8);
    

    cout << hex << value << endl;

    return 0;
}