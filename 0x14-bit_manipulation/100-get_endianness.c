#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void) {
    unsigned int num = 1;
    unsigned char *byte_ptr = (unsigned char *)&num;

    if (*byte_ptr == 1) {
        return 1;  /* Little endian */
    } else {
        return 0;  /* Big endian */
    }
}

