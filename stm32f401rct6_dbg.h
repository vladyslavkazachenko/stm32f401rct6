#pragma once

static_assert(sizeof(unsigned int) == 4);

struct dbgmcu_t {
  unsigned int CR;
  enum {
   CR_DBGSLEEP,
   CR_DBGSTOP,
   CR_DBGSTANDBY,
  };
};

extern volatile dbgmcu_t DBGMCU;

#if __has_include(<cstddef>)
#include <cstddef>
static_assert(offsetof(dbgmcu_t, CR) == 0x00);
#endif
