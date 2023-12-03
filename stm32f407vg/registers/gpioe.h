
/*
 * gpioe.h
 *
 * Defines the GPIOE register addresses
 */

#ifndef GPIOE_H
#define GPIOE_H

#include "gpiox.h"

/* GPIOE peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOE_BASE_ADDR     0x40021000U

/* GPIOE register addresses */
#define GPIOE_MODER     (GPIOE_BASE_ADDR + GPIOx_MODER_OFFSET)      // GPIOE port mode register
#define GPIOE_OTYPER    (GPIOE_BASE_ADDR + GPIOx_OTYPER_OFFSET)     // GPIOE port output type register
#define GPIOE_OSPEEDR   (GPIOE_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)    // GPIOE port output speed register
#define GPIOE_PUPDR     (GPIOE_BASE_ADDR + GPIOx_PUPDR_OFFSET)      // GPIOE port pull-up/pull-down register
#define GPIOE_IDR       (GPIOE_BASE_ADDR + GPIOx_IDR_OFFSET)        // GPIOE port input data register
#define GPIOE_ODR       (GPIOE_BASE_ADDR + GPIOx_ODR_OFFSET)        // GPIOE port output data register
#define GPIOE_BSRR      (GPIOE_BASE_ADDR + GPIOx_BSRR_OFFSET)       // GPIOE port bit set/reset register
#define GPIOE_LCKR      (GPIOE_BASE_ADDR + GPIOx_LCKR_OFFSET)       // GPIOE port configuration lock register
#define GPIOE_AFRL      (GPIOE_BASE_ADDR + GPIOx_AFRL_OFFSET)       // GPIOE alternate function low register
#define GPIOE_AFRH      (GPIOE_BASE_ADDR + GPIOx_AFRH_OFFSET)       // GPIOE alternate function high register

#endif // GPIOE_H
