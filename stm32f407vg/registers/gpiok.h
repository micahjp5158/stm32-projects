
/*
 * gpiok.h
 *
 * Defines the GPIOK register addresses
 */

#ifndef GPIOK_H
#define GPIOK_H

#include "gpiox.h"

/* GPIOK peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOK_BASE_ADDR     0x40022800U

/* GPIOK register addresses */
#define GPIOK_MODER     (GPIOK_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOK_OTYPER    (GPIOK_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOK_OSPEEDR   (GPIOK_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOK_PUPDR     (GPIOK_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOK_IDR       (GPIOK_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOK_ODR       (GPIOK_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOK_BSRR      (GPIOK_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOK_LCKR      (GPIOK_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOK_AFRL      (GPIOK_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOK_AFRH      (GPIOK_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOK_H
