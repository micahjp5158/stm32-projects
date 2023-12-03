/*
 * rcc.h
 *
 * Defines macros for STM32F407VG RCC peripheral registers.
 */

#ifndef RCC_H
#define RCC_H

/* RCC peripheral base address from STM32F407VG reference manual, Table 1 */
#define RCC_BASE_ADDR   0x40023800U

/* RCC register offsets from STM32F407VG reference manual Table 33 */
#define RCC_CR_OFFEST   		0x00U
#define RCC_PLLCFGR_OFFEST 		0x04U
#define RCC_CFGR_OFFSET 		0x08U
#define RCC_CIR_OFFSET  		0x0CU
#define RCC_AHB1RSTR_OFFSET 	0x10U
#define RCC_AHB2RSTR_OFFSET 	0x14U
#define RCC_AHB3RSTR_OFFSET 	0x18U
#define RCC_APB1RSTR_OFFSET 	0x20U
#define RCC_APB2RSTR_OFFSET 	0x24U
#define RCC_AHB1ENR_OFFSET 		0x30U
#define RCC_AHB2ENR_OFFSET 		0x34U
#define RCC_AHB3ENR_OFFSET 		0x38U
#define RCC_APB1ENR_OFFSET 		0x40U
#define RCC_APB2ENR_OFFSET 		0x44U
#define RCC_AHB1LPENR_OFFSET	0x50U
#define RCC_AHB2LPENR_OFFSET	0x54U
#define RCC_AHB3LPENR_OFFSET	0x58U
#define RCC_APB1LPENR_OFFSET	0x60U
#define RCC_APB2LPENR_OFFSET	0x64U
#define RCC_BDCR_OFFSET			0x70U
#define RCC_CSR_OFFSET			0x74U
#define RCC_SSCGR_OFFSET		0x80U
#define RCC_PLLI2SCFGR_OFFSET	0x84U
#define RCC_PLLSAICFGR_OFFSET	0x88U
#define RCC_DCKCFGR_OFFSET		0x8CU

/* RCC register address definitions */
#define RCC_CR          (RCC_BASE_ADDR + RCC_CR_OFFEST)         // RCC clock control register
#define RCC_PLLCFGR     (RCC_BASE_ADDR + RCC_PLLCFGR_OFFEST)    // RCC PLL configuration register
#define RCC_CFGR        (RCC_BASE_ADDR + RCC_CFGR_OFFSET)       // RCC clock configuration register
#define RCC_CIR         (RCC_BASE_ADDR + RCC_CIR_OFFSET)        // RCC clock interrupt register
#define RCC_AHB1RSTR    (RCC_BASE_ADDR + RCC_AHB1RSTR_OFFSET)   // RCC AHB1 peripheral reset register
#define RCC_AHB2RSTR    (RCC_BASE_ADDR + RCC_AHB2RSTR_OFFSET)   // RCC AHB2 peripheral reset register
#define RCC_AHB3RSTR    (RCC_BASE_ADDR + RCC_AHB3RSTR_OFFSET)   // RCC AHB3 peripheral reset register
#define RCC_APB1RSTR    (RCC_BASE_ADDR + RCC_APB1RSTR_OFFSET)   // RCC APB1 peripheral reset register
#define RCC_APB2RSTR    (RCC_BASE_ADDR + RCC_APB2RSTR_OFFSET)   // RCC APB2 peripheral reset register
#define RCC_AHB1ENR     (RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)    // RCC AHB1 peripheral clock enable register
#define RCC_AHB2ENR     (RCC_BASE_ADDR + RCC_AHB2ENR_OFFSET)    // RCC AHB2 peripheral clock enable register
#define RCC_AHB3ENR     (RCC_BASE_ADDR + RCC_AHB3ENR_OFFSET)    // RCC AHB3 peripheral clock enable register
#define RCC_APB1ENR     (RCC_BASE_ADDR + RCC_APB1ENR_OFFSET)    // RCC APB1 peripheral clock enable register
#define RCC_APB2ENR     (RCC_BASE_ADDR + RCC_APB2ENR_OFFSET)    // RCC APB2 peripheral clock enable register
#define RCC_AHB1LPENR   (RCC_BASE_ADDR + RCC_AHB1LPENR_OFFSET)  // RCC AHB1 peripheral clock enable in low power mode register
#define RCC_AHB2LPENR   (RCC_BASE_ADDR + RCC_AHB2LPENR_OFFSET)  // RCC AHB2 peripheral clock enable in low power mode register
#define RCC_AHB3LPENR   (RCC_BASE_ADDR + RCC_AHB3LPENR_OFFSET)  // RCC AHB3 peripheral clock enable in low power mode register
#define RCC_APB1LPENR   (RCC_BASE_ADDR + RCC_APB1LPENR_OFFSET)  // RCC APB1 peripheral clock enable in low power mode register
#define RCC_APB2LPENR   (RCC_BASE_ADDR + RCC_APB2LPENR_OFFSET)  // RCC APB2 peripheral clock enable in low power mode register
#define RCC_BDCR        (RCC_BASE_ADDR + RCC_BDCR_OFFSET)       // RCC Backup domain control register
#define RCC_CSR         (RCC_BASE_ADDR + RCC_CSR_OFFSET)        // RCC clock control & status register
#define RCC_SSCGR       (RCC_BASE_ADDR + RCC_SSCGR_OFFSET)      // RCC spread spectrum clock generation register
#define RCC_PLLI2SCFGR  (RCC_BASE_ADDR + RCC_PLLI2SCFGR_OFFSET) // RCC PLLI2S configuration register

