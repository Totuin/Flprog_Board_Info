#pragma once
#include "flprogBoardInfoESP8266.h"
#ifdef ARDUINO_ARCH_ESP8266
#define FLPROG_HAS_I2C0
#ifdef PIN_WIRE_SDA
#define FLPROG_I2C0_SDA PIN_WIRE_SDA
#endif
#ifdef PIN_WIRE_SCL
#define FLPROG_I2C0_SCL PIN_WIRE_SCL
#endif
#endif