# Air Quality Monitoring System using Packet Tracer

## AIM
To design an Air Quality Monitoring System using Packet Tracer.

## SOFTWARE USED
- Packet Tracer

## SCHEMATIC DIAGRAM
![image](https://github.com/user-attachments/assets/ea0e14a7-5797-42ee-b2b7-952dec954e11)


## PROCEDURE
1. Connect the devices as shown in the schematic diagram.
2. Set the password for each device and connect it to the Home Gateway.
3. Connect the Home Gateway to the [http://192.168.25.1](http://192.168.25.1) website and provide the username and password.
4. Set conditions for the window and alarm as follows:

### Conditions
- **Low Risk:**
    - Carbon dioxide sensor level is less than 0.7 ppm.
    - Windows remain closed and the alarm is OFF.
![image](https://github.com/user-attachments/assets/b4dc43b5-b378-4d56-8d1b-60055b700f29)

- **High Risk:**
    - Carbon dioxide sensor level exceeds 0.8 ppm.
    - Alarm is in the ON state.
![image](https://github.com/user-attachments/assets/7efce92b-92ab-482a-a00e-b8250708de84)

- **No Risk:**
    - Carbon dioxide level is below 0.7 ppm.
    - Windows remain closed and the alarm is OFF.
![image](https://github.com/user-attachments/assets/511cf819-6cf2-4e92-8e7d-4db136f3d53e)

## RESULT
- When the system is in the OFF state and the carbon dioxide sensor level exceeds 0.7 ppm, two windows open.
- In a high-risk condition, where the carbon dioxide sensor level is more than 0.8 ppm, the alarm switches to the ON state.
- Similarly, in a no-risk condition, when the carbon dioxide level is below 0.7 ppm, the windows remain closed and the alarm remains OFF.

## CONCLUSION
The Air Quality Monitoring System was successfully designed and tested using Packet Tracer. The system responded correctly to different risk conditions based on sensor data.
