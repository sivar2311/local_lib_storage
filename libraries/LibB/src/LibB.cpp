#include "LibB.h"

#include <Arduino.h>

void function_from_library_B() {
    Serial.println(__FUNCTION__);
}