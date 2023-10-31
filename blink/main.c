/*
 * blink - main.c
 *
 * Blink the four user LEDs on the STM32F407G-DISC1 development board.
 */

/* RCC peripheral base address from STM32F407VG reference manual, Table 1 */
#define RCC_BASE_ADDR   0x40023800

/* RCC register offsets from STM32F407VG reference manual Table 33 */
#define RCC_CFGR        RCC_BASE_ADDR + 0x08    // RCC clock configuration register
#define RCC_AHB1ENR     RCC_BASE_ADDR + 0x30    // RCC AHB1 peripheral clock enable register

/* Per STM32F407G-DISC1 User Manual, LEDs are GPIOs 12-15 on port D */
/* GPIOD peripheral base address from STM32F407VG reference manual, Table 1 */
#define GPIOD_BASE_ADDR     0x40020C00

/* GPIO register offsets from STM32F407VG reference manual Table 39 */
#define GPIOD_MODER     GPIOD_BASE_ADDR + 0x00  // GPIO D port mode register
#define GPIOD_OSPEEDR   GPIOD_BASE_ADDR + 0x08  // GPIO D output speed register
#define GPIOD_ODR       GPIOD_BASE_ADDR + 0x014 // GPIO D output data register

// Arbitrary delay
#define DELAY   800000

// Used to write to registers
#define ACCESS(addr)        *((volatile unsigned int*)(addr))

int main(void)
{
    // Do not prescale AHB1 clock
    // RCC_CFGR register definition from STM32F407VG reference manual section 7.3.3
    ACCESS(RCC_CFGR) |= ~(0xF << 4);

    // Enable GPIOD clock
    // RCC_AHB1ENR register definition from STM32F407VG reference manual section 7.3.10
    ACCESS(RCC_AHB1ENR) |= (1 << 3);

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