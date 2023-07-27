#pragma once
#include "flprogBoardInfoESP8266.h"
#ifdef ARDUINO_ARCH_ESP8266
#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SERIAL)
#define FLPROG_HAS_UART0 "Hardware UART Serial"
#define FLPROG_UART0_TX (TX)
#define FLPROG_UART0_RX (RX)
#endif

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SERIAL1)
#define FLPROG_HAS_UART1 "Hardware UART Serial1"
#define FLPROG_UART1_TX 7
#define FLPROG_UART1_RX 8
#endif
#endif
