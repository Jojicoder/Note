#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    uint8_t status = 0b00000010;

    bool flag = (status & 0b00000010) != 0;

    status |= 0b00000100;

    cout << flag <<endl;
    cout << static_cast<int>(status) <<endl;

    return 0;
}