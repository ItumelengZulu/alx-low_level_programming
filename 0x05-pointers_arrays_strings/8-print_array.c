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

    if (n <= 0)
    {
        printf("Return SUCCESS\n");
        return;
    }

    printf("int array[%d] = {", n);

    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);

        if (i < n - 1)
        {
            printf(",");
        }
    }

    printf(" };\n");
}

int main(void)
{
    int array1[5] = { -198, 298, 402, -1024, 98 };
    int array2[256]; // Assuming you have initialized this array with your big data.
    int array3[1] = { 98 };

    print_array(array1, 5);
    print_array(array2, 256);
    print_array(array3, 1);

    return (0);
}

