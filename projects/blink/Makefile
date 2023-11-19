# Cross-compilation commands
CC      = arm-none-eabi-gcc
LD      = arm-none-eabi-gcc
AS      = arm-none-eabi-as
OBJCOPY = arm-none-eabi-objcopy
SIZE    = arm-none-eabi-size

# Project information
PROJECT = blink
ELF = $(PROJECT).elf
BIN = $(PROJECT).bin

# Target information
MCU = stm32f407vg
CPU = cortex-m4
BOARD = board/stm32f4discovery.cfg

# Directories
REPO_ROOT_DIR = ../..
MCU_FILES_DIR = $(REPO_ROOT_DIR)/$(MCU)
MCU_REG_DIR = $(MCU_FILES_DIR)/registers

# Debugger information
DEBUGGER = openocd
FLASH_TARGET = $(DEBUGGER) -f $(BOARD)
FLASH_CMD = "program $(ELF) verify reset exit"
FLASH = $(FLASH_TARGET) -c $(FLASH_CMD)

# Include directory
INC	= $(REPO_ROOT_DIR)/include

# Linker
LD = $(MCU_FILES_DIR)/linker.ld

# Startup files
SRC = $(MCU_FILES_DIR)/startup.c

# Project source files
SRC += main.c

# Compilation flags
CFLAGS  = -Wall -O0 -g
CFLAGS += -mcpu=$(CPU) -mthumb -mfloat-abi=soft --specs=nano.specs -nostdlib

# Include general header files
CFLAGS += -I $(INC)

# Include hardware-specific header files
CFLAGS += -I $(MCU_FILES_DIR)
CFLAGS += -I $(MCU_REG_DIR)
CFLAGS += -T $(LD)

## Rules
default: $(BIN)

$(BIN) : $(ELF)
	$(OBJCOPY) -O binary $^ $@

$(ELF): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

flash:
	$(FLASH)

clean:
	rm -f *.o *.d *.elf *.bin *.map