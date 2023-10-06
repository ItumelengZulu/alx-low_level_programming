#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1, len2;
    char *concatenated;

    /* Treat NULL strings as empty strings */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    /* Ensure n does not exceed the length of s2 */
    if (n >= len2)
        n = len2;

    /* Allocate memory for the concatenated string */
    concatenated = (char *)malloc(len1 + n + 1);

    /* Check for memory allocation failure */
    if (concatenated == NULL)
        return NULL;

    /* Copy s1 to the concatenated string */
    strcpy(concatenated, s1);
    /* Append the first n characters of s2 to the concatenated string */
    strncat(concatenated, s2, n);

    return concatenated;
}

