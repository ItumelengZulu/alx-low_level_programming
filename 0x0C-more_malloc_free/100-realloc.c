#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: A pointer to the newly reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    /* If ptr is NULL, equivalent to malloc(new_size) */
    if (ptr == NULL)
        return malloc(new_size);

    /* If new_size is zero, equivalent to free(ptr) */
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    /* If new_size is the same as old_size, no need to reallocate */
    if (new_size == old_size)
        return ptr;

    /* Allocate memory for the new block */
    new_ptr = malloc(new_size);

    /* Check for memory allocation failure */
    if (new_ptr == NULL)
        return NULL;

    /* Copy the contents of the old block to the new block */
    if (new_size > old_size)
        memcpy(new_ptr, ptr, old_size);
    else
        memcpy(new_ptr, ptr, new_size);

    /* Free the old block */
    free(ptr);

    return new_ptr;
}

