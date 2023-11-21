/*
 * button-blink - main.c
 *
 * Rotate through the user LEDs on the STM32F407G-DISC1 development board,
 * illuminating the next LED each time the user button is pressed.
 */

#include "stdint.h"

#include "bit_macros.h"
#include "stm32f407vg.h"

#define NUM_LEDS    (4)

volatile uint8_t led;

int main(void)
{
    // Enable GPIOA and GPIOD clocks
    // SET_BITS(RCC_AHB1ENR, (BIT0 | BIT3));
    SET_BITS(RCC_AHB1ENR, BIT3);

    // Enable SYSCFG clock
    SET_BITS(RCC_APB2ENR, BIT14);

    // Set PA0 (user push button) to input direction
    CLEAR_BITS(GPIOA_MODER, (BIT0 | BIT1));

    // Set LED GPIOs to output direction
    SET_BITS(GPIOD_MODER, (BIT24 | BIT26 | BIT28 | BIT30));

    // Configure PA0 (user push button) to trigger EXTI0 interrupt
    CLEAR_BITS(SYSCFG_EXTICR1, (BIT0 | BIT1 | BIT2 | BIT3));

    // Unmask EXTI0
    SET_BITS(EXTI_IMR, BIT0);

    // Trigger EXTI0 on rising edge
    SET_BITS(EXTI_RTSR, BIT0);

    // Enable EXTI0 interrupt
    SET_BITS(NVIC_ISER0, BIT6);

    // Default to green LED on
    led = 0;
    CLEAR_BITS(GPIOD_ODR, (BIT12 | BIT13 | BIT14 | BIT15));
    SET_BITS(GPIOD_ODR, (BIT12 << led));

    // Wait for interrupts
    while(1);
    return 0;
}

void EXTI0_IRQHandler(void) {
    // Turn off current LED
    CLEAR_BITS(GPIOD_ODR, (BIT12 << led));

    // Turn on next LED
    led = (led + 1) % NUM_LEDS;
    SET_BITS(GPIOD_ODR, (BIT12 << led));

    // Clear pending interrupt
    SET_BITS(EXTI_PR, BIT0);
}