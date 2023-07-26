#pragma once
#include "flprogBoardInfoStm32.h"
#ifdef  ARDUINO_ARCH_STM32
#define FLPROG_HAS_SPI0
#define FLPROG_SPI0_MISO PIN_SPI_MISO
#define FLPROG_SPI0_MOSI PIN_SPI_MOSI
#define FLPROG_SPI0_SCK PIN_SPI_SCK
#define FLPROG_SPI0_SS PIN_SPI_SS
#ifdef SPI1
#define FLPROG_HAS_SPI1
#define FLPROG_NEED_CREATE_SPI1
#define FLPROG_SPI1_MISO pinmap_find_pin(SPI1, PinMap_SPI_MISO)
#define FLPROG_SPI1_MOSI pinmap_find_pin(SPI1, PinMap_SPI_MOSI)
#define FLPROG_SPI1_SCK pinmap_find_pin(SPI1, PinMap_SPI_SCLK)
#define FLPROG_SPI1_SS pinmap_find_pin(SPI1, PinMap_SPI_SSEL)
#endif
#ifdef SPI2
#define FLPROG_NEED_CREATE_SPI2
#define FLPROG_HAS_SPI2
#define FLPROG_SPI2_MISO pinmap_find_pin(SPI2, PinMap_SPI_MISO)
#define FLPROG_SPI2_MOSI pinmap_find_pin(SPI2, PinMap_SPI_MOSI)
#define FLPROG_SPI2_SCK pinmap_find_pin(SPI2, PinMap_SPI_SCLK)
#define FLPROG_SPI2_SS pinmap_find_pin(SPI2, PinMap_SPI_SSEL)
#endif
#ifdef SPI3
#define FLPROG_NEED_CREATE_SPI3
#define FLPROG_HAS_SPI3
#define FLPROG_SPI3_MISO pinmap_find_pin(SPI3, PinMap_SPI_MISO)
#define FLPROG_SPI3_MOSI pinmap_find_pin(SPI3, PinMap_SPI_MOSI)
#define FLPROG_SPI3_SCK pinmap_find_pin(SPI3, PinMap_SPI_SCLK)
#define FLPROG_SPI3_SS pinmap_find_pin(SPI3, PinMap_SPI_SSEL)
#endif
#ifdef SPI4
#define FLPROG_HAS_SPI4
#define FLPROG_NEED_CREATE_SPI4
#define FLPROG_SPI4_MISO pinmap_find_pin(SPI4, PinMap_SPI_MISO)
#define FLPROG_SPI4_MOSI pinmap_find_pin(SPI4, PinMap_SPI_MOSI)
#define FLPROG_SPI4_SCK pinmap_find_pin(SPI4, PinMap_SPI_SCLK)
#define FLPROG_SPI4_SS pinmap_find_pin(SPI4, PinMap_SPI_SSEL)
#endif
#endif