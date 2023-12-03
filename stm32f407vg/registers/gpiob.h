
/*
 * gpiob.h
 *
 * Defines the GPIOB register addresses
 */

#ifndef GPIOB_H
#define GPIOB_H

#include "gpiox.h"

/* GPIOB peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOB_BASE_ADDR     0x40020400U

/* GPIOB register addresses */
#define GPIOB_MODER     (GPIOB_BASE_ADDR + GPIOx_MODER_OFFSET)      // GPIOB port mode register
#define GPIOB_OTYPER    (GPIOB_BASE_ADDR + GPIOx_OTYPER_OFFSET)     // GPIOB port output type register
#define GPIOB_OSPEEDR   (GPIOB_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)    // GPIOB port output speed register
#define GPIOB_PUPDR     (GPIOB_BASE_ADDR + GPIOx_PUPDR_OFFSET)      // GPIOB port pull-up/pull-down register
#define GPIOB_IDR       (GPIOB_BASE_ADDR + GPIOx_IDR_OFFSET)        // GPIOB port input data register
#define GPIOB_ODR       (GPIOB_BASE_ADDR + GPIOx_ODR_OFFSET)        // GPIOB port output data register
#define GPIOB_BSRR      (GPIOB_BASE_ADDR + GPIOx_BSRR_OFFSET)       // GPIOB port bit set/reset register
#define GPIOB_LCKR      (GPIOB_BASE_ADDR + GPIOx_LCKR_OFFSET)       // GPIOB port configuration lock register
#define GPIOB_AFRL      (GPIOB_BASE_ADDR + GPIOx_AFRL_OFFSET)       // GPIOB alternate function low register
#define GPIOB_AFRH      (GPIOB_BASE_ADDR + GPIOx_AFRH_OFFSET)       // GPIOB alternate function high register

#endif // GPIOB_H
