
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
#define MODER0_0    BIT0    // Port 0 I/O direction mode configuration [0]
#define MODER0_1    BIT1    // Port 0 I/O direction mode configuration [1]
#define MODER1_0    BIT2    // Port 1 I/O direction mode configuration [0]
#define MODER1_1    BIT3    // Port 1 I/O direction mode configuration [1]
#define MODER2_0    BIT4    // Port 2 I/O direction mode configuration [0]
#define MODER2_1    BIT5    // Port 2 I/O direction mode configuration [1]
#define MODER3_0    BIT6    // Port 3 I/O direction mode configuration [0]
#define MODER3_1    BIT7    // Port 3 I/O direction mode configuration [1]
#define MODER4_0    BIT8    // Port 4 I/O direction mode configuration [0]
#define MODER4_1    BIT9    // Port 4 I/O direction mode configuration [1]
#define MODER5_0    BIT10   // Port 5 I/O direction mode configuration [0]
#define MODER5_1    BIT11   // Port 5 I/O direction mode configuration [1]
#define MODER6_0    BIT12   // Port 6 I/O direction mode configuration [0]
#define MODER6_1    BIT13   // Port 6 I/O direction mode configuration [1]
#define MODER7_0    BIT14   // Port 7 I/O direction mode configuration [0]
#define MODER7_1    BIT15   // Port 7 I/O direction mode configuration [1]
#define MODER8_0    BIT16   // Port 8 I/O direction mode configuration [0]
#define MODER8_1    BIT17   // Port 8 I/O direction mode configuration [1]
#define MODER9_0    BIT18   // Port 9 I/O direction mode configuration [0]
#define MODER9_1    BIT19   // Port 9 I/O direction mode configuration [1]
#define MODER10_0   BIT20   // Port 10 I/O direction mode configuration [0]
#define MODER10_1   BIT21   // Port 10 I/O direction mode configuration [1]
#define MODER11_0   BIT22   // Port 11 I/O direction mode configuration [0]
#define MODER11_1   BIT23   // Port 11 I/O direction mode configuration [1]
#define MODER12_0   BIT24   // Port 12 I/O direction mode configuration [0]
#define MODER12_1   BIT25   // Port 12 I/O direction mode configuration [1]
#define MODER13_0   BIT26   // Port 13 I/O direction mode configuration [0]
#define MODER13_1   BIT27   // Port 13 I/O direction mode configuration [1]
#define MODER14_0   BIT28   // Port 14 I/O direction mode configuration [0]
#define MODER14_1   BIT29   // Port 14 I/O direction mode configuration [1]
#define MODER15_0   BIT30   // Port 15 I/O direction mode configuration [0]
#define MODER15_1   BIT31   // Port 15 I/O direction mode configuration [1]

/* GPIOx_OTYPER bit definitions */
#define OT0     BIT0    // Port 0 output type
#define OT1     BIT1    // Port 1 output type
#define OT2     BIT2    // Port 2 output type
#define OT3     BIT3    // Port 3 output type
#define OT4     BIT4    // Port 4 output type
#define OT5     BIT5    // Port 5 output type
#define OT6     BIT6    // Port 6 output type
#define OT7     BIT7    // Port 7 output type
#define OT8     BIT8    // Port 8 output type
#define OT9     BIT9    // Port 9 output type
#define OT10    BIT10   // Port 10 output type
#define OT11    BIT11   // Port 11 output type
#define OT12    BIT12   // Port 12 output type
#define OT13    BIT13   // Port 13 output type
#define OT14    BIT14   // Port 14 output type
#define OT15    BIT15   // Port 15 output type

