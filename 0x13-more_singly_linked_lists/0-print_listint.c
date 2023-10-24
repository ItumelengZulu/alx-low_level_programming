#include <stdio.h>
#include "lists.h" /* Make sure to include the header file with the listint_t structure */

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0; /* Initialize the count to 0 */

    while (h != NULL)
    {
        printf("%d\n", h->n); /* Print the value of the current node */
        h = h->next; /* Move to the next node */
        count++; /* Increment the count */
    }

    return count; /* Return the number of nodes */
}

