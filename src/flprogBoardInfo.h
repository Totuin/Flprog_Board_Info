
/// \brief Библиотека для получения описания платы
/*!
 Создаваемые дефайны
- UART:
    - FLPROG_HAS_UART0  .... FLPROG_HAS_UART12   - Если задефайненны значит такие уарты есть, в значение записывается информация о порте
    - FLPROG_NEED_CREATE_UART0  .... FLPROG_NEED_CREATE_UART12    - Порт необходимо создавать
    - FLPROG_UART0_RX .... FLPROG_UART12_RX   -  Номера пинов RX для соответствующего уарта (если не задефайненны - значит не определенны)
    - FLPROG_UART0_TX .... FLPROG_UART12_TX   -  Аналогично для пина TX

-I2С:
    - FLPROG_HAS_I2C0  .... FLPROG_HAS_I2C4   - Если задефайненны значит такие шины I2C есть
    - FLPROG_NEED_CREATE_I2С0  .... FLPROG_NEED_CREATE_I2C4    - Шину необходимо создавать
    - FLPROG_I2C0_SDA .... FLPROG_I2C4SDA    -  Номера пинов SDA для соответствующей шины I2C (если не задефайненны - значит не определенны)
    - FLPROG_I2C0_SCL .... FLPROG_I2C4_SCL    -  Аналогично для пина SCL
-SPI:
    - FLPROG_HAS_SPI0  .... FLPROG_HAS_SPI4   - Если задефайненны значит такие шины I2C есть
    - FLPROG_NEED_CREATE_SPI0  .... FLPROG_NEED_CREATE_SPI4    - Шину необходимо создавать
    - FLPROG_SPI0_MISO   .... FLPROG_SPI4_MISO    -  Номера пинов MISO для соответствующей шины SPI (если не задефайненны - значит не определенны)
    - FLPROG_SPI0_MOSI   .... FLPROG_SPI4_MOSI    -  Аналогично для пина MOSI
    - FLPROG_SPI0_SCK   .... FLPROG_SPI4_SCK    -  Аналогично для пина CLK
    - FLPROG_SPI0_SS   .... FLPROG_SPI4_SS    -  Аналогично для пина SEL
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

#ifdef ARDUINO_ARCH_RP2040
#include "variant/rp2040/flprogBoardInfoRP240.h"
#endif

#ifdef ARDUINO_ARCH_SAM
#include "variant/due/flprogBoardInfoDUE.h"
#endif


#include "reporters/flprogBoardUartInfo.h"
#include "reporters/flprogBoardI2cInfo.h"
#include "reporters/flprogBoardSpiInfo.h"

namespace flprogBoardInfo
{
    String getPinName(int value);
    String getBoardInfo();
};