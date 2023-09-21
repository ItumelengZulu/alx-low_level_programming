#include "main.h" /* Include your header file where _putchar is defined */

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    if (n < 0) {
        _putchar('-'); /* Print a negative sign for negative numbers */
        n = -n; /* Make the number positive */
    }

    if (n / 10 != 0) {
        print_number(n / 10); /* Recursive call to print the remaining digits */
    }

    _putchar((n % 10) + '0'); /* Print the last digit */
}

