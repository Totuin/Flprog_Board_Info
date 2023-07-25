#pragma once
#include "flprogBoardInfoStm32.h"
#ifdef ARDUINO_ARCH_STM32

// ---------- Анализ UART0---------------------------------------------
#if defined(USBCON) && defined(USBD_USE_CDC)
#define FLPROG_HAS_UART0 "USB Serial"
#endif
// ---------- Анализ UART1---------------------------------------------

#if defined(UART1) || defined(USART1)

#ifdef USART1
#define FLPROG_HAS_UART1 "Hardware USART Serial1"
#endif

#ifdef UART1
#define FLPROG_HAS_UART1 "Hardware UART Serial1"
#endif

#ifdef PIN_SERIAL1_TX
#define FLPROG_UART1_TX PIN_SERIAL1_TX
#else
#ifdef USART1
#define FLPROG_UART1_TX pinmap_find_pin(USART1, PinMap_UART_TX)
#endif
#ifdef UART1
#define FLPROG_UART1_TX pinmap_find_pin(UART1, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL1_RX
#define FLPROG_UART1_RX PIN_SERIAL1_RX
#else
#ifdef USART1
#define FLPROG_UART1_RX pinmap_find_pin(USART1, PinMap_UART_RX)
#endif
#ifdef UART1
#define FLPROG_UART1_RX pinmap_find_pin(UART1, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL1
#define FLPROG_NEED_CREATE_UART1
#endif

#endif

// ---------- Анализ UART2---------------------------------------------
#if defined(UART2) || defined(USART2)

#ifdef USART2
#define FLPROG_HAS_UART2 "Hardware USART Serial2"
#endif

#ifdef UART2
#define FLPROG_HAS_UART2 "Hardware UART Serial2"
#endif

#ifdef PIN_SERIAL2_TX
#define FLPROG_UART2_TX PIN_SERIAL2_TX
#else
#ifdef USART2
#define FLPROG_UART2_TX pinmap_find_pin(USART2, PinMap_UART_TX)
#endif
#ifdef UART2
#define FLPROG_UART2_TX pinmap_find_pin(UART2, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL2_RX
#define FLPROG_UART2_RX PIN_SERIAL2_RX
#else
#ifdef USART2
#define FLPROG_UART2_RX pinmap_find_pin(USART2, PinMap_UART_RX)
#endif
#ifdef UART2
#define FLPROG_UART2_RX pinmap_find_pin(UART2, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL2
#define FLPROG_NEED_CREATE_UART2
#endif

#endif

// ---------- Анализ UART3---------------------------------------------
#if defined(UART3) || defined(USART3)

#ifdef USART3
#define FLPROG_HAS_UART3 "Hardware USART Serial3"
#endif

#ifdef UART3
#define FLPROG_HAS_UART3 "Hardware UART Serial3"
#endif

#ifdef PIN_SERIAL3_TX
#define FLPROG_UART3_TX PIN_SERIAL3_TX
#else
#ifdef USART3
#define FLPROG_UART3_TX pinmap_find_pin(USART3, PinMap_UART_TX)
#endif
#ifdef UART3
#define FLPROG_UART3_TX pinmap_find_pin(UART3, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL3_RX
#define FLPROG_UART3_RX PIN_SERIAL3_RX
#else
#ifdef USART3
#define FLPROG_UART3_RX pinmap_find_pin(USART3, PinMap_UART_RX)
#endif
#ifdef UART3
#define FLPROG_UART3_RX pinmap_find_pin(UART3, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL3
#define FLPROG_NEED_CREATE_UART3
#endif

#endif

// ---------- Анализ UART4---------------------------------------------
#if defined(UART4) || defined(USART4)

#ifdef USART4
#define FLPROG_HAS_UART4 "Hardware USART Serial4"
#endif

#ifdef UART4
#define FLPROG_HAS_UART4 "Hardware UART Serial4"
#endif

#ifdef PIN_SERIAL4_TX
#define FLPROG_UART4_TX PIN_SERIAL4_TX
#else
#ifdef USART4
#define FLPROG_UART4_TX pinmap_find_pin(USART4, PinMap_UART_TX)
#endif
#ifdef UART4
#define FLPROG_UART4_TX pinmap_find_pin(UART4, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL4_RX
#define FLPROG_UART4_RX PIN_SERIAL4_RX
#else
#ifdef USART4
#define FLPROG_UART4_RX pinmap_find_pin(USART4, PinMap_UART_RX)
#endif
#ifdef UART4
#define FLPROG_UART4_RX pinmap_find_pin(UART4, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL4
#define FLPROG_NEED_CREATE_UART4
#endif

