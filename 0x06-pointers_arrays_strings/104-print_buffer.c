#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a user-friendly format.
 * @b: Pointer to the buffer to be printed.
 * @size: The size of the buffer.
 *
 * Description: This function prints the hexadecimal and ASCII representation
 * of a buffer, with 10 bytes per line.
 */
void print_buffer(char *b, int size)
{
    int i, j; /* Declare loop counters outside of the for loops */

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    /* Print the header line. */
    printf("%08x ", 0);

    /* Print the buffer content, 10 bytes per line. */
    for (i = 0; i < size; i += 10)
    {
        /* Print the hexadecimal content of the buffer. */
        for (j = i; j < i + 10 && j < size; j++)
        {
            printf("%02x ", b[j]);
        }

        /* Print the content of the buffer. */
        for (j = i; j < i + 10 && j < size; j++)
        {
            if (b[j] >= 32 && b[j] <= 126)
            {
                printf("%c", b[j]);
            }
            else
            {
                printf(".");
            }
        }

        printf("\n");
    }
}

