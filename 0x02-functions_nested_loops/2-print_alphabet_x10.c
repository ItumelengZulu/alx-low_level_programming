#include "main.h"
/**
* main - print alphabets 10x
* requirement - add it to main.h
* Return : 0 (Success)
*/
void print_alphabet_x10(void)
{
    char ch;
    char last = 'z';
    int count = 0;

    while (count < 10)
    {
        for (ch = 'a'; ch <= last; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
        count++;
    }
}
