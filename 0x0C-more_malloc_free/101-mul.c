#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit_string - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters in the string are digits, 0 otherwise.
 */
int is_digit_string(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
    return num1 * num2;
}

int main(int argc, char *argv[])
{
    char *num1_str, *num2_str;
    unsigned int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    num1_str = argv[1];
    num2_str = argv[2];

    if (!is_digit_string(num1_str) || !is_digit_string(num2_str))
    {
        printf("Error\n");
        return 98;
    }

    num1 = atoi(num1_str);
    num2 = atoi(num2_str);

    result = multiply(num1, num2);

    printf("%u\n", result);

    return 0;
}

