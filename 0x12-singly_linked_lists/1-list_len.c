#include "lists.h"

/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int sofi = 0;

	temp = h;
	while (temp)
	{
		sofi++;
		temp = temp->next;
	}
	return (sofi);
}
