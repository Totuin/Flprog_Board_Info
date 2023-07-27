#pragma once
#include "flprogBoardInfoRP240.h"
#ifdef ARDUINO_ARCH_RP2040
#define FLPROG_HAS_UART0 "USB UART Serial"
#define FLPROG_HAS_UART1 "Hardware UART Serial1"
#define FLPROG_UART1_TX PIN_SERIAL1_TX
#define FLPROG_UART1_RX PIN_SERIAL1_RX
#define FLPROG_HAS_UART2 "Hardware UART Serial2"
#define FLPROG_UART2_TX PIN_SERIAL2_TX
#define FLPROG_UART2_RX PIN_SERIAL2_RX
#ifdef ARDUINO_NANO_RP2040_CONNECT
#define FLPROG_HAS_UART3 "Hardware SerialPIO Serial3"
#endif
#endif
