# Cross-compilation commands
CC      = arm-none-eabi-gcc
LD      = arm-none-eabi-gcc
AS      = arm-none-eabi-as
OBJCOPY = arm-none-eabi-objcopy
SIZE    = arm-none-eabi-size

# Directories
HARDWARE_FILES_DIR= ../../hardware-files

# Project information
PROJECT = blink
ELF = $(PROJECT).elf
BIN = $(PROJECT).bin

# Target information
CPU = cortex-m4
BOARD = board/stm32f4discovery.cfg

# Debugger information
DEBUGGER = openocd
FLASH_TARGET = $(DEBUGGER) -f $(BOARD)
FLASH_CMD = "program $(ELF) verify reset exit"
FLASH = $(FLASH_TARGET) -c $(FLASH_CMD)

# Linker
LD = $(HARDWARE_FILES_DIR)/stm32f407vg_linker.ld

# Common source files
SRC = $(HARDWARE_FILES_DIR)/stm32f407vg_startup.c

# Project source files
SRC += main.c

# Compilation flags
CFLAGS  = -Wall -O0 -g
CFLAGS += -mcpu=$(CPU) -mthumb -mfloat-abi=soft --specs=nano.specs -nostdlib
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
