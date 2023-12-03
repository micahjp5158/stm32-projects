
/*
 * nvic.h
 *
 * Defines the NVIC register addresses
 */

#ifndef NVIC_H
#define NVIC_H

/* NVIC register addresses from Arm Cortex-M4 technical manual, Table 6-1*/
#define ICTR        0xE000E004U

#define NVIC_ISER0  0xE000E100U
#define NVIC_ISER1  0xE000E104U
#define NVIC_ISER2  0xE000E108U
#define NVIC_ISER3  0xE000E10CU
#define NVIC_ISER4  0xE000E110U
#define NVIC_ISER5  0xE000E114U
#define NVIC_ISER6  0xE000E118U
#define NVIC_ISER7  0xE000E11CU

#define NVIC_ICER0  0xE000E180U
#define NVIC_ICER1  0xE000E184U
#define NVIC_ICER2  0xE000E188U
#define NVIC_ICER3  0xE000E18CU
#define NVIC_ICER4  0xE000E190U
#define NVIC_ICER5  0xE000E194U
#define NVIC_ICER6  0xE000E198U
#define NVIC_ICER7  0xE000E19CU

#define NVIC_ISPR0  0xE000E200U
#define NVIC_ISPR1  0xE000E204U
#define NVIC_ISPR2  0xE000E208U
#define NVIC_ISPR3  0xE000E20CU
#define NVIC_ISPR4  0xE000E210U
#define NVIC_ISPR5  0xE000E214U
#define NVIC_ISPR6  0xE000E218U
#define NVIC_ISPR7  0xE000E21CU

#define NVIC_ICPR0  0xE000E280U
#define NVIC_ICPR1  0xE000E284U
#define NVIC_ICPR2  0xE000E288U
#define NVIC_ICPR3  0xE000E28CU
#define NVIC_ICPR4  0xE000E290U
#define NVIC_ICPR5  0xE000E294U
#define NVIC_ICPR6  0xE000E298U
#define NVIC_ICPR7  0xE000E29CU

#define NVIC_IABR0  0xE000E300U
#define NVIC_IABR1  0xE000E304U
#define NVIC_IABR2  0xE000E308U
#define NVIC_IABR3  0xE000E30CU
#define NVIC_IABR4  0xE000E310U
#define NVIC_IABR5  0xE000E314U
#define NVIC_IABR6  0xE000E318U
#define NVIC_IABR7  0xE000E31CU

#define NVIC_IPR0   0xE000E400U
#define NVIC_IPR1   0xE000E404U
#define NVIC_IPR2   0xE000E408U
#define NVIC_IPR3   0xE000E40CU
#define NVIC_IPR4   0xE000E410U
#define NVIC_IPR5   0xE000E414U
#define NVIC_IPR6   0xE000E418U
#define NVIC_IPR7   0xE000E41CU
#define NVIC_IPR8   0xE000E420U
#define NVIC_IPR9   0xE000E424U
#define NVIC_IPR10  0xE000E428U
#define NVIC_IPR11  0xE000E42CU
#define NVIC_IPR12  0xE000E430U
#define NVIC_IPR13  0xE000E434U
#define NVIC_IPR14  0xE000E438U
#define NVIC_IPR15  0xE000E43CU
#define NVIC_IPR16  0xE000E440U
#define NVIC_IPR17  0xE000E444U
#define NVIC_IPR18  0xE000E448U
#define NVIC_IPR19  0xE000E44CU
#define NVIC_IPR20  0xE000E450U
#define NVIC_IPR21  0xE000E454U
#define NVIC_IPR22  0xE000E458U
#define NVIC_IPR23  0xE000E45CU
#define NVIC_IPR24  0xE000E460U
#define NVIC_IPR25  0xE000E464U
#define NVIC_IPR26  0xE000E468U
#define NVIC_IPR27  0xE000E46CU
#define NVIC_IPR28  0xE000E470U
#define NVIC_IPR29  0xE000E474U
#define NVIC_IPR30  0xE000E478U
#define NVIC_IPR31  0xE000E47CU
#define NVIC_IPR32  0xE000E480U
#define NVIC_IPR33  0xE000E484U
#define NVIC_IPR34  0xE000E488U
#define NVIC_IPR35  0xE000E48CU
#define NVIC_IPR36  0xE000E490U
#define NVIC_IPR37  0xE000E494U
#define NVIC_IPR38  0xE000E498U
#define NVIC_IPR39  0xE000E49CU
#define NVIC_IPR40  0xE000E4A0U
#define NVIC_IPR41  0xE000E4A4U
#define NVIC_IPR42  0xE000E4A8U
#define NVIC_IPR43  0xE000E4ACU
#define NVIC_IPR44  0xE000E4B0U
#define NVIC_IPR45  0xE000E4B4U
#define NVIC_IPR46  0xE000E4B8U
#define NVIC_IPR47  0xE000E4BCU
#define NVIC_IPR48  0xE000E4C0U
#define NVIC_IPR49  0xE000E4C4U
#define NVIC_IPR50  0xE000E4C8U
#define NVIC_IPR51  0xE000E4CCU
#define NVIC_IPR52  0xE000E4D0U
#define NVIC_IPR53  0xE000E4D4U
#define NVIC_IPR54  0xE000E4D8U
#define NVIC_IPR55  0xE000E4DCU
#define NVIC_IPR56  0xE000E4E0U
#define NVIC_IPR57  0xE000E4E4U
#define NVIC_IPR58  0xE000E4E8U
#define NVIC_IPR59  0xE000E4ECU

