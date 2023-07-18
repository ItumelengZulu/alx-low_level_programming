#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count = 50;
    int fibonacci[50] = {1, 2}; // Array to store the first two Fibonacci numbers
    int i;

    // Calculating the remaining Fibonacci numbers
    for (i = 2; i < count; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Printing the Fibonacci numbers separated by a comma and space
    for (i = 0; i < count - 1; i++)
    {
        printf("%d, ", fibonacci[i]);
    }

    // Printing the last Fibonacci number without a comma and space
    printf("%d\n", fibonacci[count - 1]);

    return 0;
}

