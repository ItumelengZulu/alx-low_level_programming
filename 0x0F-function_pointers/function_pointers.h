#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for _putchar */
int _putchar(char c);

/* Function prototype for print_name */
void print_name(char *name, void (*f)(char *));

/* Add more function prototypes here if needed */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function prototype for cmp */
int int_index(int *array, int size, int (*cmp)(int));

int (*get_op_func(char *s))(int, int);

/* Function prototype for mixed operations */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulo(int a, int b);

#endif /* FUNCTION_POINTERS_H */

