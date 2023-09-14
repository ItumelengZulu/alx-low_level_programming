#include <stdio.h>
#include <math.h>

/**
 * findLargestPrimeFactor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number.
 */
long long findLargestPrimeFactor(long long n)
{
    long long largestFactor = -1;

    /* Handle divisibility by 2 repeatedly */
    while (n % 2 == 0)
    {
        largestFactor = 2;
        n /= 2;
    }

    /* Continue with odd numbers starting from 3 */
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            largestFactor = i;
            n /= i;
        }
    }

    /* If n is still greater than 1, it is a prime number itself */
    if (n > 1)
    {
        largestFactor = n;
    }

    return largestFactor;
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    long long number = 612852475143;
    long long largestPrimeFactor = findLargestPrimeFactor(number);

    printf("%lld\n", largestPrimeFactor);

    return (0);
}

