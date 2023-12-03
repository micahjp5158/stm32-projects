
/*
 * syscfg.h
 *
 * Defines the SYSCFG register addresses
 */

#ifndef SYSCFG_H
#define SYSCFG_H

/* SYSCFG peripheral base address from STM32F407VG reference manual, Table 1 */
#define SYSCFG_BASE_ADDR     0x40013C00U

/* SYSCFG register offsets from STM32F407VG reference manual Table 40 */
#define SYSCFG_MEMRMP_OFFEST    0x00U
#define SYSCFG_PMC_OFFSET       0x04U
#define SYSCFG_EXTICR1_OFFSET   0x08U
#define SYSCFG_EXTICR2_OFFSET   0x0CU
#define SYSCFG_EXTICR3_OFFSET   0x10U
#define SYSCFG_EXTICR4_OFFSET   0x14U
#define SYSCFG_CMPCR_OFFSET     0x20U

/* SYSCFG register addresses */
#define SYSCFG_MEMRMP   (SYSCFG_BASE_ADDR + SYSCFG_MEMRMP_OFFEST)   // SYSCFG memory remap register
#define SYSCFG_PMC      (SYSCFG_BASE_ADDR + SYSCFG_PMC_OFFSET)      // SYSCFG peripheral mode configuration register
#define SYSCFG_EXTICR1  (SYSCFG_BASE_ADDR + SYSCFG_EXTICR1_OFFSET)  // SYSCFG external interrupt configuration register 1
#define SYSCFG_EXTICR2  (SYSCFG_BASE_ADDR + SYSCFG_EXTICR2_OFFSET)  // SYSCFG external interrupt configuration register 2
#define SYSCFG_EXTICR3  (SYSCFG_BASE_ADDR + SYSCFG_EXTICR3_OFFSET)  // SYSCFG external interrupt configuration register 3
#define SYSCFG_EXTICR4  (SYSCFG_BASE_ADDR + SYSCFG_EXTICR4_OFFSET)  // SYSCFG external interrupt configuration register 4
#define SYSCFG_CMPCR    (SYSCFG_BASE_ADDR + SYSCFG_CMPCR_OFFSET)    // Compensation cell control register

/* SYSCFG_MEMRMP bit definitions */
#define MEM_MODE_0  BIT0    // Memory mapping selection [0]
#define MEM_MODE_1  BIT1    // Memory mapping selection [1]

/* SYSCFG_PMC bit definitions */
#define MMI_RMII_SEL    BIT23   // Ethernet PHY interface selection

/* SYSCFG_EXTICR1 bit definitions */
#define EXTI0_0     BIT0    // EXTI 0 configuration [0]
#define EXTI0_1     BIT1    // EXTI 0 configuration [1]
#define EXTI0_2     BIT2    // EXTI 0 configuration [2]
#define EXTI0_3     BIT3    // EXTI 0 configuration [3]
#define EXTI1_0     BIT4    // EXTI 1 configuration [0]
#define EXTI1_1     BIT5    // EXTI 1 configuration [1]
#define EXTI1_2     BIT6    // EXTI 1 configuration [2]
#define EXTI1_3     BIT7    // EXTI 1 configuration [3]
#define EXTI2_0     BIT8    // EXTI 2 configuration [0]
#define EXTI2_1     BIT9    // EXTI 2 configuration [1]
#define EXTI2_2     BIT10   // EXTI 2 configuration [2]
#define EXTI2_3     BIT11   // EXTI 2 configuration [3]
#define EXTI3_0     BIT12   // EXTI 3 configuration [0]
#define EXTI3_1     BIT13   // EXTI 3 configuration [1]
#define EXTI3_2     BIT14   // EXTI 3 configuration [2]
#define EXTI3_3     BIT15   // EXTI 3 configuration [3]

