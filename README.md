
# stm32-projects

This repo contains multiple small projects for my STM32 MCU. The intention of these projects are to get hands-on practice with low level programming - as such, many of these projects will not use the STM32 HAL, and will instead interact with the hardware directly.

### Target Hardware

These projects were developed for the [STM32F407VG](https://www.st.com/en/microcontrollers-microprocessors/stm32f407vg.html) MCU on the [STM32F407G-DISC1](https://www.st.com/en/evaluation-tools/stm32f4discovery.html) development board.

### Software Requirements

1. Install the [Arm GNU Toolchain](https://developer.arm.com/Tools%20and%20Software/GNU%20Toolchain). It is recommended to install these by downloading the compressed file from Arm directly instead of using your package manager, as that version may not include all executables including `arm-none-eabi-gdb`.
2. Install [OpenOCD](https://openocd.org/):
	```
	sudo apt install openocd
	```

Debugging configurations will be included for [Visual Studio Code](https://code.visualstudio.com/) using the [Cortex-Debug](https://marketplace.visualstudio.com/items?itemName=marus25.cortex-debug) extension.

  

### Compiling and Running

Each project will contain its own makefile to build and run the code. In general, navigate to the project you wish to run, then with the development board connected to your computer, use the following commands:
* `make` to compile the project
* `make clean` to clean the project
* `make flash` to download the project to your development board

### Debugging
Each project will also contain a debug configuration file for use in Visual Studio Code using the Cortex-Debug extension. To use these debug configurations:
1. Install [Visual Studio Code]((https://code.visualstudio.com/).
2. Install the  [Cortex-Debug](https://marketplace.visualstudio.com/items?itemName=marus25.cortex-debug) extension.
3. Install `arm-none-eabi-gdb` dependencies:
	```
	sudo apt install libncursesw5
	```
4. Install Python 3.8 
	```
	sudo apt install software-properties-common
	sudo add-apt-repository ppa:deadsnakes/ppa
	sudo apt install python3.8
	```
5. Open the subfolder containing the project you wish to debug in Visual Studio code.
6. Open main.c and press F5 to begin debugging.
