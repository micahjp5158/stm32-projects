
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

#endif // SPIx_H
