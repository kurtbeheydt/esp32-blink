#include <Arduino.h>

#if defined(ESP32)
#define LED_BUILTIN 2
#endif

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
}
