#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
    size_t ct = 0;

    while (h)
    {
        ct++;
        h = h->next;
    }

    return (ct);
}
