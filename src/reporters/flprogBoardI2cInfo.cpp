#include "flprogBoardI2cInfo.h"
String flprogBoardInfo::getI2CBoardInfo()
{
    String result = "I2C:\n";
    // Вывод I2C0
#ifdef FLPROG_HAS_I2C0
    result = result + "    I2C0 \n";
#ifdef FLPROG_NEED_CREATE_I2С0
    result = result + "        Bus Need Create \n";
#endif
#ifdef FLPROG_I2C0_SDA
    result = result + "        SDA:" + flprogBoardInfo::getPinName((FLPROG_I2C0_SDA)) + "\n ";
#endif

#ifdef FLPROG_I2C0_SCL
    result = result + "       SCL:" + flprogBoardInfo::getPinName((FLPROG_I2C0_SCL)) + " \n";
#endif
#endif
    // Вывод I2C1
#ifdef FLPROG_HAS_I2C1
    result = result + "    I2C1 \n";
#ifdef FLPROG_NEED_CREATE_I2C1
    result = result + "        Bus Need Create \n";
#endif

#ifdef FLPROG_I2C1_SDA
    result = result + "        SDA:" + flprogBoardInfo::getPinName((FLPROG_I2C1_SDA)) + "\n ";
#endif

#ifdef FLPROG_I2C1_SCL
    result = result + "       SCL:" + flprogBoardInfo::getPinName((FLPROG_I2C1_SCL)) + " \n";
#endif
#endif
    // Вывод I2C2
#ifdef FLPROG_HAS_I2C2
    result = result + "    I2C2 \n";
#ifdef FLPROG_NEED_CREATE_I2C2
    result = result + "        Bus Need Create \n";
#endif
#ifdef FLPROG_I2C2_SDA
    result = result + "        SDA:" + flprogBoardInfo::getPinName((FLPROG_I2C2_SDA)) + "\n ";
#endif

#ifdef FLPROG_I2C2_SCL
    result = result + "       SCL:" + flprogBoardInfo::getPinName((FLPROG_I2C2_SCL)) + " \n";
#endif
#endif
    return result;
    // Вывод I2C3
#ifdef FLPROG_HAS_I2C3
    result = result + "    I2C3 \n";
#ifdef FFLPROG_NEED_CREATE_I2C3
    result = result + "        Bus Need Create \n";
#endif
#ifdef FLPROG_I2C3_SDA
    result = result + "        SDA:" + flprogBoardInfo::getPinName((FLPROG_I2C3_SDA)) + "\n ";
#endif

#ifdef FLPROG_I2C3_SCL
    result = result + "       SCL:" + flprogBoardInfo::getPinName((FLPROG_I2C3_SCL)) + " \n";
#endif
#endif
    // Вывод I2C4
#ifdef FLPROG_HAS_I2C4
    result = result + "    I2C3 \n";
#ifdef FLPROG_NEED_CREATE_I2C4
    result = result + "        Bus Need Create \n";
#endif
#ifdef FLPROG_I2C4_SDA
    result = result + "        SDA:" + flprogBoardInfo::getPinName((FLPROG_I2C4_SDA)) + "\n ";
#endif

#ifdef FLPROG_I2C4_SCL
    result = result + "       SCL:" + flprogBoardInfo::getPinName((FLPROG_I2C4_SCL)) + " \n";
#endif
#endif
    return result;
}
