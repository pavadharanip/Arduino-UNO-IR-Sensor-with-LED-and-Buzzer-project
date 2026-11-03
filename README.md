# 🔊 Arduino UNO IR Sensor with LED and Buzzer

## **📌 Project Overview**

This project demonstrates how to interface an IR sensor module with an Arduino UNO along with an LED and a buzzer. The IR sensor contains an infrared transmitter and receiver that detect reflected infrared light from nearby objects. When the sensor output becomes LOW, the Arduino turns ON the LED and buzzer. When the sensor output becomes HIGH, both are turned OFF.

## **🎯 Objectives**

- To interface an IR sensor with Arduino UNO.
- To understand the working of an IR transmitter and receiver.
- To control an LED and buzzer using a digital sensor input.
- To understand digital input and output operations.
- To develop a simple object detection and alert system.

## **🧰 Components Required**

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| IR Sensor Module (LM393) | 1 |
| LED | 1 |
| 220Ω resistor | 1 |
| 5V Active Buzzer | 1 |
| Breadboard | 1 |
| Jumper wires | As required |
| USB cable | 1 |

## **🔌 Circuit Connections**

### **IR Sensor Connections**

| IR Sensor Pin | Arduino UNO |
|---|---|
| OUT | Digital Pin 2 |
| GND | GND |
| VCC | 5V |

### **LED Connections**

| LED Pin | Arduino UNO |
|---|---|
| Long leg (+) | Digital Pin 7 through 220Ω resistor |
| Short leg (−) | GND |

### **Buzzer Connections**

| Buzzer Pin | Arduino UNO |
|---|---|
| Positive (+) | Digital Pin 8 |
| Negative (−) | GND |

## **⚙️ Working Principle**

1. The IR transmitter emits infrared light.
2. The IR receiver detects infrared light reflected from nearby objects.
3. The LM393 comparator processes the sensor signal.
4. The sensor sends a digital HIGH or LOW signal to Arduino.
5. When the sensor output is LOW, the Arduino turns ON the LED and buzzer.
6. When the sensor output is HIGH, the LED and buzzer turn OFF.
7. The sensor output can also be monitored using the Serial Monitor.

## **📊 Expected Output**

| Sensor Output | LED | Buzzer |
|---|---|---|
| LOW (0) | ON | ON |
| HIGH (1) | OFF | OFF |

**Note:** The blue potentiometer on the IR sensor module adjusts its detection threshold. The output logic may vary depending on the module configuration.

## **📚 Concepts Learned**

- Arduino UNO programming
- IR transmitter and receiver
- LM393 comparator
- Digital input and output
- LED interfacing
- Buzzer interfacing
- Conditional statements
- Serial communication

## **🚀 Future Improvements**

- Add an LCD to display sensor status.
- Add multiple sensors for wider detection.
- Develop an automatic alert system.
- Add wireless notifications using an ESP32.
- Improve object detection range and accuracy.

## **🏁 Conclusion**

This project demonstrates how an IR sensor can be interfaced with an Arduino UNO to detect nearby objects and generate visual and audio alerts using an LED and buzzer. It provides practical knowledge of sensor interfacing, digital signals, and basic embedded system programming.

## **🛠️ Technologies Used**

- Arduino UNO
- Arduino IDE
- Embedded C/C++
- IR Sensor Module
- LED and Buzzer
- Serial Monitor
