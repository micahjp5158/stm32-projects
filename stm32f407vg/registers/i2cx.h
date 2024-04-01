/*
 * i2cx.h
 *
 * Defines the I2C register offsets, which are shared for all I2C channels
 */

#ifndef I2Cx_H
#define I2Cx_H

#include "stm32f407vg.h"

/* USARTx register offsets from STM32F407VG reference manual Table 125 */
#define I2Cx_CR1_OFFSET   0x00
#define I2Cx_CR2_OFFSET   0x04
#define I2Cx_OAR1_OFFSET  0x08
#define I2Cx_OAR2_OFFSET  0x0C
#define I2Cx_DR_OFFSET    0x10
#define I2Cx_SR1_OFFSET   0x14
#define I2Cx_SR2_OFFSET   0x18
#define I2Cx_CCR_OFFSET   0x1C
#define I2Cx_TRISE_OFFSET 0x20
#define I2Cx_FLTR_OFFSET  0x24

/* I2Cx_CR1 bit definitions */
#define I2Cx_CR1_PE         BIT0  // Peripheral enable
#define I2Cx_CR1_SMBUS      BIT1  // SMBus mode
#define I2Cx_CR1_SMBTYPE    BIT3  // SMBus type
#define I2Cx_CR1_ENARP      BIT4  // ARP enable
#define I2Cx_CR1_ENPEC      BIT5  // PEC enable
#define I2Cx_CR1_ENGC       BIT6  // General call enable
#define I2Cx_CR1_NOSTRETCH  BIT7  // Clock stretching disable (Slave mode)
#define I2Cx_CR1_START      BIT8  // Start generation
#define I2Cx_CR1_STOP       BIT9  // Stop generation
#define I2Cx_CR1_ACK        BIT10 // Acknowledge enable
#define I2Cx_CR1_POS        BIT11 // Acknowledge / PEC position (for data reception)
#define I2Cx_CR1_PEC        BIT12 // Packet error checking
#define I2Cx_CR1_ALERT      BIT13 // SMBus alert
#define I2Cx_CR1_SWRST      BIT15 // Software reset

/* I2Cx_CR2 bit definitions */
#define I2Cx_CR2_FREQ_0   BIT0  // Peripheral clock frequency [0]
#define I2Cx_CR2_FREQ_1   BIT1  // Peripheral clock frequency [1]
#define I2Cx_CR2_FREQ_2   BIT2  // Peripheral clock frequency [2]
#define I2Cx_CR2_FREQ_3   BIT3  // Peripheral clock frequency [3]
#define I2Cx_CR2_FREQ_4   BIT4  // Peripheral clock frequency [4]
#define I2Cx_CR2_FREQ_5   BIT5  // Peripheral clock frequency [5]
#define I2Cx_CR2_ITERREN  BIT8  // Error interrupt enable
#define I2Cx_CR2_ITEVTEN  BIT9  // Event interrupt enable
#define I2Cx_CR2_ITBUFEN  BIT10 // Buffer interrupt enable
#define I2Cx_CR2_DMAEN    BIT11 // DMA requests enable
#define I2Cx_CR2_LAST     BIT12 // DMA last transfer

/* I2Cx_OAR1 bit definitions */
#define I2Cx_OAR1_ADD_0   BIT0  // Interface address [0]
#define I2Cx_OAR1_ADD_1   BIT1  // Interface address [1]
#define I2Cx_OAR1_ADD_2   BIT2  // Interface address [2]
#define I2Cx_OAR1_ADD_3   BIT3  // Interface address [3]
#define I2Cx_OAR1_ADD_4   BIT4  // Interface address [4]
#define I2Cx_OAR1_ADD_5   BIT5  // Interface address [5]
#define I2Cx_OAR1_ADD_6   BIT6  // Interface address [6]
#define I2Cx_OAR1_ADD_7   BIT7  // Interface address [7]
#define I2Cx_OAR1_ADD_8   BIT8  // Interface address [8]
#define I2Cx_OAR1_ADD_9   BIT9  // Interface address [9]
#define I2Cx_OAR1_KEEP_1  BIT14 // Should always be kept at 1 by software
#define I2Cx_OAR1_ADDMODE BIT15 // Addressing mode (slave mode)

/* I2Cx_OAR2 bit definitions */
#define I2Cx_OAR2_ENDUAL  BIT0  // Dual addressing mode enable
#define I2Cx_OAR2_ADD2_1  BIT1  // Interface address [1]
#define I2Cx_OAR2_ADD2_2  BIT2  // Interface address [2]
#define I2Cx_OAR2_ADD2_3  BIT3  // Interface address [3]
#define I2Cx_OAR2_ADD2_4  BIT4  // Interface address [4]
#define I2Cx_OAR2_ADD2_5  BIT5  // Interface address [5]
#define I2Cx_OAR2_ADD2_6  BIT6  // Interface address [6]
#define I2Cx_OAR2_ADD2_7  BIT7  // Interface address [7]

/* I2Cx_DR bit definitions */
#define I2Cx_DR_0 BIT0  // 8-bit data register [0]
#define I2Cx_DR_1 BIT1  // 8-bit data register [1]
#define I2Cx_DR_2 BIT2  // 8-bit data register [2]
#define I2Cx_DR_3 BIT3  // 8-bit data register [3]
#define I2Cx_DR_4 BIT4  // 8-bit data register [4]
#define I2Cx_DR_5 BIT5  // 8-bit data register [5]
#define I2Cx_DR_6 BIT6  // 8-bit data register [6]
#define I2Cx_DR_7 BIT7  // 8-bit data register [7]

#endif // I2Cx_H
