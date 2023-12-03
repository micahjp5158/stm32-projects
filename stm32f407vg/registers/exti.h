
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

/* EXTI_IMR bit definitions */
#define EXTI_IMR_MR0    BIT0    // Interrupt mask on line 0
#define EXTI_IMR_MR1    BIT1    // Interrupt mask on line 1
#define EXTI_IMR_MR2    BIT2    // Interrupt mask on line 2
#define EXTI_IMR_MR3    BIT3    // Interrupt mask on line 3
#define EXTI_IMR_MR4    BIT4    // Interrupt mask on line 4
#define EXTI_IMR_MR5    BIT5    // Interrupt mask on line 5
#define EXTI_IMR_MR6    BIT6    // Interrupt mask on line 6
#define EXTI_IMR_MR7    BIT7    // Interrupt mask on line 7
#define EXTI_IMR_MR8    BIT8    // Interrupt mask on line 8
#define EXTI_IMR_MR9    BIT9    // Interrupt mask on line 9
#define EXTI_IMR_MR10   BIT10   // Interrupt mask on line 10
#define EXTI_IMR_MR11   BIT11   // Interrupt mask on line 11
#define EXTI_IMR_MR12   BIT12   // Interrupt mask on line 12
#define EXTI_IMR_MR13   BIT13   // Interrupt mask on line 13
#define EXTI_IMR_MR14   BIT14   // Interrupt mask on line 14
#define EXTI_IMR_MR15   BIT15   // Interrupt mask on line 15
#define EXTI_IMR_MR16   BIT16   // Interrupt mask on line 16
#define EXTI_IMR_MR17   BIT17   // Interrupt mask on line 17
#define EXTI_IMR_MR18   BIT18   // Interrupt mask on line 18
#define EXTI_IMR_MR19   BIT19   // Interrupt mask on line 19
#define EXTI_IMR_MR20   BIT20   // Interrupt mask on line 20
#define EXTI_IMR_MR21   BIT21   // Interrupt mask on line 21
#define EXTI_IMR_MR22   BIT22   // Interrupt mask on line 22

/* EXTI_EMR bit definitions */
#define EXTI_EMR_MR0    BIT0    // Event mask on line 0
#define EXTI_EMR_MR1    BIT1    // Event mask on line 1
#define EXTI_EMR_MR2    BIT2    // Event mask on line 2
#define EXTI_EMR_MR3    BIT3    // Event mask on line 3
#define EXTI_EMR_MR4    BIT4    // Event mask on line 4
#define EXTI_EMR_MR5    BIT5    // Event mask on line 5
#define EXTI_EMR_MR6    BIT6    // Event mask on line 6
#define EXTI_EMR_MR7    BIT7    // Event mask on line 7
#define EXTI_EMR_MR8    BIT8    // Event mask on line 8
#define EXTI_EMR_MR9    BIT9    // Event mask on line 9
#define EXTI_EMR_MR10   BIT10   // Event mask on line 10
#define EXTI_EMR_MR11   BIT11   // Event mask on line 11
#define EXTI_EMR_MR12   BIT12   // Event mask on line 12
#define EXTI_EMR_MR13   BIT13   // Event mask on line 13
#define EXTI_EMR_MR14   BIT14   // Event mask on line 14
#define EXTI_EMR_MR15   BIT15   // Event mask on line 15
#define EXTI_EMR_MR16   BIT16   // Event mask on line 16
#define EXTI_EMR_MR17   BIT17   // Event mask on line 17
#define EXTI_EMR_MR18   BIT18   // Event mask on line 18
#define EXTI_EMR_MR19   BIT19   // Event mask on line 19
#define EXTI_EMR_MR20   BIT20   // Event mask on line 20
#define EXTI_EMR_MR21   BIT21   // Event mask on line 21
#define EXTI_EMR_MR22   BIT22   // Event mask on line 22

