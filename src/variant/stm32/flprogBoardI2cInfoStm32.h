#pragma once
#include "flprogBoardInfoStm32.h"
#ifdef  ARDUINO_ARCH_STM32
#define FLPROG_HAS_I2C0
#define FLPROG_I2C0_SDA PIN_WIRE_SDA
#define FLPROG_I2C0_SCL PIN_WIRE_SCL
#ifdef I2C1
#define FLPROG_HAS_I2C1
#define FLPROG_NEED_CREATE_I2C1
#define FLPROG_I2C1_SDA pinmap_find_pin(I2C1, PinMap_I2C_SDA)
#define FLPROG_I2C1_SCL pinmap_find_pin(I2C1, PinMap_I2C_SCL)
#endif
#ifdef I2C2
#define FLPROG_HAS_I2C2
#define FLPROG_NEED_CREATE_I2C2
#define FLPROG_I2C2_SDA pinmap_find_pin(I2C2, PinMap_I2C_SDA)
#define FLPROG_I2C2_SCL pinmap_find_pin(I2C2, PinMap_I2C_SCL)
#endif
#ifdef I2C3
#define FLPROG_HAS_I2C3
#define FLPROG_NEED_CREATE_I2C3
#define FLPROG_I2C3_SDA pinmap_find_pin(I2C3, PinMap_I2C_SDA)
#define FLPROG_I2C3_SCL pinmap_find_pin(I2C3, PinMap_I2C_SCL)
#endif
#ifdef I2C4
#define FLPROG_HAS_I2C4
#define FLPROG_NEED_CREATE_I2C4
#define FLPROG_I2C4_SDA pinmap_find_pin(I2C4, PinMap_I2C_SDA)
#define FLPROG_I2C4_SCL pinmap_find_pin(I2C4, PinMap_I2C_SCL)
#endif
#endif