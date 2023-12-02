
/*
 * gpiox.h
 *
 * Defines the GPIO register offsets, which are shared for all GPIO channels
 */

#ifndef GPIOx_H
#define GPIOx_H

#include "stm32f407vg.h"

/* GPIOx register offsets from STM32F407VG reference manual Table 39 */
#define GPIOx_MODER_OFFSET		0x00U
#define GPIOx_OTYPER_OFFSET		0x04U
#define GPIOx_OSPEEDR_OFFSET	0x08U
#define GPIOx_PUPDR_OFFSET		0x0CU
#define GPIOx_IDR_OFFSET		0x10U
#define GPIOx_ODR_OFFSET		0x14U
#define GPIOx_BSRR_OFFSET		0x18U
#define GPIOx_LCKR_OFFSET		0x1CU
#define GPIOx_AFRL_OFFSET		0x20U
#define GPIOx_AFRH_OFFSET		0x24U

/* GPIOx_MODER bit definitions */
#define MODER0_0    BIT0
#define MODER0_1    BIT1
#define MODER1_0    BIT2
#define MODER1_1    BIT3
#define MODER2_0    BIT4
#define MODER2_1    BIT5
#define MODER3_0    BIT6
#define MODER3_1    BIT7
#define MODER4_0    BIT8
#define MODER4_1    BIT9
#define MODER5_0    BIT10
#define MODER5_1    BIT11
#define MODER6_0    BIT12
#define MODER6_1    BIT13
#define MODER7_0    BIT14
#define MODER7_1    BIT15
#define MODER8_0    BIT16
#define MODER8_1    BIT17
#define MODER9_0    BIT18
#define MODER9_1    BIT19
#define MODER10_0   BIT20
#define MODER10_1   BIT21
#define MODER11_0   BIT22
#define MODER11_1   BIT23
#define MODER12_0   BIT24
#define MODER12_1   BIT25
#define MODER13_0   BIT26
#define MODER13_1   BIT27
#define MODER14_0   BIT28
#define MODER14_1   BIT29
#define MODER15_0   BIT30
#define MODER15_1   BIT31

/* GPIOx_OTYPER bit definitions */
#define OT0     BIT0
#define OT1     BIT1
#define OT2     BIT2
#define OT3     BIT3
#define OT4     BIT4
#define OT5     BIT5
#define OT6     BIT6
#define OT7     BIT7
#define OT8     BIT8
#define OT9     BIT9
#define OT10    BIT10
#define OT11    BIT11
#define OT12    BIT12
#define OT13    BIT13
#define OT14    BIT14
#define OT15    BIT15

/* GPIOx_OSPEEDR bit definitions */
#define OSPEEDR0_0  BIT0
#define OSPEEDR0_1  BIT1
#define OSPEEDR1_0  BIT2
#define OSPEEDR1_1  BIT3
#define OSPEEDR2_0  BIT4
#define OSPEEDR2_1  BIT5
#define OSPEEDR3_0  BIT6
#define OSPEEDR3_1  BIT7
#define OSPEEDR4_0  BIT8
#define OSPEEDR4_1  BIT9
#define OSPEEDR5_0  BIT10
#define OSPEEDR5_1  BIT11
#define OSPEEDR6_0  BIT12
#define OSPEEDR6_1  BIT13
#define OSPEEDR7_0  BIT14
#define OSPEEDR7_1  BIT15
#define OSPEEDR8_0  BIT16
#define OSPEEDR8_1  BIT17
#define OSPEEDR9_0  BIT18
#define OSPEEDR9_1  BIT19
#define OSPEEDR10_0 BIT20
#define OSPEEDR10_1 BIT21
#define OSPEEDR11_0 BIT22
#define OSPEEDR11_1 BIT23
#define OSPEEDR12_0 BIT24
#define OSPEEDR12_1 BIT25
#define OSPEEDR13_0 BIT26
#define OSPEEDR13_1 BIT27
#define OSPEEDR14_0 BIT28
#define OSPEEDR14_1 BIT29
#define OSPEEDR15_0 BIT30
#define OSPEEDR15_1 BIT31