/* Vector positions, from STM32F407VG reference manual, Table 1 */

/* NVIC_ISER0, NVIC_ICER0, etc. IRQs */
#define IRQ_WWDG                BIT0    // 0: Window Watchdog interrupt
#define IRQ_PVD                 BIT1    // 1: PVD through EXTI line detection interrupt
#define IRQ_TAMP_STAMP          BIT2    // 2: Tamper and TimeStamp interrupts through the EXTI line
#define IRQ_RTC_WKUP            BIT3    // 3: RTC Wakeup interrupt through the EXTI line
#define IRQ_FLASH               BIT4    // 4: Flash global interrupt
#define IRQ_RCC                 BIT5    // 5: RCC global interrupt
#define IRQ_EXTI0               BIT6    // 6: EXTI Line0 interrupt
#define IRQ_EXTI1               BIT7    // 7: EXTI Line1 interrupt
#define IRQ_EXTI2               BIT8    // 8: EXTI Line2 interrupt
#define IRQ_EXTI3               BIT9    // 9: EXTI Line3 interrupt
#define IRQ_EXTI4               BIT10   // 10: EXTI Line4 interrupt
#define IRQ_DMA1_STREAM0        BIT11   // 11: DMA1 Stream0 global interrupt
#define IRQ_DMA1_STREAM1        BIT12   // 12: DMA1 Stream1 global interrupt
#define IRQ_DMA1_STREAM2        BIT13   // 13: DMA1 Stream2 global interrupt
#define IRQ_DMA1_STREAM3        BIT14   // 14: DMA1 Stream3 global interrupt
#define IRQ_DMA1_STREAM4        BIT15   // 15: DMA1 Stream4 global interrupt
#define IRQ_DMA1_STREAM5        BIT16   // 16: DMA1 Stream5 global interrupt
#define IRQ_DMA1_STREAM6        BIT17   // 17: DMA1 Stream6 global interrupt
#define IRQ_ADC                 BIT18   // 18: ADC1, ADC2, and ADC3 global interrupts
#define IRQ_CAN1_TX             BIT19   // 19: CAN1 TX interrupts
#define IRQ_CAN1_RX0            BIT20   // 20: CAN1 RX0 interrupts
#define IRQ_CAN1_RX             BIT21   // 21: CAN1 RX1 interrupt
#define IRQ_CAN1_SCE            BIT22   // 22: CAN1 SCE interrupt
#define IRQ_EXTI9_5             BIT23   // 23: EXTI Line[9:5] interrupts
#define IRQ_TIM1_BRK_TIM9       BIT24   // 24: TIM1 Break interrupt and TIM9 global interrupt
#define IRQ_TIM1_UP_TIM10       BIT25   // 25: TIM1 Update interrupt and TIM10 global interrupt
#define IRQ_TIM1_TRG_COM_TIM11  BIT26   // 26: TIM1 Trigger and Commutation interrupts and TIM11 global interrupt
#define IRQ_TIM1_CC             BIT27   // 27: TIM1 Capture Compare interrupt
#define IRQ_TIM2                BIT28   // 28: TIM2 global interrupt
#define IRQ_TIM3                BIT29   // 29: TIM3 global interrupt
#define IRQ_TIM4                BIT30   // 30: TIM4 global interrupt
#define IRQ_I2C1_EV             BIT31   // 31: I2C1 event interrupt

