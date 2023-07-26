#include "flprogBoardSpiInfo.h"
String flprogBoardInfo::getSPIBoardInfo()
{
    String result = "SPI:\n";
    // Вывод SPI0
#ifdef FLPROG_HAS_SPI0
    result = result + "    SPI0 \n";
#ifdef FLPROG_NEED_CREATE_SPI0
    result = result + "        Bus Need Create \n";
#endif

#ifdef FLPROG_SPI0_MISO
    result = result + "        MISO:" + flprogBoardInfo::getPinName((FLPROG_SPI0_MISO)) + "\n ";
#endif

#ifdef FLPROG_SPI0_MOSI
    result = result + "       MOSI:" + flprogBoardInfo::getPinName((FLPROG_SPI0_MOSI)) + " \n";
#endif

#ifdef FLPROG_SPI0_SCK
    result = result + "        SCK:" + flprogBoardInfo::getPinName((FLPROG_SPI0_SCK)) + " \n";
#endif

#ifdef FLPROG_SPI0_SS
    result = result + "        SS:" + flprogBoardInfo::getPinName((FLPROG_SPI0_SS)) + " \n";
#endif
#endif
    // Вывод SPI1
#ifdef FLPROG_HAS_SPI1
    result = result + "    SPI1 \n";
#ifdef FLPROG_NEED_CREATE_SPI1
    result = result + "        Bus Need Create \n";
#endif

#ifdef FLPROG_SPI1_MISO
    result = result + "        MISO:" + flprogBoardInfo::getPinName((FLPROG_SPI1_MISO)) + "\n ";
#endif

#ifdef FLPROG_SPI1_MOSI
    result = result + "       MOSI:" + flprogBoardInfo::getPinName((FLPROG_SPI1_MOSI)) + " \n";
#endif

#ifdef FLPROG_SPI1_SCK
    result = result + "        SCK:" + flprogBoardInfo::getPinName((FLPROG_SPI1_SCK)) + " \n";
#endif

#ifdef FLPROG_SPI1_SS
    result = result + "        SS:" + flprogBoardInfo::getPinName((FLPROG_SPI1_SS)) + " \n";
#endif
#endif
    // Вывод SPI2
#ifdef FLPROG_HAS_SPI2
    result = result + "    SPI2 \n";
#ifdef FLPROG_NEED_CREATE_SPI2
    result = result + "        Bus Need Create \n";
#endif

#ifdef FLPROG_SPI2_MISO
    result = result + "        MISO:" + flprogBoardInfo::getPinName((FLPROG_SPI2_MISO)) + "\n ";
#endif

#ifdef FLPROG_SPI2_MOSI
    result = result + "       MOSI:" + flprogBoardInfo::getPinName((FLPROG_SPI2_MOSI)) + " \n";
#endif

#ifdef FLPROG_SPI2_SCK
    result = result + "        SCK:" + flprogBoardInfo::getPinName((FLPROG_SPI2_SCK)) + " \n";
#endif

#ifdef FLPROG_SPI2_SS
    result = result + "        SS:" + flprogBoardInfo::getPinName((FLPROG_SPI2_SS)) + " \n";
#endif
#endif
    // Вывод SPI3
#ifdef FLPROG_HAS_SPI3
    result = result + "    SPI3 \n";
#ifdef FLPROG_NEED_CREATE_SPI3
    result = result + "        Bus Need Create \n";
#endif

#ifdef FLPROG_SPI3_MISO
    result = result + "        MISO:" + flprogBoardInfo::getPinName((FLPROG_SPI3_MISO)) + "\n ";
#endif

#ifdef FLPROG_SPI3_MOSI
    result = result + "       MOSI:" + flprogBoardInfo::getPinName((FLPROG_SPI3_MOSI)) + " \n";
#endif

#ifdef FLPROG_SPI3_SCK
    result = result + "        SCK:" + flprogBoardInfo::getPinName((FLPROG_SPI3_SCK)) + " \n";
#endif

#ifdef FLPROG_SPI3_SS
    result = result + "        SS:" + flprogBoardInfo::getPinName((FLPROG_SPI3_SS)) + " \n";
#endif
#endif
    // Вывод SPI4
#ifdef FLPROG_HAS_SPI4
    result = result + "    SPI4 \n";
#ifdef FLPROG_NEED_CREATE_SPI4
    result = result + "        Bus Need Create \n";
#endif

#ifdef FLPROG_SPI4_MISO
    result = result + "        MISO:" + flprogBoardInfo::getPinName((FLPROG_SPI4_MISO)) + "\n ";
#endif

#ifdef FLPROG_SPI4_MOSI
    result = result + "       MOSI:" + flprogBoardInfo::getPinName((FLPROG_SPI4_MOSI)) + " \n";
#endif

#ifdef FLPROG_SPI4_SCK
    result = result + "        SCK:" + flprogBoardInfo::getPinName((FLPROG_SPI4_SCK)) + " \n";
#endif

#ifdef FLPROG_SPI4_SS
    result = result + "          SS:" + flprogBoardInfo::getPinName((FLPROG_SPI4_SS)) + " \n";
#endif
#endif
    return result;
}
