#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        /* Print an error message (optional) */
        fprintf(stderr, "Error: malloc failed\n");

        /* Terminate the process with status 98 */
        exit(98);
    }

    return ptr;
}

