#pragma once

static_assert(sizeof(unsigned int) == 4);

struct usart_t {
  unsigned int SR;
  enum {
    SR_PE = 0,
    SR_FE = 1,
    SR_NE = 2,
    SR_ORE = 3,
    SR_IDLE = 4,
    SR_RXNE = 5,
    SR_TC = 6,
    SR_TXE = 7,
    SR_LBD = 8,
    SR_CTS = 9,
  };
  unsigned int DR;
  unsigned int BRR;
  enum {
    BRR_DIV_Fraction = 0,
    BRR_DIV_Mantissa = 4,
  };
  unsigned int CR1;
  enum {
    CR1_SBK,
    CR1_RWU,
    CR1_RE,
    CR1_TE,
    CR1_IDLEIE,
    CR1_RXNEIE,
    CR1_TCIE,
    CR1_TXEIE,
    CR1_PEIE,
    CR1_PS,
    CR1_PCE,
    CR1_WAKE,
    CR1_M,
    CR1_UE,
  };
  unsigned int CR2;
  enum {
    CR2_ADD = 0,
    CR2_LBDL = 5,
    CR2_LBDIE = 6,
    CR2_LBCL = 8,
    CR2_CPHA = 9,
    CR2_CPOL = 10,
    CR2_CLKEN = 11,
    CR2_STOP = 12,
    CR2_LINEN = 14,
  };
  unsigned int CR3;
  enum {
    CR3_EIE = 0,
    CR3_IREN = 1,
    CR3_IRLP = 2,
    CR3_HDSEL = 3,
    CR3_NACK = 4,
    CR3_SCEN = 5,
    CR3_DMAR = 6,
    CR3_DMAT = 7,
    CR3_RTSE = 8,
    CR3_CTSE = 9,
    CR3_CTSIE = 10,
    CR3_ONEBIT = 11,
  };
  unsigned int GTPR;
};

extern volatile usart_t USART1;

#if __has_include(<cstddef>)
#include <cstddef>
static_assert(offsetof(decltype(usart_t), SR) == 0x00);
static_assert(offsetof(decltype(usart_t), DR) == 0x04);
static_assert(offsetof(decltype(usart_t), BRR) == 0x08);
static_assert(offsetof(decltype(usart_t), CR1) == 0x0C);
static_assert(offsetof(decltype(usart_t), CR2) == 0x10);
static_assert(offsetof(decltype(usart_t), CR3) == 0x14);
static_assert(offsetof(decltype(usart_t), GTPR) == 0x18);
#endif
