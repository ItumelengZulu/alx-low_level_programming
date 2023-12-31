#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function to count the number of words in a string 
 *
 * */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            if (in_word)
            {
                in_word = 0;
            }
        }
        else
        {
            if (!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        str++;
    }

    return count;
}

/* Function to split a string into words */
char **strtow(char *str)
{
    int num_words, word_index;
    char **words, *token, *copy;

    if (str == NULL || *str == '\0')
        return NULL;

    num_words = count_words(str);

    if (num_words == 0)
        return NULL;

    words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    word_index = 0;
    copy = strdup(str);

    if (copy == NULL)
    {
        free(words);
        return NULL;
    }

    token = strtok(copy, " \t\n");

    while (token != NULL)
    {
        words[word_index] = strdup(token);

        if (words[word_index] == NULL)
        {
            /* Free memory allocated so far */
            for (word_index = 0; word_index < num_words; word_index++)
                free(words[word_index]);
            free(words);
            free(copy);
            return NULL;
        }

        word_index++;
        token = strtok(NULL, " \t\n");
    }

    words[num_words] = NULL; /* Set the last element to NULL */
    free(copy);

    return words;
}

