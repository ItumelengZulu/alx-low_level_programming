#include "main.h"

/**
 * wildcmp - Compares two strings with wildcards.
 * @s1: The first string to compare.
 * @s2: The second string to compare, which can contain '*'.
 *
 * Description: This function compares two strings, where '*' in s2 can match
 * zero or more characters in s1. It uses recursion to check if the strings
 * can be considered identical.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return 1;
	}

	/* If the characters match or s2 has a '*', continue comparing */
	if (*s1 == *s2 || *s2 == '*')
	{
		/* Recursive call without '*' (skip) or with '*' (use) */
		return wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1);
	}

	/* If characters don't match and there's no '*', they are not identical */
	return 0;
}

