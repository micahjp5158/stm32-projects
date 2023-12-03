
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
#define GPIOI_MODER     (GPIOI_BASE_ADDR + GPIOx_MODER_OFFSET)      // GPIOI port mode register
#define GPIOI_OTYPER    (GPIOI_BASE_ADDR + GPIOx_OTYPER_OFFSET)     // GPIOI port output type register
#define GPIOI_OSPEEDR   (GPIOI_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)    // GPIOI port output speed register
#define GPIOI_PUPDR     (GPIOI_BASE_ADDR + GPIOx_PUPDR_OFFSET)      // GPIOI port pull-up/pull-down register
#define GPIOI_IDR       (GPIOI_BASE_ADDR + GPIOx_IDR_OFFSET)        // GPIOI port input data register
#define GPIOI_ODR       (GPIOI_BASE_ADDR + GPIOx_ODR_OFFSET)        // GPIOI port output data register
#define GPIOI_BSRR      (GPIOI_BASE_ADDR + GPIOx_BSRR_OFFSET)       // GPIOI port bit set/reset register
#define GPIOI_LCKR      (GPIOI_BASE_ADDR + GPIOx_LCKR_OFFSET)       // GPIOI port configuration lock register
#define GPIOI_AFRL      (GPIOI_BASE_ADDR + GPIOx_AFRL_OFFSET)       // GPIOI alternate function low register
#define GPIOI_AFRH      (GPIOI_BASE_ADDR + GPIOx_AFRH_OFFSET)       // GPIOI alternate function high register

#endif // GPIOI_H
