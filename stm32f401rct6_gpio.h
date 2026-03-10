#pragma once

static_assert(sizeof(unsigned int) == 4);

struct gpio_t {
  unsigned int MODER;
  enum {
    MODER0 = 0,
    MODER1 = 2,
    MODER2 = 4,
    MODER3 = 6,
    MODER4 = 8,
    MODER5 = 10,
    MODER6 = 12,
    MODER7 = 14,
    MODER8 = 16,
    MODER9 = 18,
    MODER10 = 20,
    MODER11 = 22,
    MODER12 = 24,
    MODER13 = 26,
    MODER14 = 28,
    MODER15 = 30,
  };
  unsigned int OTYPER;
  unsigned int OSPEEDR;
  unsigned int PUPDR;
  unsigned int IDR;
  unsigned int ODR;
  unsigned int BSRR;
  enum {
    BSRR_BS0 = 0,
    BSRR_BS1 = 1,
    BSRR_BS2 = 2,
    BSRR_BS3 = 3,
    BSRR_BS4 = 4,
    BSRR_BS5 = 5,
    BSRR_BS6 = 6,
    BSRR_BS7 = 7,
    BSRR_BS8 = 8,
    BSRR_BS9 = 9,
    BSRR_BS10 = 10,
    BSRR_BS11 = 11,
    BSRR_BS12 = 12,
    BSRR_BS13 = 13,
    BSRR_BS14 = 14,
    BSRR_BS15 = 15,
    BSRR_BR0 = 16,
    BSRR_BR1 = 17,
    BSRR_BR2 = 18,
    BSRR_BR3 = 19,
    BSRR_BR4 = 20,
    BSRR_BR5 = 21,
    BSRR_BR6 = 22,
    BSRR_BR7 = 23,
    BSRR_BR8 = 24,
    BSRR_BR9 = 25,
    BSRR_BR10 = 26,
    BSRR_BR11 = 27,
    BSRR_BR12 = 28,
    BSRR_BR13 = 29,
    BSRR_BR14 = 30,
    BSRR_BR15 = 31,
  };
  unsigned int LCKR;
  unsigned int AFRL;
  unsigned int AFRH;
};

extern volatile gpio_t GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOH;

#if __has_include(<cstddef>)
#include <cstddef>
static_assert(offsetof(gpio_t, MODER) == 0x00);
static_assert(offsetof(gpio_t, OTYPER) == 0x04);
static_assert(offsetof(gpio_t, OSPEEDR) == 0x08);
static_assert(offsetof(gpio_t, PUPDR) == 0x0C);
static_assert(offsetof(gpio_t, IDR) == 0x10);
static_assert(offsetof(gpio_t, ODR) == 0x14);
static_assert(offsetof(gpio_t, BSRR) == 0x18);
static_assert(offsetof(gpio_t, LCKR) == 0x1C);
static_assert(offsetof(gpio_t, AFRL) == 0x20);
static_assert(offsetof(gpio_t, AFRH) == 0x24);
#endif
