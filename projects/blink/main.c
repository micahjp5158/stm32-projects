/*
 * blink - main.c
 *
 * Blink the four user LEDs on the STM32F407G-DISC1 development board.
 */

#include "bit_macros.h"
#include "stm32f407vg.h"

// Arbitrary delay
#define DELAY   800000

int main(void)
{
    // Enable GPIOD clock
    SET_BIT(RCC_AHB1ENR, 3);

    // Set LED GPIOs to output direction
    SET_BIT(GPIOD_MODER, 24);
    SET_BIT(GPIOD_MODER, 26);
    SET_BIT(GPIOD_MODER, 28);
    SET_BIT(GPIOD_MODER, 30);

    while(1) {
        for (int i = 0; i < 4; i++) {
            // Toggle LED
            CLEAR_REG(GPIOD_ODR);
            SET_BIT(GPIOD_ODR, (12 + i));

            // Delay
            for (volatile unsigned int i = 0; i < DELAY; i++);
        }
    }

    return 0;
}