/* NVIC_ISER1, NVIC_ICER1, etc. IRQs */
#define IRQ_I2C1_ER             BIT0    // 32: I2C1 error interrupt
#define IRQ_I2C2_EV             BIT1    // 33: I2C2 event interrupt
#define IRQ_I2C2_ER             BIT2    // 34: I2C2 error interrupt
#define IRQ_SPI1                BIT3    // 35: SPI1 global interrupt
#define IRQ_SPI2                BIT4    // 36: SPI2 global interrupt
#define IRQ_USART1              BIT5    // 37: USART1 global interrupt
#define IRQ_USART2              BIT6    // 38: USART2 global interrupt
#define IRQ_USART3              BIT7    // 39: USART3 global interrupt
#define IRQ_EXTI15_10           BIT8    // 40: EXTI Line[15:10] interrupt
#define IRQ_RTC_ALARM           BIT9    // 41: RTC Alarms (A and B) through EXTI line interrupt
#define IRQ_OTG_FS_WKUP         BIT10   // 42: USB On-The-Go FS Wakeup through EXTI line interrupt
#define IRQ_TIM8_BRK_TIM12      BIT11   // 43: TIM8 Break interrupt and TIM12 global interrupt
#define IRQ_TIM8_UP_TIM13       BIT12   // 44: TIM8 Update interrupt and TIM13 global interrup
#define IRQ_TIM8_TRG_COM_TIM14  BIT13   // 45: TIM8 Trigger and Commutation interrupts and TIM14 global interrupt
#define IRQ_TIM8_CC             BIT14   // 46: TIM8 Capture Compare interrupt
#define IRQ_DMA1_STREAM7        BIT15   // 47: DMA1 Stream7 global interrupt
#define IRQ_FSMC                BIT16   // 48: FSMC global interrupt
#define IRQ_SDIO                BIT17   // 49: SDIO global interrupt
#define IRQ_TIM5                BIT18   // 50: TIM5 global interrupt
#define IRQ_SPI3                BIT19   // 51: SPI3 global interrupt
#define IRQ_UART4               BIT20   // 52: UART4 global interrupt
#define IRQ_UART5               BIT21   // 53: UART5 global interrupt
#define IRQ_TIM6_DAC            BIT22   // 54: TIM6 global interrupt, DAC1 and DAC2 underrun error interrupts
#define IRQ_TIM7                BIT23   // 55: TIM7 global interrupt
#define IRQ_DMA2_STREAM0        BIT24   // 56: DMA2 Stream0 global interrupt
#define IRQ_DMA2_STREAM1        BIT25   // 57: DMA2 Stream1 global interrupt
#define IRQ_DMA2_STREAM2        BIT26   // 58: DMA2 Stream2 global interrupt
#define IRQ_DMA2_STREAM3        BIT27   // 59: DMA2 Stream3 global interrupt
#define IRQ_DMA2_STREAM4        BIT28   // 60: DMA2 Stream4 global interrupt
#define IRQ_ETH                 BIT29   // 61: Ethernet global interrupt
#define IRQ_ETH_WKUP            BIT30   // 62: Ethernet Wakeup through EXTI line interrupt
#define IRQ_CAN2_TX             BIT31   // 63: CAN2 TX interrupts

/* NVIC_ISER2, NVIC_ICER2, etc. IRQs */
#define IRQ_CAN2_RX0            BIT0    // 64: CAN2 RX0 interrupts
#define IRQ_CAN2_RX1            BIT1    // 65: CAN2 RX1 interrupt
#define IRQ_CAN2_SCE            BIT2    // 66: CAN2 SCE interrupt
#define IRQ_OTG_FS              BIT3    // 67: USB On The Go FS global interrupt
#define IRQ_DMA2_STREAM5        BIT4    // 68: DMA2 Stream5 global interrupt
#define IRQ_DMA2_STREAM6        BIT5    // 69: DMA2 Stream6 global interrupt
#define IRQ_DMA2_STREAM7        BIT6    // 70: DMA2 Stream7 global interrupt
#define IRQ_USART6              BIT7    // 71: USART6 global interrupt
#define IRQ_I2C3_EV             BIT9    // 72: I2C3 event interrupt
#define IRQ_I2C3_ER             BIT9    // 73: I2C3 error interrupt
#define IRQ_OTG_HS_EP1_OUT      BIT10   // 74: USB On The Go HS End Point 1 Out global interrupt
#define IRQ_OTG_HS_EP1_IN       BIT11   // 75: USB On The Go HS End Point 1 In global interrupt
#define IRQ_OTG_HS_WKUP         BIT12   // 76: USB On The Go HS Wakeup through EXTI interrupt
#define IRQ_OTG_HS              BIT13   // 77: USB On The Go HS global interrupt
#define IRQ_DCMI                BIT14   // 78: DCMI global interrupt
#define IRQ_CRYP                BIT15   // 79: CRYP crypto global interrupt
#define IRQ_HASH_RNG            BIT16   // 80: Hash and Rng global interrupt
#define IRQ_FPU                 BIT17   // 81: FPU global interrupt

#endif // NVIC_H
