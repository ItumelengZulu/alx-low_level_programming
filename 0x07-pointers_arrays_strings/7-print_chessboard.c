#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard
 * @a: 2D array representing the chessboard
 *
 * Return: void (prints the chessboard to stdout)
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            putchar(a[i][j]); /* Print each character from the 2D array */
        }
        putchar('\n'); /* Move to the next line after printing each row */
    }
}