/* RCC_CR bit definitions */
#define RCC_CR_HSION        BIT0    // Internal high-speed clock enable
#define RCC_CR_HSIRDY       BIT1    // Internal high-speed clock ready flag
#define RCC_CR_HSITRIM_0    BIT3    // Internal high-speed clock trimming [0]
#define RCC_CR_HSITRIM_1    BIT4    // Internal high-speed clock trimming [1]
#define RCC_CR_HSITRIM_2    BIT5    // Internal high-speed clock trimming [2]
#define RCC_CR_HSITRIM_3    BIT6    // Internal high-speed clock trimming [3]
#define RCC_CR_HSITRIM_4    BIT7    // Internal high-speed clock trimming [4]
#define RCC_CR_HSICAL_0     BIT8    // Internal high-speec clock calibration [0]
#define RCC_CR_HSICAL_1     BIT9    // Internal high-speec clock calibration [1]
#define RCC_CR_HSICAL_2     BIT10   // Internal high-speec clock calibration [2]
#define RCC_CR_HSICAL_3     BIT11   // Internal high-speec clock calibration [3]
#define RCC_CR_HSICAL_4     BIT12   // Internal high-speec clock calibration [4]
#define RCC_CR_HSICAL_5     BIT13   // Internal high-speec clock calibration [5]
#define RCC_CR_HSICAL_6     BIT14   // Internal high-speec clock calibration [6]
#define RCC_CR_HSICAL_7     BIT15   // Internal high-speec clock calibration [7]
#define RCC_CR_HSEON        BIT16   // HSE clock enable
#define RCC_CR_HSERDY       BIT17   // HSE clock ready flag
#define RCC_CR_HSYBYP       BIT18   // HSE clock bypass
#define RCC_CR_CSSON        BIT19   // Clock security system enable
#define RCC_CR_PLLON        BIT24   // Main PLL (PLL) enable
#define RCC_CR_PLLRDY       BIT25   // Main PLL (PLL) clock ready flag
#define RCC_CR_PLLI2SON     BIT26   // PLLI2S enable
#define RCC_CR_PLLI2SRDY    BIT27   // PLLI2S clock ready flag

/* RCC_PLL_CFGR bit definitions */
#define RCC_PLL_CFGR_PLLM0  BIT0    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock [0]
#define RCC_PLL_CFGR_PLLM1  BIT1    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock [1]
#define RCC_PLL_CFGR_PLLM2  BIT2    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock [2]
#define RCC_PLL_CFGR_PLLM3  BIT3    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock [3]
#define RCC_PLL_CFGR_PLLM4  BIT4    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock [4]
#define RCC_PLL_CFGR_PLLM5  BIT5    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock [5]
#define RCC_PLL_CFGR_PLLN0  BIT6    // Main PLL (PLL) multiplication factor for VCO [0]
#define RCC_PLL_CFGR_PLLN0  BIT7    // Main PLL (PLL) multiplication factor for VCO [1]
#define RCC_PLL_CFGR_PLLN0  BIT8    // Main PLL (PLL) multiplication factor for VCO [2]
#define RCC_PLL_CFGR_PLLN0  BIT9    // Main PLL (PLL) multiplication factor for VCO [3]
#define RCC_PLL_CFGR_PLLN0  BIT10   // Main PLL (PLL) multiplication factor for VCO [4]
#define RCC_PLL_CFGR_PLLN0  BIT11   // Main PLL (PLL) multiplication factor for VCO [5]
#define RCC_PLL_CFGR_PLLN0  BIT12   // Main PLL (PLL) multiplication factor for VCO [6]
#define RCC_PLL_CFGR_PLLN0  BIT13   // Main PLL (PLL) multiplication factor for VCO [7]
#define RCC_PLL_CFGR_PLLN0  BIT14   // Main PLL (PLL) multiplication factor for VCO [8]
#define RCC_PLL_CFGR_PLLP0  BIT16   // Main PLL (PLL) division factor for main system clock [0]
#define RCC_PLL_CFGR_PLLP1  BIT17   // Main PLL (PLL) division factor for main system clock [1]
#define RCC_PLL_CFGR_PLLSRC BIT22   // Main PLL (PLL) and audio PLL (PLLI2S) entry clock source
#define RCC_PLL_CFGR_PLLQ0  BIT24   // Main PLL (PLL) division factor for USB OTG FS, SDIO, and random number generator clocks [0]
#define RCC_PLL_CFGR_PLLQ1  BIT25   // Main PLL (PLL) division factor for USB OTG FS, SDIO, and random number generator clocks [1]
#define RCC_PLL_CFGR_PLLQ2  BIT26   // Main PLL (PLL) division factor for USB OTG FS, SDIO, and random number generator clocks [2]
#define RCC_PLL_CFGR_PLLQ3  BIT27   // Main PLL (PLL) division factor for USB OTG FS, SDIO, and random number generator clocks [3]

