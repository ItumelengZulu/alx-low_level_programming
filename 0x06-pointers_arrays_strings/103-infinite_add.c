#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (r) or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int i = 0;
    int len1 = 0;
    int len2 = 0;
    int start = 0; /* Declare start here */
    int end = 0;   /* Declare end here */

    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    if (size_r <= len1 || size_r <= len2)
        return 0; /* Result cannot be stored in the given buffer size */

    r[size_r] = '\0';
    len1--;
    len2--;

    while (len1 >= 0 || len2 >= 0) {
        int num1 = (len1 >= 0) ? (n1[len1] - '0') : 0;
        int num2 = (len2 >= 0) ? (n2[len2] - '0') : 0;
        int sum = num1 + num2 + carry;
        carry = sum / 10;
        r[i] = (sum % 10) + '0';
        i++;
        len1--;
        len2--;
    }

    if (carry) {
        if (i >= size_r - 1)
            return 0; /* Result cannot be stored in the given buffer size */
        r[i] = carry + '0';
        i++;
    }

    r[i] = '\0';

    /* Reverse the result string */
    start = 0; /* Assign values here */
    end = i - 1; /* Assign values here */
    while (start < end) {
        char temp = r[start];
        r[start] = r[end];
        r[end] = temp;
        start++;
        end--;
    }

    return r;
}

int main(void)
{
    char num1[] = "123456789012345678901234567890";
    char num2[] = "987654321098765432109876543210";
    char result[100];

    char *sum = infinite_add(num1, num2, result, sizeof(result));
    if (sum) {
        printf("Sum: %s\n", sum);
    } else {
        printf("Result cannot be stored in the buffer.\n");
    }

    return 0;
}

