#include <unistd.h>

/**
 * _putchar - Writes a character to standard output
 * @c: The character to be written
 *
 * Return: On success, returns the number of characters written (1).
 * On error, returns -1 and sets errno.
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

