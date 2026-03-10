#pragma once

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

extern volatile gpio_t GPIOA;

static_assert(__builtin_offsetof(decltype(GPIOA), MODER) == 0x00);
static_assert(__builtin_offsetof(decltype(GPIOA), OTYPER) == 0x04);
static_assert(__builtin_offsetof(decltype(GPIOA), OSPEEDR) == 0x08);
static_assert(__builtin_offsetof(decltype(GPIOA), PUPDR) == 0x0C);
static_assert(__builtin_offsetof(decltype(GPIOA), IDR) == 0x10);
static_assert(__builtin_offsetof(decltype(GPIOA), ODR) == 0x14);
static_assert(__builtin_offsetof(decltype(GPIOA), BSRR) == 0x18);
static_assert(__builtin_offsetof(decltype(GPIOA), LCKR) == 0x1C);
static_assert(__builtin_offsetof(decltype(GPIOA), AFRL) == 0x20);
static_assert(__builtin_offsetof(decltype(GPIOA), AFRH) == 0x24);
