#pragma once

struct tim2_5 {
  unsigned int CR1;
  enum {
    CR1_CEN,
    CR1_OPM = 3,
  };
  unsigned int CR2;
  unsigned int SMCR;
  unsigned int DIER;
  unsigned int SR;
  enum {
    SR_UIF = 0,
  };
  unsigned int EGR;
  unsigned int CCMR1;
  unsigned int CCMR2;
  unsigned int CCER;
  unsigned int CNT;
  unsigned int PSC;
  unsigned int ARR;
};

extern volatile tim2_5 TIM2;

static_assert(__builtin_offsetof(decltype(TIM2), SR) == 0x10);
static_assert(__builtin_offsetof(decltype(TIM2), ARR) == 0x2C);