/* RCC_CFGR bit definitions */
#define RCC_CFGR_SW0        BIT0    // System clock switch [0]
#define RCC_CFGR_SW1        BIT1    // System clock switch [1]
#define RCC_CFGR_SWS0       BIT2    // System clock switch status [0]
#define RCC_CFGR_SWS1       BIT3    // System clock switch status [1]
#define RCC_CFGR_HPRE_0     BIT4    // AHB prescaler [0]
#define RCC_CFGR_HPRE_1     BIT5    // AHB prescaler [1]
#define RCC_CFGR_HPRE_2     BIT6    // AHB prescaler [2]
#define RCC_CFGR_HPRE_3     BIT7    // AHB prescaler [3]
#define RCC_CFGR_PPRE1_0    BIT10   // APB Low speed prescaler [0]
#define RCC_CFGR_PPRE1_1    BIT11   // APB Low speed prescaler [1]
#define RCC_CFGR_PPRE2_0    BIT12   // APB high-speed prescaler [0]
#define RCC_CFGR_PPRE2_1    BIT13   // APB high-speed prescaler [1]
#define RCC_CFGR_RTCPRE_0   BIT16   // HSE division factor for HSE clock [0]
#define RCC_CFGR_RTCPRE_1   BIT16   // HSE division factor for HSE clock [1]
#define RCC_CFGR_RTCPRE_2   BIT16   // HSE division factor for HSE clock [2]
#define RCC_CFGR_RTCPRE_3   BIT16   // HSE division factor for HSE clock [3]
#define RCC_CFGR_MCO1_0     BIT21   // Microcontroller clock output 1 [0]
#define RCC_CFGR_MCO1_1     BIT22   // Microcontroller clock output 1 [1]
#define RCC_CFGR_I2SSCR     BIT23   // I2S clock selection
#define RCC_CFGR_MCO1_PRE_0 BIT24   // MCO1 prescaler [0]
#define RCC_CFGR_MCO1_PRE_1 BIT25   // MCO1 prescaler [1]
#define RCC_CFGR_MCO1_PRE_2 BIT26   // MCO1 prescaler [2]
#define RCC_CFGR_MCO2_PRE_0 BIT27   // MCO2 prescaler [0]
#define RCC_CFGR_MCO2_PRE_1 BIT28   // MCO2 prescaler [1]
#define RCC_CFGR_MCO1_PRE_2 BIT29   // MCO2 prescaler [2]
#define RCC_CFGR_MCO2_0     BIT30   // Microcontroller clock output 2 [0]
#define RCC_CFGR_MCO2_1     BIT31   // Microcontroller clock output 2 [1]

/* RCC_CIR bit definitions */
#define RCC_CIR_LSIRDYF     BIT0    // LSI ready interrupt flag
#define RCC_CIR_LSERDYF     BIT1    // LSE ready interrupt flag
#define RCC_CIR_HSIRDYF     BIT2    // HSI ready interrupt flag
#define RCC_CIR_HSERDYF     BIT3    // HSE ready interrupt flag
#define RCC_CIR_PLLRDYF     BIT4    // Main PLL (PLL) ready interrupt flag
#define RCC_CIR_PLLI2SRDYF  BIT5    // PLLI2S ready interrupt flag
#define RCC_CIR_CSSF        BIT7    // Clock security system interrupt flag
#define RCC_CIR_LSIRDYIE    BIT8    // LSI ready interrupt enable
#define RCC_CIR_LSERDYIE    BIT9    // LSE ready interrupt enable
#define RCC_CIR_HSIRDYIE    BIT10   // HSI ready interrupt enable
#define RCC_CIR_HSERDYIE    BIT11   // HSE ready interrupt enable
#define RCC_CIR_PLLRDYIE    BIT12   // Main PLL (PLL) ready interrupt enable
#define RCC_CIR_PLLI2SRDYIE BIT13   // PLLI2S ready interrupt enable
#define RCC_CIR_LSIRDYC     BIT16   // LSI ready interrupt clear
#define RCC_CIR_LSERDYC     BIT17   // LSE ready interrupt clear
#define RCC_CIR_HSIRDYC     BIT18   // HSI ready interrupt clear
#define RCC_CIR_HSERDYC     BIT19   // HSE ready interrupt clear
#define RCC_CIR_PLLRDYC     BIT20   // Main PLL (PLL) ready interrupt clear
#define RCC_CIR_PLLI2SRDYC  BIT21   // PLLI2S ready interrupt clear
#define RCC_CIR_CSSC        BIT23   // Clock security system interrupt clear

