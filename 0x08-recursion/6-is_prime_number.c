#include "main.h"

/* Forward declaration for the helper function */
int is_prime_recursive(int n, int divisor);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Description: This function checks if the given integer is a prime number
 * using a recursive approach.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1) /* Base case: 0 and 1 are not prime numbers */
	{
		return (0);
	}
	else if (n <= 3) /* Base case: 2 and 3 are prime numbers */
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0) /* Check divisibility by 2 and 3 */
	{
		return (0);
	}
	else
	{
		return (is_prime_recursive(n, 5)); /* Call a helper function to check divisibility */
	}
}

/**
 * is_prime_recursive - Helper function to check divisibility recursively.
 * @n: The integer to check.
 * @divisor: The current divisor to test.
 *
 * Description: This function is a helper function for is_prime_number and
 * recursively checks if the given integer is divisible by any odd integers
 * starting from 5.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor * divisor > n) /* If no divisors are found */
	{
		return (1);
	}
	else if (n % divisor == 0) /* If n is divisible by the current divisor */
	{
		return (0);
	}
	else
	{
		return (is_prime_recursive(n, divisor + 2)); /* Check the next odd divisor */
	}
}

