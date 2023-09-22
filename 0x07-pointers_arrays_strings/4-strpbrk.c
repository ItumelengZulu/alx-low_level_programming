#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to search
 * @accept: Pointer to the set of bytes to search for
 *
 * Return: A pointer to the first occurrence in s of any of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *temp = accept; /* Pointer to iterate through accept */

        while (*temp != '\0')
        {
            if (*s == *temp)
                return s; /* Return the pointer if a matching byte is found */

            temp++; /* Move to the next character in accept */
        }

        s++; /* Move to the next character in s */
    }

    return NULL; /* Return NULL if no matching byte is found in s */
}

