
/*
 * gpiox_registers.h
 *
 * Defines the GPIO register offsets, which are shared for all GPIO channels
 */

#ifndef GPIOx_REGISTERS_H
#define GPIOx_REGISTERS_H

/* GPIOx register offsets from STM32F407VG reference manual Table 39 */
#define GPIOx_MODER_OFFSET		0x00
#define GPIOx_OTYPER_OFFSET		0x04
#define GPIOx_OSPEEDR_OFFSET	0x08
#define GPIOx_PUPDR_OFFSET		0x0C
#define GPIOx_IDR_OFFSET		0x10
#define GPIOx_ODR_OFFSET		0x14
#define GPIOx_BSRR_OFFSET		0x18
#define GPIOx_LCKR_OFFSET		0x1C
#define GPIOx_AFRL_OFFSET		0x20
#define GPIOx_AFRH_OFFSET		0x24

#endif // GPIOx_REGISTERS_H
