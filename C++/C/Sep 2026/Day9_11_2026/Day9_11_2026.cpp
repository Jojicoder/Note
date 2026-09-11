#include <iostream>
#include <cstdint>

using namespace std;

int main(){

    uint8_t a = 0b00000101;
    uint8_t b = 0b00000011;

    uint8_t x = a ^ b;
    uint8_t y = static_cast<uint8_t>(~a);

    cout << static_cast<int>(x) <<endl;
    cout << static_cast<int>(y) <<endl;

    return 0;
}