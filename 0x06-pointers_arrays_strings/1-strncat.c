/**
 * _strncat - Concatenates two strings with a maximum of n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
    char *result = dest; /* Store the start address of dest for returning later */

    /* Move the dest pointer to the end of the dest string */
    while (*dest != '\0') {
        dest++;
    }

    /* Copy at most n bytes from src to dest */
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    /* Add a null terminator to the end */
    *dest = '\0';

    return result; /* Return the start address of the concatenated string */
}

