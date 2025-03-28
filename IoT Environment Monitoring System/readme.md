# IoT Environment Monitoring System with ESP8266 and ThingSpeak

## 🎯 Aim
Build an IoT-enabled environment monitoring system using a suitable edge device and gateway. Integrate the collected data to the ThingSpeak platform for real-time data visualization.

## 🌐 **ThingSpeak Overview**
ThingSpeak is an IoT analytics platform that allows users to:
- Aggregate, visualize, and analyze live data streams.
- Send data from devices to the cloud.
- Create instant visualizations and send alerts based on the received data.

## 📡 **ESP8266 Overview**
The ESP8266 is a low-cost Wi-Fi microchip with built-in TCP/IP networking software and microcontroller capabilities.  
**Key Features:**
- 32-bit RISC microprocessor core running at 80/160 MHz.
- Supports up to 16 MiB of external QSPI flash.
- IEEE 802.11 b/g/n Wi-Fi.
- 17 GPIO pins and UART interface.
- 10-bit ADC for analog signal processing.

## 📡 **Edge Device Overview**
An edge device provides an entry point into enterprise networks, such as routers or switches. It allows authenticated access and controls traffic types while ensuring fast backbone network communication.

## 🔗 **Gateway Overview**
A gateway bridges communication between different technologies. In IoT, it connects devices and sensors to the cloud by translating protocols, aggregating data, performing local processing, and enhancing security.

---

## 📝 **Procedure**
1. Write the required code in Arduino IDE for ESP8266.
2. Create a new channel on ThingSpeak.
3. Obtain an API Key from ThingSpeak to be used as a gateway in the code.
4. Connect the ESP module to the required hardware.
5. Connect the VCC and GND of the edge device to the Vin and GND of the ESP module.
6. Assign a digital pin of the ESP module to the edge device.
7. Upload and run the code by powering the circuit via the PC.
8. The Wi-Fi module of the ESP sends the collected data to ThingSpeak using the API Key and displays the data as a graph.

---

## 🛠️ **Hardware Required**
- ESP8266 Wi-Fi Module
- DHT11 Temperature and Humidity Sensor
- USB Cable for Programming
- Breadboard and Jumper Wires
- Power Supply

---

## 📄 **Required Code**
Refer to the `iot_environment.ino` file for the complete Arduino code.

---

## 📊 **ThingSpeak Graph**
The collected data (temperature and humidity) will be displayed on ThingSpeak as real-time graphs.

## 🎉 **Result**
The system successfully monitors environmental data and sends the readings to ThingSpeak for visualization.
