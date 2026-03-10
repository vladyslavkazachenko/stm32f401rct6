#pragma once

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
