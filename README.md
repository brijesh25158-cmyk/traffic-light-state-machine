# Single-Lane Traffic Light Controller

## Overview
An introductory embedded systems project implementing a timed traffic light controller in Arduino C. The firmware manages a sequential three-state cycle to control physical or simulated GPIO outputs.

## Technical Details
* **Language:** C / Arduino C
* **Hardware Interface:** Maps directly to 3 digital GPIO pins (Red, Yellow, Green).
* **Simulation:** Built and verified using Tinkercad to test timing accuracy and current routing.

## System Timing Logic
* **Red Light State:** Pins 12 and 11 driven LOW; Pin 13 driven HIGH for 5000ms (5 seconds).
* **Green Light State:** Pins 13 and 12 driven LOW; Pin 11 driven HIGH for 5000ms (5 seconds).
* **Yellow Light State:** Pins 13 and 11 driven LOW; Pin 12 driven HIGH for 2000ms (2 seconds).
