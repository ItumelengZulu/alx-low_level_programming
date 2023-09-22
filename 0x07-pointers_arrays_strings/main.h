#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */
char *_memset(char *s, char b, unsigned int n);

/* Function prototypes */
int _putchar(char c);

/* Function prototypes */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Function prototypes */
char *_strchr(char *s, char c);

/* Function prototypes */
unsigned int _strspn(char *s, char *accept);

/* Function prototypes */
char *_strpbrk(char *s, char *accept);

/* Function prototypes */
char *_strstr(char *haystack, char *needle);

/* Function prototypes */
void print_chessboard(char (*a)[8]);

/* Function prototypes */
void print_diagsums(int *a, int size);

/* Function prototypes */
void set_string(char **s, char *to);

#endif /* MAIN_H */
