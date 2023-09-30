#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[]) {
    (void)argv; /* Prevent "unused parameter" warning */
    
    /* Print the number of arguments (excluding the program name) */
    printf("%d\n", argc - 1);
    return 0;
}

