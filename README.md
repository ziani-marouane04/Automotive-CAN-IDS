# Automotive CAN IDS

**An educational project exploring automotive CAN communication, ECU simulation, and intrusion detection using C++ and Python.**

## Overview

Automotive CAN IDS aims to build an object-oriented prototype for monitoring CAN (Controller Area Network) messages and identifying potentially abnormal communication patterns.

The project is being developed incrementally, starting with CAN frame representation and ECU simulation before implementing intrusion detection features.

## Current Progress

- [x] C++ representation of a CAN frame
- [x] ECU class and RPM encoding into two CAN data bytes
- [x] Basic ECU simulation exercises
- [x] Initial Python experiment using a virtual CAN interface
- [ ] CAN message monitoring and validation
- [ ] Rule-based intrusion detection
- [ ] Alert logging and reporting
- [ ] Automated tests and documentation

## Technologies

- C++17
- Python 3
- `python-can`
- Git and GitHub

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
└── README.md
```

## Getting Started

### C++ prerequisites

- A C++ compiler supporting C++17, such as `g++`
- Windows PowerShell or another terminal

Compile an individual exercise from the project root:

```powershell
g++ -std=c++17 .\src\can_frame.cpp -o .\src\can_frame.exe
.\src\can_frame.exe
```

Each C++ source file currently represents a standalone exercise or prototype.

### Python prerequisites

Install Python 3 and `python-can`. The virtual CAN experiment requires a compatible virtual bus configuration.

## Development Roadmap

1. Strengthen CAN frame representation and validation.
2. Organize the code into reusable object-oriented components.
3. Simulate multiple ECUs and CAN traffic.
4. Implement rule-based detection of suspicious message patterns.
5. Add tests, structured logs, and a monitoring interface.

## Safety and Scope

This is an educational prototype intended for controlled simulations and isolated test environments. It is not validated for deployment in a production vehicle.

## Author

**ZIANI Marouane**

GitHub: [ziani-marouane04](https://github.com/ziani-marouane04)
