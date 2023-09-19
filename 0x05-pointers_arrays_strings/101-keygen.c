#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

#define PASSWORD_LENGTH 12

/**
 * generate_password - Generates a random valid password
 *
 * Return: A pointer to the generated password
 */
char *generate_password()
{
    char *password = malloc(PASSWORD_LENGTH + 1);  /* +1 for the null terminator */
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$";
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

    return (password);
}

/**
 * is_password_valid - Checks if a password is valid for 101-crackme
 *
 * @password: The password to check
 *
 * Return: True if the password is valid, false otherwise
 */
bool is_password_valid(const char *password)
{
    return (strcmp(password, "Tada!Congrats") == 0);
}

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
    char *password;

    /* Generate a random password */
    password = generate_password();

    /* Check if the generated password is valid */
    if (is_password_valid(password))
    {
        printf("Tada! Congrats\n");
    }
    else
    {
        printf("Wrong password\n");
    }

    /* Free the allocated memory */
    free(password);

    return (0);
}

