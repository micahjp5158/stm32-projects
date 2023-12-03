
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
#define GPIOC_MODER     (GPIOC_BASE_ADDR + GPIOx_MODER_OFFSET)      // GPIOC port mode register
#define GPIOC_OTYPER    (GPIOC_BASE_ADDR + GPIOx_OTYPER_OFFSET)     // GPIOC port output type register
#define GPIOC_OSPEEDR   (GPIOC_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)    // GPIOC port output speed register
#define GPIOC_PUPDR     (GPIOC_BASE_ADDR + GPIOx_PUPDR_OFFSET)      // GPIOC port pull-up/pull-down register
#define GPIOC_IDR       (GPIOC_BASE_ADDR + GPIOx_IDR_OFFSET)        // GPIOC port input data register
#define GPIOC_ODR       (GPIOC_BASE_ADDR + GPIOx_ODR_OFFSET)        // GPIOC port output data register
#define GPIOC_BSRR      (GPIOC_BASE_ADDR + GPIOx_BSRR_OFFSET)       // GPIOC port bit set/reset register
#define GPIOC_LCKR      (GPIOC_BASE_ADDR + GPIOx_LCKR_OFFSET)       // GPIOC port configuration lock register
#define GPIOC_AFRL      (GPIOC_BASE_ADDR + GPIOx_AFRL_OFFSET)       // GPIOC alternate function low register
#define GPIOC_AFRH      (GPIOC_BASE_ADDR + GPIOx_AFRH_OFFSET)       // GPIOC alternate function high register

#endif // GPIOC_H
