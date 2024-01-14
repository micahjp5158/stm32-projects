
/*
 * spi3.h
 *
 * Defines the SPI2 register addresses
 */

#ifndef SPI3_H
#define SPI3_H

#include "spix.h"

/* SPI3 peripheral base address from STM32F407VG reference manual, Table 1 */
#define SPI3_BASE_ADDR     0x40003800U

/* SPI3 register addresses */
#define SPI3_CR1        (SPI3_BASE_ADDR + SPIx_CR1_OFFSET)      // SPI3 control register 1 (not used in I2S mode)
#define SPI3_CR2        (SPI3_BASE_ADDR + SPIx_CR2_OFFSET)      // SPI3 / I2S2 control register 2
#define SPI3_SR         (SPI3_BASE_ADDR + SPIx_SR_OFFSET)       // SPI3 / I2S2 data register
#define SPI3_DR         (SPI3_BASE_ADDR + SPIx_DR_OFFSET)       // SPI3 / I2S2 data register
#define SPI3_CRCPR      (SPI3_BASE_ADDR + SPIx_CRCPR_OFFSET)    // SPI3 CRC polynomial register (not used in I2S mode)
#define SPI3_RXCRCR     (SPI3_BASE_ADDR + SPIx_RXCRCR_OFFSET)   // SPI3 RX CRC register (not used in I2S mode)
#define SPI3_TXCRCR     (SPI3_BASE_ADDR + SPIx_TXCRCR_OFFSET)   // SPI3 TX CRC register (not used in I2S mode)
#define I2S3_I2SCFGR    (SPI3_BASE_ADDR + SPIx_I2SCFGR_OFFSET)  // I2S3 configuration register
#define I2S3_I2SPR      (SPI3_BASE_ADDR + SPIx_I2SPR_OFFSET)    // I2S3 prescaler register

#endif // SPI3_H
