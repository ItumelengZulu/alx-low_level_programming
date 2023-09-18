#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: A pointer to the string to be printed in reverse.
 *
 * Return: No return value (void).
 */
void print_rev(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    while (length > 0)
    {
        s--;
        putchar(*s);
        length--;
    }

    putchar('\n');
}

