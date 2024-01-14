
/*
 * spix.h
 *
 * Defines the SPI and I2S register offsets, which are shared for all SPI_I2S channels
 */

#ifndef SPIx_H
#define SPIx_H

#include "stm32f407vg.h"

/* SPI register offsets from STM32F407VG reference manual Table 129 */
#define SPIx_CR1_OFFSET     0x00U
#define SPIx_CR2_OFFSET     0x04U
#define SPIx_SR_OFFSET      0x08U
#define SPIx_DR_OFFSET      0x0CU
#define SPIx_CRCPR_OFFSET   0x10U
#define SPIx_RXCRCR_OFFSET  0x14U
#define SPIx_TXCRCR_OFFSET  0x18U
#define SPIx_I2SCFGR_OFFSET 0x1CU
#define SPIx_I2SPR_OFFSET   0x20U

/* SPIx_CR1 bit definitions */
#define SPIx_CR1_CPHA       BIT0    // Clock phase
#define SPIx_CR1_CPOL       BIT1    // Clock polarity
#define SPIx_CR1_MSTR       BIT2    // Master selection
#define SPIx_CR1_BR0        BIT3    // Baud rate control [0]
#define SPIx_CR1_BR1        BIT4    // Baud rate control [1]
#define SPIx_CR1_BR2        BIT5    // Baud rate control [2]
#define SPIx_CR1_SPE        BIT6    // SPI enable
#define SPIx_CR1_LSBFIRST   BIT7    // Frame format
#define SPIx_CR1_SSI        BIT8    // Internal slave select
#define SPIx_CR1_SSM        BIT9    // Software slave management
#define SPIx_CR1_RXONLY     BIT10   // Receive only
#define SPIx_CR1_DFF        BIT11   // Data frame format
#define SPIx_CR1_CRCNEXT    BIT12   // CRC transfer next
#define SPIx_CR1_CRCEN      BIT13   // Hardware CRC calculation enable
#define SPIx_CR1_BIDIOE     BIT14   // Output enable in bidirectional mode
#define SPIx_CR1_BIDIMODE   BIT15   // Bidirectional data mode enable

/* SPIx_CR2 bit definitions */
#define SPIx_CR2_RXDMAEN    BIT0    // Rx buffer DMA enable
#define SPIx_CR2_TXDMAEN    BIT1    // Tx buffer DMA enable
#define SPIx_CR2_SSOE       BIT2    // SS output enable
#define SPIx_CR2_FRF        BIT4    // Frame format
#define SPIx_CR2_ERRIE      BIT5    // Error interrupt enable
#define SPIx_CR2_RXNEIE     BIT6    // Rx buffer not empty interrupt enable
#define SPIx_CR2_TXEIE      BIT7    // Tx buffer empty enable

/* SPIx_SR bit definitions */
#define SPIx_SR_RXNE    BIT0    // Receive buffer not empty
#define SPIx_SR_TXE     BIT1    // Transmit buffer empty
#define SPIx_SR_CHSIDE  BIT2    // Channel side
#define SPIx_SR_UDR     BIT3    // Underrun flag
#define SPIx_SR_CRCERR  BIT4    // CRC error flag
#define SPIx_SR_MODF    BIT5    // Mode fault
#define SPIx_SR_OVR     BIT6    // Overrun flag
#define SPIx_SR_BSY     BIT7    // Busy flag
#define SPIx_SR_FRE     BIT8    // Frame format error

/* SPIx_DR bit definitions */
#define SPIx_DR0    BIT0    // Data register [0]
#define SPIx_DR1    BIT1    // Data register [1]
#define SPIx_DR2    BIT2    // Data register [2]
#define SPIx_DR3    BIT3    // Data register [3]
#define SPIx_DR4    BIT4    // Data register [4]
#define SPIx_DR5    BIT5    // Data register [5]
#define SPIx_DR6    BIT6    // Data register [6]
#define SPIx_DR7    BIT7    // Data register [7]
#define SPIx_DR8    BIT8    // Data register [8]
#define SPIx_DR9    BIT9    // Data register [9]
#define SPIx_DR10   BIT10   // Data register [10]
#define SPIx_DR11   BIT11   // Data register [11]
#define SPIx_DR12   BIT12   // Data register [12]
#define SPIx_DR13   BIT13   // Data register [13]
#define SPIx_DR14   BIT14   // Data register [14]
#define SPIx_DR15   BIT15   // Data register [15]

/* SPIx_CRCPR bit definitions */
#define SPIx_CRCPR_CRCPOLY0     BIT0    // CRC polynomial register [0]
#define SPIx_CRCPR_CRCPOLY1     BIT1    // CRC polynomial register [1]
#define SPIx_CRCPR_CRCPOLY2     BIT2    // CRC polynomial register [2]
#define SPIx_CRCPR_CRCPOLY3     BIT3    // CRC polynomial register [3]
#define SPIx_CRCPR_CRCPOLY4     BIT4    // CRC polynomial register [4]
#define SPIx_CRCPR_CRCPOLY5     BIT5    // CRC polynomial register [5]
#define SPIx_CRCPR_CRCPOLY6     BIT6    // CRC polynomial register [6]
#define SPIx_CRCPR_CRCPOLY7     BIT7    // CRC polynomial register [7]
#define SPIx_CRCPR_CRCPOLY8     BIT8    // CRC polynomial register [8]
#define SPIx_CRCPR_CRCPOLY9     BIT9    // CRC polynomial register [9]
#define SPIx_CRCPR_CRCPOLY10    BIT10   // CRC polynomial register [10]
#define SPIx_CRCPR_CRCPOLY11    BIT11   // CRC polynomial register [11]
#define SPIx_CRCPR_CRCPOLY12    BIT12   // CRC polynomial register [12]
#define SPIx_CRCPR_CRCPOLY13    BIT13   // CRC polynomial register [13]
#define SPIx_CRCPR_CRCPOLY14    BIT14   // CRC polynomial register [14]
#define SPIx_CRCPR_CRCPOLY15    BIT15   // CRC polynomial register [15]

