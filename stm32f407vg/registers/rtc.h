/*
 * rtc.h
 *
 * Defines macros for STM32F407VG RTC peripheral registers.
 */

#ifndef RTC_H
#define RTC_H

#include "stm32f407vg.h"

/* RTC peripheral base address from STM32F407VG reference manual, Table 1 */
#define RTC_BASE_ADDR   0x40002800U

/* RTC register offsets from STM32F407VG reference manual Table 121 */
#define RTC_TR_OFFEST   	0x00U
#define RTC_DR_OFFEST 		0x04U
#define RTC_CR_OFFSET 		0x08U
#define RTC_ISR_OFFSET  	0x0CU
#define RTC_PRER_OFFSET 	0x10U
#define RTC_WUTR_OFFSET 	0x14U
#define RTC_CALIBR_OFFSET 	0x18U
#define RTC_ALRMAR_OFFSET 	0x1CU
#define RTC_ALRMBR_OFFSET   0x20U
#define RTC_WPR_OFFSET 	    0x24U
#define RTC_SSR_OFFSET 		0x28U
#define RTC_SHIFTR_OFFSET   0x2CU
#define RTC_TSTR_OFFSET     0x30U
#define RTC_TSDR_OFFSET     0x34U
#define RTC_TSSSR_OFFSET 	0x38U
#define RTC_CALR_OFFSET 	0x3CU
#define RTC_TAFCR_OFFSET 	0x40U
#define RTC_ALRMASSR_OFFSET	0x44U
#define RTC_ALRMBSSR_OFFSET	0x48U
#define RTC_BKP0R_OFFSET	0x50U
#define RTC_BKP1R_OFFSET	0x54U
#define RTC_BKP2R_OFFSET	0x58U
#define RTC_BKP3R_OFFSET	0x5CU
#define RTC_BKP4R_OFFSET	0x60U
#define RTC_BKP5R_OFFSET	0x64U
#define RTC_BKP6R_OFFSET	0x68U
#define RTC_BKP7R_OFFSET	0x6CU
#define RTC_BKP8R_OFFSET	0x70U
#define RTC_BKP9R_OFFSET	0x74U
#define RTC_BKP10R_OFFSET	0x78U
#define RTC_BKP11R_OFFSET	0x7CU
#define RTC_BKP12R_OFFSET	0x80U
#define RTC_BKP13R_OFFSET	0x84U
#define RTC_BKP14R_OFFSET	0x88U
#define RTC_BKP15R_OFFSET	0x8CU
#define RTC_BKP16R_OFFSET	0x90U
#define RTC_BKP17R_OFFSET	0x94U
#define RTC_BKP18R_OFFSET	0x98U
#define RTC_BKP19R_OFFSET	0x9CU

