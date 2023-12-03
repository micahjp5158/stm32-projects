
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
#define GPIOx_MODER0_0  BIT0    // Port 0 I/O direction mode configuration [0]
#define GPIOx_MODER0_1  BIT1    // Port 0 I/O direction mode configuration [1]
#define GPIOx_MODER1_0  BIT2    // Port 1 I/O direction mode configuration [0]
#define GPIOx_MODER1_1  BIT3    // Port 1 I/O direction mode configuration [1]
#define GPIOx_MODER2_0  BIT4    // Port 2 I/O direction mode configuration [0]
#define GPIOx_MODER2_1  BIT5    // Port 2 I/O direction mode configuration [1]
#define GPIOx_MODER3_0  BIT6    // Port 3 I/O direction mode configuration [0]
#define GPIOx_MODER3_1  BIT7    // Port 3 I/O direction mode configuration [1]
#define GPIOx_MODER4_0  BIT8    // Port 4 I/O direction mode configuration [0]
#define GPIOx_MODER4_1  BIT9    // Port 4 I/O direction mode configuration [1]
#define GPIOx_MODER5_0  BIT10   // Port 5 I/O direction mode configuration [0]
#define GPIOx_MODER5_1  BIT11   // Port 5 I/O direction mode configuration [1]
#define GPIOx_MODER6_0  BIT12   // Port 6 I/O direction mode configuration [0]
#define GPIOx_MODER6_1  BIT13   // Port 6 I/O direction mode configuration [1]
#define GPIOx_MODER7_0  BIT14   // Port 7 I/O direction mode configuration [0]
#define GPIOx_MODER7_1  BIT15   // Port 7 I/O direction mode configuration [1]
#define GPIOx_MODER8_0  BIT16   // Port 8 I/O direction mode configuration [0]
#define GPIOx_MODER8_1  BIT17   // Port 8 I/O direction mode configuration [1]
#define GPIOx_MODER9_0  BIT18   // Port 9 I/O direction mode configuration [0]
#define GPIOx_MODER9_1  BIT19   // Port 9 I/O direction mode configuration [1]
#define GPIOx_MODER10_0 BIT20   // Port 10 I/O direction mode configuration [0]
#define GPIOx_MODER10_1 BIT21   // Port 10 I/O direction mode configuration [1]
#define GPIOx_MODER11_0 BIT22   // Port 11 I/O direction mode configuration [0]
#define GPIOx_MODER11_1 BIT23   // Port 11 I/O direction mode configuration [1]
#define GPIOx_MODER12_0 BIT24   // Port 12 I/O direction mode configuration [0]
#define GPIOx_MODER12_1 BIT25   // Port 12 I/O direction mode configuration [1]
#define GPIOx_MODER13_0 BIT26   // Port 13 I/O direction mode configuration [0]
#define GPIOx_MODER13_1 BIT27   // Port 13 I/O direction mode configuration [1]
#define GPIOx_MODER14_0 BIT28   // Port 14 I/O direction mode configuration [0]
#define GPIOx_MODER14_1 BIT29   // Port 14 I/O direction mode configuration [1]
#define GPIOx_MODER15_0 BIT30   // Port 15 I/O direction mode configuration [0]
#define GPIOx_MODER15_1 BIT31   // Port 15 I/O direction mode configuration [1]

/* GPIOx_OTYPER bit definitions */
#define GPIOx_OTYPER_OT0    BIT0    // Port 0 output type
#define GPIOx_OTYPER_OT1    BIT1    // Port 1 output type
#define GPIOx_OTYPER_OT2    BIT2    // Port 2 output type
#define GPIOx_OTYPER_OT3    BIT3    // Port 3 output type
#define GPIOx_OTYPER_OT4    BIT4    // Port 4 output type
#define GPIOx_OTYPER_OT5    BIT5    // Port 5 output type
#define GPIOx_OTYPER_OT6    BIT6    // Port 6 output type
#define GPIOx_OTYPER_OT7    BIT7    // Port 7 output type
#define GPIOx_OTYPER_OT8    BIT8    // Port 8 output type
#define GPIOx_OTYPER_OT9    BIT9    // Port 9 output type
#define GPIOx_OTYPER_OT10   BIT10   // Port 10 output type
#define GPIOx_OTYPER_OT11   BIT11   // Port 11 output type
#define GPIOx_OTYPER_OT12   BIT12   // Port 12 output type
#define GPIOx_OTYPER_OT13   BIT13   // Port 13 output type
#define GPIOx_OTYPER_OT14   BIT14   // Port 14 output type
#define GPIOx_OTYPER_OT15   BIT15   // Port 15 output type

