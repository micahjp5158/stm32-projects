/*
 * usartx.h
 *
 * Defines the USART register offsets, which are shared for all USART channels
 */

#ifndef USARTx_H
#define USARTx_H

#include "stm32f407vg.h"

/* USARTx register offsets from STM32F407VG reference manual Table 149 */
#define USARTx_SR_OFFSET    0x00
#define USARTx_DR_OFFSET    0x04
#define USARTx_BRR_OFFSET   0x08
#define USARTx_CR1_OFFSET   0x0C
#define USARTx_CR2_OFFSET   0x10
#define USARTx_CR3_OFFSET   0x14
#define USARTx_GTPR_OFFSET  0x18

/* USARTx_SR bit definitions */
#define USARTx_SR_PE    BIT0  // Parity error
#define USARTx_SR_FE    BIT1  // Framing error
#define USARTx_SR_NF    BIT2  // Noise detected flag
#define USARTx_SR_ORE   BIT3  // Overrun error
#define USARTx_SR_IDLE  BIT4  // IDLE line detected
#define USARTx_SR_RXNE  BIT5  // Read data register not empty
#define USARTx_SR_TC    BIT6  // Transmission complete
#define USARTx_SR_TXE   BIT7  // Transmit data register empty
#define USARTx_SR_LBD   BIT8  // LIN break detection flag
#define USARTx_SR_CTS   BIT9  // CTS flag

/* USARTx_DR bit definitions */
#define USARTx_DR_0 BIT0  // Data value [0]
#define USARTx_DR_1 BIT1  // Data value [1]
#define USARTx_DR_2 BIT2  // Data value [2]
#define USARTx_DR_3 BIT3  // Data value [3]
#define USARTx_DR_4 BIT4  // Data value [4]
#define USARTx_DR_5 BIT5  // Data value [5]
#define USARTx_DR_6 BIT6  // Data value [6]
#define USARTx_DR_7 BIT7  // Data value [7]
#define USARTx_DR_8 BIT8  // Data value [8]

/* USARTx_BRR bit defintions */
#define USARTx_BRR_DIV_FRACTION_0   BIT0  // Fraction of USARTDIV [0]
#define USARTx_BRR_DIV_FRACTION_1   BIT1  // Fraction of USARTDIV [1]
#define USARTx_BRR_DIV_FRACTION_2   BIT2  // Fraction of USARTDIV [2]
#define USARTx_BRR_DIV_FRACTION_3   BIT3  // Fraction of USARTDIV [3]
#define USARTx_BRR_DIV_MANTISSA_0   BIT4  // Mantissa of USARTDIV [0]
#define USARTx_BRR_DIV_MANTISSA_1   BIT5  // Mantissa of USARTDIV [1]
#define USARTx_BRR_DIV_MANTISSA_2   BIT6  // Mantissa of USARTDIV [2]
#define USARTx_BRR_DIV_MANTISSA_3   BIT7  // Mantissa of USARTDIV [3]
#define USARTx_BRR_DIV_MANTISSA_4   BIT8  // Mantissa of USARTDIV [4]
#define USARTx_BRR_DIV_MANTISSA_5   BIT9  // Mantissa of USARTDIV [5]
#define USARTx_BRR_DIV_MANTISSA_6   BIT10 // Mantissa of USARTDIV [6]
#define USARTx_BRR_DIV_MANTISSA_7   BIT11 // Mantissa of USARTDIV [7]
#define USARTx_BRR_DIV_MANTISSA_8   BIT12 // Mantissa of USARTDIV [8]
#define USARTx_BRR_DIV_MANTISSA_9   BIT13 // Mantissa of USARTDIV [9]
#define USARTx_BRR_DIV_MANTISSA_10  BIT14 // Mantissa of USARTDIV [10]
#define USARTx_BRR_DIV_MANTISSA_11  BIT15 // Mantissa of USARTDIV [11]

