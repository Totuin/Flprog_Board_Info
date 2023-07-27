#pragma once
#include "flprogBoardInfoESP32.h"

#ifdef ARDUINO_ARCH_ESP32
#define FLPROG_HAS_SPI0
#define FLPROG_SPI0_MISO (MISO)
#define FLPROG_SPI0_MOSI (MOSI)
#define FLPROG_SPI0_SCK (SCK)
#define FLPROG_SPI0_SS (SS)
#endif