/* SPIx_RXCRCR bit definitions */
#define SPIx_RXCRCR0    BIT0    // Rx CRC register [0]
#define SPIx_RXCRCR1    BIT1    // Rx CRC register [1]
#define SPIx_RXCRCR2    BIT2    // Rx CRC register [2]
#define SPIx_RXCRCR3    BIT3    // Rx CRC register [3]
#define SPIx_RXCRCR4    BIT4    // Rx CRC register [4]
#define SPIx_RXCRCR5    BIT5    // Rx CRC register [5]
#define SPIx_RXCRCR6    BIT6    // Rx CRC register [6]
#define SPIx_RXCRCR7    BIT7    // Rx CRC register [7]
#define SPIx_RXCRCR8    BIT8    // Rx CRC register [8]
#define SPIx_RXCRCR9    BIT9    // Rx CRC register [9]
#define SPIx_RXCRCR10   BIT10   // Rx CRC register [10]
#define SPIx_RXCRCR11   BIT11   // Rx CRC register [11]
#define SPIx_RXCRCR12   BIT12   // Rx CRC register [12]
#define SPIx_RXCRCR13   BIT13   // Rx CRC register [13]
#define SPIx_RXCRCR14   BIT14   // Rx CRC register [14]
#define SPIx_RXCRCR15   BIT15   // Rx CRC register [15]

/* SPIx_TXCRCR bit definitions */
#define SPIx_TXCRCR0    BIT0    // Tx CRC register [0]
#define SPIx_TXCRCR1    BIT1    // Tx CRC register [1]
#define SPIx_TXCRCR2    BIT2    // Tx CRC register [2]
#define SPIx_TXCRCR3    BIT3    // Tx CRC register [3]
#define SPIx_TXCRCR4    BIT4    // Tx CRC register [4]
#define SPIx_TXCRCR5    BIT5    // Tx CRC register [5]
#define SPIx_TXCRCR6    BIT6    // Tx CRC register [6]
#define SPIx_TXCRCR7    BIT7    // Tx CRC register [7]
#define SPIx_TXCRCR8    BIT8    // Tx CRC register [8]
#define SPIx_TXCRCR9    BIT9    // Tx CRC register [9]
#define SPIx_TXCRCR10   BIT10   // Tx CRC register [10]
#define SPIx_TXCRCR11   BIT11   // Tx CRC register [11]
#define SPIx_TXCRCR12   BIT12   // Tx CRC register [12]
#define SPIx_TXCRCR13   BIT13   // Tx CRC register [13]
#define SPIx_TXCRCR14   BIT14   // Tx CRC register [14]
#define SPIx_TXCRCR15   BIT15   // Tx CRC register [15]

/* SPIx_I2SCFGR bit definitions */
#define SPIx_I2SCFGR_CHLEN      BIT0    // Channel length (number of bits per audio channel)
#define SPIx_I2SCFGR_DATLEN0    BIT1    // Data length to be transferred [0]
#define SPIx_I2SCFGR_DATLEN1    BIT2    // Data length to be transferred [1]
#define SPIx_I2SCFGR_CKPOL      BIT3    // Steady state clock polarity
#define SPIx_I2SCFGR_I2SSTD0    BIT4    // I2S standard selection [0]
#define SPIx_I2SCFGR_I2SSTD1    BIT5    // I2S standard selection [1]
#define SPIx_I2SCFGR_PCMSYNC    BIT7    // PCM frame synchronization
#define SPIx_I2SCFGR_I2SCFG0    BIT8    // I2S configuration mode [0]
#define SPIx_I2SCFGR_I2SCFG1    BIT9    // I2S configuration mode [1]
#define SPIx_I2SCFGR_I2SE       BIT10   // I2S Enable
#define SPIx_I2SCFGR_I2SMOD     BIT11   // I2S mode selection

/* SPIx_I2SPR bit definitions */
#define SPIx_I2SPR_I2SDIV0  BIT0    // I2S Linear prescaler [0]
#define SPIx_I2SPR_I2SDIV1  BIT1    // I2S Linear prescaler [1]
#define SPIx_I2SPR_I2SDIV2  BIT2    // I2S Linear prescaler [2]
#define SPIx_I2SPR_I2SDIV3  BIT3    // I2S Linear prescaler [3]
#define SPIx_I2SPR_I2SDIV4  BIT4    // I2S Linear prescaler [4]
#define SPIx_I2SPR_I2SDIV5  BIT5    // I2S Linear prescaler [5]
#define SPIx_I2SPR_I2SDIV6  BIT6    // I2S Linear prescaler [6]
#define SPIx_I2SPR_I2SDIV7  BIT7    // I2S Linear prescaler [7]
#define SPIx_I2SPR_ODD      BIT8    // Odd factor for the prescaler
#define SPIx_I2SPR_MCKOE    BIT9    // Master clock output enable

#endif // SPIx_H
