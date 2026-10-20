
#include <iostream>
#include <cstdint>
#include <iomanip>

// Représentation d'une trame CAN classique
struct CanFrame {
    std::uint16_t id{};
    std::uint8_t dlc{};
    std::uint8_t data[8]{};
};

class ECU {
private:
    std::uint16_t rpm;

public:
    explicit ECU(std::uint16_t initialRPM)
        : rpm(initialRPM) {}

    // Construit une trame contenant le régime moteur
    CanFrame createFrame() const {
        CanFrame frame{};

        frame.id = 0x120;
        frame.dlc = 2;

        frame.data[0] =
            static_cast<std::uint8_t>((rpm >> 8) & 0xFF);

        frame.data[1] =
            static_cast<std::uint8_t>(rpm & 0xFF);

        return frame;
    }
};

int main() {
    ECU engine(3200);

    CanFrame frame = engine.createFrame();

    std::cout << "ID   : 0x"
              << std::hex << std::uppercase << frame.id << '\n';

    std::cout << std::dec << "DLC  : "
              << static_cast<int>(frame.dlc) << '\n';

    std::cout << "DATA : ";

    for (int i = 0; i < frame.dlc; ++i) {
        std::cout << std::hex << std::uppercase
                  << std::setfill('0') << std::setw(2)
                  << static_cast<int>(frame.data[i]) << ' ';
    }

    std::cout << '\n';
    return 0;
}
