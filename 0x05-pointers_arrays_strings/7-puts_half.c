#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: A pointer to the string.
 *
 * Return: No return value (void).
 */
void puts_half(char *str)
{
    int length = 0;
    int i, start;

    while (str[length] != '\0')
    {
        length++;
    }

    /* Calculate the starting index for the second half */
    if (length % 2 == 0)
    {
        start = length / 2;
    }
    else
    {
        start = (length - 1) / 2;
    }

    /* Print the second half of the string */
    for (i = start; i < length; i++)
    {
        putchar(str[i]);
    }

    putchar('\n');
}

