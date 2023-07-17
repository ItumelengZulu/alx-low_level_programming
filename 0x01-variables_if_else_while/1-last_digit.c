#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This function initializes a variable 'n' with a random value
 *              between -RAND_MAX/2 and RAND_MAX/2, and prints the last digit
 *              of 'n' along with its properties.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	/* Seed the random number generator */
	srand(time(0));

	/* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
	n = rand() - RAND_MAX / 2;

	/* Calculate the last digit of 'n' */
	last_digit = n % 10;

	/* Print the generated number 'n' and its last digit */
	printf("The string Last digit of %d is %d", n, last_digit);

	/* Check the properties of the last digit */
	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

