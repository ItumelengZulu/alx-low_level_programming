/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing characters to match
 *
 * Return: The number of bytes in the initial segment of s that consist only of
 *         bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0; /* Initialize the count of matching characters */

    while (*s != '\0')
    {
        char *temp = accept; /* Pointer to iterate through accept */

        while (*temp != '\0')
        {
            if (*s == *temp)
            {
                count++; /* Increment count if character matches in accept */
                break;   /* Break the inner loop to check the next character in s */
            }
            temp++; /* Move to the next character in accept */
        }

        if (*temp == '\0')
            return count; /* If no match found in accept, return the count */

        s++; /* Move to the next character in s */
    }

    return count;
}

