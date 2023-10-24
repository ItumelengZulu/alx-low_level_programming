#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function to print elements of a listint_t list */
size_t print_listint(const listint_t *h);

/* Function to print elements of a listint_t list */
size_t listint_len(const listint_t *h);

/* Function to put a character to the standard output */
int _putchar(char c);

/* Function to print elements of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Function to print elements of a listint_t list */
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* LISTS_H */

