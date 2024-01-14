/*
 * spimon-says-client - main.c
 *
 * Client for the SPImon says game. Waits to receive data
 * over SPI indicating which LED to turn on.
 */

#include "stdint.h"

#include "stm32f407vg.h"

#define LED_GRN     BIT12
#define LED_YLW     BIT13
#define LED_RED     BIT14
#define LED_BLU     BIT15

const uint32_t led_lookup[] = {LED_GRN, LED_YLW, LED_RED, LED_BLU};


int main(void)
{
    // Enable GPIOD clock
    ACCESS(RCC_AHB1ENR) |= RCC_AHB1ENR_GPIODEN;

    // Set LED GPIOs to output direction
    ACCESS(GPIOD_MODER) |= BIT24 | BIT26 | BIT28 | BIT30;

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
    ACCESS(SPI2_CR1) |= SPIx_CR1_SSM;

    // Enable SPI2
    ACCESS(SPI2_CR1) |= SPIx_CR1_SPE;

    while(1) {
        // Wait for SPI RX buffer to have data
        while(!(ACCESS(SPI2_SR) & SPIx_SR_RXNE));

        // Read the LED index
        uint8_t led_idx = ACCESS(SPI2_DR);

        // Turn off all LEDs
        ACCESS(GPIOD_ODR) = 0;

        // Turn on the requested LED
        ACCESS(GPIOD_ODR) |= led_lookup[led_idx];
    }
}