/* RCC_AHB1RSTR bit definitions */
#define RCC_AHB1RSTR_GPIOARST   BIT0    // IO port A reset
#define RCC_AHB1RSTR_GPIOBRST   BIT1    // IO port B reset
#define RCC_AHB1RSTR_GPIOCRST   BIT2    // IO port C reset
#define RCC_AHB1RSTR_GPIODRST   BIT3    // IO port D reset
#define RCC_AHB1RSTR_GPIOERST   BIT4    // IO port E reset
#define RCC_AHB1RSTR_GPIOFRST   BIT5    // IO port F reset
#define RCC_AHB1RSTR_GPIOGRST   BIT6    // IO port G reset
#define RCC_AHB1RSTR_GPIOHRST   BIT7    // IO port H reset
#define RCC_AHB1RSTR_GPIOIRST   BIT8    // IO port I reset
#define RCC_AHB1RSTR_CRCRST     BIT12   // CRC reset
#define RCC_AHB1RSTR_DMA1RST    BIT21   // DMA 1 reset
#define RCC_AHB1RSTR_DMA2RST    BIT22   // DMA2 reset
#define RCC_AHB1RSTR_ETHMACRST  BIT25   // Ethernet MAC reset
#define RCC_AHB1RSTR_OTGHSRST   BIT29   // USB OTG HS module reset

/* RCC_AHB2RSTR bit definitions */
#define RCC_AHB2RSTR_DCMIRST    BIT0    // Camera interface reset
#define RCC_AHB2RSTR_CRYPRST    BIT4    // Cryptographic module reset
#define RCC_AHB2RSTR_HASHRST    BIT5    // Hash module reset
#define RCC_AHB2RSTR_RNGRST     BIT6    // Random number generator module reset
#define RCC_AHB2RSTR_OTGFSRST   BIT7    // USB OTG FS module reset

/* RCC_AHB3RSTR bit definitions */
#define RCC_AHB3RSTR_FSMCRST    BIT0    // Flexible static memory controller module reset

/* RCC_APB1RSTR bit definitions */
#define RCC_APB1RSTR_TIM2RST    BIT0    // TIM2 reset
#define RCC_APB1RSTR_TIM3RST    BIT1    // TIM3 reset
#define RCC_APB1RSTR_TIM4RST    BIT2    // TIM4 reset
#define RCC_APB1RSTR_TIM5RST    BIT3    // TIM5 reset
#define RCC_APB1RSTR_TIM6RST    BIT4    // TIM6 reset
#define RCC_APB1RSTR_TIM7RST    BIT5    // TIM7 reset
#define RCC_APB1RSTR_TIM12RST   BIT6    // TIM12 reset
#define RCC_APB1RSTR_TIM13RST   BIT7    // TIM13 reset
#define RCC_APB1RSTR_TIM14RST   BIT8    // TIM14 reset
#define RCC_APB1RSTR_WWDGRST    BIT11   // Window watchdog reset
#define RCC_APB1RSTR_SPI2RST    BIT14   // SPI2 reset
#define RCC_APB1RSTR_SPI3RST    BIT15   // SPI3 reset
#define RCC_APB1RSTR_USART2RST  BIT17   // USART2 reset
#define RCC_APB1RSTR_USART3RST  BIT18   // USART3 reset
#define RCC_APB1RSTR_UART4RST   BIT19   // UART4 reset
#define RCC_APB1RSTR_UART5RST   BIT20   // UART5 reset
#define RCC_APB1RSTR_I2C1RST    BIT21   // I2C1 reset
#define RCC_APB1RSTR_I2C2RST    BIT22   // I2C2 reset
#define RCC_APB1RSTR_I2C3RST    BIT23   // I2C3 reset
#define RCC_APB1RSTR_CAN1RST    BIT25   // CAN1 reset
#define RCC_APB1RSTR_CAN2RST    BIT26   // CAN2 reset
#define RCC_APB1RSTR_PWRRST     BIT28   // Power interface reset
#define RCC_APB1RSTR_DACRST     BIT29   // DAC reset

/* RCC_APB2RSTR bit definitions */
#define RCC_APB2RSTR_TIM4RST    BIT0    // TIM4 reset
#define RCC_APB2RSTR_TIM8RST    BIT1    // TIM8 reset
#define RCC_APB2RSTR_USART1RST  BIT4    // USART1 reset
#define RCC_APB2RSTR_USART6RST  BIT5    // USART6 reset
#define RCC_APB2RSTR_ADCRST     BIT8    // ADC interface reset (common to all ADCs)
#define RCC_APB2RSTR_SDIORST    BIT11   // SDIO reset
#define RCC_APB2RSTR_SPI1RST    BIT12   // SPI1 reset
#define RCC_APB2RSTR_SYSCFGRST  BIT14   // System configuration controller reset
#define RCC_APB2RSTR_TIM9RST    BIT16    // TIM9 reset
#define RCC_APB2RSTR_TIM10RST   BIT17   // TIM10 reset
#define RCC_APB2RSTR_TIM11RST   BIT18   // TIM11 reset

