/*
 * blink - main.c
 *
 */

#define RCC_BASE_ADDR

/* RCC register offsets from STM32F407VG reference manual Table 33 */
#define RCC_AHB1ENR     RCC_BASE_ADDR + 0x30    // RCC AHB1 peripheral clock enable register

/* Per STM32F407G-DISC1 User Manual, LEDs are GPIOs 12-15 on port D*/
#define GPIOD_BASE_ADDR     0x40020C00

/* GPIO register offsets from STM32F407VG reference manual Table 39 */
#define GPIOD_MODER     GPIOD_BASE_ADDR + 0x00  // GPIO D port mode register
#define GPIOD_OSPEEDR   GPIOD_BASE_ADDR + 0x08  // GPIO D output speed register
#define GPIOD_ODR       GPIOD_BASE_ADDR + 0x014 // GPIO D output data register

#define ACCESS(addr)        *((volatile unsigned int*)(addr))

int main(void)
{
    // Enable GPIOD clock
    // RCC_AHB1ENR register definition from STM32F407VG reference manual section 7.3.10
    ACCESS(RCC_AHB1ENR) |= (1 << 3);

    // Set LED GPIOs to output direction
    // GPIOx_MODER register definition from STM32F407VG reference manual section 8.4.1
    ACCESS(GPIOD_MODER) |= ((1 << 24) | (1 << 26) | (1 << 28) | (1 << 30));

    while(1) {
        // Toggle LEDs
        // GPIOx_ODR register definition from STM32F407VG reference manual section 8.4.6
        ACCESS(GPIOD_ODR) ^= ((1 << 12) | (1 << 13) | (1 << 14) | (1 << 15));

        // Delay
        for (volatile unsigned int i = 0; i < 500000; i++);
    }
}