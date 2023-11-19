/*
 * blink - main.c
 *
 * Blink the four user LEDs on the STM32F407G-DISC1 development board.
 */

/* RCC peripheral base address from STM32F407VG reference manual, Table 1 */
#define RCC_BASE_ADDR   0x40023800

/* RCC register offsets from STM32F407VG reference manual Table 33 */
#define RCC_CFGR_OFFEST     0x08
#define RCC_AHB1ENR_OFFSET  0x30

/* RCC Register addresses */
#define RCC_CFGR    (RCC_BASE_ADDR + RCC_CFGR_OFFEST)       // RCC clock configuration register
#define RCC_AHB1ENR (RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)    // RCC AHB1 peripheral clock enable register

/* Per STM32F407G-DISC1 User Manual, user push button is GPIO A0 */
/* GPIOA peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOA_BASE_ADDR     0x40020000

/* GPIO register offsets from STM32F407VG reference manual Table 39 */
#define GPIOA_MODER_OFFEST  0x00

/* GPIOA Register addresses */
#define GPIOA_MODER (GPIOD_BASE_ADDR + GPIOA_MODER_OFFEST)  // GPIO D port mode register

/* Per STM32F407G-DISC1 User Manual, LEDs are GPIOs D12-D15 */
/* GPIOD peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOD_BASE_ADDR     0x40020C00

/* GPIO register offsets from STM32F407VG reference manual Table 39 */
#define GPIOD_MODER_OFFEST  0x00
#define GPIOD_ODR_OFFEST    0x14

/* GPIOD Register addresses */
#define GPIOD_MODER (GPIOD_BASE_ADDR + GPIOD_MODER_OFFEST)  // GPIO D port mode register
#define GPIOD_ODR   (GPIOD_BASE_ADDR + GPIOD_ODR_OFFEST)    // GPIO D output data register

// Used to write to registers
#define ACCESS(addr)        *((volatile unsigned int*)(addr))

int main(void)
{
    // Do not prescale AHB1 clock
    // RCC_CFGR register definition from STM32F407VG reference manual section 7.3.3
    ACCESS(RCC_CFGR) |= ~(0xF << 4);

    // Enable GPIOA and GPIODD clock
    // RCC_AHB1ENR register definition from STM32F407VG reference manual section 7.3.10
    ACCESS(RCC_AHB1ENR) |= ((1 << 0) | (1 << 3)) ;

    // Set user push button to input direction
    // GPIOx_MODER register definition from STM32F407VG reference manual section 8.4.1
    ACCESS(GPIOA_MODER) ^= ((1 << 0) | (1 << 1));

    // Set LED GPIOs to output direction
    // GPIOx_MODER register definition from STM32F407VG reference manual section 8.4.1
    ACCESS(GPIOD_MODER) |= ((1 << 24) | (1 << 26) | (1 << 28) | (1 << 30));

    while(1) {
        for (int i = 0; i < 4; i++) {
            // Toggle LEDs
            // GPIOx_ODR register definition from STM32F407VG reference manual section 8.4.6
            ACCESS(GPIOD_ODR) = (1 << (12 + i));

            // Delay
            for (volatile unsigned int i = 0; i < DELAY; i++);
        }
    }

    return 0;
}