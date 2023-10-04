#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Check for invalid input conditions */
    if (width <= 0 || height <= 0)
        return NULL;

    /* Allocate memory for the grid (array of int pointers) */
    grid = (int **)malloc(height * sizeof(int *));

    /* Return NULL if malloc fails */
    if (grid == NULL)
        return NULL;

    /* Allocate memory for each row (array of int) and initialize to 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));

        /* Check for malloc failures in inner arrays */
        if (grid[i] == NULL)
        {
            /* Free previously allocated memory to avoid memory leaks */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }

        /* Initialize each element to 0 */
        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return grid;
}

