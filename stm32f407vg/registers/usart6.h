
/*
 * usart6.h
 *
 * Defines the USART6 register addresses
 */

#ifndef USART6_H
#define USART6_H

#include "usartx.h"

/* USART6 peripheral base address from STM32F407VG data sheet, Table 10 */
#define USART6_BASE_ADDR  0x40011400U

/* USART6 register addresses */
#define USART6_SR   (USART6_BASE_ADDR + USARTx_SR_OFFSET)
#define USART6_DR   (USART6_BASE_ADDR + USARTx_DR_OFFSET)
#define USART6_BRR  (USART6_BASE_ADDR + USARTx_BRR_OFFSET)
#define USART6_CR1  (USART6_BASE_ADDR + USARTx_CR1_OFFSET)
#define USART6_CR2  (USART6_BASE_ADDR + USARTx_CR2_OFFSET)
#define USART6_CR3  (USART6_BASE_ADDR + USARTx_CR3_OFFSET)
#define USART6_GTPR (USART6_BASE_ADDR + USARTx_GTPR_OFFSET)

#endif // USART6_H
