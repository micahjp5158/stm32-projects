
/*
 * gpioj_registers.h
 *
 * Defines the GPIOJ register addresses
 */

#ifndef GPIOJ_REGISTERS_H
#define GPIOJ_REGISTERS_H

#include "gpiox_registers.h"

/* GPIOJ peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOJ_BASE_ADDR     0x40022400U

/* GPIOJ register addresses */
#define GPIOJ_MODER     (GPIOJ_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOJ_OTYPER    (GPIOJ_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOJ_OSPEEDR   (GPIOJ_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOJ_PUPDR     (GPIOJ_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOJ_IDR       (GPIOJ_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOJ_ODR       (GPIOJ_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOJ_BSRR      (GPIOJ_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOJ_LCKR      (GPIOJ_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOJ_AFRL      (GPIOJ_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOJ_AFRH      (GPIOJ_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOJ_REGISTERS_H
