#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list and sets the head to NULL.
 * @h: A pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current = *h;
    listint_t *next_node;
    size_t count = 0;

    while (current)
    {
        next_node = current->next;
        free(current);
        current = next_node;
        count++;
    }

    *h = NULL; /* Set the head to NULL */

    return count;
}