/* RTC register address definitions */
#define RTC_TR          (RTC_BASE_ADDR + RTC_TR_OFFEST)         // RTC time register
#define RTC_DR          (RTC_BASE_ADDR + RTC_DR_OFFEST)         // RTC date register
#define RTC_CR          (RTC_BASE_ADDR + RTC_CR_OFFSET)         // RTC control register
#define RTC_ISR         (RTC_BASE_ADDR + RTC_ISR_OFFSET)        // RTC initialization and status register
#define RTC_PRER        (RTC_BASE_ADDR + RTC_PRER_OFFSET)       // RTC prescaler register
#define RTC_WUTR        (RTC_BASE_ADDR + RTC_WUTR_OFFSET)       // RTC wakeup timer register
#define RTC_CALIBR      (RTC_BASE_ADDR + RTC_CALIBR_OFFSET)     // RTC calibration register
#define RTC_ALRMAR      (RTC_BASE_ADDR + RTC_ALRMAR_OFFSET)     // RTC alarm A register
#define RTC_ALRMBR      (RTC_BASE_ADDR + RTC_ALRMBR_OFFSET)     // RTC alarm B register
#define RTC_WPR         (RTC_BASE_ADDR + RTC_WPR_OFFSET)        // RTC write protection register
#define RTC_SSR         (RTC_BASE_ADDR + RTC_SSR_OFFSET)        // RTC subsecond register
#define RTC_SHIFTR      (RTC_BASE_ADDR + RTC_SHIFTR_OFFSET)     // RTC shift control register
#define RTC_TSTR        (RTC_BASE_ADDR + RTC_TSTR_OFFSET)       // RTC time stamp time register
#define RTC_TSDR        (RTC_BASE_ADDR + RTC_TSDR_OFFSET)       // RTC time stamp date register
#define RTC_TSSSR       (RTC_BASE_ADDR + RTC_TSSSR_OFFSET)      // RTC timestamp sub second register
#define RTC_CALR        (RTC_BASE_ADDR + RTC_CALR_OFFSET)       // RTC calibration register
#define RTC_TAFCR       (RTC_BASE_ADDR + RTC_TAFCR_OFFSET)      // RTC tamper and alternate function configuration register
#define RTC_ALRMASSR    (RTC_BASE_ADDR + RTC_ALRMASSR_OFFSET)   // RTC alarm A sub second register
#define RTC_ALRMBSSR    (RTC_BASE_ADDR + RTC_ALRMBSSR_OFFSET)   // RTC alarm B sub second register
#define RTC_BKP0R       (RTC_BASE_ADDR + RTC_BKP0R_OFFSET)      // RTC backup register 0
#define RTC_BKP1R       (RTC_BASE_ADDR + RTC_BKP1R_OFFSET)      // RTC backup register 1
#define RTC_BKP2R       (RTC_BASE_ADDR + RTC_BKP2R_OFFSET)      // RTC backup register 2
#define RTC_BKP3R       (RTC_BASE_ADDR + RTC_BKP3R_OFFSET)      // RTC backup register 3
#define RTC_BKP4R       (RTC_BASE_ADDR + RTC_BKP4R_OFFSET)      // RTC backup register 4
#define RTC_BKP5R       (RTC_BASE_ADDR + RTC_BKP5R_OFFSET)      // RTC backup register 5
#define RTC_BKP6R       (RTC_BASE_ADDR + RTC_BKP6R_OFFSET)      // RTC backup register 6
#define RTC_BKP7R       (RTC_BASE_ADDR + RTC_BKP7R_OFFSET)      // RTC backup register 7
#define RTC_BKP8R       (RTC_BASE_ADDR + RTC_BKP8R_OFFSET)      // RTC backup register 8
#define RTC_BKP9R       (RTC_BASE_ADDR + RTC_BKP9R_OFFSET)      // RTC backup register 9
#define RTC_BKP10R      (RTC_BASE_ADDR + RTC_BKP10R_OFFSET)     // RTC backup register 10
#define RTC_BKP11R      (RTC_BASE_ADDR + RTC_BKP11R_OFFSET)     // RTC backup register 11
#define RTC_BKP12R      (RTC_BASE_ADDR + RTC_BKP12R_OFFSET)     // RTC backup register 12
#define RTC_BKP13R      (RTC_BASE_ADDR + RTC_BKP13R_OFFSET)     // RTC backup register 13
#define RTC_BKP14R      (RTC_BASE_ADDR + RTC_BKP14R_OFFSET)     // RTC backup register 14
#define RTC_BKP15R      (RTC_BASE_ADDR + RTC_BKP15R_OFFSET)     // RTC backup register 15
#define RTC_BKP16R      (RTC_BASE_ADDR + RTC_BKP16R_OFFSET)     // RTC backup register 16
#define RTC_BKP17R      (RTC_BASE_ADDR + RTC_BKP17R_OFFSET)     // RTC backup register 17
#define RTC_BKP18R      (RTC_BASE_ADDR + RTC_BKP18R_OFFSET)     // RTC backup register 18
#define RTC_BKP19R      (RTC_BASE_ADDR + RTC_BKP19R_OFFSET)     // RTC backup register 19

/* RTC_TR bit definitions */
#define RTC_TR_SU_0     BIT0    // Second units in BCD format [0]
#define RTC_TR_SU_1     BIT1    // Second units in BCD format [1]
#define RTC_TR_SU_2     BIT2    // Second units in BCD format [2]
#define RTC_TR_SU_3     BIT3    // Second units in BCD format [3]
#define RTC_TR_ST_0     BIT4    // Second tens in BCD format [0]
#define RTC_TR_ST_1     BIT5    // Second tens in BCD format [1]
#define RTC_TR_ST_2     BIT6    // Second tens in BCD format [2]
#define RTC_TR_MNU_0    BIT8    // Minute units in BCD format [0]
#define RTC_TR_MNU_1    BIT9    // Minute units in BCD format [1]
#define RTC_TR_MNU_2    BIT10   // Minute units in BCD format [2]
#define RTC_TR_MNU_3    BIT11   // Minute units in BCD format [3]
#define RTC_TR_MNT_0    BIT12   // Minute tens in BCD format [0]
#define RTC_TR_MNT_1    BIT13   // Minute tens in BCD format [1]
#define RTC_TR_MNT_2    BIT14   // Minute tens in BCD format [2]
#define RTC_TR_HU_0     BIT16   // Hour units in BCD format [0]
#define RTC_TR_HU_1     BIT17   // Hour units in BCD format [1]
#define RTC_TR_HU_2     BIT18   // Hour units in BCD format [2]
#define RTC_TR_HU_3     BIT19   // Hour units in BCD format [3]
#define RTC_TR_HT_0     BIT20   // Hour tens in BCD format [0]
#define RTC_TR_HT_1     BIT21   // Hour tens in BCD format [1]
#define RTC_TR_PM       BIT22   // AM/PM notation