/* USARTx_CR1 bit definitions */
#define USARTx_CR1_SBK    BIT0  // Send break
#define USARTx_CR1_RWU    BIT1  // Receiver wakeup
#define USARTx_CR1_RE     BIT2  // Receiver enable
#define USARTx_CR1_TE     BIT3  // Transmitter enable
#define USARTx_CR1_IDLEIE BIT4  // IDLE interrupt enable
#define USARTx_CR1_RXNEIE BIT5  // RXNE interrupt enable
#define USARTx_CR1_TCIE   BIT6  // Transmission complete interrupt enable
#define USARTx_CR1_TXEIE  BIT7  // TXE interrupt enable
#define USARTx_CR1_PEIE   BIT8  // PE interrupt enable
#define USARTx_CR1_PS     BIT9  // Parity selection
#define USARTx_CR1_PCE    BIT10 // Parity control enable
#define USARTx_CR1_WAKE   BIT11 // Wakeup method
#define USARTx_CR1_M      BIT12 // Word length
#define USARTx_CR1_UE     BIT13 // USART enable
#define USARTx_CR1_OVER8  BIT15 // Oversampling mode

/* USARTx_CR2 bit definitions */
#define USARTx_CR2_ADD_0  BIT0  // Address of the USART node [0]
#define USARTx_CR2_ADD_1  BIT1  // Address of the USART node [1]
#define USARTx_CR2_ADD_2  BIT2  // Address of the USART node [2]
#define USARTx_CR2_ADD_3  BIT3  // Address of the USART node [3]
#define USARTx_CR2_LBDL   BIT5  // lin break detection length
#define USARTx_CR2_LBDIE  BIT6  // LIN break detection interrupt enable
#define USARTx_CR2_LBCL   BIT8  // Last bit clock pulse
#define USARTx_CR2_CPHA   BIT9  // Clock phase
#define USARTx_CR2_CPOL   BIT10 // Clock polarity
#define USARTx_CR2_CLKEN  BIT11 // Clock enable
#define USARTx_CR2_STOP_0 BIT12 // STOP bits [0]
#define USARTx_CR2_STOP_1 BIT13 // STOP bits [1]
#define USARTx_CR2_LINEN  BIT14 // LIN mode enable

/* USARTx_CR3 bit definitions */
#define USARTx_CR3_EIE    BIT0  // Error interrupt enable
#define USARTx_CR3_IREN   BIT1  // IrDA mode enable
#define USARTx_CR3_IRLP   BIT2  // IrDA low-power
#define USARTx_CR3_HDSEL  BIT3  // Half-duplex selection
#define USARTx_CR3_NACK   BIT4  // Smartcard NACK enable
#define USARTx_CR3_SCEN   BIT5  // Smartcard mode enable
#define USARTx_CR3_DMAR   BIT6  // DMA enable receiver
#define USARTx_CR3_DMAT   BIT7  // DMA enable transmitter
#define USARTx_CR3_RTSE   BIT8  // RTS enable
#define USARTx_CR3_CTSE   BIT9  // CTS enable
#define USARTx_CR3_CTSIE  BIT10 // CTS interrupt enable
#define USARTx_CR3_ONEBIT BIT11 // One sample bit method enable

/* USARTx_GTPR bit definitions */
#define USARTx_GTPR_PSC_0 BIT0  // Prescaler value [0]
#define USARTx_GTPR_PSC_1 BIT1  // Prescaler value [1]
#define USARTx_GTPR_PSC_2 BIT2  // Prescaler value [2]
#define USARTx_GTPR_PSC_3 BIT3  // Prescaler value [3]
#define USARTx_GTPR_PSC_4 BIT4  // Prescaler value [4]
#define USARTx_GTPR_PSC_5 BIT5  // Prescaler value [5]
#define USARTx_GTPR_PSC_6 BIT6  // Prescaler value [6]
#define USARTx_GTPR_PSC_7 BIT7  // Prescaler value [7]

#endif // USARTx_H
