
/*
 * uart4.h
 *
 * Defines the UART4 register addresses
 */

#ifndef UART4_H
#define UART4_H

#include "usartx.h"

/* UART4 peripheral base address from STM32F407VG data sheet, Table 10 */
#define UART4_BASE_ADDR 0x40004C00U

/* UART4 register addresses */
#define UART4_SR  (UART4_BASE_ADDR + USARTx_SR_OFFSET)
#define UART4_DR  (UART4_BASE_ADDR + USARTx_DR_OFFSET)
#define UART4_BRR (UART4_BASE_ADDR + USARTx_BRR_OFFSET)
#define UART4_CR1 (UART4_BASE_ADDR + USARTx_CR1_OFFSET)
#define UART4_CR2 (UART4_BASE_ADDR + USARTx_CR2_OFFSET)
#define UART4_CR3 (UART4_BASE_ADDR + USARTx_CR3_OFFSET)
#define UART4_GTP (UART4_BASE_ADDR + USARTx_GTPR_OFFSET)

#endif // UART4_H
