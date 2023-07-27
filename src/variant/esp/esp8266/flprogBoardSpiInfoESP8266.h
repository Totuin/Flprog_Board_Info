#pragma once
#include "flprogBoardInfoESP8266.h"
#ifdef ARDUINO_ARCH_ESP8266
#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SPI)
#define FLPROG_HAS_SPI0
#define FLPROG_SPI0_MISO (MISO)
#define FLPROG_SPI0_MOSI (MOSI)
#define FLPROG_SPI0_SCK (SCK)
#define FLPROG_SPI0_SS (SS)
#endif
#endif