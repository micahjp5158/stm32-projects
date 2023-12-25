
/*
 * spix_i2sx.h
 *
 * Defines the SPI and I2S register offsets, which are shared for all SPI_I2S channels
 */

#ifndef SPI_I2Sx_H
#define SPI_I2Sx_H

#include "stm32f407vg.h"

/* SPI / I2S register offsets from STM32F407VG reference manual Table 129 */
#define SPI_I2Sx_SPI_CR1_OFFSET     0x00U
#define SPI_I2Sx_SPI_CR2_OFFSET     0x04U
#define SPI_I2Sx_SPI_SR_OFFSET      0x08U
#define SPI_I2Sx_SPI_DR_OFFSET      0x0CU
#define SPI_I2Sx_SPI_CRCPR_OFFSET   0x10U
#define SPI_I2Sx_SPI_RXCRCR_OFFSET  0x14U
#define SPI_I2Sx_SPI_TXCRCR_OFFSET  0x18U
#define SPI_I2Sx_SPI_I2SCFGR_OFFSET 0x1CU
#define SPI_I2Sx_SPI_I2SPR_OFFSET   0x20U

#endif // SPI_I2Sx_H
