#pragma once
#include "flprogBoardInfo.h"

String flprog::getBoardInfo()
{
    String result = flprog::getUartBoardInfo();
    return result + "\n" + VARIANT_H + "\n\n";
}

String flprog::getUartBoardInfo()
{
    String result = "UARTS:\n";
#if defined(USART1)
    result = result + "Can Use Uart 1 \n";
#if defined(HAVE_HWSERIAL1)
    result = result + "Is Create Uart1 \n";
#endif
    result = result + "\n";
#endif
#if defined(USART2)
    result = result + "Can Use Uart 2 \n";
#if defined(HAVE_HWSERIAL2)
    result = result + "Is Create Uart2 \n";
#endif
    result = result + "\n";
#endif
#if defined(USART3)
    result = result + "Can Use Uart 3 \n";
#if defined(HAVE_HWSERIAL3)
    result = result + "Is Create Uart3\n";
#endif
    result = result + "\n";
#endif
#if defined(UART4) || defined(USART4)
    result = result + "Can Use Uart 4 \n";
#if defined(HAVE_HWSERIAL4)
    result = result + "Is Create Uart4\n";
#endif
    result = result + "\n";
#endif
#if defined(UART5) || defined(USART5)
    result = result + "Can Use Uart 5 \n";
#if defined(HAVE_HWSERIAL5)
    result = result + "Is Create Uart5\n";
#endif
    result = result + "\n";
#endif
#if defined(USART6)
    result = result + "Can Use Uart 6 \n";
#endif
#if defined(UART7) || defined(USART7)
    result = result + "Can Use Uart 7 \n";
#endif
#if defined(UART8) || defined(USART8)
    result = result + "Can Use Uart 8 \n";
#endif
#if defined(UART9)
    result = result + "Can Use Uart 9 \n";
#endif
#if defined(UART10) || defined(USART10)
    result = result + "Can Use Uart 10 \n";
#endif
#if defined(LPUART1)
    result = result + "Can Use Uart 11 \n";
#endif
#if defined(LPUART2)
    result = result + "Can Use Uart 12 \n";
#endif

    return result;
}

/*
#ifdef FLPROG_HAS_UART0
    result = result + "UART0 ";
#ifdef FLPROG_UART0_RX
    result = result + "RX:" + String(digitalPinToPinName(FLPROG_UART0_RX)) + " ";
#endif
#ifdef FLPROG_UART0_TX
    result = result + "TX:" + String(digitalPinToPinName(FLPROG_UART0_TX)) + " ";
#endif
    result = result + "\n";
#endif

#ifdef FLPROG_HAS_UART1
    result = result + "UART1 ";
#ifdef PIN_SERIAL1_RX
    result = result + "RX: " + String(PIN_SERIAL1_RX) + " ";
#endif
#ifdef PIN_SERIAL1_TX
    result = result + "TX: " + String(PIN_SERIAL1_TX) + " ";
#endif
    result = result + "\n";
#endif

#ifdef FLPROG_HAS_UART3
    result = result + "UART3 ";
#ifdef PIN_SERIAL3_RX
    result = result + "RX: " + String(PIN_SERIAL1_RX) + " ";
#endif
#ifdef PIN_SERIAL3_TX
    result = result + "TX: " + String(PIN_SERIAL1_TX) + " ";
#endif
    result = result + "\n";
#endif


#ifdef FLPROG_HAS_UART4
    result = result + "UART4 ";
#ifdef PIN_SERIAL4_RX
    result = result + "RX: " + String(PIN_SERIAL1_RX) + " ";
#endif
#ifdef PIN_SERIAL4_TX
    result = result + "TX: " + String(PIN_SERIAL1_TX) + " ";
#endif
    result = result + "\n";
#endif

#ifdef FLPROG_HAS_UART5
    result = result + "UART4 ";
#ifdef PIN_SERIAL4_RX
    result = result + "RX: " + String(PIN_SERIAL1_RX) + " ";
#endif
#ifdef PIN_SERIAL4_TX
    result = result + "TX: " + String(PIN_SERIAL1_TX) + " ";
#endif
    result = result + "\n";
#endif

*/