#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 *
 * Description: This function calculates the factorial of a given number using
 * a recursive approach.
 *
 * Return: The factorial of n, or -1 if n is negative (error).
 */
int factorial(int n)
{
	if (n < 0) /* Check for negative input */
	{
		return (-1); /* Return -1 to indicate an error */
	}
	else if (n == 0) /* Base case: factorial of 0 is 1 */
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1)); /* Recursive call to calculate factorial */
	}
}

