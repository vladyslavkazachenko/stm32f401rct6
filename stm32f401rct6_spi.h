#pragma once

static_assert(sizeof(unsigned int) == 4);

struct spi_t {
  unsigned int CR1;
  enum {
    CR1_CPHA = 0,
    CR1_CPOL = 1,
    CR1_MSTR = 2,
    CR1_BR = 3,
    CR1_SPE = 6,
    CR1_LSBFIRST = 7,
    CR1_SSI = 8,
    CR1_SSM = 9,
    CR1_RXONLY = 10,
    CR1_DFF = 11,
    CR1_CRCNEXT = 12,
    CR1_CRCEN = 13,
    CR1_BIDIOE = 14,
    CR1_BIDIMODE = 15,
  };
  unsigned int CR2;
  enum {
    CR2_RXDMAEN = 0,
    CR2_TXDMAEN = 1,
    CR2_SSOE = 2,
    CR2_FRF = 4,
    CR2_ERRIE = 5,
    CR2_RXNEIE = 6,
    CR2_TXEIE = 7,
  };
  unsigned int SR;
  enum {
    SR_RXNE = 0,
    SR_TXE = 1,
    SR_CHSIDE = 2,
    SR_UDR = 3,
    SR_CRCERR = 4,
    SR_MODF = 5,
    SR_OVR = 6,
    SR_BSY = 7,
    SR_FRE = 8,
  };
  unsigned int DR;
  unsigned int CRCPR;
  unsigned int RXCRCR;
  unsigned int TXCRCR;
  unsigned int I2SCFGR;
  unsigned int I2SPR;
};

extern volatile spi_t SPI1;

#if __has_include(<cstddef>)
#include <cstddef>
static_assert(offsetof(spi_t, CR1) == 0x00);
static_assert(offsetof(spi_t, CR2) == 0x04);
static_assert(offsetof(spi_t, SR) == 0x08);
static_assert(offsetof(spi_t, DR) == 0x0C);
static_assert(offsetof(spi_t, CRCPR) == 0x10);
static_assert(offsetof(spi_t, RXCRCR) == 0x14);
static_assert(offsetof(spi_t, TXCRCR) == 0x18);
static_assert(offsetof(spi_t, I2SCFGR) == 0x1C);
static_assert(offsetof(spi_t, I2SPR) == 0x20);
#endif