/* RTC_DR bit definitions */
#define RTC_DR_DU_0     BIT0    // Date units in BCD format [0]
#define RTC_DR_DU_1     BIT1    // Date units in BCD format [1]
#define RTC_DR_DU_2     BIT2    // Date units in BCD format [2]
#define RTC_DR_DU_3     BIT3    // Date units in BCD format [3]
#define RTC_DR_DT_0     BIT4    // Date tens in BCD format [0]
#define RTC_DR_DT_1     BIT5    // Date tens in BCD format [1]
#define RTC_DR_MU_0     BIT8    // Month units in BCD format [0]
#define RTC_DR_MU_1     BIT9    // Month units in BCD format [1]
#define RTC_DR_MU_2     BIT10   // Month units in BCD format [2]
#define RTC_DR_MU_3     BIT11   // Month units in BCD format [3]
#define RTC_DR_MT       BIT12   // Month tens in BCD format
#define RTC_DR_WDU_0    BIT13   // Weekday units [0]
#define RTC_DR_WDU_1    BIT14   // Weekday units [1]
#define RTC_DR_WDU_2    BIT15   // Weekday units [2]
#define RTC_DR_YU_0     BIT16   // Year units in BCD format [0]
#define RTC_DR_YU_1     BIT17   // Year units in BCD format [1]
#define RTC_DR_YU_2     BIT18   // Year units in BCD format [2]
#define RTC_DR_YU_3     BIT19   // Year units in BCD format [3]
#define RTC_DR_YT_0     BIT20   // Year tens in BCD format [0]
#define RTC_DR_YT_1     BIT21   // Year tens in BCD format [1]
#define RTC_DR_YT_2     BIT22   // Year tens in BCD format [2]
#define RTC_DR_YT_3     BIT23   // Year tens in BCD format [3]

/* RTC_CR bit definitions */
#define RTC_CR_WUCKSEL_0    BIT0    // Wakeup clock selection [0]
#define RTC_CR_WUCKSEL_1    BIT1    // Wakeup clock selection [1]
#define RTC_CR_WUCKSEL_2    BIT2    // Wakeup clock selection [2]
#define RTC_CR_TSEDGE       BIT3    // Timestamp event active edge
#define RTC_CR_REFCKON      BIT4    // Reference clock detection enable
#define RTC_CR_BYPSHAD      BIT5    // Bypass the shadow registers
#define RTC_CR_FMT          BIT6    // Hour format
#define RTC_CR_DCE          BIT7    // Coarse digital calibration enable
#define RTC_CR_ALRAE        BIT8    // Alarm A enable
#define RTC_CR_ALRBE        BIT9    // Alarm B enable
#define RTC_CR_WUTE         BIT10   // Wakeup timer enable
#define RTC_CR_TSE          BIT11   // Time stamp enable
#define RTC_CR_ALRAIE       BIT12   // Alarm A interrupt enable
#define RTC_CR_ALRBIE       BIT13   // Alarm B interrupt enable
#define RTC_CR_WUTIE        BIT14   // Wakeup timer interrupt enable
#define RTC_CR_TSIE         BIT15   // Timestamp interrupt enable
#define RTC_CR_ADD1H        BIT16   // Add 1 hour (summer time change)
#define RTC_CR_SUB1H        BIT17   // Subtract 1 hour (winter time change)
#define RTC_CR_BKP          BIT18   // Backup
#define RTC_CR_COSEL        BIT19   // Calibration output selection
#define RTC_CR_POL          BIT20   // Output polarity
#define RTC_CR_OSEL_0       BIT21   // Output selection [0]
#define RTC_CR_OSEL_1       BIT22   // Output selection [1]
#define RTC_CR_COE          BIT23   // Calibration output enable

/* RTC_ISR bit definitions */
#define RTC_ISR_ALRAWF  BIT0    // Alarm A write flag
#define RTC_ISR_ALRBWF  BIT1    // Alarm B write flag
#define RTC_ISR_WUTWF   BIT2    // Wakeup timer write flag
#define RTC_ISR_SHPF    BIT3    // Shift operation pending
#define RTC_ISR_INITS   BIT4    // Initialization status flag
#define RTC_ISR_RSF     BIT5    // Registers synchronization flag
#define RTC_ISR_INITF   BIT6    // Initialization flag
#define RTC_ISR_INIT    BIT7    // Initialization mode
#define RTC_ISR_ALRAF   BIT8    // Alarm A flag
#define RTC_ISR_ALRBF   BIT9    // Alarm B flag
#define RTC_ISR_WUTF    BIT10   // Wakeup timer flag
#define RTC_ISR_TSF     BIT11   // Timestamp flag
#define RTC_ISR_TSOVF   BIT12   // Timestamp overflow flag
#define RTC_ISR_TAMP1F  BIT13   // TAMPER1 detection flag
#define RTC_ISR_TAMP2F  BIT14   // TAMPER2 detection flag
#define RTC_ISR_RECALPF BIT16   // Recalibration pending flag