/* EXTI_RTSR bit definitions */
#define EXTI_RTSR_TR0   BIT0    // Rising trigger event configuration bit of line 0
#define EXTI_RTSR_TR1   BIT1    // Rising trigger event configuration bit of line 1
#define EXTI_RTSR_TR2   BIT2    // Rising trigger event configuration bit of line 2
#define EXTI_RTSR_TR3   BIT3    // Rising trigger event configuration bit of line 3
#define EXTI_RTSR_TR4   BIT4    // Rising trigger event configuration bit of line 4
#define EXTI_RTSR_TR5   BIT5    // Rising trigger event configuration bit of line 5
#define EXTI_RTSR_TR6   BIT6    // Rising trigger event configuration bit of line 6
#define EXTI_RTSR_TR7   BIT7    // Rising trigger event configuration bit of line 7
#define EXTI_RTSR_TR8   BIT8    // Rising trigger event configuration bit of line 8
#define EXTI_RTSR_TR9   BIT9    // Rising trigger event configuration bit of line 9
#define EXTI_RTSR_TR10  BIT10   // Rising trigger event configuration bit of line 10
#define EXTI_RTSR_TR11  BIT11   // Rising trigger event configuration bit of line 11
#define EXTI_RTSR_TR12  BIT12   // Rising trigger event configuration bit of line 12
#define EXTI_RTSR_TR13  BIT13   // Rising trigger event configuration bit of line 13
#define EXTI_RTSR_TR14  BIT14   // Rising trigger event configuration bit of line 14
#define EXTI_RTSR_TR15  BIT15   // Rising trigger event configuration bit of line 15
#define EXTI_RTSR_TR16  BIT16   // Rising trigger event configuration bit of line 16
#define EXTI_RTSR_TR17  BIT17   // Rising trigger event configuration bit of line 17
#define EXTI_RTSR_TR18  BIT18   // Rising trigger event configuration bit of line 18
#define EXTI_RTSR_TR19  BIT19   // Rising trigger event configuration bit of line 19
#define EXTI_RTSR_TR20  BIT20   // Rising trigger event configuration bit of line 20
#define EXTI_RTSR_TR21  BIT21   // Rising trigger event configuration bit of line 21
#define EXTI_RTSR_TR22  BIT22   // Rising trigger event configuration bit of line 22

/* EXTI_FTSR bit definitions */
#define EXTI_FTSR_TR0   BIT0    // Falling trigger event configuration bit of line 0
#define EXTI_FTSR_TR1   BIT1    // Falling trigger event configuration bit of line 1
#define EXTI_FTSR_TR2   BIT2    // Falling trigger event configuration bit of line 2
#define EXTI_FTSR_TR3   BIT3    // Falling trigger event configuration bit of line 3
#define EXTI_FTSR_TR4   BIT4    // Falling trigger event configuration bit of line 4
#define EXTI_FTSR_TR5   BIT5    // Falling trigger event configuration bit of line 5
#define EXTI_FTSR_TR6   BIT6    // Falling trigger event configuration bit of line 6
#define EXTI_FTSR_TR7   BIT7    // Falling trigger event configuration bit of line 7
#define EXTI_FTSR_TR8   BIT8    // Falling trigger event configuration bit of line 8
#define EXTI_FTSR_TR9   BIT9    // Falling trigger event configuration bit of line 9
#define EXTI_FTSR_TR10  BIT10   // Falling trigger event configuration bit of line 10
#define EXTI_FTSR_TR11  BIT11   // Falling trigger event configuration bit of line 11
#define EXTI_FTSR_TR12  BIT12   // Falling trigger event configuration bit of line 12
#define EXTI_FTSR_TR13  BIT13   // Falling trigger event configuration bit of line 13
#define EXTI_FTSR_TR14  BIT14   // Falling trigger event configuration bit of line 14
#define EXTI_FTSR_TR15  BIT15   // Falling trigger event configuration bit of line 15
#define EXTI_FTSR_TR16  BIT16   // Falling trigger event configuration bit of line 16
#define EXTI_FTSR_TR17  BIT17   // Falling trigger event configuration bit of line 17
#define EXTI_FTSR_TR18  BIT18   // Falling trigger event configuration bit of line 18
#define EXTI_FTSR_TR19  BIT19   // Falling trigger event configuration bit of line 19
#define EXTI_FTSR_TR20  BIT20   // Falling trigger event configuration bit of line 20
#define EXTI_FTSR_TR21  BIT21   // Falling trigger event configuration bit of line 21
#define EXTI_FTSR_TR22  BIT22   // Falling trigger event configuration bit of line 22

