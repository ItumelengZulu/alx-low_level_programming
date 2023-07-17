#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase, and then a new line,
 *              using the putchar function only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
}
