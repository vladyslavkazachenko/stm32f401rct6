#pragma once

static_assert(sizeof(unsigned int) == 4);

struct pwr_t {
  unsigned int CR;
  enum {
    CR_LPDS,
    CR_PDDS,
    CR_CWUF,
    CR_CSBF,
    CR_PVDE,
    CR_PLS,
    CR_DBP = 8,
  };
  unsigned int CSR;
};

extern volatile pwr_t PWR;

#if __has_include(<cstddef>)
#include <cstddef>
static_assert(offsetof(pwr_t, CR) == 0x00);
static_assert(offsetof(pwr_t, CSR) == 0x04);
#endif
