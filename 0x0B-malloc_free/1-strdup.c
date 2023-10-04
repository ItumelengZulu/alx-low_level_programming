#include <stdlib.h>

char *_strdup(char *str)
{
    char *duplicate;
    unsigned int length = 0;
    unsigned int i;

    /* Return NULL if str is NULL */
    if (str == NULL)
        return NULL;

    /* Calculate the length of the input string */
    while (str[length] != '\0')
    {
        length++;
    }

    /* Allocate memory for the duplicated string */
    duplicate = malloc((length + 1) * sizeof(char)); /* +1 for the null terminator */

    /* Return NULL if malloc fails */
    if (duplicate == NULL)
        return NULL;

    /* Copy the contents of the input string to the duplicated string */
    for (i = 0; i <= length; i++)
    {
        duplicate[i] = str[i];
    }

    return duplicate;
}

