#include "lists.h"

/**
 * print_list - prints all the elements  a list_t list.
 * @h: singly linked list.
 *
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
size_t sofi = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
sofi++;
}

return (sofi);
}
