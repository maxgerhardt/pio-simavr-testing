#include <Arduino.h>
int i = 0;

void setup() { 
    Serial.begin(9600);
}

void loop() {
    Serial.println("Iteration: " + String(i++));
    delay(100);
}
