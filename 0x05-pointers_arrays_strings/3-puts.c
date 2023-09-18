#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: A pointer to the string to be printed.
 *
 * Return: No return value (void).
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

