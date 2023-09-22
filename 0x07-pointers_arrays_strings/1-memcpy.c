/**
 * _memcpy - Copies memory area from src to dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *dest_ptr = dest; /* Pointer to the destination memory area */
    char *src_ptr = src;   /* Pointer to the source memory area */

    /* Copy n bytes from src to dest */
    while (n > 0)
    {
        *dest_ptr = *src_ptr; /* Copy a byte from src to dest */
        dest_ptr++;           /* Move dest pointer to the next byte */
        src_ptr++;            /* Move src pointer to the next byte */
        n--;                  /* Decrement the number of bytes remaining */
    }

    return dest; /* Return a pointer to the destination memory area */
}