/* GPIOx_OSPEEDR bit definitions */
#define GPIOx_OSPEEDR0_0    BIT0    // Port 0 output speed configuration [0]
#define GPIOx_OSPEEDR0_1    BIT1    // Port 0 output speed configuration [1]
#define GPIOx_OSPEEDR1_0    BIT2    // Port 1 output speed configuration [0]
#define GPIOx_OSPEEDR1_1    BIT3    // Port 1 output speed configuration [1]
#define GPIOx_OSPEEDR2_0    BIT4    // Port 2 output speed configuration [0]
#define GPIOx_OSPEEDR2_1    BIT5    // Port 2 output speed configuration [1]
#define GPIOx_OSPEEDR3_0    BIT6    // Port 3 output speed configuration [0]
#define GPIOx_OSPEEDR3_1    BIT7    // Port 3 output speed configuration [1]
#define GPIOx_OSPEEDR4_0    BIT8    // Port 4 output speed configuration [0]
#define GPIOx_OSPEEDR4_1    BIT9    // Port 4 output speed configuration [1]
#define GPIOx_OSPEEDR5_0    BIT10   // Port 5 output speed configuration [0]
#define GPIOx_OSPEEDR5_1    BIT11   // Port 5 output speed configuration [1]
#define GPIOx_OSPEEDR6_0    BIT12   // Port 6 output speed configuration [0]
#define GPIOx_OSPEEDR6_1    BIT13   // Port 6 output speed configuration [1]
#define GPIOx_OSPEEDR7_0    BIT14   // Port 7 output speed configuration [0]
#define GPIOx_OSPEEDR7_1    BIT15   // Port 7 output speed configuration [1]
#define GPIOx_OSPEEDR8_0    BIT16   // Port 8 output speed configuration [0]
#define GPIOx_OSPEEDR8_1    BIT17   // Port 8 output speed configuration [1]
#define GPIOx_OSPEEDR9_0    BIT18   // Port 9 output speed configuration [0]
#define GPIOx_OSPEEDR9_1    BIT19   // Port 9 output speed configuration [1]
#define GPIOx_OSPEEDR10_0   BIT20   // Port 10 output speed configuration [0]
#define GPIOx_OSPEEDR10_1   BIT21   // Port 10 output speed configuration [1]
#define GPIOx_OSPEEDR11_0   BIT22   // Port 11 output speed configuration [0]
#define GPIOx_OSPEEDR11_1   BIT23   // Port 11 output speed configuration [1]
#define GPIOx_OSPEEDR12_0   BIT24   // Port 12 output speed configuration [0]
#define GPIOx_OSPEEDR12_1   BIT25   // Port 12 output speed configuration [1]
#define GPIOx_OSPEEDR13_0   BIT26   // Port 13 output speed configuration [0]
#define GPIOx_OSPEEDR13_1   BIT27   // Port 13 output speed configuration [1]
#define GPIOx_OSPEEDR14_0   BIT28   // Port 14 output speed configuration [0]
#define GPIOx_OSPEEDR14_1   BIT29   // Port 14 output speed configuration [1]
#define GPIOx_OSPEEDR15_0   BIT30   // Port 15 output speed configuration [0]
#define GPIOx_OSPEEDR15_1   BIT31   // Port 15 output speed configuration [1]

/* GPIOx_PUPDR bit definitions */
#define GPIOx_PUPDIR0_0     BIT0    // Port 0 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR0_1     BIT1    // Port 0 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR1_0     BIT2    // Port 1 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR1_1     BIT3    // Port 1 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR2_0     BIT4    // Port 2 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR2_1     BIT5    // Port 2 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR3_0     BIT6    // Port 3 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR3_1     BIT7    // Port 3 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR4_0     BIT8    // Port 4 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR4_1     BIT9    // Port 4 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR5_0     BIT10   // Port 5 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR5_1     BIT11   // Port 5 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR6_0     BIT12   // Port 6 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR6_1     BIT13   // Port 6 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR7_0     BIT14   // Port 7 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR7_1     BIT15   // Port 7 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR8_0     BIT16   // Port 8 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR8_1     BIT17   // Port 8 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR9_0     BIT18   // Port 9 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR9_1     BIT19   // Port 9 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR10_0    BIT20   // Port 10 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR10_1    BIT21   // Port 10 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR11_0    BIT22   // Port 11 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR11_1    BIT23   // Port 11 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR12_0    BIT24   // Port 12 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR12_1    BIT25   // Port 12 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR13_0    BIT26   // Port 13 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR13_1    BIT27   // Port 13 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR14_0    BIT28   // Port 14 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR14_1    BIT29   // Port 14 pull-up or pull-down configuration [1]
#define GPIOx_PUPDIR15_0    BIT30   // Port 15 pull-up or pull-down configuration [0]
#define GPIOx_PUPDIR15_1    BIT31   // Port 15 pull-up or pull-down configuration [1]

