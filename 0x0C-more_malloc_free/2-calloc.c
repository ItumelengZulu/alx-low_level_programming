#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated and initialized memory,
 *         or NULL if nmemb or size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;

    /* Check for invalid input */
    if (nmemb == 0 || size == 0)
        return NULL;

    /* Allocate memory for the array */
    ptr = malloc(nmemb * size);

    /* Check for memory allocation failure */
    if (ptr == NULL)
        return NULL;

    /* Initialize the memory to zero */
    for (i = 0; i < nmemb * size; i++)
    {
        ((char *)ptr)[i] = 0;
    }

    return ptr;
}

