#include <iostream>
#include <cstdint>

class ECU {
private:
    uint16_t rpm;

public:
    ECU(int initialRPM) {
        if (initialRPM >= 0 && initialRPM <= 3999) {
            rpm = static_cast<uint16_t>(initialRPM);
        } else {
            rpm = 0;
            std::cout << "RPM initial invalide\n";
        }
    }

    void setRPM(int newRPM) {
        if (newRPM >= 0 && newRPM <= 3999) {
            rpm = static_cast<uint16_t>(newRPM);
        } else {
            std::cout << "Valeur invalide\n";
        }
    }

    int getRPM() const {
        return rpm;
    }

    bool isRPMValid() const {
        return rpm <= 3999;
    }

    void display() const {
        std::cout << "RPM : " << rpm << '\n';
    }
};

int main() {
    ECU engine(3200);

    engine.display();

    engine.setRPM(-100);
    engine.display();

    engine.setRPM(2500);
    engine.display();

    return 0;
}