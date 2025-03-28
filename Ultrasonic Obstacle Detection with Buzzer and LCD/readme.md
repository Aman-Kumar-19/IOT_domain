# Ultrasonic Sensor with Display and Buzzer for Robotic Path Planning

## AIM
Simulate using TinkerCAD an ultrasonic sensor with a display and buzzer for a robotic path planning application to detect an obstacle in the path taken. Alert the robot with a buzzer if there is any obstacle very nearby and display the distance using an LCD display for visualization.

---

## PROCEDURE
1. Open TinkerCAD on the internet.
2. Place all the components in the workspace.
3. Components required:
   - Arduino Uno
   - Ultrasonic sensor
   - Buzzer (Piezo)
   - LCD display (LCD 16X2 I2C)
4. Connect the negative end of the buzzer to the ground (GND) and the ultrasonic sensor or LCD display GND to GND of Arduino Uno.
5. Connect the positive end of the buzzer to digital pin 8.
6. Connect VCC of the ultrasonic sensor and LCD display to the 5V pin of Arduino Uno.
7. Connect the Trigger and Echo pin of the ultrasonic sensor to digital pin 3 and 2, respectively.
8. Connect SCL and SDA of the LCD display to SCL and SDA of Arduino Uno.
9. After making all the connections, write the code and simulate it.

---

## CIRCUIT DIAGRAM
![image](https://github.com/user-attachments/assets/ecd6e810-ed8d-4a57-82f5-c04dbbdd9526)

---
## RESULT
When an object comes very close to the robot, the buzzer rings, and the LCD display shows the distance value.
![image](https://github.com/user-attachments/assets/cece5f16-23d7-43ae-b1fd-8a9bcc212a4f)

