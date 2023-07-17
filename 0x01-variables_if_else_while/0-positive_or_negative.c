#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * Description: This function initializes a variable 'n' with a random value
 *              between -RAND_MAX/2 and RAND_MAX/2, and prints its sign.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Seed the random number generator */
    srand(time(0));

    /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
    n = rand() - RAND_MAX / 2;

    /* Print the generated number */
    printf("The number: %d\n", n);

    /* Check if the number is positive, zero, or negative */
    if (n > 0)
    {
        printf("is positive");
    }
    else if (n == 0)
    {
        printf("is zero");
    }
    else
    {
        printf("is negative");
    }

    return (0);
}
