#pragma once

static_assert(sizeof(unsigned int) == 4);

struct exti_t {
  unsigned int IMR;
  unsigned int EMR;
  enum {
    EMR_R0,
    EMR_R1,
    EMR_R2,
    EMR_R3,
    EMR_R4,
    EMR_R5,
    EMR_R6,
    EMR_R7,
    EMR_R8,
    EMR_R9,
    EMR_R10,
    EMR_R11,
    EMR_R12,
    EMR_R13,
    EMR_R14,
    EMR_R15,
    EMR_R16,
    EMR_R17,
    EMR_R18,
    EMR_R21 = 21,
    EMR_R22 = 22,
  };
  unsigned int RTSR;
  enum {
    RTSR_TR0,
    RTSR_TR1,
    RTSR_TR2,
    RTSR_TR3,
    RTSR_TR4,
    RTSR_TR5,
    RTSR_TR6,
    RTSR_TR7,
    RTSR_TR8,
    RTSR_TR9,
    RTSR_TR10,
    RTSR_TR11,
    RTSR_TR12,
    RTSR_TR13,
    RTSR_TR14,
    RTSR_TR15,
    RTSR_TR16,
    RTSR_TR17,
    RTSR_TR18,
    RTSR_TR21 = 21,
    RTSR_TR22 = 22,
  };
  unsigned int FTSR;
  unsigned int SWIER;
  unsigned int PR;
  enum {
    PR_PR0,
    PR_PR1,
    PR_PR2,
    PR_PR3,
    PR_PR4,
    PR_PR5,
    PR_PR6,
    PR_PR7,
    PR_PR8,
    PR_PR9,
    PR_PR10,
    PR_PR11,
    PR_PR12,
    PR_PR13,
    PR_PR14,
    PR_PR15,
    PR_PR16,
    PR_PR17,
    PR_PR18,
    PR_PR21 = 21,
    PR_PR22 = 22,
  };
};

volatile extern exti_t EXTI;

#if __has_include(<cstddef>)
#include <cstddef>
static_assert(offsetof(exti_t, IMR) == 0x00);
static_assert(offsetof(exti_t, EMR) == 0x04);
static_assert(offsetof(exti_t, RTSR) == 0x08);
static_assert(offsetof(exti_t, FTSR) == 0x0C);
static_assert(offsetof(exti_t, SWIER) == 0x10);
static_assert(offsetof(exti_t, PR) == 0x14);
#endif
