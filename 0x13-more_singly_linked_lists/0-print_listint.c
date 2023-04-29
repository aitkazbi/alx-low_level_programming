#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint- Prints all the element of list
 * @h:singly linked list
 *
 *Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t el;

	el = 0;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		el++;
	}
	return (el);
}