/* RTC_PRER bit definitions */
#define RTC_PRER_PREDIV_S_0     BIT0    // Synchronous prescaler factor [0]
#define RTC_PRER_PREDIV_S_1     BIT1    // Synchronous prescaler factor [1]
#define RTC_PRER_PREDIV_S_2     BIT2    // Synchronous prescaler factor [2]
#define RTC_PRER_PREDIV_S_3     BIT3    // Synchronous prescaler factor [3]
#define RTC_PRER_PREDIV_S_4     BIT4    // Synchronous prescaler factor [4]
#define RTC_PRER_PREDIV_S_5     BIT5    // Synchronous prescaler factor [5]
#define RTC_PRER_PREDIV_S_6     BIT6    // Synchronous prescaler factor [6]
#define RTC_PRER_PREDIV_S_7     BIT7    // Synchronous prescaler factor [7]
#define RTC_PRER_PREDIV_S_8     BIT8    // Synchronous prescaler factor [8]
#define RTC_PRER_PREDIV_S_9     BIT9    // Synchronous prescaler factor [9]
#define RTC_PRER_PREDIV_S_10    BIT10   // Synchronous prescaler factor [10]
#define RTC_PRER_PREDIV_S_11    BIT11   // Synchronous prescaler factor [11]
#define RTC_PRER_PREDIV_S_12    BIT12   // Synchronous prescaler factor [12]
#define RTC_PRER_PREDIV_S_13    BIT13   // Synchronous prescaler factor [13]
#define RTC_PRER_PREDIV_S_14    BIT14   // Synchronous prescaler factor [14]
#define RTC_PRER_PREDIV_A_0     BIT16   // Asynchronous prescaler factor [0]
#define RTC_PRER_PREDIV_A_1     BIT17   // Asynchronous prescaler factor [1]
#define RTC_PRER_PREDIV_A_2     BIT18   // Asynchronous prescaler factor [2]
#define RTC_PRER_PREDIV_A_3     BIT19   // Asynchronous prescaler factor [3]
#define RTC_PRER_PREDIV_A_4     BIT20   // Asynchronous prescaler factor [4]
#define RTC_PRER_PREDIV_A_5     BIT21   // Asynchronous prescaler factor [5]
#define RTC_PRER_PREDIV_A_6     BIT22   // Asynchronous prescaler factor [6]

/* RTC_WUTR bit definitions */
#define RTC_WUTR_WUT_0      BIT0    // Wakeup auto-reload value bits [0]
#define RTC_WUTR_WUT_1      BIT1    // Wakeup auto-reload value bits [1]
#define RTC_WUTR_WUT_2      BIT2    // Wakeup auto-reload value bits [2]
#define RTC_WUTR_WUT_3      BIT3    // Wakeup auto-reload value bits [3]
#define RTC_WUTR_WUT_4      BIT4    // Wakeup auto-reload value bits [4]
#define RTC_WUTR_WUT_5      BIT5    // Wakeup auto-reload value bits [5]
#define RTC_WUTR_WUT_6      BIT6    // Wakeup auto-reload value bits [6]
#define RTC_WUTR_WUT_7      BIT7    // Wakeup auto-reload value bits [7]
#define RTC_WUTR_WUT_8      BIT8    // Wakeup auto-reload value bits [8]
#define RTC_WUTR_WUT_9      BIT9    // Wakeup auto-reload value bits [9]
#define RTC_WUTR_WUT_10     BIT10   // Wakeup auto-reload value bits [10]
#define RTC_WUTR_WUT_11     BIT11   // Wakeup auto-reload value bits [11]
#define RTC_WUTR_WUT_12     BIT12   // Wakeup auto-reload value bits [12]
#define RTC_WUTR_WUT_13     BIT13   // Wakeup auto-reload value bits [13]
#define RTC_WUTR_WUT_14     BIT14   // Wakeup auto-reload value bits [14]
#define RTC_WUTR_WUT_15     BIT15   // Wakeup auto-reload value bits [15]

