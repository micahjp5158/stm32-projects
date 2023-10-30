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
CPU = cortex-m4
BOARD = board/stm32f4discovery.cfg

# Debugger information
DEBUGGER = openocd
FLASH_TARGET = $(DEBUGGER) -f $(BOARD)
FLASH_CMD = "program $(ELF) verify reset exit"
FLASH = $(FLASH_TARGET) -c $(FLASH_CMD)

# Source files
SRC = stm32f407vg_startup.c main.c

# Linker
LD = stm32f407vg_linker.ld

# Compilation flags
CFLAGS  = -Wall -O0
CFLAGS += -mcpu=$(CPU) -mthumb -mfloat-abi=soft --specs=nano.specs -nostdlib
CFLAGS += -T $(LD)

## Rules
default: $(BIN)

$(BIN) : $(ELF)
	$(OBJCOPY) -O binary $^ $@

$(ELF): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

flash:
	sudo $(FLASH)

clean:
	rm -f *.o *.d *.elf *.bin *.map