#endif

// ---------- Анализ UART5---------------------------------------------
#if defined(UART5) || defined(USART5)

#ifdef USART5
#define FLPROG_HAS_UART5 "Hardware USART Serial5"
#endif

#ifdef UART5
#define FLPROG_HAS_UART5 "Hardware UART Serial5"
#endif

#ifdef PIN_SERIAL5_TX
#define FLPROG_UART5_TX PIN_SERIAL5_TX
#else
#ifdef USART5
#define FLPROG_UART5_TX pinmap_find_pin(USART5, PinMap_UART_TX)
#endif
#ifdef UART5
#define FLPROG_UART5_TX pinmap_find_pin(UART5, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL5_RX
#define FLPROG_UART5_RX PIN_SERIAL5_RX
#else
#ifdef USART5
#define FLPROG_UART5_RX pinmap_find_pin(USART5, PinMap_UART_RX)
#endif
#ifdef UART5
#define FLPROG_UART5_RX pinmap_find_pin(UART5, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL5
#define FLPROG_NEED_CREATE_UART5
#endif

#endif

// ---------- Анализ UART6---------------------------------------------
#if defined(UART6) || defined(USART6)

#ifdef USART6
#define FLPROG_HAS_UART6 "Hardware USART Serial6"
#endif

#ifdef UART6
#define FLPROG_HAS_UART6 "Hardware UART Serial6"
#endif

#ifdef PIN_SERIAL6_TX
#define FLPROG_UART6_TX PIN_SERIAL6_TX
#else
#ifdef USART6
#define FLPROG_UART6_TX pinmap_find_pin(USART6, PinMap_UART_TX)
#endif
#ifdef UART6
#define FLPROG_UART6_TX pinmap_find_pin(UART6, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL6_RX
#define FLPROG_UART6_RX PIN_SERIAL6_RX
#else
#ifdef USART6
#define FLPROG_UART6_RX pinmap_find_pin(USART6, PinMap_UART_RX)
#endif
#ifdef UART6
#define FLPROG_UART6_RX pinmap_find_pin(UART6, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL6
#define FLPROG_NEED_CREATE_UART6
#endif

#endif

// ---------- Анализ UART7---------------------------------------------
#if defined(UART7) || defined(USART7)

#ifdef USART7
#define FLPROG_HAS_UART7 "Hardware USART Serial7"
#endif

#ifdef UART7
#define FLPROG_HAS_UART7 "Hardware UART Serial7"
#endif

#ifdef PIN_SERIAL7_TX
#define FLPROG_UART7_TX PIN_SERIAL7_TX
#else
#ifdef USART7
#define FLPROG_UART7_TX pinmap_find_pin(USART7, PinMap_UART_TX)
#endif
#ifdef UART7
#define FLPROG_UART7_TX pinmap_find_pin(UART7, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL7_RX
#define FLPROG_UART7_RX PIN_SERIAL7_RX
#else
#ifdef USART7
#define FLPROG_UART7_RX pinmap_find_pin(USART7, PinMap_UART_RX)
#endif
#ifdef UART7
#define FLPROG_UART7_RX pinmap_find_pin(UART7, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL7
#define FLPROG_NEED_CREATE_UART7
#endif

#endif

// ---------- Анализ UART8---------------------------------------------
#if defined(UART8) || defined(USART8)

#ifdef USART8
#define FLPROG_HAS_UART8 "Hardware USART Serial8"
#endif

#ifdef UART8
#define FLPROG_HAS_UART8 "Hardware UART Serial8"
#endif

#ifdef PIN_SERIAL8_TX
#define FLPROG_UART8_TX PIN_SERIAL8_TX
#else
#ifdef USART8
#define FLPROG_UART8_TX pinmap_find_pin(USART8, PinMap_UART_TX)
#endif
#ifdef UART8
#define FLPROG_UART8_TX pinmap_find_pin(UART8, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL8_RX
#define FLPROG_UART8_RX PIN_SERIAL8_RX
#else
#ifdef USART8
#define FLPROG_UART8_RX pinmap_find_pin(USART8, PinMap_UART_RX)
#endif
#ifdef UART8
#define FLPROG_UART8_RX pinmap_find_pin(UART8, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL8
#define FLPROG_NEED_CREATE_UART8
#endif

#endif

// ---------- Анализ UART9---------------------------------------------
#if defined(UART9) || defined(USART9)

