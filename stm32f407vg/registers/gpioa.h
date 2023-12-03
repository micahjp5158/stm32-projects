
/*
 * gpioa.h
 *
 * Defines the GPIOA register addresses
 */

#ifndef GPIOA_H
#define GPIOA_H

#include "gpiox.h"

/* GPIOA peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOA_BASE_ADDR     0x40020000U

/* GPIOA register addresses */
#define GPIOA_MODER     (GPIOA_BASE_ADDR + GPIOx_MODER_OFFSET)      // GPIOA port mode register
#define GPIOA_OTYPER    (GPIOA_BASE_ADDR + GPIOx_OTYPER_OFFSET)     // GPIOA port output type register
#define GPIOA_OSPEEDR   (GPIOA_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)    // GPIOA port output speed register
#define GPIOA_PUPDR     (GPIOA_BASE_ADDR + GPIOx_PUPDR_OFFSET)      // GPIOA port pull-up/pull-down register
#define GPIOA_IDR       (GPIOA_BASE_ADDR + GPIOx_IDR_OFFSET)        // GPIOA port input data register
#define GPIOA_ODR       (GPIOA_BASE_ADDR + GPIOx_ODR_OFFSET)        // GPIOA port output data register
#define GPIOA_BSRR      (GPIOA_BASE_ADDR + GPIOx_BSRR_OFFSET)       // GPIOA port bit set/reset register
#define GPIOA_LCKR      (GPIOA_BASE_ADDR + GPIOx_LCKR_OFFSET)       // GPIOA port configuration lock register
#define GPIOA_AFRL      (GPIOA_BASE_ADDR + GPIOx_AFRL_OFFSET)       // GPIO alternate function low register
#define GPIOA_AFRH      (GPIOA_BASE_ADDR + GPIOx_AFRH_OFFSET)       // GPIO alternate function high register

#endif // GPIOA_H
