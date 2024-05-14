#include "LibA.h"

#include <Arduino.h>

void function_from_library_A() {
    Serial.println(__FUNCTION__);
}