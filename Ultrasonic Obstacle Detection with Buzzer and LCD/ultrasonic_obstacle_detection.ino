
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int trigPin = 2;
const int echoPin = 3;
const int buzzer = 8;
float duration;
float distance;

// Initialize LCD with I2C address 0x27, 16 columns and 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

  // Initialize LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Distance :");
}

void loop() {
  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(20);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure duration and calculate distance
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Print distance on serial monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  // Display distance on LCD
  lcd.setCursor(0, 1);
  lcd.print("                "); // Clear previous value
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print(" cm");

  // Buzzer alert if object is too close
  if (distance <= 100) {
    tone(buzzer, 500);  // Sound the buzzer
  } else {
    noTone(buzzer);  // Turn off buzzer
  }

  delay(500);  // Update every 500 milliseconds
}
