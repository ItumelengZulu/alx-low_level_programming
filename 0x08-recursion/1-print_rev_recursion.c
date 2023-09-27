#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Description: This function prints the characters of a string in reverse
 * order using recursion.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of the string */
	{
		return; /* Return without printing when the end of the string is reached */
	}

	_print_rev_recursion(s + 1); /* Recursive call with the next character */
	_putchar(*s); /* Print the current character after the recursive call */
}

