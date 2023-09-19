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
    int sign = 1;
    int result = 0;

    /* Skip leading whitespace characters */
    while (*s == ' ' || *s == '\t' || *s == '\n')
    {
        s++;
    }

    /* Check for a sign character */
    if (*s == '+' || *s == '-')
    {
        sign = (*s++ == '-') ? -1 : 1; /* Simplified sign assignment */
    }

    /* Convert the digits in the string to an integer */
    while (*s >= '0' && *s <= '9')
    {
        int digit = *s - '0';

        /* Check for integer overflow before updating result */
        if (result > (INT_MAX - digit) / 10)
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        result = result * 10 + digit;
        s++;
    }

    return result * sign;
}

int main()
{
    char str[] = "12345";
    int num = _atoi(str);
    printf("Converted number: %d\n", num);
    return 0;
}

