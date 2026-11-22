# Automotive CAN IDS
![C++ Build Check](https://github.com/ziani-marouane04/Automotive-CAN-IDS/actions/workflows/cpp-build.yml/badge.svg)
**An educational automotive cybersecurity project exploring CAN communication, ECU simulation, and intrusion detection using C++ and Python.**

<p align="center">
  <em>Exploring automotive network security through CAN simulation and intrusion detection.</em>
</p>

---

## Overview

Automotive-CAN-IDS is an educational project focused on understanding automotive Controller Area Network (CAN) communication and exploring techniques for detecting potentially suspicious messages.

The project follows an incremental development approach, beginning with CAN frame representation and ECU simulation, with the objective of progressively developing an intrusion detection prototype.

The project combines C++ for CAN frame modeling and ECU simulation with Python for experimentation involving virtual CAN interfaces.

## Objectives

- Understand CAN communication and frame structure.
- Model CAN frames using object-oriented C++.
- Simulate Electronic Control Units (ECUs).
- Encode simulated ECU data into CAN frames.
- Experiment with virtual CAN communication.
- Progressively implement mechanisms for detecting suspicious CAN traffic.

## Current Progress

| Feature | Status |
|---|---|
| CAN frame representation in C++ | Completed |
| ECU class implementation | Completed |
| RPM encoding into CAN data bytes | Completed |
| Basic ECU simulation exercises | Completed |
| Initial Python virtual CAN experiment | Completed |
| CAN message monitoring and validation | Planned |
| Rule-based intrusion detection | Planned |
| Alert logging and reporting | Planned |
| Automated testing | Planned |

## Technologies

- **C++17** — CAN frame modeling and ECU simulation
- **Python 3** — Virtual CAN experimentation
- **python-can** — CAN interface experimentation
- **Git & GitHub** — Version control

## Project Structure

```text
Automotive-CAN-IDS/
├── src/
│   ├── can_frame.cpp
│   ├── ecu_frame.cpp
│   ├── ecu_motor.cpp
│   ├── ecu_traffic.cpp
│   ├── exercice1.cpp
│   ├── exercice2.cpp
│   ├── exercice3.cpp
│   ├── exercice4.cpp
│   ├── exercice5.cpp
│   ├── exercice6.cpp
│   └── tp1_can_virtual.py
├── .gitignore
├── LICENSE
└── README.md
```

## Getting Started

### C++ Requirements

- A C++ compiler supporting C++17, such as GCC.
- Windows, Linux, or another compatible environment.

### Compile and Run

Compile an individual exercise from the project root.

Example using `can_frame.cpp`:

```bash
g++ -std=c++17 src/can_frame.cpp -o can_frame
```

Run the executable:

**Windows:**

```powershell
.\can_frame.exe
```

**Linux:**

```bash
./can_frame
```

Each C++ source file currently represents an individual exercise or prototype.

### Python Requirements

Install Python 3 and `python-can`.

```bash
pip install python-can
```

The virtual CAN experiment requires a compatible virtual CAN interface and bus configuration.

## Development Roadmap

- [ ] Improve CAN frame validation and handling.
- [ ] Refactor exercises into reusable components.
- [ ] Simulate multiple interacting ECUs.
- [ ] Develop simulated CAN traffic generation.
- [ ] Implement rule-based detection mechanisms.
- [ ] Add structured alert logging.
- [ ] Develop automated tests.
- [ ] Improve technical documentation and examples.

## Safety and Scope

This project is intended for educational purposes and controlled simulations.

It is an experimental prototype and is not validated for deployment in production vehicles or safety-critical automotive systems.

## Contributions

Suggestions, bug reports, and contributions are welcome.

Contributions should focus on improving the educational value, code quality, documentation, simulation capabilities, or automotive cybersecurity aspects of the project.

## License

This project is distributed under the MIT License.

## Author

**Marouane ZIANI**

GitHub: [@ziani-marouane04](https://github.com/ziani-marouane04)
