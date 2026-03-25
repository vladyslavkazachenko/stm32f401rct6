#pragma once

static_assert(sizeof(unsigned int) == 4);

struct dma_t {
  unsigned int LISR;
  unsigned int HISR;
  unsigned int LIFCR;
  unsigned int HIFCR;
  unsigned int S0CR;
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
