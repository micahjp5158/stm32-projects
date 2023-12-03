
/*
 * gpiof.h
 *
 * Defines the GPIOF register addresses
 */

#ifndef GPIOF_H
#define GPIOF_H

#include "gpiox.h"

/* GPIOF peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOF_BASE_ADDR     0x40021400U

/* GPIOF register addresses */
#define GPIOF_MODER     (GPIOF_BASE_ADDR + GPIOx_MODER_OFFSET)      // GPIOF port mode register
#define GPIOF_OTYPER    (GPIOF_BASE_ADDR + GPIOx_OTYPER_OFFSET)     // GPIOF port output type register
#define GPIOF_OSPEEDR   (GPIOF_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)    // GPIOF port output speed register
#define GPIOF_PUPDR     (GPIOF_BASE_ADDR + GPIOx_PUPDR_OFFSET)      // GPIOF port pull-up/pull-down register
#define GPIOF_IDR       (GPIOF_BASE_ADDR + GPIOx_IDR_OFFSET)        // GPIOF port input data register
#define GPIOF_ODR       (GPIOF_BASE_ADDR + GPIOx_ODR_OFFSET)        // GPIOF port output data register
#define GPIOF_BSRR      (GPIOF_BASE_ADDR + GPIOx_BSRR_OFFSET)       // GPIOF port bit set/reset register
#define GPIOF_LCKR      (GPIOF_BASE_ADDR + GPIOx_LCKR_OFFSET)       // GPIOF port configuration lock register
#define GPIOF_AFRL      (GPIOF_BASE_ADDR + GPIOx_AFRL_OFFSET)       // GPIOF alternate function low register
#define GPIOF_AFRH      (GPIOF_BASE_ADDR + GPIOx_AFRH_OFFSET)       // GPIOF alternate function high register

#endif // GPIOF_H
