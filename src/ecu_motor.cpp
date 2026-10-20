
#include <cstdint>
#include <iomanip>
#include <iostream>

int main() {
    // Valeur simulée du régime moteur
    std::uint16_t rpm = 3200;

    // Encodage sur deux octets, ordre big-endian
    std::uint8_t data[2];

    data[0] = static_cast<std::uint8_t>((rpm >> 8) & 0xFF);
    data[1] = static_cast<std::uint8_t>(rpm & 0xFF);

    std::cout << "ECU MOTEUR\n";
    std::cout << "RPM : " << rpm << '\n';

    std::cout << "DATA : "
              << std::hex << std::uppercase
              << std::setw(2) << std::setfill('0')
              << static_cast<int>(data[0]) << ' '
              << std::setw(2)
              << static_cast<int>(data[1])
              << std::dec << '\n';

    // Décodage des deux octets
    std::uint16_t decoded_rpm =
        (static_cast<std::uint16_t>(data[0]) << 8)
        | data[1];

    std::cout << "RPM decode : " << decoded_rpm << '\n';

    if (decoded_rpm == rpm) {
        std::cout << "TEST REUSSI\n";
    } else {
        std::cout << "TEST ECHOUE\n";
    }

    return 0;
}
