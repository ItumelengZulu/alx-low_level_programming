#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to the array of integers.
 * @n: The number of elements to print.
 *
 * Description: This function prints the elements of an integer array.
 *              If n is less than or equal to 0, it prints "Return SUCCESS".
 */
void print_array(int *a, int n)
{
    int i;

    if (n <= 0)
    {
        printf("Return SUCCESS\n");
        return;
    }

    printf("%d", n);

    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);

        if (i < n - 1)
        {
            printf(","); /* Add a comma if it's not the last element */
        }
    }

    printf(" };\n");
}

