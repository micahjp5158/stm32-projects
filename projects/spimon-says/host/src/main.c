/*
 * spimon-says-host - main.c
 *
 * Host for the SPImon says game. For each round of the game,
 * randomly generates a number 0-3, each corresponding to one
 * LED on the STM32F407VG Discovery development board. Blink
 * this LED and then send data over SPI to the client,
 * instructing the client to illuminate the same LED.
 */

#include "stm32f407vg.h"

int main(void)
{

}
