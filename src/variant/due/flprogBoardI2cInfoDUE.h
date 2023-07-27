#pragma once
#include "flprogBoardInfoDUE.h"
#ifdef ARDUINO_ARCH_SAM
#define FLPROG_HAS_I2C0
#define FLPROG_I2C0_SDA (SDA)
#define FLPROG_I2C0_SCL (SCL)
#define FLPROG_HAS_I2C1
#define FLPROG_I2C1_SDA (SDA1)
#define FLPROG_I2C1_SCL (SCL1)
#endif