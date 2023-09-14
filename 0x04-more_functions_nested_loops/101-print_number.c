#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');  // Print the negative sign for negative numbers
        n = -n;         // Make n positive for the recursive call
    }

    if (n / 10 != 0)
    {
        print_number(n / 10);  // Recursively print the higher-order digits
    }

    _putchar((n % 10) + '0');  // Print the last digit
}

