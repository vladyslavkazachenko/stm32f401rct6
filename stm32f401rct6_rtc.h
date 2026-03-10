#pragma once

struct rtc_t {
  unsigned int TR;
  unsigned int DR;
  unsigned int CR;
  enum {
    CR_WUCKSEL = 0,
    CR_WUTE = 10,
  };
  unsigned int ISR;
  enum {
    ISR_WUTWF = 2,
    ISR_INITF = 6,
    ISR_INIT = 7,
    ISR_WUTF = 10,
  };
  unsigned int PRER;
  enum {
    PREP_PREDIVS = 0,
    PREP_PREDIVA = 16,
  };
  unsigned int WUTR;
  unsigned int CALIBR;
  unsigned int ALRMAR;
  unsigned int ALRMBR;
  unsigned int WPR;
  unsigned int SSR;
  unsigned int SHIFTR;
  unsigned int TSTR;
  unsigned int TSDR;
  unsigned int TSSSR;
  unsigned int CALR;
  unsigned int TAFCR;
  unsigned int ALRMASSR;
  unsigned int ALRMBSSR;
};

extern volatile rtc_t RTC;
