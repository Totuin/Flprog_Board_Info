#pragma once
#include "flprogBoardInfoAVR.h"

#ifdef HAVE_HWSERIAL0
  #define FLPROG_HAS_UART0 "Hardware UART Serial"
#endif
#ifdef HAVE_HWSERIAL1
  #define FLPROG_HAS_UART1 "Hardware UART Serial1"
#endif
#ifdef HAVE_HWSERIAL2
  #define FLPROG_HAS_UART2 "Hardware UART Serial2"
#endif
#ifdef HAVE_HWSERIAL3
  #define FLPROG_HAS_UART3 "Hardware UART Serial3"
#endif
