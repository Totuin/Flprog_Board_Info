/*
Создаваемве дефайны
UART:
FLPROG_HAS_UART0  .... FLPROG_HAS_UART12  - Если задефайненны значит такие уарты есть
FLPROG_UART0_RX  .... FLPROG_UART12_RX  -  Номера пинов RX для соответствующего уарта (если не задефайненны - значит не определенны)
FLPROG_UART0_TX  .... FLPROG_UART12_TX  -  Аналогично для пина TX
*/

#pragma once
#include "Arduino.h"

#ifdef ARDUINO_ARCH_STM32
#include "variant\stm32\flprogBoardInfoStm32.h"
#endif

namespace flprog
{
    String getBoardInfo();
    String getUartBoardInfo();
};