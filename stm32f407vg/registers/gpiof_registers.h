
/*
 * gpiof_registers.h
 *
 * Defines the GPIOF register addresses
 */

#ifndef GPIOF_REGISTERS_H
#define GPIOF_REGISTERS_H

#include "gpiox_registers.h"

/* GPIOF peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOF_BASE_ADDR     0x40021400U

/* GPIOF register addresses */
#define GPIOF_MODER     (GPIOF_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOF_OTYPER    (GPIOF_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOF_OSPEEDR   (GPIOF_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOF_PUPDR     (GPIOF_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOF_IDR       (GPIOF_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOF_ODR       (GPIOF_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOF_BSRR      (GPIOF_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOF_LCKR      (GPIOF_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOF_AFRL      (GPIOF_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOF_AFRH      (GPIOF_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOF_REGISTERS_H
