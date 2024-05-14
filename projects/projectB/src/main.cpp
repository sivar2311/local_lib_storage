#include <Arduino.h>
#include <LibB.h>

void setup() {
    Serial.begin(115200);
    function_from_library_B();
}

void loop() {
}