/* GPIOx_OSPEEDR bit definitions */
#define OSPEEDR0_0  BIT0    // Port 0 output speed configuration [0]
#define OSPEEDR0_1  BIT1    // Port 0 output speed configuration [1]
#define OSPEEDR1_0  BIT2    // Port 1 output speed configuration [0]
#define OSPEEDR1_1  BIT3    // Port 1 output speed configuration [1]
#define OSPEEDR2_0  BIT4    // Port 2 output speed configuration [0]
#define OSPEEDR2_1  BIT5    // Port 2 output speed configuration [1]
#define OSPEEDR3_0  BIT6    // Port 3 output speed configuration [0]
#define OSPEEDR3_1  BIT7    // Port 3 output speed configuration [1]
#define OSPEEDR4_0  BIT8    // Port 4 output speed configuration [0]
#define OSPEEDR4_1  BIT9    // Port 4 output speed configuration [1]
#define OSPEEDR5_0  BIT10   // Port 5 output speed configuration [0]
#define OSPEEDR5_1  BIT11   // Port 5 output speed configuration [1]
#define OSPEEDR6_0  BIT12   // Port 6 output speed configuration [0]
#define OSPEEDR6_1  BIT13   // Port 6 output speed configuration [1]
#define OSPEEDR7_0  BIT14   // Port 7 output speed configuration [0]
#define OSPEEDR7_1  BIT15   // Port 7 output speed configuration [1]
#define OSPEEDR8_0  BIT16   // Port 8 output speed configuration [0]
#define OSPEEDR8_1  BIT17   // Port 8 output speed configuration [1]
#define OSPEEDR9_0  BIT18   // Port 9 output speed configuration [0]
#define OSPEEDR9_1  BIT19   // Port 9 output speed configuration [1]
#define OSPEEDR10_0 BIT20   // Port 10 output speed configuration [0]
#define OSPEEDR10_1 BIT21   // Port 10 output speed configuration [1]
#define OSPEEDR11_0 BIT22   // Port 11 output speed configuration [0]
#define OSPEEDR11_1 BIT23   // Port 11 output speed configuration [1]
#define OSPEEDR12_0 BIT24   // Port 12 output speed configuration [0]
#define OSPEEDR12_1 BIT25   // Port 12 output speed configuration [1]
#define OSPEEDR13_0 BIT26   // Port 13 output speed configuration [0]
#define OSPEEDR13_1 BIT27   // Port 13 output speed configuration [1]
#define OSPEEDR14_0 BIT28   // Port 14 output speed configuration [0]
#define OSPEEDR14_1 BIT29   // Port 14 output speed configuration [1]
#define OSPEEDR15_0 BIT30   // Port 15 output speed configuration [0]
#define OSPEEDR15_1 BIT31   // Port 15 output speed configuration [1]

/* GPIOx_PUPDR bit definitions */
#define PUPDIR0_0   BIT0    // Port 0 pull-up or pull-down configuration [0]
#define PUPDIR0_1   BIT1    // Port 0 pull-up or pull-down configuration [1]
#define PUPDIR1_0   BIT2    // Port 1 pull-up or pull-down configuration [0]
#define PUPDIR1_1   BIT3    // Port 1 pull-up or pull-down configuration [1]
#define PUPDIR2_0   BIT4    // Port 2 pull-up or pull-down configuration [0]
#define PUPDIR2_1   BIT5    // Port 2 pull-up or pull-down configuration [1]
#define PUPDIR3_0   BIT6    // Port 3 pull-up or pull-down configuration [0]
#define PUPDIR3_1   BIT7    // Port 3 pull-up or pull-down configuration [1]
#define PUPDIR4_0   BIT8    // Port 4 pull-up or pull-down configuration [0]
#define PUPDIR4_1   BIT9    // Port 4 pull-up or pull-down configuration [1]
#define PUPDIR5_0   BIT10   // Port 5 pull-up or pull-down configuration [0]
#define PUPDIR5_1   BIT11   // Port 5 pull-up or pull-down configuration [1]
#define PUPDIR6_0   BIT12   // Port 6 pull-up or pull-down configuration [0]
#define PUPDIR6_1   BIT13   // Port 6 pull-up or pull-down configuration [1]
#define PUPDIR7_0   BIT14   // Port 7 pull-up or pull-down configuration [0]
#define PUPDIR7_1   BIT15   // Port 7 pull-up or pull-down configuration [1]
#define PUPDIR8_0   BIT16   // Port 8 pull-up or pull-down configuration [0]
#define PUPDIR8_1   BIT17   // Port 8 pull-up or pull-down configuration [1]
#define PUPDIR9_0   BIT18   // Port 9 pull-up or pull-down configuration [0]
#define PUPDIR9_1   BIT19   // Port 9 pull-up or pull-down configuration [1]
#define PUPDIR10_0  BIT20   // Port 10 pull-up or pull-down configuration [0]
#define PUPDIR10_1  BIT21   // Port 10 pull-up or pull-down configuration [1]
#define PUPDIR11_0  BIT22   // Port 11 pull-up or pull-down configuration [0]
#define PUPDIR11_1  BIT23   // Port 11 pull-up or pull-down configuration [1]
#define PUPDIR12_0  BIT24   // Port 12 pull-up or pull-down configuration [0]
#define PUPDIR12_1  BIT25   // Port 12 pull-up or pull-down configuration [1]
#define PUPDIR13_0  BIT26   // Port 13 pull-up or pull-down configuration [0]
#define PUPDIR13_1  BIT27   // Port 13 pull-up or pull-down configuration [1]
#define PUPDIR14_0  BIT28   // Port 14 pull-up or pull-down configuration [0]
#define PUPDIR14_1  BIT29   // Port 14 pull-up or pull-down configuration [1]
#define PUPDIR15_0  BIT30   // Port 15 pull-up or pull-down configuration [0]
#define PUPDIR15_1  BIT31   // Port 15 pull-up or pull-down configuration [1]

