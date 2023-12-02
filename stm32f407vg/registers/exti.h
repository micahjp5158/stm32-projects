
/*
 * exti.h
 *
 * Defines the EXTI register addresses
 */

#ifndef EXTI_H
#define EXTI_H

#include "stm32f407vg.h"

/* EXTI peripheral base address from STM32F407VG reference manual, Table 1 */
#define EXTI_BASE_ADDR     0x40013C00U

/* EXTI register offsets from STM32F407VG reference manual Table 63 */
#define EXTI_IMR_OFFEST     0x00U
#define EXTI_EMR_OFFSET     0x04U
#define EXTI_RTSR_OFFSET    0x08U
#define EXTI_FTSR_OFFSET    0x0CU
#define EXTI_SWIER_OFFSET   0x10U
#define EXTI_PR_OFFSET      0x14U

/* EXTI register addresses */
#define EXTI_IMR    (EXTI_BASE_ADDR + EXTI_IMR_OFFEST)
#define EXTI_EMR    (EXTI_BASE_ADDR + EXTI_EMR_OFFSET)
#define EXTI_RTSR   (EXTI_BASE_ADDR + EXTI_RTSR_OFFSET)
#define EXTI_FTSR   (EXTI_BASE_ADDR + EXTI_FTSR_OFFSET)
#define EXTI_SWIER  (EXTI_BASE_ADDR + EXTI_SWIER_OFFSET)
#define EXTI_PR     (EXTI_BASE_ADDR + EXTI_PR_OFFSET)

/* EXTI_IMR and EXTI_EMR bit definitions */
#define MR0     BIT0
#define MR1     BIT1
#define MR2     BIT2
#define MR3     BIT3
#define MR4     BIT4
#define MR5     BIT5
#define MR6     BIT6
#define MR7     BIT7
#define MR8     BIT8
#define MR9     BIT9
#define MR10    BIT10
#define MR11    BIT11
#define MR12    BIT12
#define MR13    BIT13
#define MR14    BIT14
#define MR15    BIT15
#define MR16    BIT16
#define MR17    BIT17
#define MR18    BIT18
#define MR19    BIT19
#define MR20    BIT20
#define MR21    BIT21
#define MR22    BIT22

/* EXTI_RTSR and EXTI_FTSR bit definitions */
#define TR0     BIT0
#define TR1     BIT1
#define TR2     BIT2
#define TR3     BIT3
#define TR4     BIT4
#define TR5     BIT5
#define TR6     BIT6
#define TR7     BIT7
#define TR8     BIT8
#define TR9     BIT9
#define TR10    BIT10
#define TR11    BIT11
#define TR12    BIT12
#define TR13    BIT13
#define TR14    BIT14
#define TR15    BIT15
#define TR16    BIT16
#define TR17    BIT17
#define TR18    BIT18
#define TR19    BIT19
#define TR20    BIT20
#define TR21    BIT21
#define TR22    BIT22

/* EXTI_SWIER bit definitions */
#define SWIER0  BIT0
#define SWIER1  BIT1
#define SWIER2  BIT2
#define SWIER3  BIT3
#define SWIER4  BIT4
#define SWIER5  BIT5
#define SWIER6  BIT6
#define SWIER7  BIT7
#define SWIER8  BIT8
#define SWIER9  BIT9
#define SWIER10 BIT10
#define SWIER11 BIT11
#define SWIER12 BIT12
#define SWIER13 BIT13
#define SWIER14 BIT14
#define SWIER15 BIT15
#define SWIER16 BIT16
#define SWIER17 BIT17
#define SWIER18 BIT18
#define SWIER19 BIT19
#define SWIER20 BIT20
#define SWIER21 BIT21
#define SWIER22 BIT22

/* EXTI_PR bit defitions */
#define PR0     BIT0
#define PR1     BIT1
#define PR2     BIT2
#define PR3     BIT3
#define PR4     BIT4
#define PR5     BIT5
#define PR6     BIT6
#define PR7     BIT7
#define PR8     BIT8
#define PR9     BIT9
#define PR10    BIT10
#define PR11    BIT11
#define PR12    BIT12
#define PR13    BIT13
#define PR14    BIT14
#define PR15    BIT15
#define PR16    BIT16
#define PR17    BIT17
#define PR18    BIT18
#define PR19    BIT19
#define PR20    BIT20
#define PR21    BIT21
#define PR22    BIT22

#endif // EXTI_H
