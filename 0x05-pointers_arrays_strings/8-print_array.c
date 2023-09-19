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

    printf("int array[%d] = {", n);

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

/**
 * main - Entry point of the program.
 *
 * Description: This function demonstrates the usage of the print_array function.
 *              It initializes three different integer arrays and calls print_array
 *              with various array sizes and contents.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int array1[5] = { -198, 298, 402, -1024, 98 };
    int array2[256]; 
    int array3[1] = { 98 };

    print_array(array1, 5);
    print_array(array2, 256);
    print_array(array3, 1);

    return (0);
}

