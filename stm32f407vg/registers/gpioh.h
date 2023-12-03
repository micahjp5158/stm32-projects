
/*
 * gpioh.h
 *
 * Defines the GPIOH register addresses
 */

#ifndef GPIOH_H
#define GPIOH_H

#include "gpiox.h"

/* GPIOH peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOH_BASE_ADDR     0x40021C00U

/* GPIOH register addresses */
#define GPIOH_MODER     (GPIOH_BASE_ADDR + GPIOx_MODER_OFFSET)      // GPIOH port mode register
#define GPIOH_OTYPER    (GPIOH_BASE_ADDR + GPIOx_OTYPER_OFFSET)     // GPIOH port output type register
#define GPIOH_OSPEEDR   (GPIOH_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)    // GPIOH port output speed register
#define GPIOH_PUPDR     (GPIOH_BASE_ADDR + GPIOx_PUPDR_OFFSET)      // GPIOH port pull-up/pull-down register
#define GPIOH_IDR       (GPIOH_BASE_ADDR + GPIOx_IDR_OFFSET)        // GPIOH port input data register
#define GPIOH_ODR       (GPIOH_BASE_ADDR + GPIOx_ODR_OFFSET)        // GPIOH port output data register
#define GPIOH_BSRR      (GPIOH_BASE_ADDR + GPIOx_BSRR_OFFSET)       // GPIOH port bit set/reset register
#define GPIOH_LCKR      (GPIOH_BASE_ADDR + GPIOx_LCKR_OFFSET)       // GPIOH port configuration lock register
#define GPIOH_AFRL      (GPIOH_BASE_ADDR + GPIOx_AFRL_OFFSET)       // GPIOH alternate function low register
#define GPIOH_AFRH      (GPIOH_BASE_ADDR + GPIOx_AFRH_OFFSET)       // GPIOH alternate function high register

#endif // GPIOH_H
