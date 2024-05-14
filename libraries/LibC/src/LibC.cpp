#include "LibC.h"

#include <Arduino.h>

void function_from_library_C() {
    Serial.println(__FUNCTION__);
}