#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    int total_length = 0;
    int i, j;
    int index = 0; /* Declare index here */
    char *concatenated;

    if (ac == 0 || av == NULL)
        return NULL;

    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            total_length++;
        }
        total_length++; /* Account for the newline character */
    }

    /* Allocate memory for the concatenated string */
    concatenated = (char *)malloc((total_length + 1) * sizeof(char)); /* +1 for null terminator */

    /* Return NULL if malloc fails */
    if (concatenated == NULL)
        return NULL;

    /* Concatenate the arguments into the string with newline characters */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            concatenated[index] = av[i][j];
            index++;
        }
        concatenated[index] = '\n';
        index++;
    }

    concatenated[index] = '\0'; /* Null-terminate the concatenated string */

    return concatenated;
}

