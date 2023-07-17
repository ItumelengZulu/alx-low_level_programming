#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase,
 *              excluding the letters 'q' and 'e', followed by a new line,
 *              using the putchar function only twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
    }

    putchar('\n');

    return (0);
}

