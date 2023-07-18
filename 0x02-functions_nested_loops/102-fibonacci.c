#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count = 50;
    int fibonacci[count];
    int i;

    fibonacci[0] = 1; /* First Fibonacci number */
    fibonacci[1] = 2; /* Second Fibonacci number */

    for (i = 2; i < count; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    for (i = 0; i < count; i++)
    {
        printf("%d", fibonacci[i]);

        /* Print comma and space for all elements except the last one */
        if (i < count - 1)
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}

