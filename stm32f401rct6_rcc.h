#pragma once

struct rcc_t {
  unsigned int CR;
  enum {
    CR_PLLON = 24,
    CR_PLLRDY = 25,
  };
  unsigned int PLLCFGR;
  enum {
    PLLCFGR_M = 0,
    PLLCFGR_N = 6,
    PLLCFGR_P = 16,
    PLLCFGR_SRC = 22,
    PLLCFGR_Q = 24,

  };
  unsigned int CFGR;
  enum {
    CFGR_SWS = 2,
  };
  unsigned int CIR;
  unsigned int AHB1RSTR;
  unsigned int AHB2RSTR;
  unsigned int RESERVED1;
  unsigned int RESERVED2;
  unsigned int APB1RSTR;
  unsigned int APB2RSTR;
  unsigned int RESERVED3;
  unsigned int RESERVED4;
  unsigned int AHB1ENR;
  enum {
    AHB1ENR_GPIOAEN = 0,
    AHB1ENR_GPIOBEN = 1,
    AHB1ENR_GPIOCEN = 2,
    AHB1ENR_GPIODEN = 3,
    AHB1ENR_GPIOEEN = 4,
    AHB1ENR_GPIOHEN = 7,
    AHB1ENR_CRCEN = 12,
    AHB1ENR_DMA1EN = 21,
    AHB1ENR_DMA2EN = 22,
  };
  unsigned int AHB2ENR;
  enum {
    AHB2ENR_OTGFSEN = 7,
  };
  unsigned int RESERVED5;
  unsigned int RESERVED6;
  unsigned int APB1ENR;
  enum {
    APB1ENR_TIM2EN = 0,
    APB1ENR_TIM5EN = 3,
    APB1ENR_PWREN = 28,
  };
  unsigned int APB2ENR;
  enum {
    APB2ENR_TIM1EN = 0,
    APB2ENR_USART1EN = 4,
    APB2ENR_USART6EN = 5,
    APB2ENR_ADC1EN = 8,
    APB2ENR_SDIOEN = 11,
    APB2ENR_SPI1EN = 12,
    APB2ENR_SPI4EN = 13,
    APB2ENR_SYSCFGEN = 14,
    APB2ENR_TIM9EN = 16,
    APB2ENR_TIM10EN = 17,
    APB2ENR_TIM11EN = 18,
  };
  unsigned int RESERVED7;
  unsigned int RESERVED8;
  unsigned int AHB1LPENR;
  unsigned int AHB2LPENR;
  unsigned int RESERVED9;
  unsigned int RESERVED10;
  unsigned int APB1LPENR;
  unsigned int APB2LPENR;
  unsigned int RESERVED11;
  unsigned int RESERVED12;
  unsigned int BDCR;
  enum {
    BDCR_LSEON = 0,
    BDCR_LSERDY = 1,
    BDCR_RTCSEL = 8,
    BDCR_RTCEN = 15,
    BDCR_BDRST = 16,
  };
};
extern volatile rcc_t RCC;

static_assert(__builtin_offsetof(decltype(RCC), AHB1ENR) == 0x30);
static_assert(__builtin_offsetof(decltype(RCC), APB1ENR) == 0x40);
