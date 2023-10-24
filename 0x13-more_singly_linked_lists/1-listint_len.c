#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0; /* Initialize the count to 0 */

    while (h != NULL)
    {
        h = h->next; /* Move to the next element */
        count++; /* Increment the count */
    }

    return count; /* Return the number of elements */
}

