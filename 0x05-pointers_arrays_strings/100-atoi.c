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
	int started = 0; /* Flag to track if parsing has started */

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			/* Check for overflow before updating result */
			if (result > (2147483647 - (*s - '0')) / 10)
			{
				return (sign == 1) ? 2147483647 : -2147483648;
			}
			result = result * 10 + (*s - '0');
			started = 1; /* Mark that parsing has started */
		}
		else
		{
			/* If parsing has started and a non-digit is encountered, stop parsing */
			if (started)
				break;

			if (*s == '-')
				sign *= -1;

			/* Ignore other characters until parsing starts */
		}
		s++;
	}

	return result * sign;
}

int atoi_main(void)
{
	char *tests[] = {
		"4",
		"10",
		"-3",
		"99",
		"-40",
		" ------++++++-----+++++--98",
		"Hello ----- world\n",
		"+++++ +-+ 2242454",
		"2147483647",
		" + + - -98 Battery Street; San Francisco, CA 94111 - USA ",
		"---++++ -++ Sui - te - 402 #cisfun :)",
		"",
		"-2147483648",
		NULL
	};

	int i = 0;
	while (tests[i])
	{
		int num = _atoi(tests[i]);
		printf("Input: \"%s\", Converted integer: %d\n", tests[i], num);
		i++;
	}

	return (0);
}