/* GPIOx_IDR bit definitions */
#define IDR0    BIT0    // Port 0 input data
#define IDR1    BIT1    // Port 1 input data
#define IDR2    BIT2    // Port 2 input data
#define IDR3    BIT3    // Port 3 input data
#define IDR4    BIT4    // Port 4 input data
#define IDR5    BIT5    // Port 5 input data
#define IDR6    BIT6    // Port 6 input data
#define IDR7    BIT7    // Port 7 input data
#define IDR8    BIT8    // Port 8 input data
#define IDR9    BIT9    // Port 9 input data
#define IDR10   BIT10   // Port 10 input data
#define IDR11   BIT11   // Port 11 input data
#define IDR12   BIT12   // Port 12 input data
#define IDR13   BIT13   // Port 13 input data
#define IDR14   BIT14   // Port 14 input data
#define IDR15   BIT15   // Port 15 input data

/* GPIOx_ODR bit definitions */
#define ODR0    BIT0    // Port 0 output data
#define ODR1    BIT1    // Port 1 output data
#define ODR2    BIT2    // Port 2 output data
#define ODR3    BIT3    // Port 3 output data
#define ODR4    BIT4    // Port 4 output data
#define ODR5    BIT5    // Port 5 output data
#define ODR6    BIT6    // Port 6 output data
#define ODR7    BIT7    // Port 7 output data
#define ODR8    BIT8    // Port 8 output data
#define ODR9    BIT9    // Port 9 output data
#define ODR10   BIT10   // Port 10 output data
#define ODR11   BIT11   // Port 11 output data
#define ODR12   BIT12   // Port 12 output data
#define ODR13   BIT13   // Port 13 output data
#define ODR14   BIT14   // Port 14 output data
#define ODR15   BIT15   // Port 15 output data

/* GPIOx_BSSR bit definitions */
#define BS0     BIT0    // Port 0 set
#define BS1     BIT1    // Port 1 set
#define BS2     BIT2    // Port 2 set
#define BS3     BIT3    // Port 3 set
#define BS4     BIT4    // Port 4 set
#define BS5     BIT5    // Port 5 set
#define BS6     BIT6    // Port 6 set
#define BS7     BIT7    // Port 7 set
#define BS8     BIT8    // Port 8 set
#define BS9     BIT9    // Port 9 set
#define BS10    BIT10   // Port 10 set
#define BS11    BIT11   // Port 11 set
#define BS12    BIT12   // Port 12 set
#define BS13    BIT13   // Port 13 set
#define BS14    BIT14   // Port 14 set
#define BS15    BIT15   // Port 15 set
#define BR0     BIT16   // Port 0 reset
#define BR1     BIT17   // Port 1 reset
#define BR2     BIT18   // Port 2 reset
#define BR3     BIT19   // Port 3 reset
#define BR4     BIT20   // Port 4 reset
#define BR5     BIT21   // Port 5 reset
#define BR6     BIT22   // Port 6 reset
#define BR7     BIT23   // Port 7 reset
#define BR8     BIT24   // Port 8 reset
#define BR9     BIT25   // Port 9 reset
#define BR10    BIT26   // Port 10 reset
#define BR11    BIT27   // Port 11 reset
#define BR12    BIT28   // Port 12 reset
#define BR13    BIT29   // Port 13 reset
#define BR14    BIT30   // Port 14 reset
#define BR15    BIT31   // Port 15 reset

/* GPIOx_LCKR bit definitions */
#define LCK0    BIT0    // Port 0 lock bit
#define LCK1    BIT1    // Port 1 lock bit
#define LCK1    BIT2    // Port 2 lock bit
#define LCK3    BIT3    // Port 3 lock bit
#define LCK4    BIT4    // Port 4 lock bit
#define LCK5    BIT5    // Port 5 lock bit
#define LCK6    BIT6    // Port 6 lock bit
#define LCK7    BIT7    // Port 7 lock bit
#define LCK8    BIT8    // Port 8 lock bit
#define LCK9    BIT9    // Port 9 lock bit
#define LCK10   BIT10   // Port 10 lock bit
#define LCK11   BIT11   // Port 11 lock bit
#define LCK12   BIT12   // Port 12 lock bit
#define LCK13   BIT13   // Port 13 lock bit
#define LCK14   BIT14   // Port 14 lock bit
#define LCK15   BIT15   // Port 15 lock bit
#define LCK16   BIT16   // Lock key

