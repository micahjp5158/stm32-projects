/*
 * button-blink - main.c
 *
 * Rotate through the user LEDs on the STM32F407G-DISC1 development board,
 * illuminating the next LED each time the user button is pressed.
 */

#include "bit_macros.h"
#include "stm32f407vg.h"

// Arbitrary delay
#define DELAY   800000

int main(void)
{
    // Enable GPIOA and GPIOD clocks
    SET_BITS(RCC_AHB1ENR, 0);
    SET_BITS(RCC_AHB1ENR, (BIT0 | BIT3));

    // Set user push button to input direction
    CLEAR_BITS(GPIOA_MODER, (BIT0 | BIT1));

    // Set LED GPIOs to output direction
    SET_BITS(GPIOD_MODER, (BIT24 | BIT26 | BIT28 | BIT30));

    while(1) {
        for (int i = 0; i < 4; i++) {
            // Toggle LED
            CLEAR_REG(GPIOD_ODR);
            SET_BITS(GPIOD_ODR, (BIT12 << i));

            // Delay
            for (volatile unsigned int i = 0; i < DELAY; i++);
        }
    }

    return 0;
}