/* RTC_CALIBR bit definitions */
#define RTC_CALIBR_DC_0     BIT0    // Digital calibration [0]
#define RTC_CALIBR_DC_1     BIT1    // Digital calibration [1]
#define RTC_CALIBR_DC_2     BIT2    // Digital calibration [2]
#define RTC_CALIBR_DC_3     BIT3    // Digital calibration [3]
#define RTC_CALIBR_DC_4     BIT4    // Digital calibration [4]
#define RTC_CALIBR_DCS      BIT7    // Digital calibration sign

/* RTC_ALRMxR bit definitions */
#define RTC_ALRMxR_SU_0     BIT0    // Second units in BCD format [0]
#define RTC_ALRMxR_SU_1     BIT1    // Second units in BCD format [1]
#define RTC_ALRMxR_SU_2     BIT2    // Second units in BCD format [2]
#define RTC_ALRMxR_SU_3     BIT3    // Second units in BCD format [3]
#define RTC_ALRMxR_ST_0     BIT4    // Second tens in BCD format [0]
#define RTC_ALRMxR_ST_1     BIT5    // Second tens in BCD format [1]
#define RTC_ALRMxR_ST_2     BIT6    // Second tens in BCD format [2]
#define RTC_ALRMxR_MSK1     BIT8    // Alarm seconds mask
#define RTC_ALRMxR_MNU_0    BIT8    // Minute units in BCD format [0]
#define RTC_ALRMxR_MNU_1    BIT9    // Minute units in BCD format [1]
#define RTC_ALRMxR_MNU_2    BIT10   // Minute units in BCD format [2]
#define RTC_ALRMxR_MNU_3    BIT11   // Minute units in BCD format [3]
#define RTC_ALRMxR_MNT_0    BIT12   // Minute tens in BCD format [0]
#define RTC_ALRMxR_MNT_1    BIT13   // Minute tens in BCD format [1]
#define RTC_ALRMxR_MNT_2    BIT14   // Minute tens in BCD format [2]
#define RTC_ALRMxR_MSK2     BIT15   // Alarm minutes mask
#define RTC_ALRMxR_HU_0     BIT16   // Hour units in BCD format [0]
#define RTC_ALRMxR_HU_1     BIT17   // Hour units in BCD format [1]
#define RTC_ALRMxR_HU_2     BIT18   // Hour units in BCD format [2]
#define RTC_ALRMxR_HU_3     BIT19   // Hour units in BCD format [3]
#define RTC_ALRMxR_HT_0     BIT20   // Hour tens in BCD format [0]
#define RTC_ALRMxR_HT_1     BIT21   // Hour tens in BCD format [1]
#define RTC_ALRMxR_PM       BIT22   // AM/PM notation
#define RTC_ALRMxR_MSK3     BIT23   // Alarm hours mask
#define RTC_ALRMxR_DU_0     BIT24   // Date units in BCD format [0]
#define RTC_ALRMxR_DU_1     BIT25   // Date units in BCD format [1]
#define RTC_ALRMxR_DU_2     BIT26   // Date units in BCD format [2]
#define RTC_ALRMxR_DU_3     BIT27   // Date units in BCD format [3]
#define RTC_ALRMxR_DT_0     BIT28   // Date tens in BCD format [0]
#define RTC_ALRMxR_DT_1     BIT29   // Date tens in BCD format [1]
#define RTC_ALRMxR_WDSEL    BIT30   // Weekday selection
#define RTC_ALRMxR_MSK4     BIT31   // Alarm date mask

/* RTC_WPR bit definitions */
#define RTC_WPR_KEY_0   BIT0    // Write protection key [0]
#define RTC_WPR_KEY_1   BIT1    // Write protection key [1]
#define RTC_WPR_KEY_2   BIT2    // Write protection key [2]
#define RTC_WPR_KEY_3   BIT3    // Write protection key [3]
#define RTC_WPR_KEY_4   BIT4    // Write protection key [4]
#define RTC_WPR_KEY_5   BIT5    // Write protection key [5]
#define RTC_WPR_KEY_6   BIT6    // Write protection key [6]
#define RTC_WPR_KEY_7   BIT7    // Write protection key [7]

