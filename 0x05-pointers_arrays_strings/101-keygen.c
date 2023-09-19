#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1];  /* +1 for the null terminator */
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    /* Seed the random number generator with the current time */
    srand(time(NULL));

    /* Generate a random password */
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }
    password[PASSWORD_LENGTH] = '\0';

    /* Print the generated password */
    printf("%s\n", password);

    return (0);
}

