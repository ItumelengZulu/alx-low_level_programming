#include <stdlib.h>

void free_grid(int **grid, int height)
{
    int i;

    /* Check if the grid pointer is NULL */
    if (grid == NULL)
        return;

    /* Free memory for each row */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /* Free memory for the grid (array of int pointers) */
    free(grid);
}

