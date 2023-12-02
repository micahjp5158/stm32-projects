
/*
 * gpiob_registers.h
 *
 * Defines the GPIOB register addresses
 */

#ifndef GPIOB_REGISTERS_H
#define GPIOB_REGISTERS_H

#include "gpiox_registers.h"

/* GPIOB peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOB_BASE_ADDR     0x40020400U

/* GPIOB register addresses */
#define GPIOB_MODER     (GPIOB_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOB_OTYPER    (GPIOB_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOB_OSPEEDR   (GPIOB_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOB_PUPDR     (GPIOB_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOB_IDR       (GPIOB_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOB_ODR       (GPIOB_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOB_BSRR      (GPIOB_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOB_LCKR      (GPIOB_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOB_AFRL      (GPIOB_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOB_AFRH      (GPIOB_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOB_REGISTERS_H