/* RTC_SSR bit definitions */
#define RTC_SSR_SS_0    BIT0    // Sub second value [0]
#define RTC_SSR_SS_1    BIT1    // Sub second value [1]
#define RTC_SSR_SS_2    BIT2    // Sub second value [2]
#define RTC_SSR_SS_3    BIT3    // Sub second value [3]
#define RTC_SSR_SS_4    BIT4    // Sub second value [4]
#define RTC_SSR_SS_5    BIT5    // Sub second value [5]
#define RTC_SSR_SS_6    BIT6    // Sub second value [6]
#define RTC_SSR_SS_7    BIT7    // Sub second value [7]
#define RTC_SSR_SS_8    BIT8    // Sub second value [8]
#define RTC_SSR_SS_9    BIT9    // Sub second value [9]
#define RTC_SSR_SS_10   BIT10   // Sub second value [10]
#define RTC_SSR_SS_11   BIT11   // Sub second value [11]
#define RTC_SSR_SS_12   BIT12   // Sub second value [12]
#define RTC_SSR_SS_13   BIT13   // Sub second value [13]
#define RTC_SSR_SS_14   BIT14   // Sub second value [14]
#define RTC_SSR_SS_15   BIT15   // Sub second value [15]

/* RTC_SHIFTR bit definitions */
#define RTC_SHIFTR_SUBFS_0  BIT0    // Subtract a fraction of a second [0]
#define RTC_SHIFTR_SUBFS_1  BIT1    // Subtract a fraction of a second [1]
#define RTC_SHIFTR_SUBFS_2  BIT2    // Subtract a fraction of a second [2]
#define RTC_SHIFTR_SUBFS_3  BIT3    // Subtract a fraction of a second [3]
#define RTC_SHIFTR_SUBFS_4  BIT4    // Subtract a fraction of a second [4]
#define RTC_SHIFTR_SUBFS_5  BIT5    // Subtract a fraction of a second [5]
#define RTC_SHIFTR_SUBFS_6  BIT6    // Subtract a fraction of a second [6]
#define RTC_SHIFTR_SUBFS_7  BIT7    // Subtract a fraction of a second [7]
#define RTC_SHIFTR_SUBFS_8  BIT8    // Subtract a fraction of a second [8]
#define RTC_SHIFTR_SUBFS_9  BIT9    // Subtract a fraction of a second [9]
#define RTC_SHIFTR_SUBFS_10 BIT10   // Subtract a fraction of a second [10]
#define RTC_SHIFTR_SUBFS_11 BIT11   // Subtract a fraction of a second [11]
#define RTC_SHIFTR_SUBFS_12 BIT12   // Subtract a fraction of a second [12]
#define RTC_SHIFTR_SUBFS_13 BIT13   // Subtract a fraction of a second [13]
#define RTC_SHIFTR_SUBFS_14 BIT14   // Subtract a fraction of a second [14]
#define RTC_SHIFTR_ADD1S    BIT31   // Add one second

/* RTC_TSTR bit definitions */
#define RTC_TSTR_SU_0   BIT0    // Second units in BCD format [0]
#define RTC_TSTR_SU_1   BIT1    // Second units in BCD format [1]
#define RTC_TSTR_SU_2   BIT2    // Second units in BCD format [2]
#define RTC_TSTR_SU_3   BIT3    // Second units in BCD format [3]
#define RTC_TSTR_ST_0   BIT4    // Second tens in BCD format [0]
#define RTC_TSTR_ST_1   BIT5    // Second tens in BCD format [1]
#define RTC_TSTR_ST_2   BIT6    // Second tens in BCD format [2]
#define RTC_TSTR_MNU_0  BIT8    // Minute units in BCD format [0]
#define RTC_TSTR_MNU_1  BIT9    // Minute units in BCD format [1]
#define RTC_TSTR_MNU_2  BIT10   // Minute units in BCD format [2]
#define RTC_TSTR_MNU_3  BIT11   // Minute units in BCD format [3]
#define RTC_TSTR_MNT_0  BIT12   // Minute tens in BCD format [0]
#define RTC_TSTR_MNT_1  BIT13   // Minute tens in BCD format [1]
#define RTC_TSTR_MNT_2  BIT14   // Minute tens in BCD format [2]
#define RTC_TSTR_HU_0   BIT16   // Hour units in BCD format [0]
#define RTC_TSTR_HU_1   BIT17   // Hour units in BCD format [1]
#define RTC_TSTR_HU_2   BIT18   // Hour units in BCD format [2]
#define RTC_TSTR_HU_3   BIT19   // Hour units in BCD format [3]
#define RTC_TSTR_HT_0   BIT20   // Hour tens in BCD format [0]
#define RTC_TSTR_HT_1   BIT21   // Hour tens in BCD format [1]
#define RTC_TSTR_PM     BIT22   // AM/PM notation

