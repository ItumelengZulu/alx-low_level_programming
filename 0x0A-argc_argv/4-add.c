#include <stdio.h>
#include <stdlib.h>

int is_positive_number(char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; /* Not a digit, so not a positive number */
        }
        str++;
    }
    return 1; /* All characters are digits, so it's a positive number */
}

int main(int argc, char *argv[]) {
    int sum = 0;
    int i;

    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++) {
        if (!is_positive_number(argv[i])) {
            printf("Error\n");
            return 1;
        }

        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);

    return 0;
}

