#pragma once

struct usart_t {
  unsigned int SR;
  enum {
    SR_TXE = 7,
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
  unsigned int CR3;
  unsigned int GTPR;
};

extern volatile usart_t USART1;
