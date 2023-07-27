#pragma once
#include "flprogBoardInfoDUE.h"
#ifdef ARDUINO_ARCH_SAM
#define FLPROG_HAS_UART0 "Hardware UART Serial"
#define FLPROG_HAS_UART1 "Hardware UART Serial1"
#define FLPROG_HAS_UART2 "Hardware UART Serial2"
#define FLPROG_HAS_UART3 "Hardware UART Serial3"
#endif
