#include <stdlib.h>
#include <stdio.h> 

char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    unsigned int len1 = 0, len2 = 0;
    unsigned int i, j;

    /* Treat NULL as an empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the lengths of s1 and s2 */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    /* Allocate memory for the concatenated string */
    concatenated = malloc((len1 + len2 + 1) * sizeof(char)); /* +1 for null terminator */

    /* Return NULL if malloc fails */
    if (concatenated == NULL)
        return NULL;

    /* Copy the contents of s1 to the concatenated string */
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    /* Copy the contents of s2 to the concatenated string */
    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    /* Null-terminate the concatenated string */
    concatenated[i + j] = '\0';

    return concatenated;
}

