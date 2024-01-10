/*
 * rng.h
 *
 * Defines the random number generator register addresses
 */

#ifndef RNG_H
#define RNG_H

#include "stm32f407vg.h"

/* RNG peripheral base address from STM32F407VG reference manual, Table 1 */
#define RNG_BASE_ADDR   0x50060800U

/* RCC register offsets from STM32F407VG reference manual Table 116 */
#define RNG_CR_OFFSET   0x00U
#define RNG_SR_OFFSET   0x04U
#define RNG_DR_OFFSET   0x08U

/* RNG register address definitions */
#define RNG_CR  (RNG_BASE_ADDR + RNG_CR_OFFSET)
#define RNG_SR  (RNG_BASE_ADDR + RNG_SR_OFFSET)
#define RNG_DR  (RNG_BASE_ADDR + RNG_DR_OFFSET)

/* RNG_CR bit definitions */
#define RNG_CR_RNGEN    BIT2    // Random number generator enable
#define RNG_CR_IE       BIT3    // Interrupt enable

/* RNG_SR bit definitions */
#define RNG_SR_DRDY     BIT0    // Data ready
#define RNG_SR_CECS     BIT1    // Clock error current status
#define RNG_SR_SECS     BIT2    // Seed error current status
#define RNG_SR_CEIS     BIT5    // Clock error interrupt status
#define RNG_SR_SEIS     BIT6    // Seed error interrupt status

/* RNG_DR bit definitions */
#define RNG_DR0     BIT0    // Random data [0]
#define RNG_DR1     BIT1    // Random data [1]
#define RNG_DR2     BIT2    // Random data [2]
#define RNG_DR3     BIT3    // Random data [3]
#define RNG_DR4     BIT4    // Random data [4]
#define RNG_DR5     BIT5    // Random data [5]
#define RNG_DR6     BIT6    // Random data [6]
#define RNG_DR7     BIT7    // Random data [7]
#define RNG_DR8     BIT8    // Random data [8]
#define RNG_DR9     BIT9    // Random data [9]
#define RNG_DR10    BIT10   // Random data [10]
#define RNG_DR11    BIT11   // Random data [11]
#define RNG_DR12    BIT12   // Random data [12]
#define RNG_DR13    BIT13   // Random data [13]
#define RNG_DR14    BIT14   // Random data [14]
#define RNG_DR15    BIT15   // Random data [15]
#define RNG_DR16    BIT16   // Random data [16]
#define RNG_DR17    BIT17   // Random data [17]
#define RNG_DR18    BIT18   // Random data [18]
#define RNG_DR19    BIT19   // Random data [19]
#define RNG_DR20    BIT20   // Random data [20]
#define RNG_DR21    BIT21   // Random data [21]
#define RNG_DR22    BIT22   // Random data [22]
#define RNG_DR23    BIT23   // Random data [23]
#define RNG_DR24    BIT24   // Random data [24]
#define RNG_DR25    BIT25   // Random data [25]
#define RNG_DR26    BIT26   // Random data [26]
#define RNG_DR27    BIT27   // Random data [27]
#define RNG_DR28    BIT28   // Random data [28]
#define RNG_DR29    BIT29   // Random data [29]
#define RNG_DR30    BIT30   // Random data [30]
#define RNG_DR31    BIT31   // Random data [31]

#endif // RNG_H