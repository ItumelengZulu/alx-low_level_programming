#include <unistd.h>

/**
 * _putchar - Writes a string to stdout
 * @str: The string to be written
 *
 * Return: Number of characters written
 */
int _putchar(char *str) {
    int i = 0;

    while (str[i]) {
        write(1, &str[i], 1);
        i++;
    }

    return (i);
}

