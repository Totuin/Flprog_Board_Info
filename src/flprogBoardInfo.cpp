#include "flprogBoardInfo.h"

// return result + "\n" + VARIANT_H + "\n\n";

String flprogBoardInfo::getBoardInfo()
{
    String result = flprogBoardInfo::getUartBoardInfo();
    result = result + getI2CBoardInfo();
    result = result + getSPIBoardInfo();
    return result + "\n";
}

#ifdef ARDUINO_ARCH_STM32
String flprogBoardInfo::getPinName(int value)
{
    uint8_t portIndex = (int)value / 16;
    uint8_t pin = value - (portIndex * 16);
    String portName = "NotDef";
    if (portIndex == 0)
        portName = "PA";
    if (portIndex == 1)
        portName = "PB";
    if (portIndex == 2)
        portName = "PC";
    if (portIndex == 3)
        portName = "PD";
    if (portIndex == 4)
        portName = "PE";
    if (portIndex == 5)
        portName = "PF";
    return portName + String(pin) + " (" + String(value) + ")";
}
#else
String flprogBoardInfo::getPinName(int value)
{
    return String(value);
}
#endif