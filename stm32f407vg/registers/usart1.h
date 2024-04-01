
/*
 * usart1.h
 *
 * Defines the USART1 register addresses
 */

#ifndef USART1_H
#define USART1_H

#include "usartx.h"

/* USART1 peripheral base address from STM32F407VG data sheet, Table 10 */
#define USART1_BASE_ADDR  0x40011000U

/* USART1 register addresses */
#define USART1_SR   (USART1_BASE_ADDR + USARTx_SR_OFFSET)
#define USART1_DR   (USART1_BASE_ADDR + USARTx_DR_OFFSET)
#define USART1_BRR  (USART1_BASE_ADDR + USARTx_BRR_OFFSET)
#define USART1_CR1  (USART1_BASE_ADDR + USARTx_CR1_OFFSET)
#define USART1_CR2  (USART1_BASE_ADDR + USARTx_CR2_OFFSET)
#define USART1_CR3  (USART1_BASE_ADDR + USARTx_CR3_OFFSET)
#define USART1_GTPR (USART1_BASE_ADDR + USARTx_GTPR_OFFSET)

#endif // USART1_H
