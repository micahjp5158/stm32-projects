
/*
 * spi2_i2s2.h
 *
 * Defines the SPI2 / I2S2 register addresses
 */

#ifndef SPI2_I2S2_H
#define SPI2_I2S2_H

#include "spix_i2sx.h"

/* SPI2 / I2S2 peripheral base address from STM32F407VG reference manual, Table 1 */
#define SPI2_I2S2_BASE_ADDR     0x40003800U

/* SPI2 / I2S2 register addresses */
#define SPI2_CR1        (SPI2_I2S2_BASE_ADDR + SPI_I2Sx_SPI_CR1_OFFSET)      // SPI2 control register 1 (not used in I2S mode)
#define SPI2_I2S2_CR2   (SPI2_I2S2_BASE_ADDR + SPI_I2Sx_SPI_CR2_OFFSET)      // SPI2 / I2S2 control register 2
#define SPI2_I2S2_SR    (SPI2_I2S2_BASE_ADDR + SPI_I2Sx_SPI_SR_OFFSET)       // SPI2 / I2S2 data register
#define SPI2_I2S2_DR    (SPI2_I2S2_BASE_ADDR + SPI_I2Sx_SPI_DR_OFFSET)       // SPI2 / I2S2 data register
#define SPI2_CRCPR      (SPI2_I2S2_BASE_ADDR + SPI_I2Sx_SPI_CRCPR_OFFSET)    // SPI2 CRC polynomial register (not used in I2S mode)
#define SPI2_RXCRCR     (SPI2_I2S2_BASE_ADDR + SPI_I2Sx_SPI_RXCRCR_OFFSET)   // SPI2 RX CRC register (not used in I2S mode)
#define SPI2_TXCRCR     (SPI2_I2S2_BASE_ADDR + SPI_I2Sx_SPI_TXCRCR_OFFSET)   // SPI2 TX CRC register (not used in I2S mode)
#define I2S2_I2SCFGR    (SPI2_I2S2_BASE_ADDR + SPI_I2Sx_SPI_I2SCFGR_OFFSET)  // I2S2 configuration register
#define I2S2_I2SPR      (SPI2_I2S2_BASE_ADDR + SPI_I2Sx_SPI_I2SPR_OFFSET)    // I2S2 prescaler register

#endif // SPI2_I2S2_H