/* GPIOx_AFRL bit definitions */
#define AFRL0_0 BIT0    // Alternate function selection for port 0 [0]
#define AFRL0_1 BIT1    // Alternate function selection for port 0 [1]
#define AFRL0_2 BIT2    // Alternate function selection for port 0 [2]
#define AFRL0_3 BIT3    // Alternate function selection for port 0 [3]
#define AFRL1_0 BIT4    // Alternate function selection for port 1 [0]
#define AFRL1_1 BIT5    // Alternate function selection for port 1 [1]
#define AFRL1_2 BIT6    // Alternate function selection for port 1 [2]
#define AFRL1_3 BIT7    // Alternate function selection for port 1 [3]
#define AFRL2_0 BIT8    // Alternate function selection for port 2 [0]
#define AFRL2_1 BIT9    // Alternate function selection for port 2 [1]
#define AFRL2_2 BIT10   // Alternate function selection for port 2 [2]
#define AFRL2_3 BIT11   // Alternate function selection for port 2 [3]
#define AFRL3_0 BIT12   // Alternate function selection for port 3 [0]
#define AFRL3_1 BIT13   // Alternate function selection for port 3 [1]
#define AFRL3_2 BIT14   // Alternate function selection for port 3 [2]
#define AFRL3_3 BIT15   // Alternate function selection for port 3 [3]
#define AFRL4_0 BIT16   // Alternate function selection for port 4 [0]
#define AFRL4_1 BIT17   // Alternate function selection for port 4 [1]
#define AFRL4_2 BIT18   // Alternate function selection for port 4 [2]
#define AFRL4_3 BIT19   // Alternate function selection for port 4 [3]
#define AFRL5_0 BIT20   // Alternate function selection for port 5 [0]
#define AFRL5_1 BIT21   // Alternate function selection for port 5 [1]
#define AFRL5_2 BIT22   // Alternate function selection for port 5 [2]
#define AFRL5_3 BIT23   // Alternate function selection for port 5 [3]
#define AFRL6_0 BIT24   // Alternate function selection for port 6 [0]
#define AFRL6_1 BIT25   // Alternate function selection for port 6 [1]
#define AFRL6_2 BIT26   // Alternate function selection for port 6 [2]
#define AFRL6_3 BIT27   // Alternate function selection for port 6 [3]
#define AFRL7_0 BIT28   // Alternate function selection for port 7 [0]
#define AFRL7_1 BIT29   // Alternate function selection for port 7 [1]
#define AFRL7_2 BIT30   // Alternate function selection for port 7 [2]
#define AFRL7_3 BIT31   // Alternate function selection for port 7 [3]

/* GPIOx_AFRH bit definitions */
#define ARFH8_0     BIT0    // Alternate function selection for port 8 [0]
#define ARFH8_1     BIT1    // Alternate function selection for port 8 [1]
#define ARFH8_2     BIT2    // Alternate function selection for port 8 [2]
#define ARFH8_3     BIT3    // Alternate function selection for port 8 [3]
#define ARFH9_0     BIT4    // Alternate function selection for port 9 [0]
#define ARFH9_1     BIT5    // Alternate function selection for port 9 [1]
#define ARFH9_2     BIT6    // Alternate function selection for port 9 [2]
#define ARFH9_3     BIT7    // Alternate function selection for port 9 [3]
#define ARFH10_0    BIT8    // Alternate function selection for port 10 [0]
#define ARFH10_1    BIT9    // Alternate function selection for port 10 [1]
#define ARFH10_2    BIT10   // Alternate function selection for port 10 [2]
#define ARFH10_3    BIT11   // Alternate function selection for port 10 [3]
#define ARFH11_0    BIT12   // Alternate function selection for port 11 [0]
#define ARFH11_1    BIT13   // Alternate function selection for port 11 [1]
#define ARFH11_2    BIT14   // Alternate function selection for port 11 [2]
#define ARFH11_3    BIT15   // Alternate function selection for port 11 [3]
#define ARFH12_0    BIT16   // Alternate function selection for port 12 [0]
#define ARFH12_1    BIT17   // Alternate function selection for port 12 [1]
#define ARFH12_2    BIT18   // Alternate function selection for port 12 [2]
#define ARFH12_3    BIT19   // Alternate function selection for port 12 [3]
#define ARFH13_0    BIT20   // Alternate function selection for port 13 [0]
#define ARFH13_1    BIT21   // Alternate function selection for port 13 [1]
#define ARFH13_2    BIT22   // Alternate function selection for port 13 [2]
#define ARFH13_3    BIT23   // Alternate function selection for port 13 [3]
#define ARFH14_0    BIT24   // Alternate function selection for port 14 [0]
#define ARFH14_1    BIT25   // Alternate function selection for port 14 [1]
#define ARFH14_2    BIT26   // Alternate function selection for port 14 [2]
#define ARFH14_3    BIT27   // Alternate function selection for port 14 [3]
#define ARFH15_0    BIT28   // Alternate function selection for port 15 [0]
#define ARFH15_1    BIT29   // Alternate function selection for port 15 [1]
#define ARFH15_2    BIT30   // Alternate function selection for port 15 [2]
#define ARFH15_3    BIT31   // Alternate function selection for port 15 [3]

#endif // GPIOx_H
