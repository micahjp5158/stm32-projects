# blink
A simple program to blink the user LEDs on the STM32F407-DISC1 development board.

### Purpose
The intention of this project was to:
1. Learn the basics of writing directly to registers of the MCU, referencing the manuals for the needed register addresses and bit mappings.
2. Create a basic startup file and linker script to use in future projects.
3. Verify that all software and hardware tools are working as expected, including the Arm GNU toolchain, OpenOCD, and the on-board ST-Link V2.1 (for both flashing and debugging).