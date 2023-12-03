
/*
 * gpiod.h
 *
 * Defines the GPIOD register addresses
 */

#ifndef GPIOD_H
#define GPIOD_H

#include "gpiox.h"

/* GPIOD peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOD_BASE_ADDR     0x40020C00U

/* GPIOD register addresses */
#define GPIOD_MODER     (GPIOD_BASE_ADDR + GPIOx_MODER_OFFSET)      // GPIOD port mode register
#define GPIOD_OTYPER    (GPIOD_BASE_ADDR + GPIOx_OTYPER_OFFSET)     // GPIOD port output type register
#define GPIOD_OSPEEDR   (GPIOD_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)    // GPIOD port output speed register
#define GPIOD_PUPDR     (GPIOD_BASE_ADDR + GPIOx_PUPDR_OFFSET)      // GPIOD port pull-up/pull-down register
#define GPIOD_IDR       (GPIOD_BASE_ADDR + GPIOx_IDR_OFFSET)        // GPIOD port input data register
#define GPIOD_ODR       (GPIOD_BASE_ADDR + GPIOx_ODR_OFFSET)        // GPIOD port output data register
#define GPIOD_BSRR      (GPIOD_BASE_ADDR + GPIOx_BSRR_OFFSET)       // GPIOD port bit set/reset register
#define GPIOD_LCKR      (GPIOD_BASE_ADDR + GPIOx_LCKR_OFFSET)       // GPIOD port configuration lock register
#define GPIOD_AFRL      (GPIOD_BASE_ADDR + GPIOx_AFRL_OFFSET)       // GPIOD alternate function low register
#define GPIOD_AFRH      (GPIOD_BASE_ADDR + GPIOx_AFRH_OFFSET)       // GPIOD alternate function high register

#endif // GPIOD_H
