#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: A pointer to the string to be printed.
 *
 * Return: No return value (void).
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i += 2; // Move to the next even index
    }

    putchar('\n');
}

