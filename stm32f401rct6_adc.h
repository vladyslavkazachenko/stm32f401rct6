#pragma once

static_assert(sizeof(unsigned int) == 4);

struct adc_t {
  unsigned int SR;
  enum {
    SR_AWD,
    SR_EOC,
    SR_JEOC,
    SR_JSTRT,
    SR_STRT,
    SR_OVR,
  };
  unsigned int CR1;
  enum {
    CR1_AWDCH = 0,
    CR1_EOCIE = 5,
    CR1_AWDGIE = 6,
    CR1_JEOCIE = 7,
    CR1_SCAN = 8,
    CR1_AWDSGL = 9,
    CR1_JAUTO = 10,
    CR1_DISCEN = 11,
    CR1_JDISCEN = 12,
    CR1_DISCNUM = 13,
    CR1_JAWDEN = 22,
    CR1_AWDEN = 23,
    CR1_RES = 24,
    CR1_OVRIE = 26,
  };
  unsigned int CR2;
  enum {
    CR2_ADON = 0,
    CR2_CONT = 1,
    CR2_DMA = 8,
    CR2_DDS = 9,
    CR2_EOCS = 10,
    CR2_ALIGN = 11,
    CR2_JEXTSEL = 16,
    CR2_JEXTEN = 20,
    CR2_JSWSTART = 22,
    CR2_EXTSEL = 24,
    CR2_EXTEN = 28,
    CR2_SWSTART = 30,
  };
  volatile unsigned int SMPR1;
  enum {
    SMPR1_SMP10 = 0,
    SMPR1_SMP11 = 3,
    SMPR1_SMP12 = 6,
    SMPR1_SMP13 = 9,
    SMPR1_SMP14 = 12,
    SMPR1_SMP15 = 15,
    SMPR1_SMP16 = 18,
    SMPR1_SMP17 = 21,
    SMPR1_SMP18 = 24,
  };
  volatile unsigned int SMPR2;
  enum {
    SMPR2_SMP0 = 0,
    SMPR2_SMP1 = 3,
    SMPR2_SMP2 = 6,
    SMPR2_SMP3 = 9,
    SMPR2_SMP4 = 12,
    SMPR2_SMP5 = 15,
    SMPR2_SMP6 = 18,
    SMPR2_SMP7 = 21,
    SMPR2_SMP8 = 24,
    SMPR2_SMP9 = 27,
  };
  volatile unsigned int JOFR1;
  volatile unsigned int JOFR2;
  volatile unsigned int JOFR3;
  volatile unsigned int JOFR4;
  volatile unsigned int HTR;
  volatile unsigned int LTR;
  volatile unsigned int SQR1;
  enum {
    SQR1_SQ13 = 0,
    SQR1_SQ14 = 5,
    SQR1_SQ15 = 10,
    SQR1_SQ16 = 15,
    SQR1_L = 20,
  };
  volatile unsigned int SQR2;
  enum {
    SQR2_SQ7 = 0,
    SQR2_SQ8 = 5,
    SQR2_SQ9 = 10,
    SQR2_SQ10 = 15,
    SQR2_SQ11 = 20,
    SQR2_SQ12 = 25,
  };
  volatile unsigned int SQR3;
  enum {
    SQR3_SQ1 = 0,
    SQR3_SQ2 = 5,
    SQR3_SQ3 = 10,
    SQR3_SQ4 = 15,
    SQR3_SQ5 = 20,
    SQR3_SQ6 = 25,
  };
  unsigned int JSQR;
  enum {
    JSQR_JSQ1 = 0,
    JSQR_JSQ2 = 5,
    JSQR_JSQ3 = 10,
    JSQR_JSQ4 = 15,
    JSQR_JL = 20,
  };
  unsigned int JDR1;
  unsigned int JDR2;
  unsigned int JDR3;
  unsigned int JDR4;
  unsigned int DR;
  unsigned int CCR;
  enum {
    CCR_MULTI = 0,
    CCR_DELAY = 8,
    CCR_DDS = 13,
    CCR_DMA = 14,
    CCR_ADCPRE = 16,
    CCR_VBATE = 22,
    CCR_TSVREFE = 23,
  };
};

extern volatile adc_t ADC1;

#if __has_include(<cstddef>)
#include <cstddef>
static_assert(offsetof(adc_t, SR) == 0x00);
static_assert(offsetof(adc_t, CR1) == 0x04);
static_assert(offsetof(adc_t, CR2) == 0x08);
static_assert(offsetof(adc_t, SMPR1) == 0x0C);
static_assert(offsetof(adc_t, SMPR2) == 0x10);
static_assert(offsetof(adc_t, JOFR1) == 0x14);
static_assert(offsetof(adc_t, JOFR2) == 0x18);
static_assert(offsetof(adc_t, JOFR3) == 0x1C);
static_assert(offsetof(adc_t, JOFR4) == 0x20);
static_assert(offsetof(adc_t, HTR) == 0x24);
static_assert(offsetof(adc_t, LTR) == 0x28);
static_assert(offsetof(adc_t, SQR1) == 0x2C);
static_assert(offsetof(adc_t, SQR2) == 0x30);
static_assert(offsetof(adc_t, SQR3) == 0x34);
static_assert(offsetof(adc_t, JSQR) == 0x38);
static_assert(offsetof(adc_t, DR) == 0x4C);
#endif
