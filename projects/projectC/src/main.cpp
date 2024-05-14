#include <Arduino.h>
#include <LibA.h>
#include <LibB.h>
#include <LibC.h>

void setup() {
    Serial.begin(115200);
    function_from_library_A();
    function_from_library_B();
    function_from_library_C();
}

void loop() {
}