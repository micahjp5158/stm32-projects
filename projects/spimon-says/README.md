
# SPImon Says
A game smiliar to Simon Says played between two STM32F407VG Discovery boards. For each round, the host STM32 randomly generates a number between 0 and 3, each number corresponding to one LED on the development board. This LED will flash three times to show the developer which LED is selected. The host then sends data over SPI to the client STM32, which should receive the data and illuminate the same LED as the host.

### Purpose
The intention of this project was to:
1. Learn the SPI interface and create both a SPI master and slave project.
2. Use the STM32 random number generator peripheral.

### Usage
This project is split into two subprojects, spimon-says-host (host subfolder) and spimon-says-client (client subfolder). Each subfolder contains its own source code, build folder, Makefile, and debug configuration.
The host subproject uses the STM32's RNG peripheral to randomly select one of the onboard LEDs of the STM32F407VG Discovery board. This LED blinks three times before sending the selected LED over SPI.
The client subproject receives the data from the host over SPI and illuminates the same LED based on the received data.
The following pins on the two STM32F407VGs must be connected for the two STM32s to communicate as expected:
1. Host GND <-> Client GND
2. Host PB13 <-> Client PB13 (SPI2 SCLK)
3. Host PB15 <-> Client PB15 (SPI2 MOSI)

Since OpenOCD cannot easily distinguish between two STLink debuggers, these projects must be flashed one at a time with only one Discovery board connected to the build environment PC at a time. To flash, navigate to the desired subproject's subfolder and use `make flash`. As a future improvement to this, one of the following methods may work:
1. Create a Makefile that can build and flash both targets at the same time by reading the STLink serial numbers
2. Include the client binary within the host binary. Only flash the host from the PC, and flash the client from the host using the STM32 bootloader protocol over UART.
