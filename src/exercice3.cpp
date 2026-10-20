#include <iostream>

bool validateRPM(int rpm) {
	return rpm >= 0 && rpm < 4000;
	}
int main() {
int rpm = 6000;
if (validateRPM(rpm)) {
        std::cout << "Regime valide" << '\n';
    } 
else {
        std::cout << "Regime invalide ou suspect" << '\n';
    }

    return 0;
}