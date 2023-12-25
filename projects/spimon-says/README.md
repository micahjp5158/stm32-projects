
# SPImon Says

A game smiliar to Simon Says played between two STM32F407VG Discovery boards. For each round, the host STM32 randomly generates a number between 0 and 3, each number corresponding to one LED on the development board. This LED will flash three times to show the developer which LED is selected. The host then sends data over SPI to the client STM32, which should receive the data and illuminate the same LED as the host.

### Purpose

The intention of this project was to:

1. Learn the SPI interface.
2. Develop a project with two executables to run on separate targets and develop an intiutive way to compile and flash these executables together.