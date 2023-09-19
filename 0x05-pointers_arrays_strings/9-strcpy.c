#include <stdio.h>

/**
 * _strcpy - Copies a string, including the null terminator, to a destination buffer.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: A pointer to the beginning of the destination buffer.
 */
char *_strcpy(char *dest, const char *src)
{
    char *dest_start = dest; /* Store the starting address of dest */

    /* Copy each character from src to dest until the null terminator is encountered */
    while (*src != '\0')
    {
        *dest = *src; /* Copy the character */
        dest++;       /* Move dest and src pointers to the next character */
        src++;
    }

    *dest = '\0'; /* Add the null terminator to the destination string */
    return (dest_start); /* Return a pointer to the beginning of dest */
}

/**
 * array_main - Demonstrates the usage of the _strcpy function.
 *
 * This function initializes source and destination strings and then uses the
 * _strcpy function to copy the source string into the destination buffer.
 * It prints the copied string and the pointer to the destination buffer.
 */
int array_main(void)
{
    char src[] = "Hello, World!";
    char dest[20]; /* Make sure dest has enough space to hold the copied string */

    char *result = _strcpy(dest, src);

    printf("Copied string: %s\n", dest);
    printf("Pointer to dest: %p\n", (void *)result);

    return (0);
}

int main(void)
{
    return (array_main());
}

