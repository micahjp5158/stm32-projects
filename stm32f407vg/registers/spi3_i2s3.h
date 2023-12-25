
/*
 * spi3_i2s3.h
 *
 * Defines the SPI3 / I2S3 register addresses
 */

#ifndef SPI3_I2S3_H
#define SPI3_I2S3_H

#include "spix_i2sx.h"

/* SPI3 / I2S3 peripheral base address from STM32F407VG reference manual, Table 1 */
#define SPI3_I2S3_BASE_ADDR     0x40003C00U

/* SPI3 / I2S3 register addresses */
#define SPI3_CR1        (SPI3_I2S3_BASE_ADDR + SPI_I2Sx_SPI_CR1_OFFSET)      // SPI3 control register 1 (not used in I2S mode)
#define SPI3_I2S3_CR2   (SPI3_I2S3_BASE_ADDR + SPI_I2Sx_SPI_CR2_OFFSET)      // SPI3 / I2S3 control register 2
#define SPI3_I2S3_SR    (SPI3_I2S3_BASE_ADDR + SPI_I2Sx_SPI_SR_OFFSET)       // SPI3 / I2S3 data register
#define SPI3_I2S3_DR    (SPI3_I2S3_BASE_ADDR + SPI_I2Sx_SPI_DR_OFFSET)       // SPI3 / I2S3 data register
#define SPI3_CRCPR      (SPI3_I2S3_BASE_ADDR + SPI_I2Sx_SPI_CRCPR_OFFSET)    // SPI3 CRC polynomial register (not used in I2S mode)
#define SPI3_RXCRCR     (SPI3_I2S3_BASE_ADDR + SPI_I2Sx_SPI_RXCRCR_OFFSET)   // SPI3 RX CRC register (not used in I2S mode)
#define SPI3_TXCRCR     (SPI3_I2S3_BASE_ADDR + SPI_I2Sx_SPI_TXCRCR_OFFSET)   // SPI3 TX CRC register (not used in I2S mode)
#define I2S3_I2SCFGR    (SPI3_I2S3_BASE_ADDR + SPI_I2Sx_SPI_I2SCFGR_OFFSET)  // I2S3 configuration register
#define I2S3_I2SPR      (SPI3_I2S3_BASE_ADDR + SPI_I2Sx_SPI_I2SPR_OFFSET)    // I2S3 prescaler register

#endif // SPI3_I2S3_H
