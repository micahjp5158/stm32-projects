
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
#define GPIOD_MODER     (GPIOD_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOD_OTYPER    (GPIOD_BASE_ADDR + GPIOx_OTYPER_OFFSET)
#define GPIOD_OSPEEDR   (GPIOD_BASE_ADDR + GPIOx_OSPEEDR_OFFSET)
#define GPIOD_PUPDR     (GPIOD_BASE_ADDR + GPIOx_PUPDR_OFFSET)
#define GPIOD_IDR       (GPIOD_BASE_ADDR + GPIOx_IDR_OFFSET)
#define GPIOD_ODR       (GPIOD_BASE_ADDR + GPIOx_ODR_OFFSET)
#define GPIOD_BSRR      (GPIOD_BASE_ADDR + GPIOx_BSRR_OFFSET)
#define GPIOD_LCKR      (GPIOD_BASE_ADDR + GPIOx_LCKR_OFFSET)
#define GPIOD_AFRL      (GPIOD_BASE_ADDR + GPIOx_AFRL_OFFSET)
#define GPIOD_AFRH      (GPIOD_BASE_ADDR + GPIOx_AFRH_OFFSET)

#endif // GPIOD_H
