/*
 * spimon-says-host - main.c
 *
 * Host for the SPImon says game. For each round of the game,
 * randomly generates a number 0-3, each corresponding to one
 * LED on the STM32F407VG Discovery development board. Blink
 * this LED and then send data over SPI to the client,
 * instructing the client to illuminate the same LED.
 */

#include "stdint.h"

#include "stm32f407vg.h"

#define LED_GRN     BIT12
#define LED_YLW     BIT13
#define LED_RED     BIT14
#define LED_BLU     BIT15

const uint32_t led_lookup[] = {LED_GRN, LED_YLW, LED_RED, LED_BLU};

// Arbitrary delay
#define DELAY   400000

int main(void)
{
    // Enable GPIOD clock
    ACCESS(RCC_AHB1ENR) |= RCC_AHB1ENR_GPIODEN;

    // Set LED GPIOs to output direction
    ACCESS(GPIOD_MODER) |= BIT24 | BIT26 | BIT28 | BIT30;

    // Enable RNG clock
    ACCESS(RCC_AHB2ENR) |= RCC_AHB2ENR_RNGEN;

    // Enable PLL, source of RNG clock
    ACCESS(RCC_CR) |= RCC_CR_PLLON;

    // Enable RNG generation
    ACCESS(RNG_CR) |= RNG_CR_RNGEN;

    // Enable GPIOB clock
    ACCESS(RCC_AHB1ENR) |= RCC_AHB1ENR_GPIOBEN;

    // Configure SPI2 pins
    ACCESS(GPIOB_AFRH) |= GPIOx_AFRH13_0 | GPIOx_AFRH13_2;  // PB13 = AF5 (SPI2_SCK)
    ACCESS(GPIOB_AFRH) |= GPIOx_AFRH15_0 | GPIOx_AFRH15_2;  // PB15 = AF5 (SPI2_MOSI)
    ACCESS(GPIOB_MODER) |= GPIOx_MODER13_1;                 // PB13 to alternate function mode
    ACCESS(GPIOB_MODER) |= GPIOx_MODER15_1;                 // PB15 to alternate funciton mode

    // Enable SPI2 clock
    ACCESS(RCC_APB1ENR) |= RCC_APB1ENR_SPI2EN;

    // SPI2 Configuration
    uint32_t spi2_cfg = 0;
    spi2_cfg |= SPIx_CR1_MSTR;                  // Master mode
    spi2_cfg |= SPIx_CR1_SSM | SPIx_CR1_SSI;    // Use software slave management
    ACCESS(SPI2_CR1) = spi2_cfg;

    // Enable SPI2
    ACCESS(SPI2_CR1) |= SPIx_CR1_SPE;

    // Configure SPI slave ready (PB11)
    ACCESS(GPIOB_PUPDR) |= GPIOx_PUPDR11_1;   // Enable internal pull-down resistor

    while(1) {
        // Wait for new random number, take two LSBs for values 0-3
        while (!(ACCESS(RNG_SR) & (RNG_SR_DRDY)));
        uint8_t led_idx = ACCESS(RNG_DR) & 0x03;

        // Blink selected LED three times (6 toggles)
        for (uint8_t i = 0; i < 6; i++) {
            ACCESS(GPIOD_ODR) ^= led_lookup[led_idx];

            // Delay
            for (volatile unsigned int j = 0; j < DELAY; j++);
        }

        // Turn on the selected LED
        ACCESS(GPIOD_ODR) |= led_lookup[led_idx];

        // If SPI slave is ready:
        if (ACCESS(GPIOB_IDR) & GPIOx_IDR11) {
            // Wait for SPI TX buffer to empty
            while(!(ACCESS(SPI2_SR) & SPIx_SR_TXE));

            // Fill data register with LED index
            ACCESS(SPI2_DR) = led_idx;

            // Wait for busy flag to clear
            while(ACCESS(SPI2_SR) & SPIx_SR_BSY);
        }

        // Hold the LED on for a few cycles
        for (volatile unsigned int j = 0; j < (3 * DELAY); j++);

        // Turn of LEDs and hold for a few cycles
        ACCESS(GPIOD_ODR) &= ~(led_lookup[led_idx]);
        for (volatile unsigned int j = 0; j < (3 * DELAY); j++);
    }
}
