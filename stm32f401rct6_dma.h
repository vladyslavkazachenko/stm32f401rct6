#pragma once

static_assert(sizeof(unsigned int) == 4);

struct dma_t {
  unsigned int LISR;
  enum {
    LISR_FEIF0 = 0,
    LISR_DMEIF0 = 2,
    LISR_TEIF0,
    LISR_HTIF0,
    LISR_TCIF0,
    LISR_FEIF1 = 6,
    LISR_DMEIF1 = 8,
    LISR_TEIF1,
    LISR_HTIF1,
    LISR_TCIF1,
    LISR_FEIF2 = 16,
    LISR_DMEIF2 = 18,
    LISR_TEIF2,
    LISR_HTIF2,
    LISR_TCIF2,
    LISR_FEIF3 = 22,
    LISR_DMEIF3 = 24,
    LISR_TEIF3,
    LISR_HTIF3,
    LISR_TCIF3,
  };
  unsigned int HISR;
  enum {
    HISR_FEIF4 = 0,
    HISR_DMEIF4 = 2,
    HISR_TEIF4,
    HISR_HTIF4,
    HISR_TCIF4,
    HISR_FEIF5 = 6,
    HISR_DMEIF5 = 8,
    HISR_TEIF5,
    HISR_HTIF5,
    HISR_TCIF5,
    HISR_FEIF6 = 16,
    HISR_DMEIF6 = 18,
    HISR_TEIF6,
    HISR_HTIF6,
    HISR_TCIF6,
    HISR_FEIF7 = 22,
    HISR_DMEIF7 = 24,
    HISR_TEIF7,
    HISR_HTIF7,
    HISR_TCIF7,
  };
  unsigned int LIFCR;
  enum {
    LIFCR_CFEIF0 = 0,
    LIFCR_CDMEIF0 = 2,
    LIFCR_CTEIF0,
    LIFCR_CHTIF0,
    LIFCR_CTCIF0,
    LIFCR_CFEIF1 = 6,
    LIFCR_CDMEIF1 = 8,
    LIFCR_CTEIF1,
    LIFCR_CHTIF1,
    LIFCR_CTCIF1,
    LIFCR_CFEIF2 = 16,
    LIFCR_CDMEIF2 = 18,
    LIFCR_CTEIF2,
    LIFCR_CHTIF2,
    LIFCR_CTCIF2,
    LIFCR_CFEIF3 = 22,
    LIFCR_CDMEIF3 = 24,
    LIFCR_CTEIF3,
    LIFCR_CHTIF3,
    LIFCR_CTCIF3,
  };
  unsigned int HIFCR;
  enum {
    HIFCR_CFEIF4 = 0,
    HIFCR_CDMEIF4 = 2,
    HIFCR_CTEIF4,
    HIFCR_CHTIF4,
    HIFCR_CTCIF4,
    HIFCR_CFEIF5 = 6,
    HIFCR_CDMEIF5 = 8,
    HIFCR_CTEIF5,
    HIFCR_CHTIF5,
    HIFCR_CTCIF5,
    HIFCR_CFEIF6 = 16,
    HIFCR_CDMEIF6 = 18,
    HIFCR_CTEIF6,
    HIFCR_CHTIF6,
    HIFCR_CTCIF6,
    HIFCR_CFEIF7 = 22,
    HIFCR_CDMEIF7 = 24,
    HIFCR_CTEIF7,
    HIFCR_CHTIF7,
    HIFCR_CTCIF7,
  };
  unsigned int S0CR;
  enum {
    S0CR_EN,
    S1CR_EN = S0CR_EN,
  };
  unsigned int S0NDTR;
  unsigned int S0PAR;
  unsigned int S0M0AR;
  unsigned int S0M1AR;
  unsigned int S0FCR;
  unsigned int S1CR;
  unsigned int S1NDTR;
  unsigned int S1PAR;
  unsigned int S1M0AR;
  unsigned int S1M1AR;
  unsigned int S1FCR;
};

extern volatile dma_t DMA1, DMA2;

#if __has_include(<stddef.h>)
#include <stddef.h>
static_assert(offsetof(dma_t, LISR) == 0x00);
static_assert(offsetof(dma_t, S0CR) == 0x10);
static_assert(offsetof(dma_t, S1CR) == 0x28);
#endif
