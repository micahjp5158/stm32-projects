
/*
 * uart5.h
 *
 * Defines the UART5 register addresses
 */

#ifndef UART5_H
#define UART5_H

#include "usartx.h"

/* UART5 peripheral base address from STM32F407VG data sheet, Table 10 */
#define UART5_BASE_ADDR 0x40005000U

/* UART5 register addresses */
#define UART5_SR  (UART5_BASE_ADDR + USARTx_SR_OFFSET)
#define UART5_DR  (UART5_BASE_ADDR + USARTx_DR_OFFSET)
#define UART5_BRR (UART5_BASE_ADDR + USARTx_BRR_OFFSET)
#define UART5_CR1 (UART5_BASE_ADDR + USARTx_CR1_OFFSET)
#define UART5_CR2 (UART5_BASE_ADDR + USARTx_CR2_OFFSET)
#define UART5_CR3 (UART5_BASE_ADDR + USARTx_CR3_OFFSET)
#define UART5_GTP (UART5_BASE_ADDR + USARTx_GTPR_OFFSET)

#endif // UART5_H
