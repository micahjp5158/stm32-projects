
/*
 * usart3.h
 *
 * Defines the USART3 register addresses
 */

#ifndef USART3_H
#define USART3_H

#include "usartx.h"

/* USART3 peripheral base address from STM32F407VG data sheet, Table 10 */
#define USART3_BASE_ADDR  0x40004800U

/* USART3 register addresses */
#define USART3_SR   (USART3_BASE_ADDR + USARTx_SR_OFFSET)
#define USART3_DR   (USART3_BASE_ADDR + USARTx_DR_OFFSET)
#define USART3_BRR  (USART3_BASE_ADDR + USARTx_BRR_OFFSET)
#define USART3_CR1  (USART3_BASE_ADDR + USARTx_CR1_OFFSET)
#define USART3_CR2  (USART3_BASE_ADDR + USARTx_CR2_OFFSET)
#define USART3_CR3  (USART3_BASE_ADDR + USARTx_CR3_OFFSET)
#define USART3_GTPR (USART3_BASE_ADDR + USARTx_GTPR_OFFSET)

#endif // USART3_H
