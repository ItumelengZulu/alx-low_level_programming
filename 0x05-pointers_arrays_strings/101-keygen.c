#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random valid password for 101-crackme.
 *
 * Return: A random valid password as a dynamically allocated string.
 */
char *generate_password(void)
{
    static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *password = malloc(16); // Password length is 15 characters, plus 1 for the null terminator
    int i;

    if (password == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));

    // Ensure that the password has at least one uppercase letter, one lowercase letter, and one digit
    password[0] = charset[rand() % 26]; // Uppercase letter
    password[1] = charset[rand() % 26 + 26]; // Lowercase letter
    password[2] = charset[rand() % 10 + 52]; // Digit

    for (i = 3; i < 15; i++)
    {
        int index = rand() % 62; // 62 is the length of the charset
        password[i] = charset[index];
    }

    password[15] = '\0'; // Null-terminate the password

    return password;
}

int main(void)
{
    char *password = generate_password();
    printf("%s\n", password);
    free(password); // Free the dynamically allocated memory
    return 0;
}