/* EXTI_SWIER bit definitions */
#define EXTI_SWIER_SWIER0   BIT0    // Software interrupt on line 0
#define EXTI_SWIER_SWIER1   BIT1    // Software interrupt on line 1
#define EXTI_SWIER_SWIER2   BIT2    // Software interrupt on line 2
#define EXTI_SWIER_SWIER3   BIT3    // Software interrupt on line 3
#define EXTI_SWIER_SWIER4   BIT4    // Software interrupt on line 4
#define EXTI_SWIER_SWIER5   BIT5    // Software interrupt on line 5
#define EXTI_SWIER_SWIER6   BIT6    // Software interrupt on line 6
#define EXTI_SWIER_SWIER7   BIT7    // Software interrupt on line 7
#define EXTI_SWIER_SWIER8   BIT8    // Software interrupt on line 8
#define EXTI_SWIER_SWIER9   BIT9    // Software interrupt on line 9
#define EXTI_SWIER_SWIER10  BIT10   // Software interrupt on line 10
#define EXTI_SWIER_SWIER11  BIT11   // Software interrupt on line 11
#define EXTI_SWIER_SWIER12  BIT12   // Software interrupt on line 12
#define EXTI_SWIER_SWIER13  BIT13   // Software interrupt on line 13
#define EXTI_SWIER_SWIER14  BIT14   // Software interrupt on line 14
#define EXTI_SWIER_SWIER15  BIT15   // Software interrupt on line 15
#define EXTI_SWIER_SWIER16  BIT16   // Software interrupt on line 16
#define EXTI_SWIER_SWIER17  BIT17   // Software interrupt on line 17
#define EXTI_SWIER_SWIER18  BIT18   // Software interrupt on line 18
#define EXTI_SWIER_SWIER19  BIT19   // Software interrupt on line 19
#define EXTI_SWIER_SWIER20  BIT20   // Software interrupt on line 20
#define EXTI_SWIER_SWIER21  BIT21   // Software interrupt on line 21
#define EXTI_SWIER_SWIER22  BIT22   // Software interrupt on line 22

/* EXTI_PR bit defitions */
#define EXTI_PR_PR0     BIT0    // Pending interrupt on line 0
#define EXTI_PR_PR1     BIT1    // Pending interrupt on line 1
#define EXTI_PR_PR2     BIT2    // Pending interrupt on line 2
#define EXTI_PR_PR3     BIT3    // Pending interrupt on line 3
#define EXTI_PR_PR4     BIT4    // Pending interrupt on line 4
#define EXTI_PR_PR5     BIT5    // Pending interrupt on line 5
#define EXTI_PR_PR6     BIT6    // Pending interrupt on line 6
#define EXTI_PR_PR7     BIT7    // Pending interrupt on line 7
#define EXTI_PR_PR8     BIT8    // Pending interrupt on line 8
#define EXTI_PR_PR9     BIT9    // Pending interrupt on line 9
#define EXTI_PR_PR10    BIT10   // Pending interrupt on line 10
#define EXTI_PR_PR11    BIT11   // Pending interrupt on line 11
#define EXTI_PR_PR12    BIT12   // Pending interrupt on line 12
#define EXTI_PR_PR13    BIT13   // Pending interrupt on line 13
#define EXTI_PR_PR14    BIT14   // Pending interrupt on line 14
#define EXTI_PR_PR15    BIT15   // Pending interrupt on line 15
#define EXTI_PR_PR16    BIT16   // Pending interrupt on line 16
#define EXTI_PR_PR17    BIT17   // Pending interrupt on line 17
#define EXTI_PR_PR18    BIT18   // Pending interrupt on line 18
#define EXTI_PR_PR19    BIT19   // Pending interrupt on line 19
#define EXTI_PR_PR20    BIT20   // Pending interrupt on line 20
#define EXTI_PR_PR21    BIT21   // Pending interrupt on line 21
#define EXTI_PR_PR22    BIT22   // Pending interrupt on line 22

#endif // EXTI_H
