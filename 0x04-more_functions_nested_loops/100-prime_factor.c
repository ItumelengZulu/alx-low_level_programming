#include "main.h"

/* Recursive function to print an integer */
void print_number(int n) {
    /* Handle negative numbers */
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    /* Base case: single digit */
    if (n / 10 == 0) {
        _putchar(n + '0');
    } else {
        /* Recursive case: more than one digit */
        print_number(n / 10);  /* Print all digits except the last one */
        _putchar(n % 10 + '0'); /* Print the last digit */
    }
}

