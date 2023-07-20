#include "main.h"

/* Function prototype for _putchar */
int _putchar(char c);

/* Function to print an integer */
void print_number(int n) {
    /* Handle negative numbers */
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    /* Calculate the number of digits in n */
    int numDigits = 1;
    int temp = n;
    while (temp / 10 != 0) {
        temp /= 10;
        numDigits++;
    }

    /* Print each digit from left to right */
    int divisor = 1;
    for (int i = 1; i < numDigits; i++) {
        divisor *= 10;
    }

    while (divisor != 0) {
        int digit = n / divisor;
        _putchar(digit + '0');
        n = n % divisor;
        divisor /= 10;
    }
}

