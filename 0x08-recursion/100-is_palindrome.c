#include "main.h"
#include <stddef.h>
#include <string.h>

/* Forward declarations for helper functions */
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Description: This function checks if the given string is a palindrome
 * using a recursive approach.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    if (s == NULL) /* Check for NULL string */
    {
        return (0);
    }

    return (check_palindrome(s, 0, strlen(s) - 1)); /* Call a helper function to check palindrome */
}

/**
 * check_palindrome - Helper function to check palindrome recursively.
 * @s: The string to check.
 * @start: The index of the starting character.
 * @end: The index of the ending character.
 *
 * Description: This function is a helper function for is_palindrome and
 * recursively checks if the given string is a palindrome by comparing characters
 * from the beginning and end.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end) /* Base case: All characters have been compared */
    {
        return (1);
    }
    else if (s[start] != s[end]) /* If characters don't match, it's not a palindrome */
    {
        return (0);
    }
    else
    {
        return (check_palindrome(s, start + 1, end - 1)); /* Compare the next pair of characters */
    }
}

