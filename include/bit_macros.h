/*
 * bit_macros.h
 *
 * Useful macros for modifying register bits
 */

#ifndef BIT_MACROS_H
#define BIT_MACROS_H

// Convert register address to readable / writable int
#define ACCESS(reg)        (*((volatile unsigned int*)(reg)))

// Clear all bits in a register
#define CLEAR_REG(reg)          (ACCESS(reg) = 0)

// Set a register's value
#define SET_REG(reg, val)       (ACCESS(reg) = (val))

// Modify a specific bit in a register
#define SET_BIT(reg, bit)       (ACCESS(reg) |= (1 << (bit)))
#define CLEAR_BIT(reg, bit)      (ACCESS(reg) &= (1 << (bit)))
#define TOGGLE_BIT(reg, bit)    (ACCESS(reg) ^= (1 << (bit)))


#endif // BIT_MACROS_H