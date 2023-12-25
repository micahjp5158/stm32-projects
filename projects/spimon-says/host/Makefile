# Cross-compilation commands
CC      = arm-none-eabi-gcc
LD      = arm-none-eabi-gcc
AS      = arm-none-eabi-as
OBJCOPY = arm-none-eabi-objcopy
SIZE    = arm-none-eabi-size

# Target information
MCU = stm32f407vg
CPU = cortex-m4
BOARD = board/stm32f4discovery.cfg

# Directories
REPO_ROOT_DIR = ../../..
MCU_FILES_DIR = $(REPO_ROOT_DIR)/$(MCU)
MCU_REG_DIR = $(MCU_FILES_DIR)/registers
SRC_DIR = ./src
BUILD_DIR = ./build

# Project information
PROJECT = spimon-says-host
ELF = $(BUILD_DIR)/$(PROJECT).elf
BIN = $(BUILD_DIR)/$(PROJECT).bin

# Debugger information
DEBUGGER = openocd
FLASH_TARGET = $(DEBUGGER) -f $(BOARD)
FLASH_CMD = "program $(ELF) verify reset exit"
FLASH = $(FLASH_TARGET) -c $(FLASH_CMD)

# Linker
LD = $(MCU_FILES_DIR)/$(MCU).ld

# Startup files
SRC = $(MCU_FILES_DIR)/$(MCU).c

# Project source files
SRC += $(SRC_DIR)/main.c

# Compilation flags
CFLAGS  = -Wall -O0 -g
CFLAGS += -mcpu=$(CPU) -mthumb -mfloat-abi=soft
CFLAGS +=  --specs=nano.specs -nostdlib

# Include hardware-specific header files
CFLAGS += -I $(MCU_FILES_DIR)
CFLAGS += -I $(MCU_REG_DIR)
CFLAGS += -T $(LD)

## Rules
default: $(BIN)

$(BIN): $(ELF)
	$(OBJCOPY) -O binary $^ $@

$(ELF): $(SRC) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

flash:
	$(FLASH)

clean:
	rm -rf $(BUILD_DIR)
