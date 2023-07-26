#pragma once
#include "flprogBoardInfoESP32.h"
#ifdef ARDUINO_ARCH_ESP32
#define FLPROG_HAS_I2C0
#define FLPROG_HAS_I2C1
#define FLPROG_I2C0_SDA (SDA) 
#define FLPROG_I2C0_SCL (SCL)
#ifdef WIRE1_PIN_DEFINED
#define FLPROG_I2C1_SDA (SDA1) 
#define FLPROG_I2C1_SCL (SCL1)
#endif
#endif