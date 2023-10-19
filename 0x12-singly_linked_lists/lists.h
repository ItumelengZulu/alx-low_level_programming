#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct list_s - Singly linked list
 * @str: String (char *)
 * @len: Length of the string
 * @next: Points to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototype for printing a list */
size_t print_list(const list_t *h);

#endif /* LIST_H */

