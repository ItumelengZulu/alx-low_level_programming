#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Description: This function returns the length of a string using recursion.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of the string */
	{
		return (0); /* Return 0 when the end of the string is reached */
	}
	else
	{
		return (1 + _strlen_recursion(s + 1)); /* Recursive call with the next character */
	}
}

