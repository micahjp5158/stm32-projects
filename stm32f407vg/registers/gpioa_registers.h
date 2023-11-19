
/*
 * gpioa_registers.h
 *
 * Defines the GPIOA register addresses
 */

#ifndef GPIOA_REGISTERS_H
#define GPIOA_REGISTERS_H

#include "gpiox_registers.h"

/* GPIOA peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOA_BASE_ADDR     0x40020000

/* GPIOA register addresses */
#define GPIOA_MODER     (GPIOA_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOA_OTYPER    (GPIOA_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOA_OSPEEDR   (GPIOA_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOA_PUPDR     (GPIOA_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOA_IDR       (GPIOA_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOA_ODR       (GPIOA_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOA_BSRR      (GPIOA_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOA_LCKR      (GPIOA_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOA_AFRL      (GPIOA_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOA_AFRH      (GPIOA_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOA_REGISTERS_H
