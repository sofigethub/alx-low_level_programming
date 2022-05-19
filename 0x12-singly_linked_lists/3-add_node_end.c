#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *temp1, *temp2;
    size_t nchar;

    temp1 = malloc(sizeof(list_t));
    if (temp1 == NULL)
        return (NULL);

    temp1->str = strdup(str);

    for (nchar = 0; str[nchar]; nchar++)

    temp1->len = nchar;
    temp1->next = NULL;
    temp2 = *head;

    if (temp2 == NULL)
    {
        *head = temp1;
    }
    else
    {
        while (temp2->next != NULL)
            temp2 = temp2->next;
        temp2->next = temp1;
    }

    return (*head);
}
