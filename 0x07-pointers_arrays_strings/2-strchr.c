#include <stddef.h>  /* Include the <stddef.h> header to define NULL*/

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0') /* Loop through the string until the end */
    {
        if (*s == c)   /* If the current character matches c */
            return s;  /* Return a pointer to the current character */

        s++;           /* Move to the next character in the string */
    }

    return NULL; /* Return NULL if character c is not found */
}

