# stm32-projects
This repo contains multiple small projects for my STM32 MCU. The intention of these projects are to get hands-on practice with low level programming - as such, many of these projects will not use the STM32 HAL, and will instead interact with the hardware directly.

### Hardware Requirements
These projects were developed for the [STM32F407VG](https://www.st.com/en/microcontrollers-microprocessors/stm32f407vg.html) MCU on the [STM32F407G-DISC1](https://www.st.com/en/evaluation-tools/stm32f4discovery.html) development board.

### Software Requirements
All projects require the [Arm GNU Toolchain](https://developer.arm.com/Tools%20and%20Software/GNU%20Toolchain) to compile and debug.
[OpenOCD](https://openocd.org/) is used to flash software to and remotely debug the MCU.
Debugging configurations will be included for [Visual Studio Code](https://code.visualstudio.com/) using the [Cortex-Debug](https://marketplace.visualstudio.com/items?itemName=marus25.cortex-debug) extension.

### Running and Debugging
Projects will be contained within their own subfolder of this project's root. Each project will include the source code, startup code, debug configuration, and makefile(s) necessary to run each project. Any specific running, debugging, or extra dependencies for a project will be noted in that project's individual README file.
