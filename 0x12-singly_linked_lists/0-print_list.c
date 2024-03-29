#include "lists.h"
/**
 * print_list - prints elements in a linked lists
 * @h: head pointer
 *
 * Return: no of elements in the lists
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0 ; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
