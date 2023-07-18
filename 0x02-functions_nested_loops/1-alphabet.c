#include "main.h"
#include "stdio.h"
/**
 * main - function to print lowercase alphabets
 * requirements - use for loop
 * Return - 0 (Success)
 */
void print_alphabet(void)
{
    char ch;
    char last = 'z';

    for (ch = 'a'; ch <= last; ch++)
    {
        _putchar(ch);
    }
    _putchar('\n');
}