/* RCC_AHB1ENR bit definitions */
#define RCC_AHB1ENR_GPIOAEN         BIT0    // IO port A enable
#define RCC_AHB1ENR_GPIOBEN         BIT1    // IO port B enable
#define RCC_AHB1ENR_GPIOCEN         BIT2    // IO port C enable
#define RCC_AHB1ENR_GPIODEN         BIT3    // IO port D enable
#define RCC_AHB1ENR_GPIOEEN         BIT4    // IO port E enable
#define RCC_AHB1ENR_GPIOFEN         BIT5    // IO port F enable
#define RCC_AHB1ENR_GPIOGEN         BIT6    // IO port G enable
#define RCC_AHB1ENR_GPIOHEN         BIT7    // IO port H enable
#define RCC_AHB1ENR_GPIOIEN         BIT8    // IO port I enable
#define RCC_AHB1ENR_CRCEN           BIT12   // CRC clock enable
#define RCC_AHB1ENR_BKPSRAMEN       BIT18   // Backup SRAM interface clock enable
#define RCC_AHB1ENR_CCMDATARAMEN    BIT20   // CCM data RAM clock enable
#define RCC_AHB1ENR_DMA1EN          BIT21   // DMA1 clock enable
#define RCC_AHB1ENR_DMA2EN          BIT22   // DMA2 clock enable
#define RCC_AHB1ENR_ETHMACEN        BIT25   // Ethernet MAC clock enable
#define RCC_AHB1ENR_ETHMACTXEN      BIT26   // Ethernet Transmission clock enable
#define RCC_AHB1ENR_ETHMACRXEN      BIT27   // Ethernet Reception clock enable
#define RCC_AHB1ENR_ETHMACPTPEN     BIT28   // Ethernet PTP clock enable
#define RCC_AHB1ENR_OTGHSEN         BIT29   // USB OTG HS clock enable
#define RCC_AHB1ENR_OTGHSULPIEN     BIT30   // USB OTG HSULPI clock enable

/* RCC_AHB2ENR bit definitions */
#define RCC_AHB2ENR_DCMIEN      BIT0    // Camera interface enable
#define RCC_AHB2ENR_CRYPEN      BIT4    // Cryptographics module clock enable
#define RCC_AHB2ENR_HASHEN      BIT5    // Hash modules clock enable
#define RCC_AHB2ENR_RNGEN       BIT6    // Random number generator module clock enable
#define RCC_AHB2ENR_OTGFSEN     BIT7    // USB OTG FS module clock enable

/* RCC_AHB3ENR bit definitions */
#define FSMCEN     BIT0    // Flexible static memory controller module clock enable

/* RCC_APB1ENR bit definitions */
#define RCC_APB1ENR_TIM2EN      BIT0    // TIM2 clock enable
#define RCC_APB1ENR_TIM3EN      BIT1    // TIM3 clock enable
#define RCC_APB1ENR_TIM4EN      BIT2    // TIM4 clock enable
#define RCC_APB1ENR_TIM5EN      BIT3    // TIM5 clock enable
#define RCC_APB1ENR_TIM6EN      BIT4    // TIM6 clock enable
#define RCC_APB1ENR_TIM7EN      BIT5    // TIM7 clock enable
#define RCC_APB1ENR_TIM12EN     BIT6    // TIM12 clock enable
#define RCC_APB1ENR_TIM13EN     BIT7    // TIM13 clock enable
#define RCC_APB1ENR_TIM14EN     BIT8    // TIM14 clock enable
#define RCC_APB1ENR_WWDGEN      BIT11   // Window watchdog clock enable
#define RCC_APB1ENR_SPI2EN      BIT14   // SPI2 clock enable
#define RCC_APB1ENR_SPI3EN      BIT15   // SPI3 clock enable
#define RCC_APB1ENR_USART2EN    BIT17   // USART2 clock enable
#define RCC_APB1ENR_USART3EN    BIT18   // USART3 clock enable
#define RCC_APB1ENR_UART4EN     BIT19   // UART4 clock enable
#define RCC_APB1ENR_UART5EN     BIT20   // UART5 clock enable
#define RCC_APB1ENR_I2C1EN      BIT21   // I2C1 clock enable
#define RCC_APB1ENR_I2C2EN      BIT22   // I2C2 clock enable
#define RCC_APB1ENR_I2C3EN      BIT23   // I2C3 clock enable
#define RCC_APB1ENR_CAN1EN      BIT25   // CAN1 clock enable
#define RCC_APB1ENR_CAN2EN      BIT26   // CAN2 clock enable
#define RCC_APB1ENR_PWREN       BIT28   // Power interface clock enable
#define RCC_APB1ENR_DACEN       BIT29   // DAC clock enable

