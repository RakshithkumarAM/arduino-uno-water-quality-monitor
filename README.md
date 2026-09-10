# arduino-uno-water-quality-monitor
Arduino Uno and Python based water quality monitoring and alert system

# Arduino Uno Water Quality Monitoring System

## Overview

The Arduino Uno Water Quality Monitoring System is a student-built prototype developed during my second semester to provide a simple and accessible method for monitoring the quality of purified drinking water.

The system uses water-quality sensors to monitor pH, turbidity, and TDS-related readings. Based on predefined threshold ranges, the system classifies the water quality into three levels:

🟢 GREEN → Good Water Quality

🟡 YELLOW → Medium Water Quality

🔴 RED → Poor Water Quality

The project combines an Arduino Uno for sensor monitoring with Python for status processing and alert generation.

## Motivation

In public facilities such as government schools, hospitals, and railway stations, people may rely on purified drinking-water systems without having a simple way to know whether the water quality remains within an acceptable range.

The objective of this prototype is to provide an additional layer of monitoring and assurance.

Instead of depending only on the purifier itself, the system continuously checks the purified water and provides a visible status indication through LEDs.

If the water quality deteriorates, the system can also generate an alert for the responsible authority or maintenance team.

## How It Works

The complete system follows this flow:

Water Sample
→
pH, Turbidity and TDS Sensors
→
Arduino Uno
→
Sensor Reading
→
Predefined Threshold Checking
→
Water Quality Classification
→
GREEN / YELLOW / RED LED
→
Serial Communication
→
Python Program
→
Status Monitoring
→
WhatsApp Alert

## Hardware Used

Arduino Uno  
→ Main microcontroller used to read sensor values and control the LEDs.

pH Sensor  
→ Used to measure the pH-related characteristics of the water.

Turbidity Sensor  
→ Used to detect the turbidity or cloudiness-related condition of the water.

TDS Sensor  
→ Used to obtain TDS-related readings.

LEDs  
→ Green, yellow, and red LEDs are used to indicate the water-quality status.

Resistors  
→ Used for LED circuit protection.

Breadboard and Jumper Wires  
→ Used to build and connect the prototype circuit.

## Software Used

Arduino IDE  
→ Used for programming and uploading the Arduino code.

Arduino C/C++  
→ Used for the Arduino-side program.

Python  
→ Used for serial monitoring and alert processing.

PySerial  
→ Used for communication between the Arduino and Python program.

PyWhatKit  
→ Used for WhatsApp message automation.

PyAutoGUI  
→ Used for automating the required interaction during message sending.

## Water Quality Indication

🟢 GREEN → Good Water Quality → Sensor readings are within the defined good range.

🟡 YELLOW → Medium Water Quality → Sensor readings indicate a warning condition.

🔴 RED → Poor Water Quality → Sensor readings indicate a critical condition.

The classification is based on threshold values defined in the Arduino program.

## Alert System

The Python program continuously monitors the status received from the Arduino.

The system generates an alert when the water-quality status deteriorates:

GREEN → YELLOW → Warning Alert

GREEN → RED → Critical Alert

YELLOW → RED → Emergency Alert

This approach prevents repeated alerts while the system remains in the same condition.

The intended purpose is to notify the responsible authority or maintenance team so that the water source or purification system can be inspected.

## Project Objective

The main objective of this prototype is to demonstrate how low-cost sensors, a microcontroller, and a software-based alert system can be combined to provide continuous monitoring of purified drinking water.

The project provides an additional monitoring layer that can help identify changes in water quality without relying only on manual inspection.

## System Architecture

Water Purification System
→
Purified Water
→
Water Quality Sensors
→
Arduino Uno
→
Quality Classification
→
LED Status
→
Serial Communication
→
Python Monitoring
→
Alert Generation

## Key Features

→ Real-time sensor reading

→ pH-related monitoring

→ Turbidity monitoring

→ TDS-related monitoring

→ Three-level water-quality indication

→ Green, yellow, and red LED status

→ Arduino-to-Python serial communication

→ Automatic status-change detection

→ WhatsApp-based alert generation

→ Designed as a low-cost prototype

## Future Improvements

→ More accurate sensor calibration

→ Temperature compensation

→ Improved water-quality sensors

→ Cloud-based monitoring

→ Web or mobile dashboard

→ Automatic data logging

→ Multiple monitoring locations

→ Multiple authority/maintenance recipients

→ Improved notification infrastructure

→ More reliable and scalable communication

## Project Status

Student prototype developed as part of a second-semester engineering project.

The project was developed as a learning prototype to understand Arduino programming, sensor interfacing, serial communication, Python automation, and system-level integration.

Programming assistance was used during implementation as part of the learning process.

## Note

This project is a student prototype and is not intended to replace certified laboratory-based water-quality testing or regulatory standards.

## Here some photos of the working prototype
<img width="720" height="1600" alt="WhatsApp Image 2026-09-10 at 5 01 13 PM" src="https://github.com/user-attachments/assets/2d30cef2-c9b3-4f2f-afa5-cdfe07cd2f30" />
<img width="899" height="1599" alt="WhatsApp Image 2026-09-10 at 4 56 45 PM" src="https://github.com/user-attachments/assets/c61a3323-f72e-414d-b632-ef3edbef3857" />
<img width="899" height="1599" alt="WhatsApp Image 2026-09-10 at 4 56 45 PM (1)" src="https://github.com/user-attachments/assets/ceff3281-347d-4bd0-8eaf-a863c8a6c48a" />
<img width="899" height="1599" alt="WhatsApp Image 2026-09-10 at 4 56 46 PM" src="https://github.com/user-attachments/assets/facccab8-dcb3-44b2-aafa-cc792116dbaf" />
<img width="720" height="1600" alt="WhatsApp Image 2026-09-10 at 5 01 13 PM (1)" src="https://github.com/user-attachments/assets/a1c7c4d3-0a94-443a-8f46-7417dc188eaf" />


