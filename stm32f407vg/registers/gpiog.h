
/*
 * gpiog.h
 *
 * Defines the GPIOG register addresses
 */

#ifndef GPIOG_H
#define GPIOG_H

#include "gpiox.h"

/* GPIOG peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOG_BASE_ADDR     0x40021800U

/* GPIOG register addresses */
#define GPIOG_MODER     (GPIOG_BASE_ADDR + GPIOx_MODER_OFFSET)      // GPIOG port mode register
#define GPIOG_OTYPER    (GPIOG_BASE_ADDR + GPIOx_OTYPER_OFFSET)     // GPIOG port output type register
#define GPIOG_OSPEEDR   (GPIOG_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)    // GPIOG port output speed register
#define GPIOG_PUPDR     (GPIOG_BASE_ADDR + GPIOx_PUPDR_OFFSET)      // GPIOG port pull-up/pull-down register
#define GPIOG_IDR       (GPIOG_BASE_ADDR + GPIOx_IDR_OFFSET)        // GPIOG port input data register
#define GPIOG_ODR       (GPIOG_BASE_ADDR + GPIOx_ODR_OFFSET)        // GPIOG port output data register
#define GPIOG_BSRR      (GPIOG_BASE_ADDR + GPIOx_BSRR_OFFSET)       // GPIOG port bit set/reset register
#define GPIOG_LCKR      (GPIOG_BASE_ADDR + GPIOx_LCKR_OFFSET)       // GPIOG port configuration lock register
#define GPIOG_AFRL      (GPIOG_BASE_ADDR + GPIOx_AFRL_OFFSET)       // GPIOG alternate function low register
#define GPIOG_AFRH      (GPIOG_BASE_ADDR + GPIOx_AFRH_OFFSET)       // GPIOG alternate function high register

#endif // GPIOG_H
