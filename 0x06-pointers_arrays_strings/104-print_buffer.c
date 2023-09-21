#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specific format.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0) {
        putchar('\n'); /* Output a new line if size is 0 or less */
        return;
    }

    for (i = 0; i < size; i += 10) {
        printf("%.8x: ", i); /* Print the position in hexadecimal (8 chars) */

        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                printf("%.2x", b[i + j]); /* Print the hexadecimal content (2 chars) */
            } else {
                printf("  "); /* If we've reached the end of the buffer, print spaces */
            }

            if (j % 2 == 1) {
                putchar(' '); /* Separate the bytes with a space */
            }
        }

        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                if (b[i + j] >= 32 && b[i + j] <= 126) {
                    putchar(b[i + j]); /* If printable, print the character */
                } else {
                    putchar('.'); /* If not printable, print a dot */
                }
            }
        }

        putchar('\n'); /* End the line */
    }
}

int main(void)
{
    char buffer[] = "Hello, World!\nThis is a test buffer.";
    int size = sizeof(buffer) - 1; /* Subtract 1 to exclude the null terminator */

    print_buffer(buffer, size);

    return (0);
}

