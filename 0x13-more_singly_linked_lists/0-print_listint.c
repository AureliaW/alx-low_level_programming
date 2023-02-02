#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head pointer of a linked list
 *
 * Return: number of nod
 */

size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
