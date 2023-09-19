#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * Return: The converted integer. If no valid integer is found, return 0.
 */
int _atoi(char *s)
{
	int sign = 1; /* Initialize sign as positive */
	int result = 0;

	/* Skip leading whitespace */
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	/* Handle the sign */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/* Parse the digits */
	while (*s >= '0' && *s <= '9')
	{
		/* Check for overflow before updating result */
		if (result > (2147483647 - (*s - '0')) / 10)
		{
			/* Overflow detected, return the maximum or minimum integer */
			return (sign == 1) ? 2147483647 : -2147483648;
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	return result * sign;
}

int atoi_main(void)
{
	char str[] = "  -12345abc";
	int num = _atoi(str);
	printf("Converted integer: %d\n", num);

	return 0;
}

