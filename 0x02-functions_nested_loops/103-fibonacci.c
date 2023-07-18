#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int limit = 4000000;
    int prev = 1, current = 2, next = 0, sum = 0;

    while (current <= limit)
    {
        if (current % 2 == 0)
        {
            sum += current;
        }

        // Calculate the next Fibonacci term by adding the previous two terms
        next = prev + current;
        prev = current;
        current = next;
    }

    printf("The sum of even-valued terms in the Fibonacci sequence below 4,000,000 is: %d\n", sum);

    return 0;
}

