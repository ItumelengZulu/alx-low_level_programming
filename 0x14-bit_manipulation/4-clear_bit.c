#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear to 0, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index) {
    unsigned long int mask;

    if (index >= sizeof(unsigned long int) * 8) {
        return -1; /* Error: index out of range */
    }

    mask = 1UL << index;
    *n = *n & ~mask; /* Clear the bit to 0 */

    return 1;
}

