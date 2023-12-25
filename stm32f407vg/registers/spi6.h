
/*
 * spi6.h
 *
 * Defines the SPI6 register addresses
 */

#ifndef SPI6_H
#define SPI6_H

#include "spix_i2sx.h"

/* SPI6 peripheral base address from STM32F407VG reference manual, Table 1 */
#define SPI6_BASE_ADDR     0x40015400U

/* SPI6 register addresses */
#define SPI6_CR1        (SPI6_BASE_ADDR + SPI_I2Sx_SPI_CR1_OFFSET)      // SPI6 control register 1
#define SPI6_CR2        (SPI6_BASE_ADDR + SPI_I2Sx_SPI_CR2_OFFSET)      // SPI6 control register 2
#define SPI6_SR         (SPI6_BASE_ADDR + SPI_I2Sx_SPI_SR_OFFSET)       // SPI6 data register
#define SPI6_DR         (SPI6_BASE_ADDR + SPI_I2Sx_SPI_DR_OFFSET)       // SPI6 data register
#define SPI6_CRCPR      (SPI6_BASE_ADDR + SPI_I2Sx_SPI_CRCPR_OFFSET)    // SPI6 CRC polynomial register
#define SPI6_RXCRCR     (SPI6_BASE_ADDR + SPI_I2Sx_SPI_RXCRCR_OFFSET)   // SPI6 RX CRC register
#define SPI6_TXCRCR     (SPI6_BASE_ADDR + SPI_I2Sx_SPI_TXCRCR_OFFSET)   // SPI6 TX CRC register

#endif // SPI6_H
