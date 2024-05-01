#include <NewPing.h>

#define SIGNAL_PIN 2
#define MAX_DISTANCE 200
#define DISTANCE_THRESHOLD 5

NewPing sonar(SIGNAL_PIN, SIGNAL_PIN, MAX_DISTANCE);
const int led = 4;

void setup() {
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  delay(50);
  unsigned int distance = sonar.ping_cm();

if (distance > 0 && distance <= DISTANCE_THRESHOLD) {
digitalWrite(led, HIGH);
} else {
digitalWrite(led, LOW);
}

Serial.print("Distance: ");
Serial.print(distance);
Serial.println(" cm");
}
