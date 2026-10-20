#include <iostream>
#include <cstdint>

struct CanFrame {
    std::uint16_t id;
    std::uint8_t dlc;
    std::uint8_t data[8];
};

int main() {
    CanFrame frame{};

    frame.id = 0x120;
    frame.dlc = 2;
    frame.data[0] = 0x0C;
    frame.data[1] = 0x80;

    std::cout << "ID : 0x" << std::hex << frame.id << '\n';
    std::cout << "DLC : " << std::dec
              << static_cast<int>(frame.dlc) << '\n';

    std::cout << "DATA : ";
    for (int i = 0; i < frame.dlc; i++) {
        std::cout << std::hex
                  << static_cast<int>(frame.data[i]) << ' ';
    }

    std::cout << '\n';
    return 0;
}