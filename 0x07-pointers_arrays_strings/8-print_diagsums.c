#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix
 * @a: Pointer to the square matrix (1D array)
 * @size: Size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;

    /* Calculate the sum of the main diagonal (left-top to right-bottom) */
    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];
    }

    /* Calculate the sum of the secondary diagonal (right-top to left-bottom) */
    for (i = 0; i < size; i++)
    {
        sum2 += a[i * size + (size - 1 - i)];
    }

    /* Print the sums of the diagonals */
    printf("%d, %d\n", sum1, sum2);
}

