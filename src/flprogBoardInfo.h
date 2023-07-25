/*
Создаваемве дефайны
UART:
FLPROG_HAS_UART0  .... FLPROG_HAS_UART12  - Если задефайненны значит такие уарты есть,  значение могут быть Hardware или USB
FLPROG_NEED_CREATE_UART0  .... FLPROG_NEED_CREATE_UART12   - Порт необходимо создавать
FLPROG_UART0_RX  .... FLPROG_UART12_RX  -  Номера пинов RX для соответствующего уарта (если не задефайненны - значит не определенны)
FLPROG_UART0_TX  .... FLPROG_UART12_TX  -  Аналогично для пина TX
*/

#pragma once
#include "Arduino.h"

#ifdef ARDUINO_ARCH_STM32
#include "variant/stm32/flprogBoardInfoStm32.h"
#endif

#ifdef ARDUINO_ARCH_AVR
#include "variant/avr/flprogBoardInfoAVR.h"
#endif
#ifdef ARDUINO_ARCH_ESP8266
#include "variant/esp/esp8266/flprogBoardInfoESP8266.h"
#endif

#ifdef ARDUINO_ARCH_ESP32
#include "variant/esp/esp32/flprogBoardInfoESP32.h"
#endif


#include "uart/flprogBoardUartInfo.h"

namespace flprogBoardInfo
{
    String getBoardInfo();
};