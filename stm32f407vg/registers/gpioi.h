
/*
 * gpioi.h
 *
 * Defines the GPIOI register addresses
 */

#ifndef GPIOI_H
#define GPIOI_H

#include "gpiox.h"

/* GPIOI peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOI_BASE_ADDR     0x40022000U

/* GPIOI register addresses */
#define GPIOI_MODER     (GPIOI_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOI_OTYPER    (GPIOI_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOI_OSPEEDR   (GPIOI_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOI_PUPDR     (GPIOI_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOI_IDR       (GPIOI_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOI_ODR       (GPIOI_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOI_BSRR      (GPIOI_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOI_LCKR      (GPIOI_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOI_AFRL      (GPIOI_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOI_AFRH      (GPIOI_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOI_H