#ifdef USART9
#define FLPROG_HAS_UART9 "Hardware USART Serial9"
#endif

#ifdef UART9
#define FLPROG_HAS_UART9 "Hardware UART Serial9"
#endif

#ifdef PIN_SERIAL9_TX
#define FLPROG_UART9_TX PIN_SERIAL9_TX
#else
#ifdef USART9
#define FLPROG_UART9_TX pinmap_find_pin(USART9, PinMap_UART_TX)
#endif
#ifdef UART9
#define FLPROG_UART9_TX pinmap_find_pin(UART9, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL9_RX
#define FLPROG_UART9_RX PIN_SERIAL9_RX
#else
#ifdef USART9
#define FLPROG_UART9_RX pinmap_find_pin(USART9, PinMap_UART_RX)
#endif
#ifdef UART8
#define FLPROG_UART9_RX pinmap_find_pin(UART9, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL9
#define FLPROG_NEED_CREATE_UART9
#endif

#endif

// ---------- Анализ UART10---------------------------------------------
#if defined(UART10) || defined(USART10)

#ifdef USART10
#define FLPROG_HAS_UART10 "Hardware USART Serial10"
#endif

#ifdef UART10
#define FLPROG_HAS_UART10 "Hardware UART Serial10"
#endif

#ifdef PIN_SERIAL10_TX
#define FLPROG_UART10_TX PIN_SERIAL10_TX
#else
#ifdef USART10
#define FLPROG_UART10_TX pinmap_find_pin(USART10, PinMap_UART_TX)
#endif
#ifdef UART10
#define FLPROG_UART10_TX pinmap_find_pin(UART10, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIAL10_RX
#define FLPROG_UART10_RX PIN_SERIAL10_RX
#else
#ifdef USART10
#define FLPROG_UART10_RX pinmap_find_pin(USART10, PinMap_UART_RX)
#endif
#ifdef UART8
#define FLPROG_UART10_RX pinmap_find_pin(UART10, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIAL10
#define FLPROG_NEED_CREATE_UART10
#endif

#endif

// ---------- Анализ UART11---------------------------------------------
#if defined(LPUART1) || defined(LPUSART1)

#ifdef LPUART1
#define FLPROG_HAS_UART11 "Hardware USART SerialLP1"
#endif

#ifdef LPUSART1
#define FLPROG_HAS_UART11 "Hardware UART SerialLP1"
#endif

#ifdef PIN_SERIALLP1_TX
#define FLPROG_UART11_TX PIN_SERIALLP1_TX
#else
#ifdef LPUSART1
#define FLPROG_UART11_TX pinmap_find_pin(LPUSART1, PinMap_UART_TX)
#endif
#ifdef LPUART1
#define FLPROG_UART11_TX pinmap_find_pin(LPUART1, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIALLP1_RX
#define FLPROG_UART11_RX PIN_SERIALLP1_RX
#else
#ifdef LPUSART1
#define FLPROG_UART11_RX pinmap_find_pin(LPUSART1, PinMap_UART_RX)
#endif
#ifdef LPUART1
#define FLPROG_UART11_RX pinmap_find_pin(LPUART1, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIALLP1
#define FLPROG_NEED_CREATE_UART11
#endif

#endif

// ---------- Анализ UART12---------------------------------------------
#if defined(LPUART2) || defined(LPUSART2)

#ifdef LPUART2
#define FLPROG_HAS_UART12 "Hardware USART SerialLP1"
#endif

#ifdef LPUSART2
#define FLPROG_HAS_UART12 "Hardware UART SerialLP1"
#endif

#ifdef PIN_SERIALLP2_TX
#define FLPROG_UART12_TX PIN_SERIALLP2_TX
#else
#ifdef LPUSART2
#define FLPROG_UART12_TX pinmap_find_pin(LPUSART2, PinMap_UART_TX)
#endif
#ifdef LPUART2
#define FLPROG_UART12_TX pinmap_find_pin(LPUART2, PinMap_UART_TX)
#endif
#endif

#ifdef PIN_SERIALLP2_RX
#define FLPROG_UART12_RX PIN_SERIALLP2_RX
#else
#ifdef LPUSART2
#define FLPROG_UART12_RX pinmap_find_pin(LPUSART2, PinMap_UART_RX)
#endif
#ifdef LPUART2
#define FLPROG_UART12_RX pinmap_find_pin(LPUART2, PinMap_UART_RX)
#endif
#endif

#ifndef HAVE_HWSERIALLP2
#define FLPROG_NEED_CREATE_UART12
#endif

#endif

#endif