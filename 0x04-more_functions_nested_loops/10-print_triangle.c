#include "main.h"

/**
 * print_triangle - Prints a triangle of a specified size
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
    int row, col;

    if (size <= 0)
    {
        _putchar('\n'); // Print a new line for size <= 0
        return;
    }

    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= size - row; col++)
        {
            _putchar(' '); // Print spaces for left padding
        }

        for (col = 1; col <= row; col++)
        {
            _putchar('#'); // Print # characters to form the triangle
        }

        _putchar('\n'); // Move to the next line for the next row
    }
}

