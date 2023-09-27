#include "main.h"

/* Forward declaration for the helper function */
int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Description: This function calculates the natural square root of a number
 * using recursion.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 * natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Check for negative input */
	{
		return -1; /* Return -1 to indicate an error */
	}
	else if (n == 0 || n == 1) /* Base cases: square root of 0 or 1 is itself */
	{
		return n;
	}
	else
	{
		return find_sqrt(n, 1); /* Call a helper function to find the square root */
	}
}

/**
 * find_sqrt - Helper function to find the square root using recursion.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Description: This function is a helper function for _sqrt_recursion and
 * recursively checks if the square of the current guess is equal to n.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n) /* Check if the current guess is the square root */
	{
		return guess;
	}
	else if (guess * guess > n) /* Check if the guess is too high */
	{
		return -1; /* Return -1 to indicate that n does not have a natural square root */
	}
	else
	{
		return find_sqrt(n, guess + 1); /* Increment the guess and continue recursively */
	}
}

