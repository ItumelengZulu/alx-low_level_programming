#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of the string, or 0 if there are no numbers in the
 * string, the string is empty, the conversion results in an integer overflow, or
 * the string contains alpha characters.
 */
int _atoi(char *s)
{
    /* Skip leading whitespace characters. */
    while (*s == ' ' || *s == '\t' || *s == '\n') {
        s++;
    }

    /* Check for a sign character. */
    int sign = 1;
    if (*s == '+' || *s == '-') {
        sign = (*s == '+') ? 1 : -1;
        s++;
    }

    /* Convert the digits in the string to an integer. */
    int result = 0;
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        if (result * sign > INT_MAX || result * sign < INT_MIN) {
            return 0;
        }
        s++;
    }

    /* Check if the string contains alpha characters. */
    while (*s != '\0') {
        if (*s < '0' || *s > '9') {
            return 0;
        }
        s++;
    }

    /* Return the integer, multiplied by the sign. */
    return result * sign;
}

