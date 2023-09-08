#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
    if (write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59) == -1)
    {
        perror("write");
        exit(1);
    }

    return (1);
}
