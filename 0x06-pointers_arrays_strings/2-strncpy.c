/**
 * _strncpy - Copies a string from src to dest, up to n bytes.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *result = dest; /* Store the start address of dest for returning later */

    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0) {
        *dest = '\0'; /* Fill the remaining bytes with null terminators */
        dest++;
        n--;
    }

    return result; /* Return the start address of the destination string */
}

