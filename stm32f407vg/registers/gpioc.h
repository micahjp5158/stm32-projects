
/*
 * gpioc.h
 *
 * Defines the GPIOC register addresses
 */

#ifndef GPIOC_H
#define GPIOC_H

#include "gpiox.h"

/* GPIOC peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOC_BASE_ADDR     0x40020800U

/* GPIOC register addresses */
#define GPIOC_MODER     (GPIOC_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOC_OTYPER    (GPIOC_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOC_OSPEEDR   (GPIOC_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOC_PUPDR     (GPIOC_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOC_IDR       (GPIOC_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOC_ODR       (GPIOC_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOC_BSRR      (GPIOC_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOC_LCKR      (GPIOC_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOC_AFRL      (GPIOC_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOC_AFRH      (GPIOC_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOC_H
