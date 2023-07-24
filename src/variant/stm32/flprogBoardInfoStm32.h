#pragma once
#include "flprogBoardInfo.h"
#ifdef ARDUINO_ARCH_STM32

// ---------- Анализ UART---------------------------------------------
#if defined(USBCON) && defined(USBD_USE_CDC)
#define FLPROG_HAS_UART0
#if defined(PIN_SERIAL_RX)
#define FLPROG_UART0_RX PIN_SERIAL_RX
#endif
#if defined(PIN_SERIAL_TX)
#define FLPROG_UART0_TX PIN_SERIAL_TX
#endif
#endif

#ifdef HAVE_HWSERIAL1
#define FLPROG_HAS_UART1
#ifdef PIN_SERIAL1_TX 
#define FLPROG_UART1_TX PIN_SERIAL1_TX
#endif
#ifdef PIN_SERIAL1_TX
#define FLPROG_UART1_RX PIN_SERIAL1_TX
#endif
#endif

#ifdef HAVE_HWSERIAL2
#define FLPROG_HAS_UART2
#if defined(PIN_SERIAL2_TX) && defined(USART2_BASE)
#if defined(PIN_SERIAL2_RX)
#define FLPROG_UART2_RX PIN_SERIAL2_RX
#endif
#define FLPROG_UART2_TX PIN_SERIAL2_TX
#endif
#endif

#ifdef HAVE_HWSERIAL3
#define FLPROG_HAS_UART3
#if defined(PIN_SERIAL3_TX) && defined(USART3_BASE)
#if defined(PIN_SERIAL3_RX)
#define FLPROG_UART3_RX PIN_SERIAL3_RX
#endif
#define FLPROG_UART3_TX PIN_SERIAL3_TX
#endif
#endif

#ifdef HAVE_HWSERIAL4
#define FLPROG_HAS_UART4
#if defined(PIN_SERIAL4_TX) && (defined(USART4_BASE) || defined(UART4_BASE))
#if defined(PIN_SERIAL4_RX)
#define FLPROG_UART4_RX PIN_SERIAL4_RX
#endif
#define FLPROG_UART4_TX PIN_SERIAL4_TX
#endif
#endif

#ifdef HAVE_HWSERIAL5
#define FLPROG_HAS_UART5
#if defined(PIN_SERIAL5_TX) && (defined(USART5_BASE) || defined(UART5_BASE))
#if defined(PIN_SERIAL5_RX)
#define FLPROG_UART5_RX PIN_SERIAL5_RX
#endif
#define FLPROG_UART5_TX PIN_SERIAL5_TX
#endif
#endif

#ifdef HAVE_HWSERIAL6
#define FLPROG_HAS_UART6
#if defined(PIN_SERIAL6_TX) && defined(USART6_BASE)
#if defined(PIN_SERIAL6_RX)
#define FLPROG_UART6_RX PIN_SERIAL6_RX
#endif
#define FLPROG_UART6_TX PIN_SERIAL6_TX
#endif
#endif

#ifdef HAVE_HWSERIAL7
#define FLPROG_HAS_UART7
#if defined(PIN_SERIAL7_TX) && (defined(USART7_BASE) || defined(UART7_BASE))
#if defined(PIN_SERIAL7_RX)
#define FLPROG_UART7_RX PIN_SERIAL7_RX
#endif
#define FLPROG_UART7_TX PIN_SERIAL7_TX
#endif
#endif

#ifdef HAVE_HWSERIAL8
#define FLPROG_HAS_UART8
#if defined(PIN_SERIAL8_TX) && (defined(USART8_BASE) || defined(UART8_BASE))
#if defined(PIN_SERIAL8_RX)
#define FLPROG_UART8_RX PIN_SERIAL8_RX
#endif
#define FLPROG_UART8_TX PIN_SERIAL8_TX
#endif
#endif

#ifdef HAVE_HWSERIAL9
#define FLPROG_HAS_UART9
#if defined(PIN_SERIAL9_TX) && defined(UART9_BASE)
#if defined(PIN_SERIAL9_RX)
#define FLPROG_UART9_RX PIN_SERIAL9_RX
#endif
#define FLPROG_UART9_TX PIN_SERIAL9_TX
#endif
#endif

#ifdef HAVE_HWSERIAL10
#define FLPROG_HAS_UART10
#if defined(PIN_SERIAL10_TX) && (defined(USART10_BASE) || defined(UART10_BASE))
#if defined(PIN_SERIAL10_RX)
#define FLPROG_UART10_RX PIN_SERIAL10_RX
#endif
#define FLPROG_UART10_TX PIN_SERIAL10_TX
#endif
#endif

#ifdef HAVE_HWSERIALLP1
#define FLPROG_HAS_UART11
#if defined(PIN_SERIALLP1_TX) && defined(LPUART1_BASE)
#if defined(PIN_SERIALLP1_RX)
#define FLPROG_UART11_RX PIN_SERIALLP1_TX
#endif
#define FLPROG_UART11_TX PIN_SERIALLP1_TX
#endif
#endif

#ifdef HAVE_HWSERIALLP2
#define FLPROG_HAS_UART12
#if defined(PIN_SERIALLP2_TX) && defined(LPUART2_BASE)
#if defined(PIN_SERIALLP2_RX)
#define FLPROG_UART12_RX PIN_SERIALLP2_TX
#endif
#define FLPROG_UART12_TX PIN_SERIALLP2_TX
#endif
#endif

#endif