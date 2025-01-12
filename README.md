# Ultrasonic Distance LED Indicator

This Arduino project utilizes the HC-SR04 ultrasonic sensor to measure the distance of an object and display proximity using a series of LEDs. The closer the object, the more LEDs light up, creating an intuitive visual representation of distance.

## Features
- **Distance Measurement**: Accurate measurement using the HC-SR04 ultrasonic sensor.
- **LED Indicators**: Up to 7 LEDs light up progressively as the object approaches.
- **Real-Time Feedback**: Displays the distance on the Serial Monitor.

## Components Used
1. Arduino Board (e.g., Uno, Mega)
2. HC-SR04 Ultrasonic Sensor
3. 7 LEDs
4. Resistors (330Ω for each LED)
5. Connecting Wires
6. Breadboard

## Circuit Diagram
![ultrasonic with led](https://github.com/user-attachments/assets/561911b0-512d-4bf8-b6fe-4b05d2a72ba2)


## Code
The code is written in Arduino IDE. Simply upload the provided code to your Arduino board.

## How It Works
1. The ultrasonic sensor emits a pulse and measures the time taken for it to reflect back.
2. The distance is calculated using the formula:
   \[
   \text{Distance (cm)} = \frac{\text{duration} / 2}{28.5}
   \]
3. LEDs light up progressively based on the calculated distance.

## Distance-LED Mapping
| Distance (cm) | LEDs Lit |
|---------------|----------|
| 0-7           | LED1     |
| 8-14          | LED2     |
| 15-21         | LED3     |
| 22-28         | LED4     |
| 29-35         | LED5     |
| 36-42         | LED6     |
| 43-49         | LED7     |

## Setup Instructions
1. Connect the components as per the circuit diagram.
2. Upload the code from this repository to your Arduino.
3. Open the Serial Monitor (9600 baud) to view the real-time distance measurements.

## License
This project is licensed under the [MIT License](LICENSE).

---


