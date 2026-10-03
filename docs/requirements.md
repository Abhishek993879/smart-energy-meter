# Requirements & Development Plan

## 2. Requirements

### 2.1 Functional Requirements

The system should:

1. Simulate electricity meter pulses.
2. Count the detected pulses.
3. Convert pulses into Wh and kWh.
4. Save energy readings in a log file.
5. Read stored energy readings.
6. Calculate total energy consumption.
7. Calculate average energy consumption.
8. Identify peak energy consumption.
9. Estimate electricity cost.
10. Display a usage category and energy alert.

### 2.2 Non-Functional Requirements

The system should be:

- Simple and easy to use.
- Reliable during normal operation.
- Easy to maintain and modify.
- Developed using C++.
- Compatible with a Linux environment.
- Version controlled using Git.
- Easy to test and demonstrate.

## 3. Development Modules

The project contains the following main modules:

### 3.1 Pulse Simulation

Generates simulated electricity meter pulses.

### 3.2 Energy Meter

Counts pulses and converts them into energy values.

### 3.3 Meter Logger

Stores energy readings in a log file.

### 3.4 Analytics

Reads stored readings and calculates:

- Total energy
- Average energy
- Peak energy
- Estimated cost

### 3.5 Alert System

Displays an alert when energy usage reaches the defined high-usage level.

## 4. Development Environment

- Operating System: Ubuntu Linux
- Programming Language: C++
- Compiler: g++
- Version Control: Git
- Editor: Nano
- Build Tool: g++

## 5. Development Plan

| Phase | Work |
|---|---|
| Phase 1 | Project idea and basic pulse counter |
| Phase 2 | Pulse simulation and logging |
| Phase 3 | Smart-meter integration |
| Phase 4 | Energy analytics and cost calculation |
| Phase 5 | Peak detection and alert |
| Phase 6 | OOP testing and documentation |
| Phase 7 | Final testing and GitHub submission |

## 6. Project Deliverables

The final project will include:

- C++ source code
- Header files
- Test program
- Log files
- Project documentation
- Git repository
- README file
