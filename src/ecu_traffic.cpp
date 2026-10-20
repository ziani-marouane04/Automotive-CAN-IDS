
#include <chrono>
#include <cstdint>
#include <iostream>
#include <thread>

using namespace std::chrono;

int main() {
    std::uint16_t rpm = 3200;
    std::uint8_t esp_state = 1;

    auto start = steady_clock::now();

    // Générer des messages pendant 5 secondes
    while (duration_cast<seconds>(
               steady_clock::now() - start).count() < 5) {

        // Message moteur : ID 0x100, toutes les 100 ms
        std::cout << "[ECU MOTEUR] ID=0x100 RPM="
                  << rpm << '\n';

        // Message ABS/ESP : ID 0x200
        std::cout << "[ECU ABS/ESP] ID=0x200 STATE="
                  << static_cast<int>(esp_state) << '\n';

        std::this_thread::sleep_for(milliseconds(100));
    }

    std::cout << "Simulation terminee.\n";
    return 0;
}
