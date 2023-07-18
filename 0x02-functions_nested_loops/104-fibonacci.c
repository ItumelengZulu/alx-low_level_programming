#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned int count = 98;
    unsigned int i, prev = 1, current = 2, next;

    printf("%d, %d", prev, current);

    for (i = 2; i < count; i++)
    {
        next = prev + current;

        // Printing the next Fibonacci number
        printf(", %d", next);

        prev = current;
        current = next;
    }

    printf("\n");

    return 0;
}

