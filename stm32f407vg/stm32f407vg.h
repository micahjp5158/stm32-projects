/*
 * stm32f407vg.h
 *
 * Main include file for the STM32407VG MCU, which includes
 * other files for register definitions.
 */

#ifndef STM32F407VG_H
#define STM32F407VG_H

/* Bit macro definitions */
#define BIT0    0x00000001U
#define BIT1    0x00000002U
#define BIT2    0x00000004U
#define BIT3    0x00000008U
#define BIT4    0x00000010U
#define BIT5    0x00000020U
#define BIT6    0x00000040U
#define BIT7    0x00000080U
#define BIT8    0x00000100U
#define BIT9    0x00000200U
#define BIT10   0x00000400U
#define BIT11   0x00000800U
#define BIT12   0x00001000U
#define BIT13   0x00002000U
#define BIT14   0x00004000U
#define BIT15   0x00008000U
#define BIT16   0x00010000U
#define BIT17   0x00020000U
#define BIT18   0x00040000U
#define BIT19   0x00080000U
#define BIT20   0x00100000U
#define BIT21   0x00200000U
#define BIT22   0x00400000U
#define BIT23   0x00800000U
#define BIT24   0x01000000U
#define BIT25   0x02000000U
#define BIT26   0x04000000U
#define BIT27   0x08000000U
#define BIT28   0x10000000U
#define BIT29   0x20000000U
#define BIT30   0x40000000U
#define BIT31   0x80000000U

/* Convert register address to readable / writable int */
#define ACCESS(reg)        (*((volatile unsigned int*)(reg)))

/* Clear all bits in a register */
#define CLEAR_REG(reg)          (ACCESS(reg) = 0)

/* Set a register's value */
#define SET_REG(reg, val)       (ACCESS(reg) = (val))

/* Modify specific bits in a register */
#define SET_BITS(reg, bits)       (ACCESS(reg) |= (bits))
#define CLEAR_BITS(reg, bits)     (ACCESS(reg) &= ~(bits))
#define TOGGLE_BITS(reg, bits)    (ACCESS(reg) ^= (bits))

/* Include peripheral registers */

/* EXTI */
#include "exti.h"

/* GPIO */
#include "gpiox.h"
#include "gpioa.h"
#include "gpiob.h"
#include "gpioc.h"
#include "gpiod.h"
#include "gpioe.h"
#include "gpiof.h"
#include "gpiog.h"
#include "gpioh.h"
#include "gpioi.h"

/* NVIC */
#include "nvic.h"

/* RCC */
#include "rcc.h"

/* RNG */
#include "rng.h"

/* RTC */
#include "rtc.h"

/* SPI / I2S */
#include "spix_i2sx.h"
#include "spi1.h"
#include "spi2_i2s2.h"
#include "spi3_i2s3.h"

/* SYSCFG */
#include "syscfg.h"

#endif // STM32F407VG_H
