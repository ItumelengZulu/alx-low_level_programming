#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer that the function will use to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (r) or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, k;
    int carry = 0;

    /* Check if the buffer is large enough to store the result. */
    if ((unsigned int)size_r < (strlen(n1) + strlen(n2) + 1)) {
        return 0;
    }

    /* Initialize indices for n1, n2, and result buffer. */
    i = strlen(n1) - 1;
    j = strlen(n2) - 1;
    k = size_r - 1;

    /* Iterate over the two numbers, adding each digit and the carry. */
    while (i >= 0 || j >= 0 || carry) {
        int digit1 = i >= 0 ? n1[i] - '0' : 0;
        int digit2 = j >= 0 ? n2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[k] = '0' + (sum % 10);

        /* Update indices. */
        i--;
        j--;
        k--;
    }

    /* Return a pointer to the result. */
    return r;
}

