#pragma once
#include "flprogBoardInfoAVR.h"
#ifdef ARDUINO_ARCH_AVR
#define FLPROG_HAS_I2C0
#define FLPROG_I2C0_SDA (SDA)
#define FLPROG_I2C0_SCL (SCL)
#endif