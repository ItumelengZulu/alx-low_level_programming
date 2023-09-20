#include <ctype.h> /* Include the ctype.h header for islower() and toupper() */

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i;
    int capitalize = 1; /* Initialize capitalize flag to capitalize the first letter */

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}') {
            capitalize = 1; /* Set the flag to capitalize the next letter */
        } else if (capitalize && islower(str[i])) {
            str[i] = toupper(str[i]); /* Capitalize the letter */
            capitalize = 0; /* Reset the flag */
        } else {
            capitalize = 0; /* Reset the flag if not a separator or lowercase letter */
        }
    }

    return str; /* Return the modified string */
}

