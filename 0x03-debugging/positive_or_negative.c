#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Initialize the random number generator */
    srand(time(0));

    /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
    n = rand() - RAND_MAX / 2;

    /* Check if n is positive, negative, or zero, and print a message */
    if (n > 0)
    {
        printf("%d is positive.\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative.\n", n);
    }
    else
    {
        printf("n is zero.\n");
    }

    return (0);
}