/* GPIOx_IDR bit definitions */
#define GPIOx_IDR0  BIT0    // Port 0 input data
#define GPIOx_IDR1  BIT1    // Port 1 input data
#define GPIOx_IDR2  BIT2    // Port 2 input data
#define GPIOx_IDR3  BIT3    // Port 3 input data
#define GPIOx_IDR4  BIT4    // Port 4 input data
#define GPIOx_IDR5  BIT5    // Port 5 input data
#define GPIOx_IDR6  BIT6    // Port 6 input data
#define GPIOx_IDR7  BIT7    // Port 7 input data
#define GPIOx_IDR8  BIT8    // Port 8 input data
#define GPIOx_IDR9  BIT9    // Port 9 input data
#define GPIOx_IDR10 BIT10   // Port 10 input data
#define GPIOx_IDR11 BIT11   // Port 11 input data
#define GPIOx_IDR12 BIT12   // Port 12 input data
#define GPIOx_IDR13 BIT13   // Port 13 input data
#define GPIOx_IDR14 BIT14   // Port 14 input data
#define GPIOx_IDR15 BIT15   // Port 15 input data

/* GPIOx_ODR bit definitions */
#define GPIOx_ODR0  BIT0    // Port 0 output data
#define GPIOx_ODR1  BIT1    // Port 1 output data
#define GPIOx_ODR2  BIT2    // Port 2 output data
#define GPIOx_ODR3  BIT3    // Port 3 output data
#define GPIOx_ODR4  BIT4    // Port 4 output data
#define GPIOx_ODR5  BIT5    // Port 5 output data
#define GPIOx_ODR6  BIT6    // Port 6 output data
#define GPIOx_ODR7  BIT7    // Port 7 output data
#define GPIOx_ODR8  BIT8    // Port 8 output data
#define GPIOx_ODR9  BIT9    // Port 9 output data
#define GPIOx_ODR10 BIT10   // Port 10 output data
#define GPIOx_ODR11 BIT11   // Port 11 output data
#define GPIOx_ODR12 BIT12   // Port 12 output data
#define GPIOx_ODR13 BIT13   // Port 13 output data
#define GPIOx_ODR14 BIT14   // Port 14 output data
#define GPIOx_ODR15 BIT15   // Port 15 output data

/* GPIOx_BSSR bit definitions */
#define GPIOx_BSSR_BS0  BIT0    // Port 0 set
#define GPIOx_BSSR_BS1  BIT1    // Port 1 set
#define GPIOx_BSSR_BS2  BIT2    // Port 2 set
#define GPIOx_BSSR_BS3  BIT3    // Port 3 set
#define GPIOx_BSSR_BS4  BIT4    // Port 4 set
#define GPIOx_BSSR_BS5  BIT5    // Port 5 set
#define GPIOx_BSSR_BS6  BIT6    // Port 6 set
#define GPIOx_BSSR_BS7  BIT7    // Port 7 set
#define GPIOx_BSSR_BS8  BIT8    // Port 8 set
#define GPIOx_BSSR_BS9  BIT9    // Port 9 set
#define GPIOx_BSSR_BS10 BIT10   // Port 10 set
#define GPIOx_BSSR_BS11 BIT11   // Port 11 set
#define GPIOx_BSSR_BS12 BIT12   // Port 12 set
#define GPIOx_BSSR_BS13 BIT13   // Port 13 set
#define GPIOx_BSSR_BS14 BIT14   // Port 14 set
#define GPIOx_BSSR_BS15 BIT15   // Port 15 set
#define GPIOx_BSSR_BR0  BIT16   // Port 0 reset
#define GPIOx_BSSR_BR1  BIT17   // Port 1 reset
#define GPIOx_BSSR_BR2  BIT18   // Port 2 reset
#define GPIOx_BSSR_BR3  BIT19   // Port 3 reset
#define GPIOx_BSSR_BR4  BIT20   // Port 4 reset
#define GPIOx_BSSR_BR5  BIT21   // Port 5 reset
#define GPIOx_BSSR_BR6  BIT22   // Port 6 reset
#define GPIOx_BSSR_BR7  BIT23   // Port 7 reset
#define GPIOx_BSSR_BR8  BIT24   // Port 8 reset
#define GPIOx_BSSR_BR9  BIT25   // Port 9 reset
#define GPIOx_BSSR_BR10 BIT26   // Port 10 reset
#define GPIOx_BSSR_BR11 BIT27   // Port 11 reset
#define GPIOx_BSSR_BR12 BIT28   // Port 12 reset
#define GPIOx_BSSR_BR13 BIT29   // Port 13 reset
#define GPIOx_BSSR_BR14 BIT30   // Port 14 reset
#define GPIOx_BSSR_BR15 BIT31   // Port 15 reset

