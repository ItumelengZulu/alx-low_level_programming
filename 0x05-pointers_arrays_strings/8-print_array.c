#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: A pointer to the array of integers.
 * @n: The number of elements to print.
 *
 * Return: No return value (void).
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]); /* Print the current element */

        if (i < n - 1)
        {
            printf(", "); /* Add a comma and a space if it's not the last element */
        }
    }

    printf("\n"); /* Print a new line at the end */
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    print_array(arr, n);

    return (0);
}

