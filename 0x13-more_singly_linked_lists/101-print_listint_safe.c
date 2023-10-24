#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    size_t count = 0;
    const listint_t *addresses[1024];

    while (current != NULL)
    {
        size_t i;

        for (i = 0; i < count; i++)
        {
            if (current == addresses[i])
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                return (count);
            }
        }

        addresses[count] = current;
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
        count++;
    }

    return (count);
}

