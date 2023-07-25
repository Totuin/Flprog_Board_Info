#include "flprogBoardUartInfo.h"

String flprogBoardInfo::getUartBoardInfo()
{
    String result = "UARTS:\n";
    // Вывод UART0
#ifdef FLPROG_HAS_UART0
    result = result + "UART0 -  " + FLPROG_HAS_UART0 + "\n";
#ifdef FLPROG_NEED_CREATE_UART1
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART0_RX
    result = result + "    RX:" + String(digitalPinToPinName(FLPROG_UART0_RX)) + "\n ";
#endif

#ifdef FLPROG_UART0_TX
    result = result + "   TX:" + String(digitalPinToPinName(FLPROG_UART0_TX)) + " \n";
#endif
#endif

    // Вывод UART1
#ifdef FLPROG_HAS_UART1
    result = result + "UART1 -  " + FLPROG_HAS_UART1 + "\n";
#ifdef FLPROG_NEED_CREATE_UART1
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART1_RX
    result = result + "    RX:" + String(FLPROG_UART1_RX) + "\n ";
#endif

#ifdef FLPROG_UART1_TX
    result = result + "   TX:" + String(FLPROG_UART1_TX) + "\n";
#endif
#endif

    // Вывод UART2
#ifdef FLPROG_HAS_UART2
    result = result + "UART2 -  " + FLPROG_HAS_UART2 + "\n";
#ifdef FLPROG_NEED_CREATE_UART2
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART2_RX
    result = result + "    RX:" + String(FLPROG_UART2_RX) + "\n ";
#endif

#ifdef FLPROG_UART2_TX
    result = result + "   TX:" + String(FLPROG_UART2_TX) + "\n";
#endif
#endif

    // Вывод UART3
#ifdef FLPROG_HAS_UART3
    result = result + "UART3 -  " + FLPROG_HAS_UART3 + "\n";
#ifdef FLPROG_NEED_CREATE_UART3
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART3_RX
    result = result + "    RX:" + String(FLPROG_UART3_RX) + "\n ";
#endif

#ifdef FLPROG_UART3_TX
    result = result + "   TX:" + String(FLPROG_UART3_TX) + "\n";
#endif
#endif

    // Вывод UART4
#ifdef FLPROG_HAS_UART4
    result = result + "UART4 -  " + FLPROG_HAS_UART4 + "\n";
#ifdef FLPROG_NEED_CREATE_UART4
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART4_RX
    result = result + "    RX:" + String(FLPROG_UART4_RX) + "\n ";
#endif

#ifdef FLPROG_UART4_TX
    result = result + "   TX:" + String(FLPROG_UART4_TX) + "\n";
#endif
#endif

    // Вывод UART5
#ifdef FLPROG_HAS_UART5
    result = result + "UART5 -  " + FLPROG_HAS_UART5 + "\n";
#ifdef FLPROG_NEED_CREATE_UART5
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART5_RX
    result = result + "    RX:" + String(FLPROG_UART5_RX) + "\n ";
#endif

#ifdef FLPROG_UART5_TX
    result = result + "   TX:" + String(FLPROG_UART5_TX) + "\n";
#endif
#endif

    // Вывод UART6
#ifdef FLPROG_HAS_UART6
    result = result + "UART6 -  " + FLPROG_HAS_UART6 + "\n";
#ifdef FLPROG_NEED_CREATE_UART6
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART6_RX
    result = result + "    RX:" + String(FLPROG_UART6_RX) + "\n ";
#endif

#ifdef FLPROG_UART6_TX
    result = result + "   TX:" + String(FLPROG_UART6_TX) + "\n";
#endif
#endif

    // Вывод UART7
#ifdef FLPROG_HAS_UART7
    result = result + "UART7 -  " + FLPROG_HAS_UART7 + "\n";
#ifdef FLPROG_NEED_CREATE_UART7
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART7_RX
    result = result + "    RX:" + String(FLPROG_UART7_RX) + "\n ";
#endif

#ifdef FLPROG_UART7_TX
    result = result + "   TX:" + String(FLPROG_UART7_TX) + "\n";
#endif
#endif

    // Вывод UART8
#ifdef FLPROG_HAS_UART8
    result = result + "UART8 -  " + FLPROG_HAS_UART8 + "\n";
#ifdef FLPROG_NEED_CREATE_UART8
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART8_RX
    result = result + "    RX:" + String(FLPROG_UART8_RX) + "\n ";
#endif

#ifdef FLPROG_UART8_TX
    result = result + "   TX:" + String(FLPROG_UART8_TX) + "\n";
#endif
#endif

    // Вывод UART9
#ifdef FLPROG_HAS_UART9
    result = result + "UART9 -  " + FLPROG_HAS_UART9 + "\n";
#ifdef FLPROG_NEED_CREATE_UART9
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART9_RX
    result = result + "    RX:" + String(FLPROG_UART9_RX) + "\n ";
#endif

#ifdef FLPROG_UART9_TX
    result = result + "   TX:" + String(FLPROG_UART9_TX) + "\n";
#endif
#endif

    // Вывод UART10
#ifdef FLPROG_HAS_UART10
    result = result + "UART10 -  " + FLPROG_HAS_UART10 + "\n";
#ifdef FLPROG_NEED_CREATE_UART10
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART10_RX
    result = result + "    RX:" + String(FLPROG_UART10_RX) + "\n ";
#endif

#ifdef FLPROG_UART10_TX
    result = result + "   TX:" + String(FLPROG_UART10_TX) + "\n";
#endif
#endif

    // Вывод UART11
#ifdef FLPROG_HAS_UART11
    result = result + "UART11 -  " + FLPROG_HAS_UART11 + "\n";
#ifdef FLPROG_NEED_CREATE_UART11
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART11_RX
    result = result + "    RX:" + String(FLPROG_UART11_RX) + "\n ";
#endif

#ifdef FLPROG_UART11_TX
    result = result + "   TX:" + String(FLPROG_UART11_TX) + "\n";
#endif
#endif

    // Вывод UART12
#ifdef FLPROG_HAS_UART12
    result = result + "UART12 -  " + FLPROG_HAS_UART12 + "\n";
#ifdef FLPROG_NEED_CREATE_UART12
    result = result + "    Port Need Create \n";
#endif

#ifdef FLPROG_UART12_RX
    result = result + "    RX:" + String(FLPROG_UART12_RX) + "\n ";
#endif

#ifdef FLPROG_UART12_TX
    result = result + "   TX:" + String(FLPROG_UART12_TX) + "\n";
#endif
#endif

    return result;
}

