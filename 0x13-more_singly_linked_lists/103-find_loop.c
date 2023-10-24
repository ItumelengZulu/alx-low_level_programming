#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head;
    listint_t *fast = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;         /* Move one step at a time */
        fast = fast->next->next;  /* Move two steps at a time */

        if (slow == fast)  /* If there's a loop, they will meet at the same node */
        {
            /* Move one pointer back to the head and then move both one step at a time */
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;  /* They meet at the start of the loop */
        }
    }

    return NULL;  /* No loop found */
}

