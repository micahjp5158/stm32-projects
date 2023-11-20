
/*
 * exti_registers.h
 *
 * Defines the EXTI register addresses
 */

#ifndef EXTI_REGISTERS_H
#define EXTI_REGISTERS_H

/* EXTI peripheral base address from STM32F407VG reference manual, Table 1 */
#define EXTI_BASE_ADDR     0x40013C00

/* EXTI register offsets from STM32F407VG reference manual Table 63 */
#define EXTI_IMR_OFFEST     0x00
#define EXTI_EMR_OFFSET     0x04
#define EXTI_RTSR_OFFSET    0x08
#define EXTI_FTSR_OFFSET    0x0C
#define EXTI_SWIER_OFFSET   0x10
#define EXTI_PR_OFFSET      0x14

/* EXTI register addresses */
#define EXTI_IMR    (EXTI_BASE_ADDR + EXTI_IMR_OFFEST)
#define EXTI_EMR    (EXTI_BASE_ADDR + EXTI_EMR_OFFSET)
#define EXTI_RTSR   (EXTI_BASE_ADDR + EXTI_RTSR_OFFSET)
#define EXTI_FTSR   (EXTI_BASE_ADDR + EXTI_FTSR_OFFSET)
#define EXTI_SWIER  (EXTI_BASE_ADDR + EXTI_SWIER_OFFSET)
#define EXTI_PR     (EXTI_BASE_ADDR + EXTI_PR_OFFSET)

#endif // EXTI_REGISTERS_H
