/*
    Project name : ESP32 Heartbeat module
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-heartbeat-module
*/

// Pin connected to the digital output of the heartbeat sensor
const int digitalInPin = 34; // GPIO pin 34 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(digitalInPin, INPUT); // Set the digital pin as input
}

void loop() {
  int heartbeat = digitalRead(digitalInPin); // Read the digital sensor value
  
  if (heartbeat == HIGH) {
    Serial.println("Heartbeat detected!");
  } else {
    Serial.println("No heartbeat detected.");
  }

  delay(1000); // Delay before next reading
}
