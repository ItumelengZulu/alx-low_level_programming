/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: The string to be converted.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
    char *result = str; /* Store the start address of the string for returning later */

    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A'; /* Convert to uppercase */
        }
        str++;
    }

    return result; /* Return the start address of the modified string */
}

