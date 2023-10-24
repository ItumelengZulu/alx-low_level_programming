#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve, starting at 0.
 *
 * Return: The node at the specified index, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;

    for (i = 0; head != NULL; i++)
    {
        if (i == index)
            return head;
        head = head->next;
    }

    return NULL; /* Index is out of range */
}

