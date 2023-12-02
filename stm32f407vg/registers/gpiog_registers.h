
/*
 * gpiog_registers.h
 *
 * Defines the GPIOG register addresses
 */

#ifndef GPIOG_REGISTERS_H
#define GPIOG_REGISTERS_H

#include "gpiox_registers.h"

/* GPIOG peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOG_BASE_ADDR     0x40021800U

/* GPIOG register addresses */
#define GPIOG_MODER     (GPIOG_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOG_OTYPER    (GPIOG_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOG_OSPEEDR   (GPIOG_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOG_PUPDR     (GPIOG_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOG_IDR       (GPIOG_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOG_ODR       (GPIOG_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOG_BSRR      (GPIOG_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOG_LCKR      (GPIOG_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOG_AFRL      (GPIOG_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOG_AFRH      (GPIOG_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOG_REGISTERS_H
