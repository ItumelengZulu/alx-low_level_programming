/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the resulting string (dest).
 */
char *_strcat(char *dest, char *src)
{
    char *result = dest; /* Store the start address of dest for returning later*/

    /* Move the dest pointer to the end of the dest string*/
    while (*dest != '\0') {
        dest++;
    }

    /* Copy the characters from src to dest*/
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    /* Add a null terminator to the end*/
    *dest = '\0';

    return result; /* Return the start address of the concatenated string*/
}

