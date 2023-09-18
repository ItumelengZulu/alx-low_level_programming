#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Return: No return value (void).
 */
void swap_int(int *a, int *b)
{
    int temp = *a; // Store the value of 'a' in a temporary variable
    *a = *b;       // Assign the value of 'b' to 'a'
    *b = temp;     // Assign the temporary value to 'b'
}

