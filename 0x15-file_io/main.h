/* main.h */

#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Function prototype for read_textfile */
ssize_t read_textfile(const char *filename, size_t letters);

/* _putchar function prototype */
int _putchar(char c);

/* create_file function prototype */
int create_file(const char *filename, char *text_content);

/* append function prototype */
int append_text_to_file(const char *filename, char *text_content);

/* Function prototype for read_textfile */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */

