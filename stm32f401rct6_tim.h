#pragma once

static_assert(sizeof(unsigned int) == 4);

typedef struct {
  unsigned int CR1;
  enum {
    CR1_CEN = 0,
    CR1_UDIS = 1,
    CR1_URS = 2,
    CR1_OPM = 3,
    CR1_DIR = 4,
    CR1_CMS = 5,
    CR1_ARPE = 7,
    CR1_CKD = 8,
  };
  unsigned int CR2;
  unsigned int SMCR;
  unsigned int DIER;
  unsigned int SR;
  enum {
    SR_UIF = 0,
    SR_CC1IF = 1,
    SR_CC2IF = 2,
    SR_CC3IF = 3,
    SR_CC4IF = 4,
    SR_TIF = 6,
    SR_CC1OF = 9,
    SR_CC2OF = 10,
    SR_CC3OF = 11,
    SR_CC4OF = 12,
  };
  unsigned int EGR;
  unsigned int CCMR1;
  unsigned int CCMR2;
  unsigned int CCER;
  unsigned int CNT;
  unsigned int PSC;
  unsigned int ARR;
} tim2_t, tim3_t, tim4_t, tim5_t;

extern volatile tim2 TIM2;
extern volatile tim3 TIM3;
extern volatile tim4 TIM4;
extern volatile tim5 TIM5;

#if __has_include(<cstddef>)
#include <cstddef>
static_assert(offsetof(decltype(tim2_t), CR1) == 0x00);
static_assert(offsetof(decltype(tim2_t), CR2) == 0x04);
static_assert(offsetof(decltype(tim2_t), SMCR) == 0x08);
static_assert(offsetof(decltype(tim2_t), DIER) == 0x0C);
static_assert(offsetof(decltype(tim2_t), SR) == 0x10);
static_assert(offsetof(decltype(tim2_t), EGR) == 0x14);
static_assert(offsetof(decltype(tim2_t), CCMR1) == 0x18);
static_assert(offsetof(decltype(tim2_t), CCMR2) == 0x1C);
static_assert(offsetof(decltype(tim2_t), CCER) == 0x20);
static_assert(offsetof(decltype(tim2_t), CNT) == 0x24);
static_assert(offsetof(decltype(tim2_t), PSC) == 0x28);
static_assert(offsetof(decltype(tim2_t), ARR) == 0x2C);
#endif
