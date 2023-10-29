/* Entry point */
ENTRY(Reset_Handler)

/* Memory definitions */
MEMORY
{
    /* Flash information from STM32F407VG Reference manual Table 5 */
    FLASH(rx):ORIGIN =0x08000000,LENGTH =1024K

    /* SRAM information from STM32F407VG Reference manual section 2.3.1 */
    SRAM(rwx):ORIGIN =0x20000000,LENGTH =128K
}

SECTIONS
{
    /* Text section */
    .text :
    {
        *(.isr_vector)
        *(.text)
        *(.text.*)
        *(.init)
        *(.fini)
        *(.rodata)
        *(.rodata.*)
        . = ALIGN(4);
        _etext = .;     /* End of text section symbol */
    }> FLASH            /* Map text section to flash memory */          

    _la_data = LOADADDR(.data);

    /* Data section */
    .data :
    {
        _sdata = .;     /* Start of data section symbol */
        *(.data)
        *(.data.*)
        . = ALIGN(4);
        _edata = .;     /* End of data section symbol */
    }> SRAM AT> FLASH    

    /* Data section */
    .bss :
    {
        _sbss = .;              /* Start of BSS section symbol */
        __bss_start__ = _sbss;
        *(.bss)
        *(.bss.*)
        *(COMMON)
        . = ALIGN(4);
        _ebss = .;              /* End of BSS section symbol */
        __bss_end__ = _ebss;
        . = ALIGN(4); 
        end = .;
        __end__ = .;
    }> SRAM
}