/* RCC_APB2ENR bit definitions */
#define RCC_APB2ENR_TIM4EN      BIT0    // TIM4 clock enable
#define RCC_APB2ENR_TIM8EN      BIT1    // TIM8 clock enable
#define RCC_APB2ENR_USART1EN    BIT4    // USART1 clock enable
#define RCC_APB2ENR_USART6EN    BIT5    // USART6 clock enable
#define RCC_APB2ENR_ADC1EN      BIT8    // ADC1 clock enable
#define RCC_APB2ENR_ADC2EN      BIT9    // ADC2 clock enable
#define RCC_APB2ENR_ADC3EN      BIT10   // ADC3 clock enable
#define RCC_APB2ENR_SDIOEN      BIT11   // SDIO clock enable
#define RCC_APB2ENR_SPI1EN      BIT12   // SPI1 clock enable
#define RCC_APB2ENR_SYSCFGEN    BIT14   // System configuration controller clock enable
#define RCC_APB2ENR_TIM9EN      BIT16   // TIM9 clock enable
#define RCC_APB2ENR_TIM10EN     BIT17   // TIM10 clock enable
#define RCC_APB2ENR_TIM11EN     BIT18   // TIM11 clock enable

/* RCC_AHB1LPENR bit definitions */
#define RCC_AHB1LPENR_GPIOALPEN     BIT0    // IO port A clock enable during Sleep mode
#define RCC_AHB1LPENR_GPIOBLPEN     BIT1    // IO port B clock enable during Sleep mode
#define RCC_AHB1LPENR_GPIOCLPEN     BIT2    // IO port C clock enable during Sleep mode
#define RCC_AHB1LPENR_GPIODLPEN     BIT3    // IO port D clock enable during Sleep mode
#define RCC_AHB1LPENR_GPIOELPEN     BIT4    // IO port E clock enable during Sleep mode
#define RCC_AHB1LPENR_GPIOFLPEN     BIT5    // IO port F clock enable during Sleep mode
#define RCC_AHB1LPENR_GPIOGLPEN     BIT6    // IO port G clock enable during Sleep mode
#define RCC_AHB1LPENR_GPIOHLPEN     BIT7    // IO port H clock enable during Sleep mode
#define RCC_AHB1LPENR_GPIOILPEN     BIT8    // IO port I clock enable during Sleep mode
#define RCC_AHB1LPENR_CRCLPEN       BIT12   // CRC clock enable during Sleep mode
#define RCC_AHB1LPENR_FLITFLPEN     BIT15   // Flash interface clock enable during Sleep mode
#define RCC_AHB1LPENR_SRAM1LPEN     BIT16   // SRAM 1interface clock enable during Sleep mode
#define RCC_AHB1LPENR_SRAM2LPEN     BIT17   // SRAM 2 interface clock enable during Sleep mode
#define RCC_AHB1LPENR_BKPSRAMLPEN   BIT18   // Backup SRAM interface clock enable during Sleep mode
#define RCC_AHB1LPENR_DMA1LPEN      BIT21   // DMA1 clock enable during Sleep mode
#define RCC_AHB1LPENR_DMA2LPEN      BIT22   // DMA2 clock enable during Sleep mode
#define RCC_AHB1LPENR_ETHMACLPEN    BIT25   // Ethernet MAC clock enable during Sleep mode
#define RCC_AHB1LPENR_ETHTXLPEN     BIT26   // Ethernet transmission clock enable during Sleep mode
#define RCC_AHB1LPENR_ETHRXLPEN     BIT27   // Ethernet reception clock enable during Sleep mode
#define RCC_AHB1LPENR_ETHPTPLPEN    BIT28   // Ethernet PTP clock enable during Sleep mode
#define RCC_AHB1LPENR_OTGHSLPEN     BIT29   // USB OTG HS clock enable during Sleep mode
#define RCC_AHB1LPENR_OTGHSULPILPEN BIT30   // USB OTG HS ULPI clock enable during Sleep mode

/* RCC_AHB2LPENR bit definitions */
#define RCC_AHB2LPENR_DCMILPEN  BIT0    // Camera interface enable during Sleep mode
#define RCC_AHB2LPENR_CRYPLPEN  BIT4    // Cryptographics module clock enable during Sleep mode
#define RCC_AHB2LPENR_HASHLPEN  BIT5    // Hash modules clock enable during Sleep mode
#define RCC_AHB2LPENR_RNGLPEN   BIT6    // Random number generator module clock enable during Sleep mode
#define RCC_AHB2LPENR_OTGFSLPEN BIT7    // USB OTG FS module clock enable during Sleep mode

/* RCC_AHB3LPENR bit definitions */
#define RCC_AHB3LPENR_FSMCLPEN  BIT0    // Flexible static memory controller module clock enable during Sleep mode