/* RTC_TSDR bit definitions */
#define RTC_TSDR_DU_0   BIT0    // Date units in BCD format [0]
#define RTC_TSDR_DU_1   BIT1    // Date units in BCD format [1]
#define RTC_TSDR_DU_2   BIT2    // Date units in BCD format [2]
#define RTC_TSDR_DU_3   BIT3    // Date units in BCD format [3]
#define RTC_TSDR_DT_0   BIT4    // Date tens in BCD format [0]
#define RTC_TSDR_DT_1   BIT5    // Date tens in BCD format [1]
#define RTC_TSDR_MU_0   BIT8    // Month units in BCD format [0]
#define RTC_TSDR_MU_1   BIT9    // Month units in BCD format [1]
#define RTC_TSDR_MU_2   BIT10   // Month units in BCD format [2]
#define RTC_TSDR_MU_3   BIT11   // Month units in BCD format [3]
#define RTC_TSDR_MT     BIT12   // Month tens in BCD format
#define RTC_TSDR_WDU_0  BIT13   // Weekday units [0]
#define RTC_TSDR_WDU_1  BIT14   // Weekday units [1]
#define RTC_TSDR_WDU_2  BIT15   // Weekday units [2]

/* RTC_TSSSR bit definitions */
#define RTC_TSSSR_SS_0  BIT0    // Sub second value [0]
#define RTC_TSSSR_SS_1  BIT1    // Sub second value [1]
#define RTC_TSSSR_SS_2  BIT2    // Sub second value [2]
#define RTC_TSSSR_SS_3  BIT3    // Sub second value [3]
#define RTC_TSSSR_SS_4  BIT4    // Sub second value [4]
#define RTC_TSSSR_SS_5  BIT5    // Sub second value [5]
#define RTC_TSSSR_SS_6  BIT6    // Sub second value [6]
#define RTC_TSSSR_SS_7  BIT7    // Sub second value [7]
#define RTC_TSSSR_SS_8  BIT8    // Sub second value [8]
#define RTC_TSSSR_SS_9  BIT9    // Sub second value [9]
#define RTC_TSSSR_SS_10 BIT10   // Sub second value [10]
#define RTC_TSSSR_SS_11 BIT11   // Sub second value [11]
#define RTC_TSSSR_SS_12 BIT12   // Sub second value [12]
#define RTC_TSSSR_SS_13 BIT13   // Sub second value [13]
#define RTC_TSSSR_SS_14 BIT14   // Sub second value [14]
#define RTC_TSSSR_SS_15 BIT15   // Sub second value [15]

/* RTC_CALR bit definitions */
#define RTC_CALR_CALM_0 BIT0    // Calibration minus [0]
#define RTC_CALR_CALM_1 BIT1    // Calibration minus [1]
#define RTC_CALR_CALM_2 BIT2    // Calibration minus [2]
#define RTC_CALR_CALM_3 BIT3    // Calibration minus [3]
#define RTC_CALR_CALM_4 BIT4    // Calibration minus [4]
#define RTC_CALR_CALM_5 BIT5    // Calibration minus [5]
#define RTC_CALR_CALM_6 BIT6    // Calibration minus [6]
#define RTC_CALR_CALM_7 BIT7    // Calibration minus [7]
#define RTC_CALR_CALM_8 BIT8    // Calibration minus [8]
#define RTC_CALR_CALW16 BIT13   // Use a 16-second calibration cycle period
#define RTC_CALR_CALW8  BIT14   // Use an 8-second calibration cycle period
#define RTC_CALR_CALP   BIT15   // Increase frequency of RTC by 488.5 ppm

/* RTC_TAFCR bit definitions */
#define RTC_TAFCR_TAMP1E        BIT0    // Tamper 1 detection enable
#define RTC_TAFCR_TAMP1TRG      BIT1    // Active level for tamper 1
#define RTC_TAFCR_TAMPIE        BIT2    // Tamper interrupt enable
#define RTC_TAFCR_TAMP2E        BIT3    // Tamper 2 detection enable
#define RTC_TAFCR_TAMP2TRG      BIT4    // Active level for tamper 2
#define RTC_TAFCR_TAMPTS        BIT7    // Activate timestamp on tamper detection event
#define RTC_TAFCR_TAMPFREQ_0    BIT8    // Tamper sampling frequency [0]
#define RTC_TAFCR_TAMPFREQ_1    BIT9    // Tamper sampling frequency [1]
#define RTC_TAFCR_TAMPFREQ_2    BIT10   // Tamper sampling frequency [2]
#define RTC_TAFCR_TAMPFLT_0     BIT11   // Tamper filter count [0]
#define RTC_TAFCR_TAMPFLT_1     BIT12   // Tamper filter count [1]
#define RTC_TAFCR_TAMPPRCH_0    BIT13   // Tamper precharge duration [0]
#define RTC_TAFCR_TAMPPRCH_1    BIT14   // Tamper precharge duration [1]
#define RTC_TAFCR_TAMPPUDIS     BIT15   // TAMPER pull-up disable
#define RTC_TAFCR_TAMP1INSEL    BIT16   // TAMPER1 mapping
#define RTC_TAFCR_TSINSEL       BIT17   // TIMESTAMP mapping
#define RTC_TAFCR_ALARMOUTTYPE  BIT18   // RTC_ALARM output type

