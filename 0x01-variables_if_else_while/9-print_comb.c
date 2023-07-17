#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all possible combinations of single-digit numbers,
 *              separated by ", ", in ascending order using the putchar function only four times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