/* RCC_APB1LPENR bit definitions */
#define RCC_APB1LPENR_TIM2LPEN      BIT0    // TIM2 clock enable during Sleep mode
#define RCC_APB1LPENR_TIM3LPEN      BIT1    // TIM3 clock enable during Sleep mode
#define RCC_APB1LPENR_TIM4LPEN      BIT2    // TIM4 clock enable during Sleep mode
#define RCC_APB1LPENR_TIM5LPEN      BIT3    // TIM5 clock enable during Sleep mode
#define RCC_APB1LPENR_TIM6LPEN      BIT4    // TIM6 clock enable during Sleep mode
#define RCC_APB1LPENR_TIM7LPEN      BIT5    // TIM7 clock enable during Sleep mode
#define RCC_APB1LPENR_TIM12LPEN     BIT6    // TIM12 clock enable during Sleep mode
#define RCC_APB1LPENR_TIM13LPEN     BIT7    // TIM13 clock enable during Sleep mode
#define RCC_APB1LPENR_TIM14LPEN     BIT8    // TIM14 clock enable during Sleep mode
#define RCC_APB1LPENR_WWDGLPEN      BIT11   // Window watchdog clock enable during Sleep mode
#define RCC_APB1LPENR_SPI2LPEN      BIT14   // SPI2 clock enable during Sleep mode
#define RCC_APB1LPENR_SPI3LPEN      BIT15   // SPI3 clock enable during Sleep mode
#define RCC_APB1LPENR_USART2LPEN    BIT17   // USART2 clock enable during Sleep mode
#define RCC_APB1LPENR_USART3LPEN    BIT18   // USART3 clock enable during Sleep mode
#define RCC_APB1LPENR_UART4LPEN     BIT19   // UART4 clock enable during Sleep mode
#define RCC_APB1LPENR_UART5LPEN     BIT20   // UART5 clock enable during Sleep mode
#define RCC_APB1LPENR_I2C1LPEN      BIT21   // I2C1 clock enable during Sleep mode
#define RCC_APB1LPENR_I2C2LPEN      BIT22   // I2C2 clock enable during Sleep mode
#define RCC_APB1LPENR_I2C3LPEN      BIT23   // I2C3 clock enable during Sleep mode
#define RCC_APB1LPENR_CAN1LPEN      BIT25   // CAN1 clock enable during Sleep mode
#define RCC_APB1LPENR_CAN2LPEN      BIT26   // CAN2 clock enable during Sleep mode
#define RCC_APB1LPENR_PWRLPEN       BIT28   // Power interface clock enable during Sleep mode
#define RCC_APB1LPENR_DACLPEN       BIT29   // DAC clock enable during Sleep mode

/* RCC_APB2LPENR bit definitions */
#define RCC_APB2LPENR_TIM4LPEN      BIT0    // TIM4 clock enable during Sleep mode
#define RCC_APB2LPENR_TIM8LPEN      BIT1    // TIM8 clock enable during Sleep mode
#define RCC_APB2LPENR_USART1LPEN    BIT4    // USART1 clock enable during Sleep mode
#define RCC_APB2LPENR_USART6LPEN    BIT5    // USART6 clock enable during Sleep mode
#define RCC_APB2LPENR_ADC1LPEN      BIT8    // ADC1 clock enable during Sleep mode
#define RCC_APB2LPENR_ADC2LPEN      BIT9    // ADC2 clock enable during Sleep mode
#define RCC_APB2LPENR_ADC3LPEN      BIT10   // ADC3 clock enable during Sleep mode
#define RCC_APB2LPENR_SDIOLPEN      BIT11   // SDIO clock enable during Sleep mode
#define RCC_APB2LPENR_SPI1LPEN      BIT12   // SPI1 clock enable during Sleep mode
#define RCC_APB2LPENR_SYSCFGLPEN    BIT14   // System configuration controller clock enable during Sleep mode
#define RCC_APB2LPENR_TIM9LPEN      BIT16   // TIM9 clock enable during Sleep mode
#define RCC_APB2LPENR_TIM10LPEN     BIT17   // TIM10 clock enable during Sleep mode
#define RCC_APB2LPENR_TIM11LPEN     BIT18   // TIM11 clock enable during Sleep mode

/* RCC_BDCR bit definitions */
#define RCC_BDCR_LSEON      BIT0    // External low-speed oscillator enable
#define RCC_BDCR_LSERDY     BIT1    // External low-speed oscillator ready
#define RCC_BDCR_LSEBYP     BIT2    // External low-speed oscillator bypass
#define RCC_BDCR_RTCSEL_0   BIT8    // RTC clock source selection [0]
#define RCC_BDCR_RTCSEL_1   BIT9    // RTC clock source selection [1]
#define RCC_BDCR_RTCEN      BIT15   // RTC clock enable
#define RCC_BDCR_BDRST      BIT16   // Backup domain software reset