/* GPIOx_LCKR bit definitions */
#define GPIOx_LCK0  BIT0    // Port 0 lock bit
#define GPIOx_LCK1  BIT1    // Port 1 lock bit
#define GPIOx_LCK1  BIT2    // Port 2 lock bit
#define GPIOx_LCK3  BIT3    // Port 3 lock bit
#define GPIOx_LCK4  BIT4    // Port 4 lock bit
#define GPIOx_LCK5  BIT5    // Port 5 lock bit
#define GPIOx_LCK6  BIT6    // Port 6 lock bit
#define GPIOx_LCK7  BIT7    // Port 7 lock bit
#define GPIOx_LCK8  BIT8    // Port 8 lock bit
#define GPIOx_LCK9  BIT9    // Port 9 lock bit
#define GPIOx_LCK10 BIT10   // Port 10 lock bit
#define GPIOx_LCK11 BIT11   // Port 11 lock bit
#define GPIOx_LCK12 BIT12   // Port 12 lock bit
#define GPIOx_LCK13 BIT13   // Port 13 lock bit
#define GPIOx_LCK14 BIT14   // Port 14 lock bit
#define GPIOx_LCK15 BIT15   // Port 15 lock bit
#define GPIOx_LCK16 BIT16   // Lock key

/* GPIOx_AFRL bit definitions */
#define GPIOx_AFRL0_0   BIT0    // Alternate function selection for port 0 [0]
#define GPIOx_AFRL0_1   BIT1    // Alternate function selection for port 0 [1]
#define GPIOx_AFRL0_2   BIT2    // Alternate function selection for port 0 [2]
#define GPIOx_AFRL0_3   BIT3    // Alternate function selection for port 0 [3]
#define GPIOx_AFRL1_0   BIT4    // Alternate function selection for port 1 [0]
#define GPIOx_AFRL1_1   BIT5    // Alternate function selection for port 1 [1]
#define GPIOx_AFRL1_2   BIT6    // Alternate function selection for port 1 [2]
#define GPIOx_AFRL1_3   BIT7    // Alternate function selection for port 1 [3]
#define GPIOx_AFRL2_0   BIT8    // Alternate function selection for port 2 [0]
#define GPIOx_AFRL2_1   BIT9    // Alternate function selection for port 2 [1]
#define GPIOx_AFRL2_2   BIT10   // Alternate function selection for port 2 [2]
#define GPIOx_AFRL2_3   BIT11   // Alternate function selection for port 2 [3]
#define GPIOx_AFRL3_0   BIT12   // Alternate function selection for port 3 [0]
#define GPIOx_AFRL3_1   BIT13   // Alternate function selection for port 3 [1]
#define GPIOx_AFRL3_2   BIT14   // Alternate function selection for port 3 [2]
#define GPIOx_AFRL3_3   BIT15   // Alternate function selection for port 3 [3]
#define GPIOx_AFRL4_0   BIT16   // Alternate function selection for port 4 [0]
#define GPIOx_AFRL4_1   BIT17   // Alternate function selection for port 4 [1]
#define GPIOx_AFRL4_2   BIT18   // Alternate function selection for port 4 [2]
#define GPIOx_AFRL4_3   BIT19   // Alternate function selection for port 4 [3]
#define GPIOx_AFRL5_0   BIT20   // Alternate function selection for port 5 [0]
#define GPIOx_AFRL5_1   BIT21   // Alternate function selection for port 5 [1]
#define GPIOx_AFRL5_2   BIT22   // Alternate function selection for port 5 [2]
#define GPIOx_AFRL5_3   BIT23   // Alternate function selection for port 5 [3]
#define GPIOx_AFRL6_0   BIT24   // Alternate function selection for port 6 [0]
#define GPIOx_AFRL6_1   BIT25   // Alternate function selection for port 6 [1]
#define GPIOx_AFRL6_2   BIT26   // Alternate function selection for port 6 [2]
#define GPIOx_AFRL6_3   BIT27   // Alternate function selection for port 6 [3]
#define GPIOx_AFRL7_0   BIT28   // Alternate function selection for port 7 [0]
#define GPIOx_AFRL7_1   BIT29   // Alternate function selection for port 7 [1]
#define GPIOx_AFRL7_2   BIT30   // Alternate function selection for port 7 [2]
#define GPIOx_AFRL7_3   BIT31   // Alternate function selection for port 7 [3]

