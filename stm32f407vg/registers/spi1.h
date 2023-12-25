
/*
 * spi1.h
 *
 * Defines the SPI1 register addresses
 */

#ifndef SPI1_H
#define SPI1_H

#include "spix_i2sx.h"

/* SPI1 peripheral base address from STM32F407VG reference manual, Table 1 */
#define SPI1_BASE_ADDR     0x40013000U

/* SPI1 register addresses */
#define SPI1_CR1        (SPI1_BASE_ADDR + SPI_I2Sx_SPI_CR1_OFFSET)      // SPI1 control register 1
#define SPI1_CR2        (SPI1_BASE_ADDR + SPI_I2Sx_SPI_CR2_OFFSET)      // SPI1 control register 2
#define SPI1_SR         (SPI1_BASE_ADDR + SPI_I2Sx_SPI_SR_OFFSET)       // SPI1 data register
#define SPI1_DR         (SPI1_BASE_ADDR + SPI_I2Sx_SPI_DR_OFFSET)       // SPI1 data register
#define SPI1_CRCPR      (SPI1_BASE_ADDR + SPI_I2Sx_SPI_CRCPR_OFFSET)    // SPI1 CRC polynomial register
#define SPI1_RXCRCR     (SPI1_BASE_ADDR + SPI_I2Sx_SPI_RXCRCR_OFFSET)   // SPI1 RX CRC register
#define SPI1_TXCRCR     (SPI1_BASE_ADDR + SPI_I2Sx_SPI_TXCRCR_OFFSET)   // SPI1 TX CRC register

#endif // SPI1_H