/* RCC_CSR bit definitions */
#define RCC_CSR_LSION       BIT0    // Internal low-speed oscillator enable
#define RCC_CSR_LSIRDY      BIT1    // Internal low-speed oscillator ready
#define RCC_CSR_RMVF        BIT24   // Remove reset flag
#define RCC_CSR_BORRSTF     BIT25   // BOR reset flag
#define RCC_CSR_PINRSTF     BIT26   // PIN reset flag
#define RCC_CSR_PORRSTF     BIT27   // POR/PDR reset flag
#define RCC_CSR_SFTRSTF     BIT28   // Software reset flag
#define RCC_CSR_IWDGRSTF    BIT29   // Independent watchdog reset flag
#define RCC_CSR_WWDGRSTF    BIT30   // Window watchdog reset flag
#define RCC_CSR_LPWRRSTF    BIT31   // Low-power reset flag

/* RCC_SSCGR bit definitions */
#define RCC_SSCGR_MODPER_0      BIT0    // Modulation period [0]
#define RCC_SSCGR_MODPER_1      BIT1    // Modulation period [1]
#define RCC_SSCGR_MODPER_2      BIT2    // Modulation period [2]
#define RCC_SSCGR_MODPER_3      BIT3    // Modulation period [3]
#define RCC_SSCGR_MODPER_4      BIT4    // Modulation period [4]
#define RCC_SSCGR_MODPER_5      BIT5    // Modulation period [5]
#define RCC_SSCGR_MODPER_6      BIT6    // Modulation period [6]
#define RCC_SSCGR_MODPER_7      BIT7    // Modulation period [7]
#define RCC_SSCGR_MODPER_8      BIT8    // Modulation period [8]
#define RCC_SSCGR_MODPER_9      BIT9    // Modulation period [9]
#define RCC_SSCGR_MODPER_10     BIT10   // Modulation period [10]
#define RCC_SSCGR_MODPER_11     BIT11   // Modulation period [11]
#define RCC_SSCGR_MODPER_12     BIT12   // Modulation period [12]
#define RCC_SSCGR_INCSTEP_0     BIT13   // Incrementation step [0]
#define RCC_SSCGR_INCSTEP_1     BIT14   // Incrementation step [1]
#define RCC_SSCGR_INCSTEP_2     BIT15   // Incrementation step [2]
#define RCC_SSCGR_INCSTEP_3     BIT16   // Incrementation step [3]
#define RCC_SSCGR_INCSTEP_4     BIT17   // Incrementation step [4]
#define RCC_SSCGR_INCSTEP_5     BIT18   // Incrementation step [5]
#define RCC_SSCGR_INCSTEP_6     BIT19   // Incrementation step [6]
#define RCC_SSCGR_INCSTEP_7     BIT20   // Incrementation step [7]
#define RCC_SSCGR_INCSTEP_8     BIT21   // Incrementation step [8]
#define RCC_SSCGR_INCSTEP_9     BIT22   // Incrementation step [9]
#define RCC_SSCGR_INCSTEP_10    BIT23   // Incrementation step [10]
#define RCC_SSCGR_INCSTEP_11    BIT24   // Incrementation step [11]
#define RCC_SSCGR_INCSTEP_12    BIT25   // Incrementation step [12]
#define RCC_SSCGR_INCSTEP_13    BIT26   // Incrementation step [13]
#define RCC_SSCGR_INCSTEP_14    BIT27   // Incrementation step [14]
#define RCC_SSCGR_SPREADSEL     BIT30   // Spread Select
#define RCC_SSCGR_SSCGEN        BIT31   // Spread spectrum modulation enable

/* RCC_PLLI2SCFGR bit definitions */
#define RCC_PLLI2SCFGR_PLLI2SN_0    BIT6    // PLLI2S multiplication factor for VCO [0]
#define RCC_PLLI2SCFGR_PLLI2SN_1    BIT7    // PLLI2S multiplication factor for VCO [1]
#define RCC_PLLI2SCFGR_PLLI2SN_2    BIT8    // PLLI2S multiplication factor for VCO [2]
#define RCC_PLLI2SCFGR_PLLI2SN_3    BIT9    // PLLI2S multiplication factor for VCO [3]
#define RCC_PLLI2SCFGR_PLLI2SN_4    BIT10   // PLLI2S multiplication factor for VCO [4]
#define RCC_PLLI2SCFGR_PLLI2SN_5    BIT11   // PLLI2S multiplication factor for VCO [5]
#define RCC_PLLI2SCFGR_PLLI2SN_6    BIT12   // PLLI2S multiplication factor for VCO [6]
#define RCC_PLLI2SCFGR_PLLI2SN_7    BIT13   // PLLI2S multiplication factor for VCO [7]
#define RCC_PLLI2SCFGR_PLLI2SN_8    BIT14   // PLLI2S multiplication factor for VCO [8]
#define RCC_PLLI2SCFGR_PLLI2SR_0    BIT28   // PLLI2S division factor for I2S clocks [0]
#define RCC_PLLI2SCFGR_PLLI2SR_1    BIT29   // PLLI2S division factor for I2S clocks [1]
#define RCC_PLLI2SCFGR_PLLI2SR_2    BIT30   // PLLI2S division factor for I2S clocks [2]

#endif // RCC_H
