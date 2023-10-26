#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @b: Pointer to a string of '0' and '1' characters.
 *
 * Return: The converted number as an unsigned int, or 0 if there are invalid characters or if b is NULL.
 */
unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;
    int i;

    if (b == NULL) {
        return 0;
    }

    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0' || b[i] == '1') {
            /* Left-shift result and add the binary digit */
            result = (result << 1) | (b[i] - '0');
        } else {
            return 0; /* Invalid character in the string */
        }
    }

    return result;
}

