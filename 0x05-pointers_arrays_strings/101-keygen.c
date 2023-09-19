#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * generate_password - Generates a random valid password for 101-crackme.
 *
 * Return: A random valid password as a dynamically allocated string.
 */
char *generate_password(void)
{
        static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        char *password = malloc(12); /* Password length is 11 characters, plus 1 for the null terminator */
        int i;
        int lowercase_count = 0;
        int uppercase_count = 0;
        int digit_count = 0;

        if (password == NULL)
        {
                perror("malloc");
                exit(EXIT_FAILURE);
        }

        srand(time(NULL));

        for (i = 0; i < 11; i++)
        {
                int index = rand() % 62; /* 62 is the length of the charset */
                char random_char = charset[index];
                password[i] = random_char;

                if (islower(random_char)) {
                    lowercase_count++;
                } else if (isupper(random_char)) {
                    uppercase_count++;
                } else if (isdigit(random_char)) {
                    digit_count++;
                }
        }

        if (lowercase_count == 0 || uppercase_count == 0 || digit_count == 0) {
            free(password);
            return generate_password();
        }

        password[11] = '\0'; /* Null-terminate the password */

        return password;
}

int main(void)
{
        char *password = generate_password();
        printf("Generated Password: %s\n", password);

        if (is_valid_password(password)) {
            printf("Password is valid.\n");
        } else {
            printf("Password is not valid.\n");
        }

        free(password);
        return 0;
}

