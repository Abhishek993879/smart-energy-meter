# UML Design

## 1. Class Diagram

EnergyMeter
|-- pulseCount : int
|-- addPulse()
|-- getPulseCount()
|-- getEnergyWh()
|-- getEnergyKWh()

## 2. Sequence Diagram

User -> Smart Meter -> Energy Meter -> Meter Logger -> Log File -> Analytics -> Alert -> User

## 3. State Machine Diagram

Start -> Simulate Pulses -> Count Pulses -> Calculate Energy -> Save Reading -> Analytics -> Alert Check -> Final Report

## 4. Project Workflow

Pulse Simulation -> Pulse Counting -> Wh/kWh Calculation -> Log Storage -> Analytics -> Alert -> Final Report

## Conclusion

The UML design represents the structure, sequence, states and workflow of the Smart Energy Smart-Meter Pulse Counter & Analytics Agent.
