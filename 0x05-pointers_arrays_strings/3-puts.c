#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: A pointer to the string to be printed.
 *
 * Return: No return value (void).
 */
void _puts(char *str)
{
	char character;

	while (*str != '\0')
	{
		character = *str;
		write(1, &character, 1);
		str++;
	}
	write(1, "\n", 1);
}

