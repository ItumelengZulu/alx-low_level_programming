#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    /* Return NULL if size is 0 */
    if (size == 0)
        return NULL;

    /* Allocate memory for the array */
    array = malloc(size * sizeof(char));

    /* Return NULL if malloc fails */
    if (array == NULL)
        return NULL;

    /* Initialize each element with the specified character */
    for (i = 0; i < size; i++)
    {
        array[i] = c;
    }

    /* Return a pointer to the allocated and initialized array */
    return array;
}

