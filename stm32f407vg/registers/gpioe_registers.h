
/*
 * gpioe_registers.h
 *
 * Defines the GPIOE register addresses
 */

#ifndef GPIOE_REGISTERS_H
#define GPIOE_REGISTERS_H

#include "gpiox_registers.h"

/* GPIOE peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOE_BASE_ADDR     0x40021000U

/* GPIOE register addresses */
#define GPIOE_MODER     (GPIOE_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOE_OTYPER    (GPIOE_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOE_OSPEEDR   (GPIOE_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOE_PUPDR     (GPIOE_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOE_IDR       (GPIOE_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOE_ODR       (GPIOE_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOE_BSRR      (GPIOE_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOE_LCKR      (GPIOE_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOE_AFRL      (GPIOE_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOE_AFRH      (GPIOE_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOE_REGISTERS_H
