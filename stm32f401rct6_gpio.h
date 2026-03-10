#pragma once

static_assert(sizeof(unsigned int) == 4);

struct gpio_t {
  unsigned int MODER;
  enum {
    MODER0 = 0,
    MODER1 = 2,
    MODER2 = 4,
    MODER9 = 18,
  };
  unsigned int OTYPER;
  unsigned int OSPEEDR;
  unsigned int PUPDR;
  unsigned int IDR;
  unsigned int ODR;
  unsigned int BSRR;
  enum {
    BS0 = 0,
    BS1 = 1,
    BR0 = 16,
    BR1 = 17,
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
