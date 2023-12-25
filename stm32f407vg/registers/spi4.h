
/*
 * spi4.h
 *
 * Defines the SPI4 register addresses
 */

#ifndef SPI4_H
#define SPI4_H

#include "spix_i2sx.h"

/* SPI4 peripheral base address from STM32F407VG reference manual, Table 1 */
#define SPI4_BASE_ADDR     0x40013400U

/* SPI4 register addresses */
#define SPI4_CR1        (SPI4_BASE_ADDR + SPI_I2Sx_SPI_CR1_OFFSET)      // SPI4 control register 1
#define SPI4_CR2        (SPI4_BASE_ADDR + SPI_I2Sx_SPI_CR2_OFFSET)      // SPI4 control register 2
#define SPI4_SR         (SPI4_BASE_ADDR + SPI_I2Sx_SPI_SR_OFFSET)       // SPI4 data register
#define SPI4_DR         (SPI4_BASE_ADDR + SPI_I2Sx_SPI_DR_OFFSET)       // SPI4 data register
#define SPI4_CRCPR      (SPI4_BASE_ADDR + SPI_I2Sx_SPI_CRCPR_OFFSET)    // SPI4 CRC polynomial register
#define SPI4_RXCRCR     (SPI4_BASE_ADDR + SPI_I2Sx_SPI_RXCRCR_OFFSET)   // SPI4 RX CRC register
#define SPI4_TXCRCR     (SPI4_BASE_ADDR + SPI_I2Sx_SPI_TXCRCR_OFFSET)   // SPI4 TX CRC register

#endif // SPI4_H
