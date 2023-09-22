/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to fill the memory with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s; /* Create a pointer to the start of the memory area */

    while (n > 0)
    {
        *ptr = b; /* Set the current byte to the constant value b */
        ptr++;    /* Move the pointer to the next byte */
        n--;      /* Decrement the number of bytes remaining to be filled */
    }

    return s; /* Return a pointer to the start of the memory area */
}

