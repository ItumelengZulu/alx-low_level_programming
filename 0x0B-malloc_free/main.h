#ifndef MAIN_H
#define MAIN_H

/* _putchar - Writes a character to the standard output
 * @c: The character to write
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c);

/* create_array - Creates an array of characters initialized with a specific character
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the allocated array, or NULL if it fails
 */
char *create_array(unsigned int size, char c);

/* _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly allocated duplicated string, or NULL if it fails
 */
char *_strdup(char *str);

/* str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2);

/* alloc_grid - Allocates a 2D array of integers
 * @width: The width of the 2D array
 * @height: The height of the 2D array
 *
 * Return: A pointer to the allocated 2D array, or NULL if it fails
 */
int **alloc_grid(int width, int height);

/* free_grid - Frees a previously allocated 2D array of integers
 * @grid: The 2D array to free
 * @height: The height of the 2D array
 */
void free_grid(int **grid, int height);

/* argstostr - Concatenates all command-line arguments into a single string
 * @ac: The number of command-line arguments
 * @av: An array of strings containing the arguments
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av);

/* strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str);

#endif /* MAIN_H */

