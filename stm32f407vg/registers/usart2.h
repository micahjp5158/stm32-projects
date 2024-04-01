
/*
 * usart2.h
 *
 * Defines the USART2 register addresses
 */

#ifndef USART2_H
#define USART2_H

#include "usartx.h"

/* USART2 peripheral base address from STM32F407VG data sheet, Table 10 */
#define USART2_BASE_ADDR  0x40004400U

/* USART2 register addresses */
#define USART2_SR   (USART2_BASE_ADDR + USARTx_SR_OFFSET)
#define USART2_DR   (USART2_BASE_ADDR + USARTx_DR_OFFSET)
#define USART2_BRR  (USART2_BASE_ADDR + USARTx_BRR_OFFSET)
#define USART2_CR1  (USART2_BASE_ADDR + USARTx_CR1_OFFSET)
#define USART2_CR2  (USART2_BASE_ADDR + USARTx_CR2_OFFSET)
#define USART2_CR3  (USART2_BASE_ADDR + USARTx_CR3_OFFSET)
#define USART2_GTPR (USART2_BASE_ADDR + USARTx_GTPR_OFFSET)

#endif // USART2_H
