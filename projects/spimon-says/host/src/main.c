/*
 * spimon-says-host - main.c
 *
 * Host for the SPImon says game. For each round of the game,
 * randomly generates a number 0-3, each corresponding to one
 * LED on the STM32F407VG Discovery development board. Blink
 * this LED and then send data over SPI to the client,
 * instructing the client to illuminate the same LED.
 */

#include "stdbool.h"
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

    // TODO: Configure SPI

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

        // Hold the LED on for a few cycles
        ACCESS(GPIOD_ODR) |= led_lookup[led_idx];
        for (volatile unsigned int j = 0; j < (3 * DELAY); j++);

        // Send the selected LED value to the client STM32 via SPI
        // TODO: Send data over SPI

        // Hold LEDs off for a few cycles
        ACCESS(GPIOD_ODR) &= ~(led_lookup[led_idx]);
        for (volatile unsigned int j = 0; j < (3 * DELAY); j++);
    }
}