/* GPIOx_AFRH bit definitions */
#define GPIOx_ARFH8_0   BIT0    // Alternate function selection for port 8 [0]
#define GPIOx_ARFH8_1   BIT1    // Alternate function selection for port 8 [1]
#define GPIOx_ARFH8_2   BIT2    // Alternate function selection for port 8 [2]
#define GPIOx_ARFH8_3   BIT3    // Alternate function selection for port 8 [3]
#define GPIOx_ARFH9_0   BIT4    // Alternate function selection for port 9 [0]
#define GPIOx_ARFH9_1   BIT5    // Alternate function selection for port 9 [1]
#define GPIOx_ARFH9_2   BIT6    // Alternate function selection for port 9 [2]
#define GPIOx_ARFH9_3   BIT7    // Alternate function selection for port 9 [3]
#define GPIOx_ARFH10_0  BIT8    // Alternate function selection for port 10 [0]
#define GPIOx_ARFH10_1  BIT9    // Alternate function selection for port 10 [1]
#define GPIOx_ARFH10_2  BIT10   // Alternate function selection for port 10 [2]
#define GPIOx_ARFH10_3  BIT11   // Alternate function selection for port 10 [3]
#define GPIOx_ARFH11_0  BIT12   // Alternate function selection for port 11 [0]
#define GPIOx_ARFH11_1  BIT13   // Alternate function selection for port 11 [1]
#define GPIOx_ARFH11_2  BIT14   // Alternate function selection for port 11 [2]
#define GPIOx_ARFH11_3  BIT15   // Alternate function selection for port 11 [3]
#define GPIOx_ARFH12_0  BIT16   // Alternate function selection for port 12 [0]
#define GPIOx_ARFH12_1  BIT17   // Alternate function selection for port 12 [1]
#define GPIOx_ARFH12_2  BIT18   // Alternate function selection for port 12 [2]
#define GPIOx_ARFH12_3  BIT19   // Alternate function selection for port 12 [3]
#define GPIOx_ARFH13_0  BIT20   // Alternate function selection for port 13 [0]
#define GPIOx_ARFH13_1  BIT21   // Alternate function selection for port 13 [1]
#define GPIOx_ARFH13_2  BIT22   // Alternate function selection for port 13 [2]
#define GPIOx_ARFH13_3  BIT23   // Alternate function selection for port 13 [3]
#define GPIOx_ARFH14_0  BIT24   // Alternate function selection for port 14 [0]
#define GPIOx_ARFH14_1  BIT25   // Alternate function selection for port 14 [1]
#define GPIOx_ARFH14_2  BIT26   // Alternate function selection for port 14 [2]
#define GPIOx_ARFH14_3  BIT27   // Alternate function selection for port 14 [3]
#define GPIOx_ARFH15_0  BIT28   // Alternate function selection for port 15 [0]
#define GPIOx_ARFH15_1  BIT29   // Alternate function selection for port 15 [1]
#define GPIOx_ARFH15_2  BIT30   // Alternate function selection for port 15 [2]
#define GPIOx_ARFH15_3  BIT31   // Alternate function selection for port 15 [3]

#endif // GPIOx_H