/* SYSCFG_EXTICR2 bit definitions */
#define EXTI4_0     BIT0    // EXTI 4 configuration [0]
#define EXTI4_1     BIT1    // EXTI 4 configuration [1]
#define EXTI4_2     BIT2    // EXTI 4 configuration [2]
#define EXTI4_3     BIT3    // EXTI 4 configuration [3]
#define EXTI5_0     BIT4    // EXTI 5 configuration [0]
#define EXTI5_1     BIT5    // EXTI 5 configuration [1]
#define EXTI5_2     BIT6    // EXTI 5 configuration [2]
#define EXTI5_3     BIT7    // EXTI 5 configuration [3]
#define EXTI6_0     BIT8    // EXTI 6 configuration [0]
#define EXTI6_1     BIT9    // EXTI 6 configuration [1]
#define EXTI6_2     BIT10   // EXTI 6 configuration [2]
#define EXTI6_3     BIT11   // EXTI 6 configuration [3]
#define EXTI7_0     BIT12   // EXTI 7 configuration [0]
#define EXTI7_1     BIT13   // EXTI 7 configuration [1]
#define EXTI7_2     BIT14   // EXTI 7 configuration [2]
#define EXTI7_3     BIT15   // EXTI 7 configuration [3]

/* SYSCFG_EXTICR3 bit definitions */
#define EXTI8_0     BIT0    // EXTI 8 configuration [0]
#define EXTI8_1     BIT1    // EXTI 8 configuration [1]
#define EXTI8_2     BIT2    // EXTI 8 configuration [2]
#define EXTI8_3     BIT3    // EXTI 8 configuration [3]
#define EXTI9_0     BIT4    // EXTI 9 configuration [0]
#define EXTI9_1     BIT5    // EXTI 9 configuration [1]
#define EXTI9_2     BIT6    // EXTI 9 configuration [2]
#define EXTI9_3     BIT7    // EXTI 9 configuration [3]
#define EXTI10_0    BIT8    // EXTI 10 configuration [0]
#define EXTI10_1    BIT9    // EXTI 10 configuration [1]
#define EXTI10_2    BIT10   // EXTI 10 configuration [2]
#define EXTI10_3    BIT11   // EXTI 10 configuration [3]
#define EXTI11_0    BIT12   // EXTI 11 configuration [0]
#define EXTI11_1    BIT13   // EXTI 11 configuration [1]
#define EXTI11_2    BIT14   // EXTI 11 configuration [2]
#define EXTI11_3    BIT15   // EXTI 11 configuration [3]

/* SYSCFG_EXTICR4 bit definitions */
#define EXTI12_0    BIT0    // EXTI 12 configuration [0]
#define EXTI12_1    BIT1    // EXTI 12 configuration [1]
#define EXTI12_2    BIT2    // EXTI 12 configuration [2]
#define EXTI12_3    BIT3    // EXTI 12 configuration [3]
#define EXTI13_0    BIT4    // EXTI 13 configuration [0]
#define EXTI13_1    BIT5    // EXTI 13 configuration [1]
#define EXTI13_2    BIT6    // EXTI 13 configuration [2]
#define EXTI13_3    BIT7    // EXTI 13 configuration [3]
#define EXTI14_0    BIT8    // EXTI 14 configuration [0]
#define EXTI14_1    BIT9    // EXTI 14 configuration [1]
#define EXTI14_2    BIT10   // EXTI 14 configuration [2]
#define EXTI14_3    BIT11   // EXTI 14 configuration [3]
#define EXTI15_0    BIT12   // EXTI 15 configuration [0]
#define EXTI15_1    BIT13   // EXTI 15 configuration [1]
#define EXTI15_2    BIT14   // EXTI 15 configuration [2]
#define EXTI15_3    BIT15   // EXTI 15 configuration [3]

/* SYSCFG_CMPCR bit definitions */
#define CMP_PD  BIT0    // Compensation cell power-down
#define READY   BIT8    // Compensation cell ready flag

#endif // SYSCFG_H