/* GPIOx_PUPDR bit definitions */
#define PUPDR0_0    BIT0
#define PUPDR0_1    BIT1
#define PUPDR1_0    BIT2
#define PUPDR1_1    BIT3
#define PUPDR2_0    BIT4
#define PUPDR2_1    BIT5
#define PUPDR3_0    BIT6
#define PUPDR3_1    BIT7
#define PUPDR4_0    BIT8
#define PUPDR4_1    BIT9
#define PUPDR5_0    BIT10
#define PUPDR5_1    BIT11
#define PUPDR6_0    BIT12
#define PUPDR6_1    BIT13
#define PUPDR7_0    BIT14
#define PUPDR7_1    BIT15
#define PUPDR8_0    BIT16
#define PUPDR8_1    BIT17
#define PUPDR9_0    BIT18
#define PUPDR9_1    BIT19
#define PUPDR10_0   BIT20
#define PUPDR10_1   BIT21
#define PUPDR11_0   BIT22
#define PUPDR11_1   BIT23
#define PUPDR12_0   BIT24
#define PUPDR12_1   BIT25
#define PUPDR13_0   BIT26
#define PUPDR13_1   BIT27
#define PUPDR14_0   BIT28
#define PUPDR14_1   BIT29
#define PUPDR15_0   BIT30
#define PUPDR15_1   BIT31

/* GPIOx_IDR bit definitions */
#define IDR0    BIT0
#define IDR1    BIT1
#define IDR2    BIT2
#define IDR3    BIT3
#define IDR4    BIT4
#define IDR5    BIT5
#define IDR6    BIT6
#define IDR7    BIT7
#define IDR8    BIT8
#define IDR9    BIT9
#define IDR10   BIT10
#define IDR11   BIT11
#define IDR12   BIT12
#define IDR13   BIT13
#define IDR14   BIT14
#define IDR15   BIT15

/* GPIOx_AFRL bit definitions */
#define AFRL0_0 BIT0
#define AFRL0_1 BIT1
#define AFRL0_2 BIT2
#define AFRL0_3 BIT3
#define AFRL1_0 BIT4
#define AFRL1_1 BIT5
#define AFRL1_2 BIT6
#define AFRL1_3 BIT7
#define AFRL2_0 BIT8
#define AFRL2_1 BIT9
#define AFRL2_2 BIT10
#define AFRL2_3 BIT11
#define AFRL3_0 BIT12
#define AFRL3_1 BIT13
#define AFRL3_2 BIT14
#define AFRL3_3 BIT15
#define AFRL4_0 BIT16
#define AFRL4_1 BIT17
#define AFRL4_2 BIT18
#define AFRL4_3 BIT19
#define AFRL5_0 BIT20
#define AFRL5_1 BIT21
#define AFRL5_2 BIT22
#define AFRL5_3 BIT23
#define AFRL6_0 BIT24
#define AFRL6_1 BIT25
#define AFRL6_2 BIT26
#define AFRL6_3 BIT27
#define AFRL7_0 BIT28
#define AFRL7_1 BIT29
#define AFRL7_2 BIT30
#define AFRL7_3 BIT31

/* GPIOx_AFRH bit definitions */
#define ARFH8_0     BIT0
#define ARFH8_1     BIT1
#define ARFH8_2     BIT2
#define ARFH8_3     BIT3
#define ARFH9_0     BIT4
#define ARFH9_1     BIT5
#define ARFH9_2     BIT6
#define ARFH9_3     BIT7
#define ARFH10_0    BIT8
#define ARFH10_1    BIT9
#define ARFH10_2    BIT10
#define ARFH10_3    BIT11
#define ARFH11_0    BIT12
#define ARFH11_1    BIT13
#define ARFH11_2    BIT14
#define ARFH11_3    BIT15
#define ARFH12_0    BIT16
#define ARFH12_1    BIT17
#define ARFH12_2    BIT18
#define ARFH12_3    BIT19
#define ARFH13_0    BIT20
#define ARFH13_1    BIT21
#define ARFH13_2    BIT22
#define ARFH13_3    BIT23
#define ARFH14_0    BIT24
#define ARFH14_1    BIT25
#define ARFH14_2    BIT26
#define ARFH14_3    BIT27
#define ARFH15_0    BIT28
#define ARFH15_1    BIT29
#define ARFH15_2    BIT30
#define ARFH15_3    BIT31

#endif // GPIOx_H
