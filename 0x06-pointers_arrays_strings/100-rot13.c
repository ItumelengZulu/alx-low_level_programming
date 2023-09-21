/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
    char *ptr = str; /* Create a pointer to the original string for returning later */

    while (*str) {
        char c = *str;
        
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
            *str = (((c - base) + 13) % 26) + base;
        }

        str++;
    }

    return ptr; /* Return the modified string */
}

