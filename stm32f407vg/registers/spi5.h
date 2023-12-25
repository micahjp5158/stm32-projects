
/*
 * spi5.h
 *
 * Defines the SPI5 register addresses
 */

#ifndef SPI5_H
#define SPI5_H

#include "spix_i2sx.h"

/* SPI5 peripheral base address from STM32F407VG reference manual, Table 1 */
#define SPI5_BASE_ADDR     0x40015000U

/* SPI5 register addresses */
#define SPI5_CR1        (SPI5_BASE_ADDR + SPI_I2Sx_SPI_CR1_OFFSET)      // SPI5 control register 1
#define SPI5_CR2        (SPI5_BASE_ADDR + SPI_I2Sx_SPI_CR2_OFFSET)      // SPI5 control register 2
#define SPI5_SR         (SPI5_BASE_ADDR + SPI_I2Sx_SPI_SR_OFFSET)       // SPI5 data register
#define SPI5_DR         (SPI5_BASE_ADDR + SPI_I2Sx_SPI_DR_OFFSET)       // SPI5 data register
#define SPI5_CRCPR      (SPI5_BASE_ADDR + SPI_I2Sx_SPI_CRCPR_OFFSET)    // SPI5 CRC polynomial register
#define SPI5_RXCRCR     (SPI5_BASE_ADDR + SPI_I2Sx_SPI_RXCRCR_OFFSET)   // SPI5 RX CRC register
#define SPI5_TXCRCR     (SPI5_BASE_ADDR + SPI_I2Sx_SPI_TXCRCR_OFFSET)   // SPI5 TX CRC register

#endif // SPI5_H
