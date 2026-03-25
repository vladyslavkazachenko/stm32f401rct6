#pragma once

static_assert(sizeof(unsigned int) == 4);

struct flash_t {
  unsigned int ACR;
  enum {
    ACR_LATENCY = 0,
    ACR_PRFTEN = 8,
    ACR_ICEN = 9,
    ACR_DCEN = 10,
    ACR_ICRST = 11,
    ACR_DCRST = 12,
  };
};

extern volatile flash_t FLASH;

#if __has_include(<stddef.h>)
#include <stddef.h>
static_assert(offsetof(flash_t, ACR) == 0);
#endif