/* RTC_ALRMxSSR bit definitions */
#define RTC_ALRMxSSR_SS_0       BIT0    // Sub seconds value [0]
#define RTC_ALRMxSSR_SS_1       BIT1    // Sub seconds value [1]
#define RTC_ALRMxSSR_SS_2       BIT2    // Sub seconds value [2]
#define RTC_ALRMxSSR_SS_3       BIT3    // Sub seconds value [3]
#define RTC_ALRMxSSR_SS_4       BIT4    // Sub seconds value [4]
#define RTC_ALRMxSSR_SS_5       BIT5    // Sub seconds value [5]
#define RTC_ALRMxSSR_SS_6       BIT6    // Sub seconds value [6]
#define RTC_ALRMxSSR_SS_7       BIT7    // Sub seconds value [7]
#define RTC_ALRMxSSR_SS_8       BIT8    // Sub seconds value [8]
#define RTC_ALRMxSSR_SS_9       BIT9    // Sub seconds value [9]
#define RTC_ALRMxSSR_SS_10      BIT10   // Sub seconds value [10]
#define RTC_ALRMxSSR_SS_11      BIT11   // Sub seconds value [11]
#define RTC_ALRMxSSR_SS_12      BIT12   // Sub seconds value [12]
#define RTC_ALRMxSSR_SS_13      BIT13   // Sub seconds value [13]
#define RTC_ALRMxSSR_SS_14      BIT14   // Sub seconds value [14]
#define RTC_ALRMxSSR_MASKSS_0   BIT24   // Mask the most-significant bits starting at this bit [0]
#define RTC_ALRMxSSR_MASKSS_1   BIT25   // Mask the most-significant bits starting at this bit [1]
#define RTC_ALRMxSSR_MASKSS_2   BIT26   // Mask the most-significant bits starting at this bit [2]
#define RTC_ALRMxSSR_MASKSS_3   BIT27   // Mask the most-significant bits starting at this bit [3]

/* RTC_BKPxR bit definitions */
#define RTC_BKPxR_BKP_0     BIT0    // Backup [0]
#define RTC_BKPxR_BKP_1     BIT1    // Backup [1]
#define RTC_BKPxR_BKP_2     BIT2    // Backup [2]
#define RTC_BKPxR_BKP_3     BIT3    // Backup [3]
#define RTC_BKPxR_BKP_4     BIT4    // Backup [4]
#define RTC_BKPxR_BKP_5     BIT5    // Backup [5]
#define RTC_BKPxR_BKP_6     BIT6    // Backup [6]
#define RTC_BKPxR_BKP_7     BIT7    // Backup [7]
#define RTC_BKPxR_BKP_8     BIT8    // Backup [8]
#define RTC_BKPxR_BKP_9     BIT9    // Backup [9]
#define RTC_BKPxR_BKP_10    BIT10   // Backup [10]
#define RTC_BKPxR_BKP_11    BIT11   // Backup [11]
#define RTC_BKPxR_BKP_12    BIT12   // Backup [12]
#define RTC_BKPxR_BKP_13    BIT13   // Backup [13]
#define RTC_BKPxR_BKP_14    BIT14   // Backup [14]
#define RTC_BKPxR_BKP_15    BIT15   // Backup [15]
#define RTC_BKPxR_BKP_16    BIT16   // Backup [16]
#define RTC_BKPxR_BKP_17    BIT17   // Backup [17]
#define RTC_BKPxR_BKP_18    BIT18   // Backup [18]
#define RTC_BKPxR_BKP_19    BIT19   // Backup [19]
#define RTC_BKPxR_BKP_20    BIT20   // Backup [20]
#define RTC_BKPxR_BKP_21    BIT21   // Backup [21]
#define RTC_BKPxR_BKP_22    BIT22   // Backup [22]
#define RTC_BKPxR_BKP_23    BIT23   // Backup [23]
#define RTC_BKPxR_BKP_24    BIT24   // Backup [24]
#define RTC_BKPxR_BKP_25    BIT25   // Backup [25]
#define RTC_BKPxR_BKP_26    BIT26   // Backup [26]
#define RTC_BKPxR_BKP_27    BIT27   // Backup [27]
#define RTC_BKPxR_BKP_28    BIT28   // Backup [28]
#define RTC_BKPxR_BKP_29    BIT29   // Backup [29]
#define RTC_BKPxR_BKP_30    BIT30   // Backup [30]
#define RTC_BKPxR_BKP_31    BIT31   // Backup [31]

#endif // RTC_H
