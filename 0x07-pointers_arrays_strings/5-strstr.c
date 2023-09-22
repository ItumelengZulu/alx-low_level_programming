#include <stddef.h>

/**
 * _strstr - Locates a substring within a string
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to search for
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *h, *n; /* Pointers to iterate through haystack and needle */

    while (*haystack)
    {
        h = haystack;
        n = needle;

        /* Compare characters in haystack and needle */
        while (*n && (*h == *n))
        {
            h++;
            n++;
        }

        /* If the entire needle is found in haystack, return the start of the match */
        if (*n == '\0')
            return haystack;

        haystack++; /* Move to the next character in haystack */
    }

    return NULL; /* Return NULL if the substring is not found in haystack */
}

